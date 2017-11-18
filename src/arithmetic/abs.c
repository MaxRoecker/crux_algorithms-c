#include "./abs.h"


#define CRUX_ARITH__info(fmt, type) "The absolute of %" fmt " can't be represented as " type "."




CRUX__ResultIU08 CRUX_ARITH__abs_iu08 (const IU08 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 abs_value = value;
  CRUX__ResultIU08 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__abs_iu16 (const IU16 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 abs_value = value;
  CRUX__ResultIU16 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__abs_iu32 (const IU32 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 abs_value = value;
  CRUX__ResultIU32 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__abs_iu64 (const IU64 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 abs_value = value;
  CRUX__ResultIU64 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS08 CRUX_ARITH__abs_is08 (const IS08 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 abs_value = CRUX__as_is08(0);
  if (value == IS08_MIN) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info(IS08_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS08) abs(value);
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS16 CRUX_ARITH__abs_is16 (const IS16 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 abs_value = CRUX__as_is16(0);
  if (value == IS16_MIN) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info(IS16_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS16) abs(value);
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__abs_is32 (const IS32 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 abs_value = CRUX__as_is32(0);
  if (value == IS32_MIN) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info(IS32_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS32) labs(value);
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__abs_is64 (const IS64 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 abs_value = CRUX__as_is64(0);
  if (value == IS64_MIN) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info(IS64_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS64) llabs(value);
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultSize CRUX_ARITH__abs_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size abs_value = value;
  CRUX__ResultSize result = {.trace = trace, .value = abs_value};
  return result;
}




#undef CRUX_ARITH__info
