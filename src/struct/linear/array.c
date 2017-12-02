#include "./array.h"


CRUX__ResultAddr CRUX__array_get(
    const CRUX__Array array,
    const IU16 index) {
  CRUX__Trace trace = CRUX__trace_create();
  void *element_addr = nil(void);
  if (index >= array.length) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .info = "Index out of the array bounds.",
      .filepath = __FILE__,
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const Size index_as_size = (Size) index;
    const Size element_offset = index_as_size * array.element_size;
    const uintptr_t addr_as_uint = (uintptr_t) array.addr;
    const uintptr_t element_addr_as_uint = addr_as_uint + element_offset;
    element_addr = (void *) element_addr_as_uint;
  }
  CRUX__ResultAddr result = {.trace = trace, .value = element_addr};
  return result;
}


CRUX__ResultVoid CRUX__array_put (
    const CRUX__Array array,
    const IU16 index,
    void *restrict const element_addr) {
  CRUX__Trace trace = CRUX__trace_create();
  if (CRUX__is_greater_equal(index, array.length)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .info = "Index out of the array bounds.",
      .filepath = __FILE__,
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const Size size_index = (Size) index;
    const Size element_offset = size_index * array.element_size;
    const uintptr_t uint_addr = (uintptr_t) array.addr;
    const uintptr_t uint_array_element_addr = uint_addr + element_offset;
    void *const array_element_addr = (void *) uint_array_element_addr;
    memcpy(array_element_addr, element_addr, array.element_size);
  }
  CRUX__ResultVoid result = {.trace = trace};
  return result;
}


IU16 CRUX__array_length(const CRUX__Array array) {
  return array.length;
}


Size CRUX__array_element_size(const CRUX__Array array) {
  return array.element_size;
}


void * CRUX__array_context(const CRUX__Array array) {
  return array.context;
}


CRUX__ResultArray CRUX__array_create(
    const IU16 length,
    const Size element_size) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Array array = CRUX__array_nil();
  CRUX__ResultArray array_result = CRUX__array_create_into(
    nil(void), length, element_size);
  if (!CRUX__trace_check(array_result.trace)) {
    CRUX__trace_move(&trace, &array_result.trace);
  } else {
    CRUX__trace_clean(&array_result.trace);
    array = array_result.value;
  }
  CRUX__ResultArray result = {.trace = trace, .value = array};
  return result;
}


CRUX__ResultArray CRUX__array_create_into(
    const void *const context,
    const IU16 length,
    const Size element_size) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Array array = CRUX__array_nil();
  if (!CRUX__is_in_range_size(length)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = "The length can not be greater than %"SIZE_FMT".";
    CRUX__fault_infoprintf(fault, fmt, SIZE_MAX);
    CRUX__trace_push(&trace, fault);
  } else {
    const Size length_as_size = (Size) length;
    if (CRUX__mul_has_error(length_as_size, element_size)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_VALUE,
        .filepath = __FILE__,
        .line = CRUX__fault_line(-6)};
      const Char fmt[] = 
        "The array size can not be greater than %"SIZE_FMT".";
      CRUX__fault_infoprintf(fault, fmt, SIZE_MAX);
      CRUX__trace_push(&trace, fault);
    } else {
      CRUX__ResultAddr context_result = CRUX__alloc_context_into(context);
      if (!CRUX__trace_check(context_result.trace)) {
        CRUX__trace_move(&trace, &context_result.trace);
        CRUX__Fault fault = {
          .error = CRUX__ERROR_STRUCTURE,
          .info = "It is not possible to create a context for the array.",
          .filepath = __FILE__,
          .line = CRUX__fault_line(-6)};
        CRUX__trace_push(&trace, fault);
      } else {
        CRUX__trace_clean(&context_result.trace);
        const void *const array_context = context_result.value;
        const Size array_size = length_as_size * element_size;
        CRUX__ResultAddr addr_result = CRUX__alloc_into(
          array_context, array_size);
        if (!CRUX__trace_check(addr_result.trace)) {
          CRUX__Fault fault = {
            .error = CRUX__ERROR_STRUCTURE,
            .filepath = __FILE__,
            .line = CRUX__fault_line(-6)};
          const Char fmt[] = 
            "There is no memory to create an array with size of %"SIZE_FMT".";
          CRUX__fault_infoprintf(fault, fmt, array_size);
          CRUX__trace_push(&trace, fault);
        } else {
          CRUX__trace_clean(&addr_result.trace);
          const void *const addr = addr_result.value;
          array.length = length;
          array.element_size = element_size;
          array.context = (void *) array_context;
          array.addr = (void *) addr;
        }
      }
    }
  }
  CRUX__ResultArray result = {.trace = trace, .value = array};
  return result;
}


