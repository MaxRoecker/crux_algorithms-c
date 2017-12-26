#include "div.h"


#define __CRUX__div_info_fmt(a_fmt, b_fmt) "The division of %" a_fmt " by %" b_fmt " is invalid or causes overflow."




inline Bool CRUX__div_char_has_error (const Char a, const Char b) {
  Bool has_error = false;
  if (CRUX__is_char_signed()) {
    has_error = (Bool)(
      CRUX__is_zero(b) || (is_min(a) && (b == as_char(-1))));
  } else {
    has_error = (Bool)(CRUX__is_zero(b));
  }
  return has_error;
}


inline Bool CRUX__div_size_has_error (const Size a, const Size b) {
  const Bool has_error = (Bool)(CRUX__is_zero(b));
  return has_error;
}


inline Bool CRUX__div_iu08_has_error (const IU08 a, const IU08 b) {
  const Bool has_error = (Bool)(CRUX__is_zero(b));
  return has_error;
}


inline Bool CRUX__div_iu16_has_error (const IU16 a, const IU16 b) {
  const Bool has_error = (Bool)(CRUX__is_zero(b));
  return has_error;
}


inline Bool CRUX__div_iu32_has_error (const IU32 a, const IU32 b) {
  const Bool has_error = (Bool)(CRUX__is_zero(b));
  return has_error;
}


inline Bool CRUX__div_iu64_has_error (const IU64 a, const IU64 b) {
  const Bool has_error = (Bool)(CRUX__is_zero(b));
  return has_error;
}


inline Bool CRUX__div_is08_has_error (const IS08 a, const IS08 b) {
  const Bool has_error = (Bool)(
    CRUX__is_zero(b) || (is_min(a) && (b == as_is08(-1))));
  return has_error;
}


inline Bool CRUX__div_is16_has_error (const IS16 a, const IS16 b) {
  const Bool has_error = (Bool)(
    CRUX__is_zero(b) || (is_min(a) && (b == as_is16(-1))));
  return has_error;
}


inline Bool CRUX__div_is32_has_error (const IS32 a, const IS32 b) {
  const Bool has_error = (Bool)(
    CRUX__is_zero(b) || (is_min(a) && (b == as_is32(-1))));
  return has_error;
}


inline Bool CRUX__div_is64_has_error (const IS64 a, const IS64 b) {
  const Bool has_error = (Bool)(
    CRUX__is_zero(b) || (is_min(a) && (b == as_is64(-1))));
  return has_error;
}




CRUX__ResultDivChar CRUX__div_char (const Char a, const Char b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivChar division = {.quo = as_char(0), .rem = as_char(0)};
  if (CRUX__div_char_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(CHAR_FMT, CHAR_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivChar result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivSize CRUX__div_size (const Size a, const Size b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivSize division = {.quo = as_size(0), .rem = as_size(0)};
  if (CRUX__div_size_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(SIZE_FMT, SIZE_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivSize result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU08 CRUX__div_iu08 (const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU08 division = {.quo = as_iu08(0), .rem = as_iu08(0)};
  if (CRUX__div_iu08_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IU08_FMT, IU08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU08 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX__div_iu16 (const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = as_iu16(0), .rem = as_iu16(0)};
  if (CRUX__div_iu16_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IU16_FMT, IU16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX__div_iu32 (const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = as_iu32(0), .rem = as_iu32(0)};
  if (CRUX__div_iu32_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IU32_FMT, IU32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX__div_iu64 (const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = as_iu64(0), .rem = as_iu64(0)};
  if (CRUX__div_iu64_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IU64_FMT, IU64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS08 CRUX__div_is08 (const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS08 division = {.quo = as_is08(0), .rem = as_is08(0)};
  if (CRUX__div_is08_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IS08_FMT, IS08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS08 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS16 CRUX__div_is16 (const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS16 division = {.quo = as_is16(0), .rem = as_is16(0)};
  if (CRUX__div_is16_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IS16_FMT, IS16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX__div_is32 (const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = as_is32(0), .rem = as_is32(0)};
  if (CRUX__div_is32_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IS32_FMT, IS32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX__div_is64 (const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = as_is64(0), .rem = as_is64(0)};
  if (CRUX__div_is64_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__div_info_fmt(IS64_FMT, IS64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}




#undef __CRUX__div_info_fmt
