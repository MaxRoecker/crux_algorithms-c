#include "./abs.h"


CRUX__ResultIU08 CRUX_MATH__abs_iu08 (const IU08 value) {
  const CRUX__Exception *exceptions = NULL;
  IU08 abs_value = value;
  CRUX__ResultIU08 result = {.expts = exceptions, .value = abs_value};
  return result;
}

CRUX__ResultIU16 CRUX_MATH__abs_iu16 (const IU16 value) {
  const CRUX__Exception *exceptions = NULL;
  IU16 abs_value = value;
  CRUX__ResultIU16 result = {.expts = exceptions, .value = abs_value};
  return result;
}

CRUX__ResultIU32 CRUX_MATH__abs_iu32 (const IU32 value) {
  const CRUX__Exception *exceptions = NULL;
  IU32 abs_value = value;
  CRUX__ResultIU32 result = {.expts = exceptions, .value = abs_value};
  return result;
}

CRUX__ResultIU64 CRUX_MATH__abs_iu64 (const IU64 value) {
  const CRUX__Exception *exceptions = NULL;
  IU64 abs_value = value;
  CRUX__ResultIU64 result = {.expts = exceptions, .value = abs_value};
  return result;
}

CRUX__ResultIS08 CRUX_MATH__abs_is08 (const IS08 value) {
  const CRUX__Exception *exceptions = NULL;
  IS08 abs_value = CRUX__as_is08(0);
  if (value == IS08_MIN) {
    CRUX__Exception exception = {
      .error = CRUX_MATH__ERROR_OVERFLOW,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(6)};
    const Char info_fmt[] = 
      "The absolute of %"IS08_FMT" can't be represented in IS08 type.";
    snprintf(exception.info, CRUX__EXCEPTION_INFO_SIZE, info_fmt, value);
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    abs_value = (IS08) abs(value);
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = abs_value};
  return result;
}

CRUX__ResultIS16 CRUX_MATH__abs_is16 (const IS16 value) {
  const CRUX__Exception *exceptions = NULL;
  IS16 abs_value = CRUX__as_is16(0);
  if (value == IS16_MIN) {
    CRUX__Exception exception = {
      .error = CRUX_MATH__ERROR_OVERFLOW,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(6)};
    const Char info_fmt[] = 
      "The absolute of %"IS16_FMT" can't be represented in IS16 type.";
    snprintf(exception.info, CRUX__EXCEPTION_INFO_SIZE, info_fmt, value);
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    abs_value = (IS16) abs(value);
  }
  CRUX__ResultIS16 result = {.expts = exceptions, .value = abs_value};
  return result;
}

CRUX__ResultIS32 CRUX_MATH__abs_is32 (const IS32 value) {
  const CRUX__Exception *exceptions = NULL;
  IS32 abs_value = CRUX__as_is32(0);
  if (value == IS32_MIN) {
    CRUX__Exception exception = {
      .error = CRUX_MATH__ERROR_OVERFLOW,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(6)};
    const Char info_fmt[] = 
      "The absolute of %"IS32_FMT" can't be represented in IS32 type.";
    snprintf(exception.info, CRUX__EXCEPTION_INFO_SIZE, info_fmt, value);
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    abs_value = (IS32) labs(value);
  }
  CRUX__ResultIS32 result = {.expts = exceptions, .value = abs_value};
  return result;
}

CRUX__ResultIS64 CRUX_MATH__abs_is64 (const IS64 value) {
  const CRUX__Exception *exceptions = NULL;
  IS64 abs_value = CRUX__as_is64(0);
  if (value == IS64_MIN) {
    CRUX__Exception exception = {
      .error = CRUX_MATH__ERROR_OVERFLOW,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(6)};
    const Char info_fmt[] = 
      "The absolute of %"IS64_FMT" can't be represented in IS64 type.";
    snprintf(exception.info, CRUX__EXCEPTION_INFO_SIZE, info_fmt, value);
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    abs_value = (IS64) llabs(value);
  }
  CRUX__ResultIS64 result = {.expts = exceptions, .value = abs_value};
  return result;
}
