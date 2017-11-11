#include "div.h"


#define CRUX_ARITH__info_promo(fmt, type) "It's not possible promote %" fmt " into a " type "."




CRUX__ResultDivIU08 CRUX_ARITH__div_iu08_iu08 (
    const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 quo = CRUX__as_iu08(0);
  IU08 rem = CRUX__as_iu08(0);
  if (b == CRUX__as_iu08(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIU08 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu08_iu16 (
    const IU08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 quo = CRUX__as_iu16(0);
  IU16 rem = CRUX__as_iu16(0);
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
    if (b_promo == CRUX__as_iu16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu08_iu32 (
    const IU08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu08_iu64 (
    const IU08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU08 CRUX_ARITH__div_iu08_is08 (
    const IU08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 quo = CRUX__as_iu08(0);
  IU08 rem = CRUX__as_iu08(0);
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
    if (b_promo == CRUX__as_iu08(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU08 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_iu08_is16 (
    const IU08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 quo = CRUX__as_is16(0);
  IS16 rem = CRUX__as_is16(0);
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
    if (b_promo == CRUX__as_is16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_iu08_is32 (
    const IU08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_iu08_is64 (
    const IU08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_iu08 (
    const IU16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 quo = CRUX__as_iu16(0);
  IU16 rem = CRUX__as_iu16(0);
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
    if (b_promo == CRUX__as_iu16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_iu16 (
    const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 quo = CRUX__as_iu16(0);
  IU16 rem = CRUX__as_iu16(0);
  if (b == CRUX__as_iu16(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu16_iu32 (
    const IU16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu16_iu64 (
    const IU16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_is08 (
    const IU16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 quo = CRUX__as_iu16(0);
  IU16 rem = CRUX__as_iu16(0);
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
    if (b_promo == CRUX__as_iu16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_is16 (
    const IU16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 quo = CRUX__as_iu16(0);
  IU16 rem = CRUX__as_iu16(0);
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
    if (b_promo == CRUX__as_iu16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_iu16_is32 (
    const IU16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_iu16_is64 (
    const IU16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu08 (
    const IU32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu16 (
    const IU32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu32 (
    const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
  if (b == CRUX__as_iu32(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu32_iu64 (
    const IU32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is08 (
    const IU32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is16 (
    const IU32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is32 (
    const IU32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_iu32_is64 (
    const IU32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu08 (
    const IU64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu16 (
    const IU64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu32 (
    const IU64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu64 (
    const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
  if (b == CRUX__as_iu64(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is08 (
    const IU64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is16 (
    const IU64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is32 (
    const IU64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is64 (
    const IU64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU08 CRUX_ARITH__div_is08_iu08 (
    const IS08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 quo = CRUX__as_iu08(0);
  IU08 rem = CRUX__as_iu08(0);
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
    if (b_promo == CRUX__as_iu08(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU08 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_is08_iu16 (
    const IS08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 quo = CRUX__as_iu16(0);
  IU16 rem = CRUX__as_iu16(0);
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
    if (b_promo == CRUX__as_iu16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_is08_iu32 (
    const IS08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is08_iu64 (
    const IS08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS08 CRUX_ARITH__div_is08_is08 (
    const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 quo = CRUX__as_is08(0);
  IS08 rem = CRUX__as_is08(0);
  if (b == CRUX__as_is08(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIS08 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is08_is16 (
    const IS08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 quo = CRUX__as_is16(0);
  IS16 rem = CRUX__as_is16(0);
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
    if (b_promo == CRUX__as_is16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is08_is32 (
    const IS08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is08_is64 (
    const IS08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is16_iu08 (
    const IS16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 quo = CRUX__as_is16(0);
  IS16 rem = CRUX__as_is16(0);
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
    if (b_promo == CRUX__as_is16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU16 CRUX_ARITH__div_is16_iu16 (
    const IS16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 quo = CRUX__as_iu16(0);
  IU16 rem = CRUX__as_iu16(0);
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
    if (b_promo == CRUX__as_iu16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_is16_iu32 (
    const IS16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is16_iu64 (
    const IS16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is16_is08 (
    const IS16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 quo = CRUX__as_is16(0);
  IS16 rem = CRUX__as_is16(0);
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
    if (b_promo == CRUX__as_is16(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS16 CRUX_ARITH__div_is16_is16 (
    const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 quo = CRUX__as_is16(0);
  IS16 rem = CRUX__as_is16(0);
  if (b == CRUX__as_is16(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIS16 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is16_is32 (
    const IS16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is16_is64 (
    const IS16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_iu08 (
    const IS32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_iu16 (
    const IS32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU32 CRUX_ARITH__div_is32_iu32 (
    const IS32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 quo = CRUX__as_iu32(0);
  IU32 rem = CRUX__as_iu32(0);
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
    if (b_promo == CRUX__as_iu32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is32_iu64 (
    const IS32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is08 (
    const IS32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is16 (
    const IS32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
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
    if (b_promo == CRUX__as_is32(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is32 (
    const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 quo = CRUX__as_is32(0);
  IS32 rem = CRUX__as_is32(0);
  if (b == CRUX__as_is32(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIS32 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is32_is64 (
    const IS32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu08 (
    const IS64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu16 (
    const IS64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu32 (
    const IS64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIU64 CRUX_ARITH__div_is64_iu64 (
    const IS64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 quo = CRUX__as_iu64(0);
  IU64 rem = CRUX__as_iu64(0);
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
    if (b_promo == CRUX__as_iu64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIU64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is08 (
    const IS64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is16 (
    const IS64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is32 (
    const IS64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
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
    if (b_promo == CRUX__as_is64(0)) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .info = "The divisor can't be zero.",
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
      CRUX__trace_push(&trace, fault);
    } else {
      quo = a_promo / b_promo;
      rem = a_promo % b_promo;
    }
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}


CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is64 (
    const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 quo = CRUX__as_is64(0);
  IS64 rem = CRUX__as_is64(0);
  if (b == CRUX__as_is64(0)) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .info = "The divisor can't be zero.",
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(3)};
    CRUX__trace_push(&trace, fault);
  } else {
    quo = a / b;
    rem = a % b;
  }
  CRUX__ResultDivIS64 result = {.trace = trace, .quo = quo, .rem = rem};
  return result;
}




#undef CRUX_ARITH__info_promo
