#include <tap.h>
#include "./../src/arithmetic/abs.h"




void CRUX__abs_char_tests (void) {
  const Char has_error_fmt[] = "abs(%d) must have an error.";
  const Char not_error_fmt[] = "abs(%d) must not have an error.";
  const Char value_fmt[] = "abs(%d) must equal to %d.";
  if (CRUX__is_char_signed()) {
    const Char inputs[7] = {CHAR_MIN, CHAR_MIN + 1, -1, 0, 1, CHAR_MAX - 1, CHAR_MAX};
    const Bool checks[7] = {false, true, true, true, true, true, true};
    const Char values[7] = {0, CHAR_MAX, 1, 0, 1, CHAR_MAX - 1, CHAR_MAX};
    for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
      const Char input = inputs[i];
      const Char value = values[i];
      const Bool check = checks[i];
      CRUX__ResultChar result = CRUX__abs_char(input);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const Char actual_value = result.value;
      if (check) {
        ok((actual_check == check), not_error_fmt, input);
        ok(CRUX__is_equal_char(actual_value, value), value_fmt, input, value);
      } else {
        ok((actual_check == check), has_error_fmt, input);
      }
      CRUX__trace_clean(&result.trace);
    }
  } else {
    const Char inputs[4] = {CHAR_MIN, CHAR_MIN + 1, CHAR_MAX - 1, CHAR_MAX};
    const Bool checks[4] = {true,  true,  true,  true};
    const Char values[4] = {CHAR_MIN, CHAR_MIN + 1, CHAR_MAX - 1, CHAR_MAX};
    for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
      const Char input = inputs[i];
      const Char value = values[i];
      const Bool check = checks[i];
      CRUX__ResultChar result = CRUX__abs_char(input);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const Char actual_value = result.value;
      if (check) {
        ok((actual_check == check), not_error_fmt, input);
        ok(CRUX__is_equal_char(actual_value, value), value_fmt, input, value);
      } else {
        ok((actual_check == check), has_error_fmt, input);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__abs_size_tests (void) {
  const Char has_error_fmt[] = "abs(%"SIZE_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"SIZE_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"SIZE_FMT") must equal to %"SIZE_FMT".";
  const Size inputs[4] = {SIZE_MIN, SIZE_MIN + 1, SIZE_MAX - 1, SIZE_MAX};
  const Bool checks[4] = {true,  true,  true,  true};
  const Size values[4] = {SIZE_MIN, SIZE_MIN + 1, SIZE_MAX - 1, SIZE_MAX};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    const Size input = inputs[i];
    const Size value = values[i];
    const Bool check = checks[i];
    CRUX__ResultSize result = CRUX__abs_size(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const Size actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_iu08_tests (void) {
  const Char has_error_fmt[] = "abs(%"IU08_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IU08_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IU08_FMT") must equal to %"IU08_FMT".";
  const IU08 inputs[4] = {IU08_MIN, IU08_MIN + 1, IU08_MAX - 1, IU08_MAX};
  const Bool checks[4] = {true,  true,  true,  true};
  const IU08 values[4] = {IU08_MIN, IU08_MIN + 1, IU08_MAX - 1, IU08_MAX};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    const IU08 input = inputs[i];
    const IU08 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIU08 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IU08 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_iu16_tests (void) {
  const Char has_error_fmt[] = "abs(%"IU16_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IU16_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IU16_FMT") must equal to %"IU16_FMT".";
  const IU16 inputs[4] = {IU16_MIN, IU16_MIN + 1, IU16_MAX - 1, IU16_MAX};
  const Bool checks[4] = {true,  true,  true,  true};
  const IU16 values[4] = {IU16_MIN, IU16_MIN + 1, IU16_MAX - 1, IU16_MAX};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    const IU16 input = inputs[i];
    const IU16 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIU16 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IU16 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_iu32_tests (void) {
  const Char has_error_fmt[] = "abs(%"IU32_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IU32_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IU32_FMT") must equal to %"IU32_FMT".";
  const IU32 inputs[4] = {IU32_MIN, IU32_MIN + 1, IU32_MAX - 1, IU32_MAX};
  const Bool checks[4] = {true,  true,  true,  true};
  const IU32 values[4] = {IU32_MIN, IU32_MIN + 1, IU32_MAX - 1, IU32_MAX};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    const IU32 input = inputs[i];
    const IU32 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIU32 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IU32 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_iu64_tests (void) {
  const Char has_error_fmt[] = "abs(%"IU64_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IU64_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IU64_FMT") must equal to %"IU64_FMT".";
  const IU64 inputs[4] = {IU64_MIN, IU64_MIN + 1, IU64_MAX - 1, IU64_MAX};
  const Bool checks[4] = {true,  true,  true,  true};
  const IU64 values[4] = {IU64_MIN, IU64_MIN + 1, IU64_MAX - 1, IU64_MAX};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    const IU64 input = inputs[i];
    const IU64 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIU64 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IU64 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_is08_tests (void) {
  const Char has_error_fmt[] = "abs(%"IS08_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IS08_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IS08_FMT") must equal to %"IS08_FMT".";
  const IS08 inputs[7] = {IS08_MIN, IS08_MIN + 1, -1, 0, 1, IS08_MAX - 1, IS08_MAX};
  const Bool checks[7] = {false, true, true, true, true, true, true};
  const IS08 values[7] = {0, IS08_MAX, 1, 0, 1, IS08_MAX - 1, IS08_MAX};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    const IS08 input = inputs[i];
    const IS08 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIS08 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IS08 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_is16_tests (void) {
  const Char has_error_fmt[] = "abs(%"IS16_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IS16_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IS16_FMT") must equal to %"IS16_FMT".";
  const IS16 inputs[7] = {IS16_MIN, IS16_MIN + 1, -1, 0, 1, IS16_MAX - 1, IS16_MAX};
  const Bool checks[7] = {false, true, true, true, true, true, true};
  const IS16 values[7] = {0, IS16_MAX, 1, 0, 1, IS16_MAX - 1, IS16_MAX};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    const IS16 input = inputs[i];
    const IS16 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIS16 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IS16 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_is32_tests (void) {
  const Char has_error_fmt[] = "abs(%"IS32_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IS32_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IS32_FMT") must equal to %"IS32_FMT".";
  const IS32 inputs[7] = {IS32_MIN, IS32_MIN + 1, -1, 0, 1, IS32_MAX - 1, IS32_MAX};
  const Bool checks[7] = {false, true, true, true, true, true, true};
  const IS32 values[7] = {0, IS32_MAX, 1, 0, 1, IS32_MAX - 1, IS32_MAX};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    const IS32 input = inputs[i];
    const IS32 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIS32 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IS32 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}


void CRUX__abs_is64_tests (void) {
  const Char has_error_fmt[] = "abs(%"IS64_FMT") must have an error.";
  const Char not_error_fmt[] = "abs(%"IS64_FMT") must not have an error.";
  const Char value_fmt[] = "abs(%"IS64_FMT") must equal to %"IS64_FMT".";
  const IS64 inputs[7] = {IS64_MIN, IS64_MIN + 1, -1, 0, 1, IS64_MAX - 1, IS64_MAX};
  const Bool checks[7] = {false, true, true, true, true, true, true};
  const IS64 values[7] = {0, IS64_MAX, 1, 0, 1, IS64_MAX - 1, IS64_MAX};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    const IS64 input = inputs[i];
    const IS64 value = values[i];
    const Bool check = checks[i];
    CRUX__ResultIS64 result = CRUX__abs(input);
    const Bool actual_check = CRUX__trace_check(result.trace);
    const IS64 actual_value = result.value;
    if (check) {
      ok((actual_check == check), not_error_fmt, input);
      ok(CRUX__is_equal(actual_value, value), value_fmt, input, value);
    } else {
      ok((actual_check == check), has_error_fmt, input);
    }
    CRUX__trace_clean(&result.trace);
  }
}




int main (int argc, char *argv[]) {
  plan(105);
  CRUX__abs_char_tests();
  CRUX__abs_size_tests();
  CRUX__abs_iu08_tests();
  CRUX__abs_iu16_tests();
  CRUX__abs_iu32_tests();
  CRUX__abs_iu64_tests();
  CRUX__abs_is08_tests();
  CRUX__abs_is16_tests();
  CRUX__abs_is32_tests();
  CRUX__abs_is64_tests();
  done_testing();
  return EXIT_SUCCESS;
}
