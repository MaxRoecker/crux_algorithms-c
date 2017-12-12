#include "./array.h"


CRUX__ResultElement CRUX__array_get(
    const CRUX__Array array,
    const IU16 index) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Element element = CRUX__element_nil();
  if (index >= array.length) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .info = "Index out of the array bounds.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const Size index_as_size = (Size) index;
    const Size element_offset = index_as_size * array.element_size;
    const uintptr_t addr_as_uint = (uintptr_t) array.addr;
    const uintptr_t element_addr_as_uint = addr_as_uint + element_offset;
    element.size = array.element_size;
    element.addr = (void *) element_addr_as_uint;
  }
  CRUX__ResultElement result = {.trace = trace, .value = element};
  return result;
}


CRUX__ResultElement CRUX__array_put (
    const CRUX__Array array,
    const IU16 index,
    void *restrict const element_addr) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Element element = CRUX__element_nil();
  if (CRUX__is_greater_equal(index, array.length)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .info = "Index out of the array bounds.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const Size size_index = (Size) index;
    const Size element_offset = size_index * array.element_size;
    const uintptr_t uint_addr = (uintptr_t) array.addr;
    const uintptr_t uint_array_element_addr = uint_addr + element_offset;
    void *const array_element_addr = (void *) uint_array_element_addr;
    memcpy(array_element_addr, element_addr, array.element_size);
    element.size = array.element_size;
    element.addr = array_element_addr;
  }
  CRUX__ResultElement result = {.trace = trace, .value = element};
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


CRUX__ResultArray CRUX__array_create_into (
    void *const context,
    const IU16 length,
    const Size element_size) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Array array = CRUX__array_nil();
  if (!CRUX__is_in_range_size(length)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = "The length can not be greater than %"SIZE_FMT".";
    CRUX__fault_infoprintf(fault, fmt, SIZE_MAX);
    CRUX__trace_push(&trace, fault);
  } else {
    const Size length_as_size = (Size) length;
    if (CRUX__mul_has_error(length_as_size, element_size)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_VALUE,
        .filepath = CRUX__fault_filepath(),
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
          .filepath = CRUX__fault_filepath(),
          .line = CRUX__fault_line(-6)};
        CRUX__trace_push(&trace, fault);
      } else {
        CRUX__trace_clean(&context_result.trace);
        void *const array_context = (void *) context_result.value;
        const Size array_size = length_as_size * element_size;
        CRUX__ResultAddr addr_result = CRUX__alloc_into(
          array_context, array_size);
        if (!CRUX__trace_check(addr_result.trace)) {
          CRUX__Fault fault = {
            .error = CRUX__ERROR_STRUCTURE,
            .filepath = CRUX__fault_filepath(),
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
    .length = as_iu16(0),
    .element_size = as_size(0),
    .context = nil(void),
    .addr = nil(void)};
  return array_nil;
}


CRUX__ResultIterator CRUX__array_iterator_create_with (
    void *const context,
    const CRUX__Array array,
    const IU16 start,
    const IU16 end,
    const IU16 step) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__Iterator iterator = CRUX__iterator_nil();
  if (CRUX__is_equal(step, as_iu16(0))) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .info = "The step can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 length = (start > end) ?
      ((IU16) (start - end)) : ((IU16) (end - start));
    if (CRUX__is_greater_equal(length, array.length)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_VALUE,
        .info = "The diff of start and end must be less than array length.",
        .filepath = CRUX__fault_filepath(),
        .line = CRUX__fault_line(-6)};
      CRUX__trace_push(&trace, fault);
    } else {
      CRUX__ResultAddr state_addr_result = CRUX__alloc_into(
        context, sizeof(CRUX__ArrayIterState));
      if (!CRUX__trace_check(state_addr_result.trace)) {
        CRUX__trace_move(&trace, &state_addr_result.trace);
        CRUX__Fault fault = {
          .error = CRUX__ERROR_STRUCTURE,
          .info = "It is not possible to create the iterator state.",
          .filepath = CRUX__fault_filepath(),
          .line = CRUX__fault_line(-8)};
        CRUX__trace_push(&trace, fault);
      } else {
        CRUX__trace_clean(&state_addr_result.trace);
        CRUX__ArrayIterState *const state_addr = 
          (CRUX__ArrayIterState *) state_addr_result.value;
        void *const array_context = (void *) state_addr_result.value;
        const Bool inverse = (start > end) ? true : false;
        const IU16 real_end = CRUX__iterator_real_end(start, end, step);
        const IU16 last = IU16_MAX;
        state_addr->context = array_context;
        state_addr->inverse = inverse;
        state_addr->start = start;
        state_addr->end = real_end;
        state_addr->step = step;
        state_addr->last = last;
        state_addr->array = array;
        iterator.state = (void *) state_addr;
        iterator.get = &CRUX__array_iterator_get;
        iterator.has_next = &CRUX__array_iterator_has_next;
        iterator.finalize = &CRUX__array_iterator_finalize;
      }
    }
  }
  CRUX__ResultIterator result = {.trace = trace, .value = iterator};
  return result;
}


