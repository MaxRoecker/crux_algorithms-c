#include "mul.h"


#define CRUX__info_promo(fmt, type) "It's not possible promote %" fmt " into a " type "."
#define CRUX__info_overflow(a_fmt, b_fmt) "%" a_fmt " * %" b_fmt " causes overflow."




CRUX__ResultIU08 CRUX__mul_iu08_iu08 (
    const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 multiplication = CRUX__as_iu08(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IU08_FMT, IU08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_iu08_iu16 (
    const IU08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = CRUX__as_iu16(0);
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = promo_result.value;
    const IU16 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU08_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu08_iu32 (
    const IU08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU08_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu08_iu64 (
    const IU08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU08_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU08 CRUX__mul_iu08_is08 (
    const IU08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 multiplication = CRUX__as_iu08(0);
  CRUX__ResultIU08 promo_result = CRUX__cast_to_iu08(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU08 a_promo = a;
    const IU08 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU08_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS16 CRUX__mul_iu08_is16 (
    const IU08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 multiplication = CRUX__as_is16(0);
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = promo_result.value;
    const IS16 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU08_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_iu08_is32 (
    const IU08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU08_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_iu08_is64 (
    const IU08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU08_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_iu16_iu08 (
    const IU16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = CRUX__as_iu16(0);
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = a;
    const IU16 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU16_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_iu16_iu16 (
    const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = CRUX__as_iu16(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IU16_FMT, IU16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu16_iu32 (
    const IU16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU16_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu16_iu64 (
    const IU16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU16_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_iu16_is08 (
    const IU16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = CRUX__as_iu16(0);
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = a;
    const IU16 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU16_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_iu16_is16 (
    const IU16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = CRUX__as_iu16(0);
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = a;
    const IU16 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU16_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_iu16_is32 (
    const IU16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU16_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_iu16_is64 (
    const IU16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU16_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu32_iu08 (
    const IU32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU32_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu32_iu16 (
    const IU32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU32_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu32_iu32 (
    const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IU32_FMT, IU32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu32_iu64 (
    const IU32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU32_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu32_is08 (
    const IU32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU32_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu32_is16 (
    const IU32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU32_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_iu32_is32 (
    const IU32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS32_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = a;
    const IU32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU32_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_iu32_is64 (
    const IU32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU32_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_iu08 (
    const IU64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU64_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_iu16 (
    const IU64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU64_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_iu32 (
    const IU64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU64_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_iu64 (
    const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  const Bool has_overflow = (b != 0) && (a > (IU64_MAX / b));
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IU64_FMT, IU64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_is08 (
    const IU64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU64_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_is16 (
    const IU64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU64_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_is32 (
    const IU64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU64_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_iu64_is64 (
    const IU64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS64_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = a;
    const IU64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IU64_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU08 CRUX__mul_is08_iu08 (
    const IS08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 multiplication = CRUX__as_iu08(0);
  CRUX__ResultIU08 promo_result = CRUX__cast_to_iu08(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU08");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU08 a_promo = promo_result.value;
    const IU08 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS08_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_is08_iu16 (
    const IS08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = CRUX__as_iu16(0);
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = promo_result.value;
    const IU16 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS08_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_is08_iu32 (
    const IS08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS08_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_is08_iu64 (
    const IS08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS08_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS08 CRUX__mul_is08_is08 (
    const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 multiplication = CRUX__as_is08(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IS08_FMT, IS08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS16 CRUX__mul_is08_is16 (
    const IS08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 multiplication = CRUX__as_is16(0);
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = promo_result.value;
    const IS16 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS08_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is08_is32 (
    const IS08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS08_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is08_is64 (
    const IS08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS08_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS16 CRUX__mul_is16_iu08 (
    const IS16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 multiplication = CRUX__as_is16(0);
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = a;
    const IS16 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS16_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU16 CRUX__mul_is16_iu16 (
    const IS16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 multiplication = CRUX__as_iu16(0);
  CRUX__ResultIU16 promo_result = CRUX__cast_to_iu16(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IU16");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_promo = promo_result.value;
    const IU16 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS16_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_is16_iu32 (
    const IS16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS16_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_is16_iu64 (
    const IS16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS16_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS16 CRUX__mul_is16_is08 (
    const IS16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 multiplication = CRUX__as_is16(0);
  CRUX__ResultIS16 promo_result = CRUX__cast_to_is16(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IS16");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_promo = a;
    const IS16 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS16_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS16 CRUX__mul_is16_is16 (
    const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 multiplication = CRUX__as_is16(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IS16_FMT, IS16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is16_is32 (
    const IS16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = promo_result.value;
    const IS32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS16_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is16_is64 (
    const IS16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS16_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is32_iu08 (
    const IS32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS32_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is32_iu16 (
    const IS32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS32_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU32 CRUX__mul_is32_iu32 (
    const IS32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 multiplication = CRUX__as_iu32(0);
  CRUX__ResultIU32 promo_result = CRUX__cast_to_iu32(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS32_FMT, "IU32");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_promo = promo_result.value;
    const IU32 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS32_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_is32_iu64 (
    const IS32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS32_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS32_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is32_is08 (
    const IS32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS32_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is32_is16 (
    const IS32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  CRUX__ResultIS32 promo_result = CRUX__cast_to_is32(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IS32");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_promo = a;
    const IS32 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS32_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS32 CRUX__mul_is32_is32 (
    const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 multiplication = CRUX__as_is32(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IS32_FMT, IS32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is32_is64 (
    const IS32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = promo_result.value;
    const IS64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS32_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64_iu08 (
    const IS64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS64_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64_iu16 (
    const IS64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS64_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64_iu32 (
    const IS64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IU32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS64_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIU64 CRUX__mul_is64_iu64 (
    const IS64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 multiplication = CRUX__as_iu64(0);
  CRUX__ResultIU64 promo_result = CRUX__cast_to_iu64(a);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS64_FMT, "IU64");
    CRUX__fault_infoprintf(fault, fmt, a);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_promo = promo_result.value;
    const IU64 b_promo = b;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS64_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64_is08 (
    const IS64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS08_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS64_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64_is16 (
    const IS64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS16_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS64_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64_is32 (
    const IS64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  CRUX__ResultIS64 promo_result = CRUX__cast_to_is64(b);
  if (!CRUX__trace_check(promo_result.trace)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_VALUE,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) - CRUX__as_iu32(6)};
    const Char fmt[] = CRUX__info_promo(IS32_FMT, "IS64");
    CRUX__fault_infoprintf(fault, fmt, b);
    CRUX__trace_move(&trace, &promo_result.trace);
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_promo = a;
    const IS64 b_promo = promo_result.value;
    if (CRUX__mul_has_error(a_promo, b_promo)) {
      CRUX__Fault fault = {
        .error = CRUX__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX__info_overflow(IS64_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      multiplication = a_promo * b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultIS64 CRUX__mul_is64_is64 (
    const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 multiplication = CRUX__as_is64(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(IS64_FMT, IS64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = multiplication};
  return result;
}


CRUX__ResultSize CRUX__mul_size_size (
    const Size a, const Size b) {
  CRUX__Trace trace = CRUX__trace_create();
  Size multiplication = CRUX__as_size(0);
  if (CRUX__mul_has_error(a, b)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX__info_overflow(SIZE_FMT, SIZE_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    multiplication = a * b;
  }
  CRUX__ResultSize result = {.trace = trace, .value = multiplication};
  return result;
}




#undef CRUX__info_promo
#undef CRUX__info_overflow
