#include "./memory.h"


CRUX__ResultAddr CRUX__alloc_into (void *const context, const Size size) {
  CRUX__Trace trace = CRUX__trace_create();
  const void *address = talloc_zero_size(context, size);
  if (is_nil(address, void)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_MEMORY,
      .filepath = __FILE__,
      .line = CRUX__fault_line(-5)};
    const char info_fmt[] = "There is no %"SIZE_FMT" bytes available.";
    CRUX__fault_infoprintf(fault, info_fmt, size);
    CRUX__trace_push(&trace, fault);
  }
  CRUX__ResultAddr result = {.trace = trace, .value = address};
  return result;
}


CRUX__ResultAddr CRUX__alloc (const IU64 size) {
  void *const context = nil(void);
  CRUX__ResultAddr result = CRUX__alloc_into(context, size);
  return result;
}


CRUX__ResultAddr CRUX__alloc_context (void) {
  void *const context = nil(void);
  CRUX__ResultAddr result = CRUX__alloc_context_into(context);
  return result;
}


CRUX__ResultAddr CRUX__alloc_context_into (void *const context) {
  CRUX__Trace trace = CRUX__trace_create();
  void *const address = talloc_new(context);
  if (is_nil(address, void)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_MEMORY,
      .info = "There is no space available for new context",
      .filepath = __FILE__,
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  }
  CRUX__ResultAddr result = {.trace = trace, .value = address};
  return result;
}


CRUX__ResultSize CRUX__alloc_get_size (void *const context) {
  CRUX__Trace trace = CRUX__trace_create();
  const Size size = talloc_get_size(context);
  CRUX__ResultSize result = {.trace = trace, .value = size};
  return result;
}


CRUX__ResultSize CRUX__alloc_get_total_size (void *const context) {
  CRUX__Trace trace = CRUX__trace_create();
  const Size size = talloc_total_size(context);
  CRUX__ResultSize result = {.trace = trace, .value = size};
  return result;
}


CRUX__ResultAddr CRUX__alloc_move (void *const new_context, void **address) {
  CRUX__Trace trace = CRUX__trace_create();
  void *const new_address = talloc_move(new_context, address);
  CRUX__ResultAddr result = {.trace = trace, .value = new_address};
  return result;
}


CRUX__ResultVoid CRUX__alloc_free (void **context) {
  CRUX__Trace trace = CRUX__trace_create();
  if (is_nil(context, void)) {
    const CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .info = "Invalid nil argument value.",
      .filepath = __FILE__,
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else if (is_nil(*context, void)) {
    const CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .info = "It's not possible to free a nil context.",
      .filepath = __FILE__,
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 success = talloc_free(*context);
    if (CRUX__is_equal(success, as_is32(-1))) {
      const CRUX__Fault fault = {
        .error = CRUX__ERROR_MEMORY,
        .info = "This context is not valid or doesn't exists.",
        .filepath = __FILE__,
        .line = CRUX__fault_line(-6)};
      CRUX__trace_push(&trace, fault);
    } else {
      *context = nil(void);
    }
  }
  CRUX__ResultVoid result = {.trace = trace};
  return result;
}


void CRUX__alloc_quiet_free (void **context) {
  if (!is_nil(context, void)) {
    if (!is_nil(*context, void)) {
      talloc_free(*context);
      *context = nil(void);
    }
  }
}
