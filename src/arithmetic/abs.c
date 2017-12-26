#include "./abs.h"


#define __CRUX__info(fmt, type) "The absolute of %" fmt " can't be represented as " type "."



inline Bool CRUX__abs_char_has_error (const Char value) {
  const Bool has_error = CRUX__is_char_signed()
    ? CRUX__is_equal_is08(value, CHAR_MIN) : false;
  return has_error;
}


inline Bool CRUX__abs_size_has_error (const Size value) {
  const Bool has_error = false;
  return has_error;
}


inline Bool CRUX__abs_iu08_has_error (const IU08 value) {
  const Bool has_error = false;
  return has_error;
}


inline Bool CRUX__abs_iu16_has_error (const IU16 value) {
  const Bool has_error = false;
  return has_error;
}


inline Bool CRUX__abs_iu32_has_error (const IU32 value) {
  const Bool has_error = false;
  return has_error;
}


inline Bool CRUX__abs_iu64_has_error (const IU64 value) {
  const Bool has_error = false;
  return has_error;
}


inline Bool CRUX__abs_is08_has_error (const IS08 value) {
  const Bool has_error = CRUX__is_equal_is08(value, IS08_MIN);
  return has_error;
}


inline Bool CRUX__abs_is16_has_error (const IS16 value) {
  const Bool has_error = CRUX__is_equal_is16(value, IS16_MIN);
  return has_error;
}


inline Bool CRUX__abs_is32_has_error (const IS32 value) {
  const Bool has_error = CRUX__is_equal_is32(value, IS32_MIN);
  return has_error;
}


inline Bool CRUX__abs_is64_has_error (const IS64 value) {
  const Bool has_error = CRUX__is_equal_is64(value, IS64_MIN);
  return has_error;
}





CRUX__ResultChar CRUX__abs_char (const Char value) {
  CRUX__Trace trace = CRUX__trace_create();
  Char abs_value = as_is08(0);
  if (CRUX__abs_char_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info("d", "Char");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = CRUX__is_char_signed() ? (Char)(abs(value)) : (Char)(value);
  }
  CRUX__ResultChar result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultSize CRUX__abs_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size abs_value = as_size(0);
  if (CRUX__abs_size_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(SIZE_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (Size)(value);
  }
  CRUX__ResultSize result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIU08 CRUX__abs_iu08 (const IU08 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 abs_value = as_iu08(0);
  if (CRUX__abs_iu08_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IU08_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IU08)(value);
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIU16 CRUX__abs_iu16 (const IU16 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 abs_value = as_iu16(0);
  if (CRUX__abs_iu16_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IU16_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IU16)(value);
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIU32 CRUX__abs_iu32 (const IU32 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 abs_value = as_iu32(0);
  if (CRUX__abs_iu32_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IU32_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IU32)(value);
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIU64 CRUX__abs_iu64 (const IU64 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 abs_value = as_iu64(0);
  if (CRUX__abs_iu64_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IU64_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IU64)(value);
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS08 CRUX__abs_is08 (const IS08 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 abs_value = as_is08(0);
  if (CRUX__abs_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IS08_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS08) abs(value);
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS16 CRUX__abs_is16 (const IS16 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 abs_value = as_is16(0);
  if (CRUX__abs_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IS16_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS16) abs(value);
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS32 CRUX__abs_is32 (const IS32 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 abs_value = as_is32(0);
  if (CRUX__abs_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IS32_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS32) labs(value);
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = abs_value};
  return result;
}


CRUX__ResultIS64 CRUX__abs_is64 (const IS64 value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 abs_value = as_is64(0);
  if (CRUX__abs_has_error(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-6)};
    const Char fmt[] = __CRUX__info(IS64_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    abs_value = (IS64) llabs(value);
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = abs_value};
  return result;
}




#undef __CRUX__info
