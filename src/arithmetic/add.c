#include "add.h"


#define __CRUX__add_info_fmt(a_fmt, b_fmt) "%" a_fmt " + %" b_fmt " causes overflow."




inline Bool CRUX__add_char_has_error (const Char a, const Char b) {
  Bool has_error = false;
  if (CRUX__is_char_signed()) {
    has_error = (Bool)(
      (CRUX__is_positive_char(b) && CRUX__is_greater_is08(a, CHAR_MAX - b))
      || (CRUX__is_negative_char(b) && CRUX__is_less_is08(a, CHAR_MIN - b)));
  } else {
    has_error = (Bool)((CHAR_MAX - a) < b);
  }
  return has_error;
}


inline Bool CRUX__add_size_has_error (const Size a, const Size b) {
  const Bool has_error = CRUX__is_less_size(SIZE_MAX - a, b);
  return has_error;
}


inline Bool CRUX__add_iu08_has_error (const IU08 a, const IU08 b) {
  const Bool has_error = CRUX__is_less_iu08(IU08_MAX - a, b);
  return has_error;
}


inline Bool CRUX__add_iu16_has_error (const IU16 a, const IU16 b) {
  const Bool has_error = CRUX__is_less_iu16(IU16_MAX - a, b);
  return has_error;
}


inline Bool CRUX__add_iu32_has_error (const IU32 a, const IU32 b) {
  const Bool has_error = CRUX__is_less_iu32(IU32_MAX - a, b);
  return has_error;
}

inline Bool CRUX__add_iu64_has_error (const IU64 a, const IU64 b) {
  const Bool has_error = CRUX__is_less_iu64(IU64_MAX - a, b);
  return has_error;
}


inline Bool CRUX__add_is08_has_error (const IS08 a, const IS08 b) {
  const Bool has_error = (Bool)(
    (CRUX__is_positive_is08(b) && CRUX__is_greater_is08(a, IS08_MAX - b))
    || (CRUX__is_negative_is08(b) && CRUX__is_less_is08(a, IS08_MIN - b)));
  return has_error;
}


inline Bool CRUX__add_is16_has_error (const IS16 a, const IS16 b) {
  const Bool has_error = (Bool)(
    (CRUX__is_positive_is16(b) && CRUX__is_greater_is16(a, IS16_MAX - b))
    || (CRUX__is_negative_is16(b) && CRUX__is_less_is16(a, IS16_MIN - b)));
  return has_error;
}


inline Bool CRUX__add_is32_has_error (const IS32 a, const IS32 b) {
  const Bool has_error = (Bool)(
    (CRUX__is_positive_is32(b) && CRUX__is_greater_is32(a, IS32_MAX - b))
    || (CRUX__is_negative_is32(b) && CRUX__is_less_is32(a, IS32_MIN - b)));
  return has_error;
}


inline Bool CRUX__add_is64_has_error (const IS64 a, const IS64 b) {
  const Bool has_error = (Bool)(
    (CRUX__is_positive_is64(b) && CRUX__is_greater_is64(a, IS64_MAX - b))
    || (CRUX__is_negative_is64(b) && CRUX__is_less_is64(a, IS64_MIN - b)));
  return has_error;
}




CRUX__ResultChar CRUX__add_char (const Char a, const Char b) {
  CRUX__Trace trace = CRUX__trace_create();
  Char addition = as_char(0);
  if (CRUX__add_char_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(CHAR_FMT, CHAR_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (Char)(a + b);
  }
  CRUX__ResultChar result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultSize CRUX__add_size (const Size a, const Size b) {
  CRUX__Trace trace = CRUX__trace_create();
  Size addition = as_size(0);
  if (CRUX__add_size_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(SIZE_FMT, SIZE_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (Size)(a + b);
  }
  CRUX__ResultSize result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU08 CRUX__add_iu08 (const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = as_iu08(0);
  if (CRUX__add_iu08_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IU08_FMT, IU08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IU08)(a + b);
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX__add_iu16 (const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = as_iu16(0);
  if (CRUX__add_iu16_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IU16_FMT, IU16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IU16)(a + b);
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX__add_iu32 (const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = as_iu32(0);
  if (CRUX__add_iu32_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IU32_FMT, IU32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IU32)(a + b);
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX__add_iu64 (const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = as_iu64(0);
  if (CRUX__add_iu64_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IU64_FMT, IU64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IU64)(a + b);
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS08 CRUX__add_is08 (const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = as_is08(0);
  if (CRUX__add_is08_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IS08_FMT, IS08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IS08)(a + b);
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS16 CRUX__add_is16 (const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = as_is16(0);
  if (CRUX__add_is16_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IS16_FMT, IS16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IS16)(a + b);
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX__add_is32 (const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = as_is32(0);
  if (CRUX__add_is32_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IS32_FMT, IS32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IS32)(a + b);
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX__add_is64 (const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = as_is64(0);
  if (CRUX__add_is64_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__add_info_fmt(IS64_FMT, IS64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = (IS64)(a + b);
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


#undef __CRUX__add_info_fmt