void CRUX__array_clean (CRUX__Array *restrict const array) {
  if (!is_nil(array, CRUX__Array)) {
    if (!is_nil(array->context, void)) {
      CRUX__alloc_quiet_free(&array->context);
      *array = CRUX__array_nil();
    }
  }
}


CRUX__Array CRUX__array_nil () {
  CRUX__Array array_nil = {
    .length = CRUX__as_iu16(0),
    .element_size = CRUX__as_size(0),
    .context = nil(void),
    .addr = nil(void)};
  return array_nil;
}


CRUX__ResultIterator CRUX__array_iterator_create(const CRUX__Array array) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Iterator iterator = CRUX__iterator_nil();
  CRUX__ResultAddr context_result = CRUX__alloc_context();
  if (!CRUX__trace_check(context_result.trace)) {
    CRUX__trace_move(&trace, &context_result.trace);
    CRUX__Fault fault = {
      .error = CRUX__ERROR_STRUCTURE,
      .info = "It is not possible to create a context for the array.",
      .filepath = __FILE__,
      .line = CRUX__fault_line(-7)};
    CRUX__trace_push(&trace, fault);
  } else {
    CRUX__trace_clean(&context_result.trace);
    void *const context = (void *) context_result.value;
    CRUX__ResultAddr settings_addr_result = CRUX__alloc_into(
      context, sizeof(CRUX__ArrayIteratorSettings));
    if (!CRUX__trace_check(settings_addr_result.trace)) {
      CRUX__trace_move(&trace, &settings_addr_result.trace);
      CRUX__Fault fault = {
        .error = CRUX__ERROR_STRUCTURE,
        .info = "There is no memory to create an array iterator.",
        .filepath = __FILE__,
        .line = CRUX__fault_line(-8)};
      CRUX__trace_push(&trace, fault);
    } else {
      CRUX__trace_clean(&settings_addr_result.trace);
      CRUX__ArrayIteratorSettings *settings_addr = 
        (CRUX__ArrayIteratorSettings *) settings_addr_result.value;
      settings_addr->array = array;
      settings_addr->context = context;
      settings_addr->start = CRUX__as_iu16(0);
      settings_addr->end = array.length;
      settings_addr->current = CRUX__as_iu16(0);
      settings_addr->step = CRUX__as_iu16(1);
      iterator.settings = (void *) settings_addr;
      iterator.get = &CRUX__array_iterator_get;
      iterator.has_next = &CRUX__array_iterator_has_next;
      iterator.finalize = &CRUX__array_iterator_finalize;
    }
  }
  CRUX__ResultIterator result = {.trace = trace, .value = iterator};
  return result;
}


CRUX__Element CRUX__array_iterator_get(void *const settings) {
  CRUX__ArrayIteratorSettings *const tsettings =
    (CRUX__ArrayIteratorSettings *) settings;
  assert(CRUX__is_less(tsettings->current, tsettings->end));
  assert(CRUX__is_greater_equal(tsettings->current, tsettings->start));
  CRUX__ResultAddr element_result = CRUX__array_get(
    tsettings->array, tsettings->current);
  CRUX__trace_clean(&element_result.trace);
  tsettings->current = (IU16) tsettings->current + tsettings->step;
  const CRUX__Element element = {
    .addr = (void *) element_result.value,
    .size = tsettings->array.element_size};
  return element;
}


Bool CRUX__array_iterator_has_next(void *const settings) {
  CRUX__ArrayIteratorSettings *const tsettings =
    (CRUX__ArrayIteratorSettings *) settings;
  return CRUX__is_less(tsettings->current, tsettings->end);
}


void CRUX__array_iterator_finalize(void **settings) {
  CRUX__ArrayIteratorSettings tsettings =
    *((CRUX__ArrayIteratorSettings *) (*settings));
  CRUX__alloc_quiet_free(&tsettings.context);
  *settings = nil(void);
}


CRUX__ArrayIteratorSettings CRUX__array_iterator_nil (void) {
  CRUX__ArrayIteratorSettings array_iterator = {
    .context = nil(void),
    .start = CRUX__as_iu16(0),
    .end = CRUX__as_iu16(0),
    .step = CRUX__as_iu16(0),
    .current = CRUX__as_iu16(0),
    .array = CRUX__array_nil()};
  return array_iterator;
}
