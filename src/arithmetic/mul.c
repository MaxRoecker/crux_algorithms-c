#include "mul.h"


#define __CRUX__mul_info_fmt(a_fmt, b_fmt) "%" a_fmt " * %" b_fmt " causes overflow."




inline Bool CRUX__mul_char_has_error (const Char a, const Char b) {
  Bool has_error = false;
  if (CRUX__is_char_signed()) {
    const Bool positive_positive_error = (Bool)(
      CRUX__is_positive_char(a)
      && CRUX__is_positive_char(b)
      && CRUX__is_greater_char(a, IS08_MAX / b));
    const Bool positive_negative_error = (Bool)(
      CRUX__is_positive_char(a)
      && CRUX__is_negative_char(b)
      && CRUX__is_less_char(b, IS08_MIN / a));
    const Bool negative_positive_error = (Bool)(
      CRUX__is_negative_char(a)
      && CRUX__is_positive_char(b)
      && CRUX__is_less_char(a, IS08_MIN / b));
    const Bool negative_negative_error = (Bool)(
      CRUX__is_negative_char(a)
      && CRUX__is_negative_char(b)
      && CRUX__is_less_char(b, IS08_MAX / a));
    has_error = (Bool)(
      positive_positive_error
      || positive_negative_error
      || negative_positive_error
      || negative_negative_error);
  } else {
    has_error = (Bool)(
      !CRUX__is_zero_char(b) && CRUX__is_greater_char(a, CHAR_MAX / b));
  }
  return has_error;
}


inline Bool CRUX__mul_size_has_error (const Size a, const Size b) {
  const Bool has_error = (Bool)(
    !CRUX__is_zero_size(b) && CRUX__is_greater_size(a, SIZE_MAX / b));
  return has_error;
}


inline Bool CRUX__mul_iu08_has_error (const IU08 a, const IU08 b) {
  const Bool has_error = (Bool)(
    !CRUX__is_zero_iu08(b) && CRUX__is_greater_iu08(a, IU08_MAX / b));
  return has_error;
}


inline Bool CRUX__mul_iu16_has_error (const IU16 a, const IU16 b) {
  const Bool has_error = (Bool)(
    !CRUX__is_zero_iu16(b) && CRUX__is_greater_iu16(a, IU16_MAX / b));
  return has_error;
}


inline Bool CRUX__mul_iu32_has_error (const IU32 a, const IU32 b) {
  const Bool has_error = (Bool)(
    !CRUX__is_zero_iu32(b) && CRUX__is_greater_iu32(a, IU32_MAX / b));
  return has_error;
}

inline Bool CRUX__mul_iu64_has_error (const IU64 a, const IU64 b) {
  const Bool has_error = (Bool)(
    !CRUX__is_zero_iu64(b) && CRUX__is_greater_iu64(a, IU64_MAX / b));
  return has_error;
}


inline Bool CRUX__mul_is08_has_error (const IS08 a, const IS08 b) {
  const Bool positive_positive_error = (Bool)(
    CRUX__is_positive_is08(a)
    && CRUX__is_positive_is08(b)
    && CRUX__is_greater_is08(a, IS08_MAX / b));
  const Bool positive_negative_error = (Bool)(
    CRUX__is_positive_is08(a)
    && CRUX__is_negative_is08(b)
    && CRUX__is_less_is08(b, IS08_MIN / a));
  const Bool negative_positive_error = (Bool)(
    CRUX__is_negative_is08(a)
    && CRUX__is_positive_is08(b)
    && CRUX__is_less_is08(a, IS08_MIN / b));
  const Bool negative_negative_error = (Bool)(
    CRUX__is_negative_is08(a)
    && CRUX__is_negative_is08(b)
    && CRUX__is_less_is08(b, IS08_MAX / a));
  const Bool has_error = (Bool)(
    positive_positive_error
    || positive_negative_error
    || negative_positive_error
    || negative_negative_error);
  return has_error;
}


inline Bool CRUX__mul_is16_has_error (const IS16 a, const IS16 b) {
  const Bool positive_positive_error = (Bool)(
    CRUX__is_positive_is16(a)
    && CRUX__is_positive_is16(b)
    && CRUX__is_greater_is16(a, IS16_MAX / b));
  const Bool positive_negative_error = (Bool)(
    CRUX__is_positive_is16(a)
    && CRUX__is_negative_is16(b)
    && CRUX__is_less_is16(b, IS16_MIN / a));
  const Bool negative_positive_error = (Bool)(
    CRUX__is_negative_is16(a)
    && CRUX__is_positive_is16(b)
    && CRUX__is_less_is16(a, IS16_MIN / b));
  const Bool negative_negative_error = (Bool)(
    CRUX__is_negative_is16(a)
    && CRUX__is_negative_is16(b)
    && CRUX__is_less_is16(b, IS16_MAX / a));
  const Bool has_error = (Bool)(
    positive_positive_error
    || positive_negative_error
    || negative_positive_error
    || negative_negative_error);
  return has_error;
}


