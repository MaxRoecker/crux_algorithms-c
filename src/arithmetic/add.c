#include "add.h"


#define CRUX_ARITH__info_promo(fmt, type) "It's not possible promote %" fmt " into a " type "."
#define CRUX_ARITH__info_overflow(a_fmt, b_fmt) "%" a_fmt " + %" b_fmt " causes overflow."




CRUX__ResultIU08 CRUX_ARITH__add_iu08_iu08 (
    const IU08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
  const Bool has_overflow = ((IU08_MAX - a) < b);
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IU08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__add_iu08_iu16 (
    const IU08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
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
    const Bool has_overflow = ((IU16_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu08_iu32 (
    const IU08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu08_iu64 (
    const IU08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU08 CRUX_ARITH__add_iu08_is08 (
    const IU08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
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
    const Bool has_overflow = ((IU08_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS16 CRUX_ARITH__add_iu08_is16 (
    const IU08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is16(0)) && (a_promo > (IS16_MAX - b_promo)))
      || ((b_promo < CRUX__as_is16(0)) && (a_promo < (IS16_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_iu08_is32 (
    const IU08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_iu08_is64 (
    const IU08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 addition = CRUX__as_iu08(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU08_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__add_iu16_iu08 (
    const IU16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
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
    const Bool has_overflow = ((IU16_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__add_iu16_iu16 (
    const IU16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
  const Bool has_overflow = ((IU16_MAX - a) < b);
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IU16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu16_iu32 (
    const IU16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu16_iu64 (
    const IU16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__add_iu16_is08 (
    const IU16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
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
    const Bool has_overflow = ((IU16_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__add_iu16_is16 (
    const IU16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
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
    const Bool has_overflow = ((IU16_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_iu16_is32 (
    const IU16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_iu16_is64 (
    const IU16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 addition = CRUX__as_iu16(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU16_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu32_iu08 (
    const IU32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu32_iu16 (
    const IU32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu32_iu32 (
    const IU32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
  const Bool has_overflow = ((IU32_MAX - a) < b);
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IU32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu32_iu64 (
    const IU32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu32_is08 (
    const IU32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu32_is16 (
    const IU32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_iu32_is32 (
    const IU32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_iu32_is64 (
    const IU32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 addition = CRUX__as_iu32(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU32_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu08 (
    const IU64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu16 (
    const IU64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu32 (
    const IU64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu64 (
    const IU64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
  const Bool has_overflow = ((IU64_MAX - a) < b);
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IU64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_is08 (
    const IU64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_is16 (
    const IU64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_is32 (
    const IU64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_iu64_is64 (
    const IU64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 addition = CRUX__as_iu64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IU64_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU08 CRUX_ARITH__add_is08_iu08 (
    const IS08 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
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
    const Bool has_overflow = ((IU08_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__add_is08_iu16 (
    const IS08 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
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
    const Bool has_overflow = ((IU16_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_is08_iu32 (
    const IS08 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_is08_iu64 (
    const IS08 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS08 CRUX_ARITH__add_is08_is08 (
    const IS08 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
  const Bool has_overflow = ((b > CRUX__as_is08(0)) && (a > (IS08_MAX - b)))
    || ((b < CRUX__as_is08(0)) && (a < (IS08_MIN - b)));
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IS08_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS16 CRUX_ARITH__add_is08_is16 (
    const IS08 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is16(0)) && (a_promo > (IS16_MAX - b_promo)))
      || ((b_promo < CRUX__as_is16(0)) && (a_promo < (IS16_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_is08_is32 (
    const IS08 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is08_is64 (
    const IS08 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 addition = CRUX__as_is08(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS08_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS16 CRUX_ARITH__add_is16_iu08 (
    const IS16 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is16(0)) && (a_promo > (IS16_MAX - b_promo)))
      || ((b_promo < CRUX__as_is16(0)) && (a_promo < (IS16_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU16 CRUX_ARITH__add_is16_iu16 (
    const IS16 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
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
    const Bool has_overflow = ((IU16_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_is16_iu32 (
    const IS16 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_is16_iu64 (
    const IS16 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS16 CRUX_ARITH__add_is16_is08 (
    const IS16 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is16(0)) && (a_promo > (IS16_MAX - b_promo)))
      || ((b_promo < CRUX__as_is16(0)) && (a_promo < (IS16_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS16 CRUX_ARITH__add_is16_is16 (
    const IS16 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
  const Bool has_overflow = ((b > CRUX__as_is16(0)) && (a > (IS16_MAX - b)))
    || ((b < CRUX__as_is16(0)) && (a < (IS16_MIN - b)));
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IS16_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_is16_is32 (
    const IS16 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is16_is64 (
    const IS16 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 addition = CRUX__as_is16(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS16_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_is32_iu08 (
    const IS32 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_is32_iu16 (
    const IS32 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU32 CRUX_ARITH__add_is32_iu32 (
    const IS32 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
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
    const Bool has_overflow = ((IU32_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_is32_iu64 (
    const IS32 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_is32_is08 (
    const IS32 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_is32_is16 (
    const IS32 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is32(0)) && (a_promo > (IS32_MAX - b_promo)))
      || ((b_promo < CRUX__as_is32(0)) && (a_promo < (IS32_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS32 CRUX_ARITH__add_is32_is32 (
    const IS32 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
  const Bool has_overflow = ((b > CRUX__as_is32(0)) && (a > (IS32_MAX - b)))
    || ((b < CRUX__as_is32(0)) && (a < (IS32_MIN - b)));
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IS32_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is32_is64 (
    const IS32 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 addition = CRUX__as_is32(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS32_FMT, IS64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is64_iu08 (
    const IS64 a, const IU08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IU08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is64_iu16 (
    const IS64 a, const IU16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IU16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is64_iu32 (
    const IS64 a, const IU32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IU32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIU64 CRUX_ARITH__add_is64_iu64 (
    const IS64 a, const IU64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
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
    const Bool has_overflow = ((IU64_MAX - a_promo) < b_promo);
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IU64_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is64_is08 (
    const IS64 a, const IS08 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IS08_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is64_is16 (
    const IS64 a, const IS16 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IS16_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is64_is32 (
    const IS64 a, const IS32 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
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
    const Bool has_overflow = 
      ((b_promo > CRUX__as_is64(0)) && (a_promo > (IS64_MAX - b_promo)))
      || ((b_promo < CRUX__as_is64(0)) && (a_promo < (IS64_MIN - b_promo)));
    if (has_overflow) {
      CRUX__Fault fault = {
        .error = CRUX_ARITH__ERROR_ARITHMETIC,
        .filepath = __FILE__,
        .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
      const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IS32_FMT);
      CRUX__fault_infoprintf(fault, fmt, a, b);
      CRUX__trace_push(&trace, fault);
    } else {
      addition = a_promo + b_promo;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}


CRUX__ResultIS64 CRUX_ARITH__add_is64_is64 (
    const IS64 a, const IS64 b) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 addition = CRUX__as_is64(0);
  const Bool has_overflow = ((b > CRUX__as_is64(0)) && (a > (IS64_MAX - b)))
    || ((b < CRUX__as_is64(0)) && (a < (IS64_MIN - b)));
  if (has_overflow) {
    CRUX__Fault fault = {
      .error = CRUX_ARITH__ERROR_ARITHMETIC,
      .filepath = __FILE__,
      .line = ((IU32) __LINE__) + CRUX__as_iu32(5)};
    const Char fmt[] = CRUX_ARITH__info_overflow(IS64_FMT, IS64_FMT);
    CRUX__fault_infoprintf(fault, fmt, a, b);
    CRUX__trace_push(&trace, fault);
  } else {
    addition = a + b;
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = addition};
  return result;
}




#undef CRUX_ARITH__info_promo
#undef CRUX_ARITH__info_overflow
