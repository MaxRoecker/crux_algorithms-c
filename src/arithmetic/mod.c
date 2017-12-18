#include "./mod.h"


#define __CRUX__info_mod(a_fmt, b_fmt) "The modulo of %" a_fmt " by %" b_fmt " is invalid or causes overflow."


CRUX__ResultIU08 CRUX__mod_iu08 (const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 modulo = as_iu08(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IU08_FMT, IU08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    modulo = (IU08)(a % b);
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = modulo};
  return result;
}


CRUX__ResultIU16 CRUX__mod_iu16 (const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 modulo = as_iu16(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IU16_FMT, IU16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    modulo = (IU16)(a % b);
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = modulo};
  return result;
}


CRUX__ResultIU32 CRUX__mod_iu32 (const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 modulo = as_iu32(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IU32_FMT, IU32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    modulo = (IU32)(a % b);
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = modulo};
  return result;
}


CRUX__ResultIU64 CRUX__mod_iu64 (const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 modulo = as_iu64(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IU64_FMT, IU64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    modulo = (IU64)(a % b);
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = modulo};
  return result;
}


CRUX__ResultIS08 CRUX__mod_is08 (const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 modulo = as_is08(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IS08_FMT, IS08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS08 rem = (IS08)(a % b);
    modulo = CRUX__is_negative(rem) ? (rem + b) : rem;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = modulo};
  return result;
}


CRUX__ResultIS16 CRUX__mod_is16 (const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 modulo = as_is16(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IS16_FMT, IS16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 rem = (IS16)(a % b);
    modulo = CRUX__is_negative(rem) ? (rem + b) : rem;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = modulo};
  return result;
}


CRUX__ResultIS32 CRUX__mod_is32 (const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 modulo = as_is32(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IS32_FMT, IS32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 rem = (IS32)(a % b);
    modulo = CRUX__is_negative(rem) ? (rem + b) : rem;
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = modulo};
  return result;
}


CRUX__ResultIS64 CRUX__mod_is64 (const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 modulo = as_is64(0);
  if (CRUX__mod_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = __CRUX__info_mod(IS64_FMT, IS64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 rem = (IS64)(a % b);
    modulo = CRUX__is_negative(rem) ? (rem + b) : rem;
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = modulo};
  return result;
}




#undef __CRUX__info_mod
