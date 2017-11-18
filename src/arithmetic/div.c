#include "div.h"


#define CRUX_ARITH__info_promo(fmt, type) "It's not possible promote %" fmt " into a " type "."
#define CRUX_ARITH__info_division(a_fmt, b_fmt) "The division of %" a_fmt " by %" b_fmt " is invalid or causes overflow."




CRUX__ResultDivIU08 CRUX_ARITH__div_iu08_iu08 (
    const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU08 division = {.quo = CRUX__as_iu08(0), .rem = CRUX__as_iu08(0)};
  const Bool has_error = (b == CRUX__as_iu08(0));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IU08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU08 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu08_iu16 (
    const IU08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = CRUX__as_iu16(0), .rem = CRUX__as_iu16(0)};
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = promo_result.value;
    const IU16 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu16(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu08_iu32 (
    const IU08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu08_iu64 (
    const IU08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU08 CRUX_ARITH__div_iu08_is08 (
    const IU08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU08 division = {.quo = CRUX__as_iu08(0), .rem = CRUX__as_iu08(0)};
  CRUX__ResultIU08 promo_result = CRUX__cast_to_iu08(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU08 a_promo = a;
    const IU08 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu08(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU08 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_iu08_is16 (
    const IU08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS16 division = {.quo = CRUX__as_is16(0), .rem = CRUX__as_is16(0)};
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = promo_result.value;
    const IS16 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is16(0))
      || ((a_promo == IS16_MIN) && (b_promo == CRUX__as_is16(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_iu08_is32 (
    const IU08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_iu08_is64 (
    const IU08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU08_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_iu08 (
    const IU16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = CRUX__as_iu16(0), .rem = CRUX__as_iu16(0)};
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = a;
    const IU16 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu16(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_iu16 (
    const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = CRUX__as_iu16(0), .rem = CRUX__as_iu16(0)};
  const Bool has_error = (b == CRUX__as_iu16(0));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IU16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu16_iu32 (
    const IU16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu16_iu64 (
    const IU16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_is08 (
    const IU16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = CRUX__as_iu16(0), .rem = CRUX__as_iu16(0)};
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = a;
    const IU16 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu16(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_is16 (
    const IU16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = CRUX__as_iu16(0), .rem = CRUX__as_iu16(0)};
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = a;
    const IU16 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu16(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_iu16_is32 (
    const IU16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_iu16_is64 (
    const IU16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU16_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu08 (
    const IU32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu16 (
    const IU32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu32 (
    const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  const Bool has_error = (b == CRUX__as_iu32(0));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IU32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu32_iu64 (
    const IU32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is08 (
    const IU32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is16 (
    const IU32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is32 (
    const IU32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS32_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_iu32_is64 (
    const IU32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU32_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu08 (
    const IU64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu16 (
    const IU64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu32 (
    const IU64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu64 (
    const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  const Bool has_error = (b == CRUX__as_iu64(0));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IU64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is08 (
    const IU64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is16 (
    const IU64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is32 (
    const IU64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is64 (
    const IU64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS64_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IU64_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU08 CRUX_ARITH__div_is08_iu08 (
    const IS08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU08 division = {.quo = CRUX__as_iu08(0), .rem = CRUX__as_iu08(0)};
  CRUX__ResultIU08 promo_result = CRUX__cast_to_iu08(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU08 a_promo = promo_result.value;
    const IU08 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu08(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU08 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_is08_iu16 (
    const IS08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = CRUX__as_iu16(0), .rem = CRUX__as_iu16(0)};
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = promo_result.value;
    const IU16 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu16(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_is08_iu32 (
    const IS08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is08_iu64 (
    const IS08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS08 CRUX_ARITH__div_is08_is08 (
    const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS08 division = {.quo = CRUX__as_is08(0), .rem = CRUX__as_is08(0)};
  const Bool has_error = (b == CRUX__as_is08(0))
    || ((a == IS08_MIN) && (b == CRUX__as_is08(-1)));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IS08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS08 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is08_is16 (
    const IS08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS16 division = {.quo = CRUX__as_is16(0), .rem = CRUX__as_is16(0)};
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = promo_result.value;
    const IS16 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is16(0))
      || ((a_promo == IS16_MIN) && (b_promo == CRUX__as_is16(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is08_is32 (
    const IS08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is08_is64 (
    const IS08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS08_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is16_iu08 (
    const IS16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS16 division = {.quo = CRUX__as_is16(0), .rem = CRUX__as_is16(0)};
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = a;
    const IS16 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is16(0))
      || ((a_promo == IS16_MIN) && (b_promo == CRUX__as_is16(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_is16_iu16 (
    const IS16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU16 division = {.quo = CRUX__as_iu16(0), .rem = CRUX__as_iu16(0)};
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = promo_result.value;
    const IU16 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu16(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_is16_iu32 (
    const IS16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is16_iu64 (
    const IS16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is16_is08 (
    const IS16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS16 division = {.quo = CRUX__as_is16(0), .rem = CRUX__as_is16(0)};
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = a;
    const IS16 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is16(0))
      || ((a_promo == IS16_MIN) && (b_promo == CRUX__as_is16(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is16_is16 (
    const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS16 division = {.quo = CRUX__as_is16(0), .rem = CRUX__as_is16(0)};
  const Bool has_error = (b == CRUX__as_is16(0))
    || ((a == IS16_MIN) && (b == CRUX__as_is16(-1)));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IS16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is16_is32 (
    const IS16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is16_is64 (
    const IS16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS16_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_iu08 (
    const IS32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_iu16 (
    const IS32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_is32_iu32 (
    const IS32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU32 division = {.quo = CRUX__as_iu32(0), .rem = CRUX__as_iu32(0)};
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS32_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu32(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is32_iu64 (
    const IS32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is08 (
    const IS32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is16 (
    const IS32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is32(0))
      || ((a_promo == IS32_MIN) && (b_promo == CRUX__as_is32(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is32 (
    const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS32 division = {.quo = CRUX__as_is32(0), .rem = CRUX__as_is32(0)};
  const Bool has_error = (b == CRUX__as_is32(0))
    || ((a == IS32_MIN) && (b == CRUX__as_is32(-1)));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IS32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is32_is64 (
    const IS32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS32_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu08 (
    const IS64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu16 (
    const IS64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu32 (
    const IS64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IU32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is64_iu64 (
    const IS64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIU64 division = {.quo = CRUX__as_iu64(0), .rem = CRUX__as_iu64(0)};
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS64_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    const Bool has_error = (b_promo == CRUX__as_iu64(0));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is08 (
    const IS64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is16 (
    const IS64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is32 (
    const IS64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX_ARITH__info_promo(IS32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    const Bool has_error = (b_promo == CRUX__as_is64(0))
      || ((a_promo == IS64_MIN) && (b_promo == CRUX__as_is64(-1)));
    if (has_error) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      division.quo = a_promo / b_promo;
      division.rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is64 (
    const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivIS64 division = {.quo = CRUX__as_is64(0), .rem = CRUX__as_is64(0)};
  const Bool has_error = (b == CRUX__as_is64(0))
    || ((a == IS64_MIN) && (b == CRUX__as_is64(-1)));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(IS64_FMT, IS64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .value = division};
  return result;
}


CRUX__ResultDivSize CRUX_ARITH__div_size_size (
    const Size a, const Size b) {
  CRUX__Trace trace = CRUX__trace_create();
  CRUX__DivSize division = {.quo = CRUX__as_size(0), .rem = CRUX__as_size(0)};
  const Bool has_error = (b == CRUX__as_size(0));
  if (has_error) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_division(SIZE_FMT, SIZE_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    division.quo = a / b;
    division.rem = a % b;
  }
  CRUX__ResultDivSize result = {.trace = trace, .value = division};
  return result;
}




#undef CRUX_ARITH__info_promo
#undef CRUX_ARITH__info_division
