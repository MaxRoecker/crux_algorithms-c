#include "./memory.h"


CRUX__ResultAddr CRUX__alloc_into (const void *context, const Size size) {
  const CRUX__Exception *exceptions = NULL;
  const void *address = talloc_zero_size(context, size);
  if (address == NULL) {
    CRUX__Exception exception = {
      .error = CRUX__ERROR_MEMORY,
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) - CRUX__as_iu32(5))};
    const char info_fmt[] = "There is no %"SIZE_FMT" bytes available.";
    CRUX__exception_infoprintf(exception, info_fmt, size);
    CRUX__exceptions_push(&exceptions, exception);
  }
  CRUX__ResultAddr result = {.expts = exceptions, .value = address};
  return result;
}


CRUX__ResultAddr CRUX__alloc (const IU64 size) {
  const void *context = NULL;
  CRUX__ResultAddr result = CRUX__alloc_into(context, size);
  return result;
}


CRUX__ResultAddr CRUX__alloc_context () {
  const void *context = NULL;
  CRUX__ResultAddr result = CRUX__alloc_context_into(context);
  return result;
}


CRUX__ResultAddr CRUX__alloc_context_into (const void *context) {
  const CRUX__Exception *exceptions = NULL;
  const void *address = talloc_new(context);
  if (address == NULL) {
    CRUX__Exception exception = {
      .error = CRUX__ERROR_MEMORY,
      .info = "There is no space available for new context",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) - CRUX__as_iu32(5))};
    CRUX__exceptions_push(&exceptions, exception);
  }
  CRUX__ResultAddr result = {.expts = exceptions, .value = address};
  return result;
}


CRUX__ResultSize CRUX__alloc_get_size (const void *context) {
  const CRUX__Exception *exceptions = NULL;
  const Size size = talloc_get_size(context);
  CRUX__ResultSize result = {.expts = exceptions, .value = size};
  return result;
}


CRUX__ResultSize CRUX__alloc_get_total_size (const void *context) {
  const CRUX__Exception *exceptions = NULL;
  const Size size = talloc_total_size(context);
  CRUX__ResultSize result = {.expts = exceptions, .value = size};
  return result;
}


CRUX__ResultAddr CRUX__alloc_move (const void *new_context, void **address) {
  const CRUX__Exception *exceptions = NULL;
  const void *new_address = talloc_move(new_context, address);
  CRUX__ResultAddr result = {.expts = exceptions, .value = new_address};
  return result;
}


CRUX__ResultVoid CRUX__alloc_free (void **context) {
  const CRUX__Exception *exceptions = NULL;
  if (context == NULL) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Invalid NULL argument value.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) - CRUX__as_iu32(5))};
    CRUX__exceptions_push(&exceptions, exception);
  } else if (*context == NULL) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "It's not possible to free a NULL context.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) - CRUX__as_iu32(5))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    const IS32 success = talloc_free(*context);
    if (success == CRUX__as_is32(-1)) {
      const CRUX__Exception exception = {
        .error = CRUX__ERROR_MEMORY,
        .info = "This context is not valid or doesn't exists.",
        .filepath = __FILE__,
        .line = (((IU32) __LINE__) - CRUX__as_iu32(6))};
      CRUX__exceptions_push(&exceptions, exception);
    } else {
      *context = NULL;
    }
  }
  CRUX__ResultVoid result = {.expts = exceptions};
  return result;
}