CRUX__Element CRUX__array_iterator_get(void *const iterator_state) {
  assert(!is_nil(iterator_state, void));
  CRUX__ArrayIterState *const state =
    ((CRUX__ArrayIterState *) iterator_state);
  const Bool inverse = state->inverse; 
  const IU16 start = state->start;
  const IU16 end = state->end;
  const IU16 step = state->step;
  const IU16 last = state->last;
  const CRUX__Array array = state->array;
  IU16 current = as_iu16(0);
  if (inverse) {
    current = (is_max(last)) ? start : ((IU16) last - step);
    assert(CRUX__is_less_equal(current, start));
    assert(CRUX__is_greater_equal(current, end));
  } else {
    current = (is_max(last)) ? start : ((IU16) last + step);
    assert(CRUX__is_greater_equal(current, start));
    assert(CRUX__is_less_equal(current, end));
  }
  CRUX__ResultElement element_result = CRUX__array_get(array, current);
  assert(CRUX__trace_check(element_result.trace));
  CRUX__trace_clean(&element_result.trace);
  state->last = current;
  CRUX__Element element = element_result.value;
  return element;
}


CRUX__ResultIterator CRUX__array_iterator_create_at (
    const CRUX__Array array,
    const IU16 start,
    const IU16 end) {
  void *const context = nil(void);
  const IU16 step = as_iu16(1);
  return CRUX__array_iterator_create_with(context, array, start, end, step);
}


CRUX__ResultIterator CRUX__array_iterator_create (
    const CRUX__Array array) {
  void *const context = nil(void);
  const IU16 start = as_iu16(0);
  const IU16 end = (IU16) (array.length - as_iu16(1));
  const IU16 step = as_iu16(1);
  return CRUX__array_iterator_create_with(context, array, start, end, step);
}


Bool CRUX__array_iterator_has_next(void *const iterator_state) {
  assert(!is_nil(iterator_state, void));
  CRUX__ArrayIterState *const state =
    (CRUX__ArrayIterState *) iterator_state;
  return !CRUX__is_equal(state->last, state->end);
}


void CRUX__array_iterator_finalize(void **iterator_state) {
  assert(!is_nil(iterator_state, void *));
  assert(!is_nil(*iterator_state, void));
  CRUX__ArrayIterState state = *((CRUX__ArrayIterState *) (*iterator_state));
  CRUX__alloc_quiet_free(&state.context);
  *iterator_state = nil(void);
}


CRUX__ArrayIterState CRUX__array_iterator_nil (void) {
  CRUX__ArrayIterState array_iterator = {
    .context = nil(void),
    .inverse = false,
    .start = as_iu16(0),
    .end = as_iu16(0),
    .step = as_iu16(0),
    .last = IU16_MAX,
    .array = CRUX__array_nil()};
  return array_iterator;
}