inline Bool CRUX__mul_is32_has_error (const IS32 a, const IS32 b) {
  const Bool positive_positive_error = (Bool)(
    CRUX__is_positive_is32(a)
    && CRUX__is_positive_is32(b)
    && CRUX__is_greater_is32(a, IS32_MAX / b));
  const Bool positive_negative_error = (Bool)(
    CRUX__is_positive_is32(a)
    && CRUX__is_negative_is32(b)
    && CRUX__is_less_is32(b, IS32_MIN / a));
  const Bool negative_positive_error = (Bool)(
    CRUX__is_negative_is32(a)
    && CRUX__is_positive_is32(b)
    && CRUX__is_less_is32(a, IS32_MIN / b));
  const Bool negative_negative_error = (Bool)(
    CRUX__is_negative_is32(a)
    && CRUX__is_negative_is32(b)
    && CRUX__is_less_is32(b, IS32_MAX / a));
  const Bool has_error = (Bool)(
    positive_positive_error
    || positive_negative_error
    || negative_positive_error
    || negative_negative_error);
  return has_error;
}


inline Bool CRUX__mul_is64_has_error (const IS64 a, const IS64 b) {
  const Bool positive_positive_error = (Bool)(
    CRUX__is_positive_is64(a)
    && CRUX__is_positive_is64(b)
    && CRUX__is_greater_is64(a, IS64_MAX / b));
  const Bool positive_negative_error = (Bool)(
    CRUX__is_positive_is64(a)
    && CRUX__is_negative_is64(b)
    && CRUX__is_less_is64(b, IS64_MIN / a));
  const Bool negative_positive_error = (Bool)(
    CRUX__is_negative_is64(a)
    && CRUX__is_positive_is64(b)
    && CRUX__is_less_is64(a, IS64_MIN / b));
  const Bool negative_negative_error = (Bool)(
    CRUX__is_negative_is64(a)
    && CRUX__is_negative_is64(b)
    && CRUX__is_less_is64(b, IS64_MAX / a));
  const Bool has_error = (Bool)(
    positive_positive_error
    || positive_negative_error
    || negative_positive_error
    || negative_negative_error);
  return has_error;
}




CRUX__ResultChar CRUX__mul_char (const Char a, const Char b) {
  CRUX__Trace trace = CRUX__trace_create();
  Char multiplication = as_char(0);
  if (CRUX__mul_char_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(CHAR_FMT, CHAR_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (Char)(a * b);
  }
  CRUX__ResultChar result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultSize CRUX__mul_size (const Size a, const Size b) {
  CRUX__Trace trace = CRUX__trace_create();
  Size multiplication = as_size(0);
  if (CRUX__mul_size_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(SIZE_FMT, SIZE_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (Size)(a * b);
  }
  CRUX__ResultSize result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU08 CRUX__mul_iu08 (const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 multiplication = as_iu08(0);
  if (CRUX__mul_iu08_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IU08_FMT, IU08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IU08)(a * b);
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_iu16 (const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = as_iu16(0);
  if (CRUX__mul_iu16_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IU16_FMT, IU16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IU16)(a * b);
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu32 (const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = as_iu32(0);
  if (CRUX__mul_iu32_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IU32_FMT, IU32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IU32)(a * b);
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64 (const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = as_iu64(0);
  if (CRUX__mul_iu64_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IU64_FMT, IU64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IU64)(a * b);
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS08 CRUX__mul_is08 (const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 multiplication = as_is08(0);
  if (CRUX__mul_is08_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IS08_FMT, IS08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IS08)(a * b);
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS16 CRUX__mul_is16 (const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 multiplication = as_is16(0);
  if (CRUX__mul_is16_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IS16_FMT, IS16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IS16)(a * b);
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is32 (const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = as_is32(0);
  if (CRUX__mul_is32_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IS32_FMT, IS32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IS32)(a * b);
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64 (const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = as_is64(0);
  if (CRUX__mul_is64_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__mul_info_fmt(IS64_FMT, IS64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = (IS64)(a * b);
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


#undef __CRUX__mul_info_fmt
