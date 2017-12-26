#include "./modsub.h"


Bool CRUX__modsub_char_has_error (
    const Char a,
    const Char b,
    const Char modulus) {
  const Bool has_error = CRUX__is_less_equal_char(modulus, as_char(0));
  return has_error;
}


Bool CRUX__modsub_size_has_error (
    const Size a,
    const Size b,
    const Size modulus) {
  const Bool has_error = CRUX__is_less_equal_size(modulus, as_size(0));
  return has_error;
}


Bool CRUX__modsub_iu08_has_error (
    const IU08 a,
    const IU08 b,
    const IU08 modulus) {
  const Bool has_error = CRUX__is_less_equal_iu08(modulus, as_iu08(0));
  return has_error;
}


Bool CRUX__modsub_iu16_has_error (
    const IU16 a,
    const IU16 b,
    const IU16 modulus) {
  const Bool has_error = CRUX__is_less_equal_iu16(modulus, as_iu16(0));
  return has_error;
}


Bool CRUX__modsub_iu32_has_error (
    const IU32 a,
    const IU32 b,
    const IU32 modulus) {
  const Bool has_error = CRUX__is_less_equal_iu32(modulus, as_iu32(0));
  return has_error;
}


Bool CRUX__modsub_iu64_has_error (
    const IU64 a,
    const IU64 b,
    const IU64 modulus) {
  const Bool has_error = CRUX__is_less_equal_iu64(modulus, as_iu64(0));
  return has_error;
}


Bool CRUX__modsub_is08_has_error (
    const IS08 a,
    const IS08 b,
    const IS08 modulus) {
  const Bool has_error = CRUX__is_less_equal_is08(modulus, as_is08(0));
  return has_error;
}


Bool CRUX__modsub_is16_has_error (
    const IS16 a,
    const IS16 b,
    const IS16 modulus) {
  const Bool has_error = CRUX__is_less_equal_is16(modulus, as_is16(0));
  return has_error;
}


Bool CRUX__modsub_is32_has_error (
    const IS32 a,
    const IS32 b,
    const IS32 modulus) {
  const Bool has_error = CRUX__is_less_equal_is32(modulus, as_is32(0));
  return has_error;
}


Bool CRUX__modsub_is64_has_error (
    const IS64 a,
    const IS64 b,
    const IS64 modulus) {
  const Bool has_error = CRUX__is_less_equal_is64(modulus, as_is64(0));
  return has_error;
}




