#include "./cast.h"


#define CRUX__info(fmt, type) "Cast %" fmt " to " type " result in lost or misinterpreted data." 


CRUX__ResultIU08 CRUX__cast_iu08_iu16 (const IU16 value) {
  IU08 casted = as_iu08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU16_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_iu32 (const IU32 value) {
  IU08 casted = as_iu08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU32_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_iu64 (const IU64 value) {
  IU08 casted = as_iu08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is08 (const IS08 value) {
  IU08 casted = as_iu08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS08_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is16 (const IS16 value) {
  IU08 casted = as_iu08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS16_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is32 (const IS32 value) {
  IU08 casted = as_iu08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS32_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is64 (const IS64 value) {
  IU08 casted = as_iu08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu08 (const IU08 value) {
  IU16 casted = as_iu16(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IU16) value;
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu32 (const IU32 value) {
  IU16 casted = as_iu16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU32_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu64 (const IU64 value) {
  IU16 casted = as_iu16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is08 (const IS08 value) {
  IU16 casted = as_iu16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is16 (const IS16 value) {
  IU16 casted = as_iu16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS16_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is32 (const IS32 value) {
  IU16 casted = as_iu16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS32_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is64 (const IS64 value) {
  IU16 casted = as_iu16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu08 (const IU08 value) {
  IU32 casted = as_iu32(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IU32) value;
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu16 (const IU16 value) {
  IU32 casted = as_iu32(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IU32) value;
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu64 (const IU64 value) {
  IU32 casted = as_iu32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is08 (const IS08 value) {
  IU32 casted = as_iu32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is16 (const IS16 value) {
  IU32 casted = as_iu32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is32 (const IS32 value) {
  IU32 casted = as_iu32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS32_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is64 (const IS64 value) {
  IU32 casted = as_iu32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu08 (const IU08 value) {
  IU64 casted = as_iu64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu16 (const IU16 value) {
  IU64 casted = as_iu64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu32 (const IU32 value) {
  IU64 casted = as_iu64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is08 (const IS08 value) {
  IU64 casted = as_iu64(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu64(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is16 (const IS16 value) {
  IU64 casted = as_iu64(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu64(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is32 (const IS32 value) {
  IU64 casted = as_iu64(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu64(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is64 (const IS64 value) {
  IU64 casted = as_iu64(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_iu64(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu08 (const IU08 value) {
  IS08 casted = as_is08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU08_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu16 (const IU16 value) {
  IS08 casted = as_is08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU16_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu32 (const IU32 value) {
  IS08 casted = as_is08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU32_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu64 (const IU64 value) {
  IS08 casted = as_is08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is16 (const IS16 value) {
  IS08 casted = as_is08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS16_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is32 (const IS32 value) {
  IS08 casted = as_is08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS32_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is64 (const IS64 value) {
  IS08 casted = as_is08(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is08(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu08 (const IU08 value) {
  IS16 casted = as_is16(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS16) value;
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu16 (const IU16 value) {
  IS16 casted = as_is16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU16_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu32 (const IU32 value) {
  IS16 casted = as_is16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU32_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu64 (const IU64 value) {
  IS16 casted = as_is16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is08 (const IS08 value) {
  IS16 casted = as_is16(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS16) value;
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is32 (const IS32 value) {
  IS16 casted = as_is16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS32_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is64 (const IS64 value) {
  IS16 casted = as_is16(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is16(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu08 (const IU08 value) {
  IS32 casted = as_is32(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu16 (const IU16 value) {
  IS32 casted = as_is32(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu32 (const IU32 value) {
  IS32 casted = as_is32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU32_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu64 (const IU64 value) {
  IS32 casted = as_is32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is08 (const IS08 value) {
  IS32 casted = as_is32(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is16 (const IS16 value) {
  IS32 casted = as_is32(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is64 (const IS64 value) {
  IS32 casted = as_is32(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is32(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu08 (const IU08 value) {
  IS64 casted = as_is64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu16 (const IU16 value) {
  IS64 casted = as_is64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu32 (const IU32 value) {
  IS64 casted = as_is64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu64 (const IU64 value) {
  IS64 casted = as_is64(0);
  CRUX__Trace trace = CRUX__trace_create();
  if (!CRUX__is_in_range_is64(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS64) value;
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is08 (const IS08 value) {
  IS64 casted = as_is64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is16 (const IS16 value) {
  IS64 casted = as_is64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is32 (const IS32 value) {
  IS64 casted = as_is64(0);
  CRUX__Trace trace = CRUX__trace_create();
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 casted = as_iu08(0);
  const Bool is_above =
    CRUX__is_less(IU08_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IU08_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 casted = as_iu16(0);
  const Bool is_above =
    CRUX__is_less(IU16_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IU16_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 casted = as_iu32(0);
  const Bool is_above =
    CRUX__is_less(IU32_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IU32_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 casted = as_iu64(0);
  const Bool is_above =
    CRUX__is_less(IU64_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IU64_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 casted = as_is08(0);
  const Bool is_above =
    CRUX__is_less(IS08_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IS08_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IS08");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 casted = as_is16(0);
  const Bool is_above =
    CRUX__is_less(IS16_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IS16_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 casted = as_is32(0);
  const Bool is_above =
    CRUX__is_less(IS32_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IS32_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_size (const Size value) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 casted = as_is64(0);
  const Bool is_above =
    CRUX__is_less(IS64_INT_PRECISION, SIZE_INT_PRECISION)
    && CRUX__is_greater(value, ((Size) IS64_MAX));
  if (is_above) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(SIZE_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (IS64) value;
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_iu08 (const IU08 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU08_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_iu16 (const IU16 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU16_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_iu32 (const IU32 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU32_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_iu64 (const IU64 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IU64_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_is08 (const IS08 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS08_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_is16 (const IS16 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS16_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_is32 (const IS32 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS32_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}


CRUX__ResultSize CRUX__cast_size_is64 (const IS64 value) {
  CRUX__Trace trace = CRUX__trace_create();
  Size casted = 0;
  if (CRUX__is_in_range_size(value)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(5)};
    const Char fmt[] = CRUX__info(IS64_FMT, "Size");
    CRUX__fault_infoprintf(fault, fmt, value);
    CRUX__trace_push(&trace, fault);
  } else {
    casted = (Size) value;
  }
  CRUX__ResultSize result = {.trace = trace, .value = casted};
  return result;
}




#undef CRUX__info