CRUX__ResultChar CRUX__modsub_char (
    const Char a, const Char b, const Char modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  Char modsub = as_char(0);
  if (CRUX__modsub_char_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const Char a_rem = a % modulus;
    const Char b_rem = b % modulus;
    const Char a_mod = CRUX__is_negative_char(a_rem) ? a_rem + modulus : a_rem;
    const Char b_mod = CRUX__is_negative_char(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_char(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultChar result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultSize CRUX__modsub_size (
    const Size a, const Size b, const Size modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  Size modsub = as_size(0);
  if (CRUX__modsub_size_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const Size a_rem = a % modulus;
    const Size b_rem = b % modulus;
    const Size a_mod = CRUX__is_negative_size(a_rem) ? a_rem + modulus : a_rem;
    const Size b_mod = CRUX__is_negative_size(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_size(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultSize result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIU08 CRUX__modsub_iu08 (
    const IU08 a, const IU08 b, const IU08 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IU08 modsub = as_iu08(0);
  if (CRUX__modsub_iu08_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IU08 a_rem = a % modulus;
    const IU08 b_rem = b % modulus;
    const IU08 a_mod = CRUX__is_negative_iu08(a_rem) ? a_rem + modulus : a_rem;
    const IU08 b_mod = CRUX__is_negative_iu08(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_iu08(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIU08 result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIU16 CRUX__modsub_iu16 (
    const IU16 a, const IU16 b, const IU16 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IU16 modsub = as_iu16(0);
  if (CRUX__modsub_iu16_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IU16 a_rem = a % modulus;
    const IU16 b_rem = b % modulus;
    const IU16 a_mod = CRUX__is_negative_iu16(a_rem) ? a_rem + modulus : a_rem;
    const IU16 b_mod = CRUX__is_negative_iu16(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_iu16(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIU16 result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIU32 CRUX__modsub_iu32 (
    const IU32 a, const IU32 b, const IU32 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IU32 modsub = as_iu32(0);
  if (CRUX__modsub_iu32_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IU32 a_rem = a % modulus;
    const IU32 b_rem = b % modulus;
    const IU32 a_mod = CRUX__is_negative_iu32(a_rem) ? a_rem + modulus : a_rem;
    const IU32 b_mod = CRUX__is_negative_iu32(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_iu32(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIU32 result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIU64 CRUX__modsub_iu64 (
    const IU64 a, const IU64 b, const IU64 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IU64 modsub = as_iu64(0);
  if (CRUX__modsub_iu64_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IU64 a_rem = a % modulus;
    const IU64 b_rem = b % modulus;
    const IU64 a_mod = CRUX__is_negative_iu64(a_rem) ? a_rem + modulus : a_rem;
    const IU64 b_mod = CRUX__is_negative_iu64(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_iu64(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIU64 result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIS08 CRUX__modsub_is08 (
    const IS08 a, const IS08 b, const IS08 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IS08 modsub = as_is08(0);
  if (CRUX__modsub_is08_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IS08 a_rem = a % modulus;
    const IS08 b_rem = b % modulus;
    const IS08 a_mod = CRUX__is_negative_is08(a_rem) ? a_rem + modulus : a_rem;
    const IS08 b_mod = CRUX__is_negative_is08(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_is08(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIS08 result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIS16 CRUX__modsub_is16 (
    const IS16 a, const IS16 b, const IS16 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IS16 modsub = as_is16(0);
  if (CRUX__modsub_is16_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IS16 a_rem = a % modulus;
    const IS16 b_rem = b % modulus;
    const IS16 a_mod = CRUX__is_negative_is16(a_rem) ? a_rem + modulus : a_rem;
    const IS16 b_mod = CRUX__is_negative_is16(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_is16(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIS16 result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIS32 CRUX__modsub_is32 (
    const IS32 a, const IS32 b, const IS32 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IS32 modsub = as_is32(0);
  if (CRUX__modsub_is32_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IS32 a_rem = a % modulus;
    const IS32 b_rem = b % modulus;
    const IS32 a_mod = CRUX__is_negative_is32(a_rem) ? a_rem + modulus : a_rem;
    const IS32 b_mod = CRUX__is_negative_is32(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_is32(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIS32 result = {.trace = trace, .value = modsub};
  return result;
}


CRUX__ResultIS64 CRUX__modsub_is64 (
    const IS64 a, const IS64 b, const IS64 modulus) {
  CRUX__Trace trace = CRUX__trace_create();
  IS64 modsub = as_is64(0);
  if (CRUX__modsub_is64_has_error(a, b, modulus)) {
    CRUX__Fault fault = {
      .error = CRUX__ERROR_ARITHMETIC,
      .info = "The modulus can not be zero.",
      .filepath = CRUX__fault_filepath(),
      .line = CRUX__fault_line(-5)};
    CRUX__trace_push(&trace, fault);
  } else {
    const IS64 a_rem = a % modulus;
    const IS64 b_rem = b % modulus;
    const IS64 a_mod = CRUX__is_negative_is64(a_rem) ? a_rem + modulus : a_rem;
    const IS64 b_mod = CRUX__is_negative_is64(b_rem) ? b_rem + modulus : b_rem;
    if (CRUX__is_greater_equal_is64(a_mod, b_mod)) {
      modsub = a_mod - b_mod;
    } else {
      modsub = (modulus - b_mod) + a_mod;
    }
  }
  CRUX__ResultIS64 result = {.trace = trace, .value = modsub};
  return result;
}

