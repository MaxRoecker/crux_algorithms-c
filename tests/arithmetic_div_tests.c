#include <tap.h>
#include "./../src/arithmetic/div.h"




void CRUX__div_char_tests (void) {
  const Char has_error_fmt[] = "%d / %d must have an error.";
  const Char not_error_fmt[] = "%d / %d must not have an error.";
  const Char quo_value_fmt[] = "%d / %d quotient must equal to %d.";
  const Char rem_value_fmt[] = "%d / %d remainder must equal to %d.";
  if (CRUX__is_char_signed()) {
    const Char inputs[7] = {CHAR_MIN, CHAR_MIN + 1, -1, 0, 1, CHAR_MAX - 1, CHAR_MAX};
    const Bool checks[7][7] = {
      { true,  true,  true,  true,  true,  true,  true},
      { true,  true,  true,  true,  true,  true,  true},
      {false,  true,  true,  true,  true,  true,  true},
      {false, false, false, false, false, false, false},
      { true,  true,  true,  true,  true,  true,  true},
      { true,  true,  true,  true,  true,  true,  true},
      { true,  true,  true,  true,  true,  true,  true}};
    const Char quo_values[7][7] = {
      {1, 0, 0, 0, 0, 0, 0},
      {1, 1, 0, 0, 0, 0, -1},
      {0, CHAR_MAX, 1, 0, -1, CHAR_MIN + 2, CHAR_MIN + 1},
      {0, 0, 0, 0, 0, 0, 0},
      {CHAR_MIN, CHAR_MIN + 1, -1, 0, 1, CHAR_MAX - 1, CHAR_MAX},
      {-1, -1, 0, 0, 0, 1, 1},
      {-1, -1, 0, 0, 0, 0, 1}};
    const Char rem_values[7][7] = {
      {0, CHAR_MIN + 1, -1, 0, 1, CHAR_MAX - 1, CHAR_MAX},
      {-1, 0, -1, 0, 1, CHAR_MAX - 1, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {-2, -1, -1, 0, 1, 0, 1},
      {-1, 0, -1, 0, 1, CHAR_MAX - 1, 0}};
    for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
      for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
        const Char a = inputs[j];
        const Char b = inputs[i];
        const Char quo_value = quo_values[i][j];
        const Char rem_value = rem_values[i][j];
        const Bool check = checks[i][j];
        CRUX__ResultDivChar result = CRUX__div_char(a, b);
        const Bool actual_check = CRUX__trace_check(result.trace);
        const Char actual_quo_value = result.value.quo;
        const Char actual_rem_value = result.value.rem;
        if (check) {
          ok((actual_check == check), not_error_fmt, a, b);
          ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
          ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
        } else {
          ok((actual_check == check), has_error_fmt, a, b);
        }
        CRUX__trace_clean(&result.trace);
      }
    }
  } else {
    const Char inputs[4] = {CHAR_MIN, CHAR_MIN + 1, CHAR_MAX - 1, CHAR_MAX};
    const Bool checks[4][4] = {
      {false, false, false, false},
      { true,  true,  true,  true},
      { true,  true,  true,  true},
      { true,  true,  true,  true}};
    const Char quo_values[4][4] = {
      {0, 0, 0, 0},
      {CHAR_MIN, CHAR_MIN + 1, CHAR_MAX - 1, CHAR_MAX},
      {0, 0, 1, 1},
      {0, 0, 0, 1}};
    const Char rem_values[4][4] = {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {CHAR_MIN, CHAR_MIN + 1, 0, 1},
      {CHAR_MIN, CHAR_MIN + 1, CHAR_MAX - 1, 0}};
    for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
      for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
        const Char a = inputs[j];
        const Char b = inputs[i];
        const Char quo_value = quo_values[i][j];
        const Char rem_value = rem_values[i][j];
        const Bool check = checks[i][j];
        CRUX__ResultDivChar result = CRUX__div_char(a, b);
        const Bool actual_check = CRUX__trace_check(result.trace);
        const Char actual_quo_value = result.value.quo;
        const Char actual_rem_value = result.value.rem;
        if (check) {
          ok((actual_check == check), not_error_fmt, a, b);
          ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
          ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
        } else {
          ok((actual_check == check), has_error_fmt, a, b);
        }
        CRUX__trace_clean(&result.trace);
      }
    }
  }
}


void CRUX__div_size_tests (void) {
  const Char has_error_fmt[] = "%"SIZE_FMT" / %"SIZE_FMT" must have an error.";
  const Char not_error_fmt[] = "%"SIZE_FMT" / %"SIZE_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"SIZE_FMT" / %"SIZE_FMT" quotient must equal to %"SIZE_FMT".";
  const Char rem_value_fmt[] = "%"SIZE_FMT" / %"SIZE_FMT" remainder must equal to %"SIZE_FMT".";
  const Size inputs[4] = {SIZE_MIN, SIZE_MIN + 1, SIZE_MAX - 1, SIZE_MAX};
  const Bool checks[4][4] = {
    {false, false, false, false},
    { true,  true,  true,  true},
    { true,  true,  true,  true},
    { true,  true,  true,  true}};
  const Size quo_values[4][4] = {
    {0, 0, 0, 0},
    {SIZE_MIN, SIZE_MIN + 1, SIZE_MAX - 1, SIZE_MAX},
    {0, 0, 1, 1},
    {0, 0, 0, 1}};
  const Size rem_values[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {SIZE_MIN, SIZE_MIN + 1, 0, 1},
    {SIZE_MIN, SIZE_MIN + 1, SIZE_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      const Size a = inputs[j];
      const Size b = inputs[i];
      const Size quo_value = quo_values[i][j];
      const Size rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivSize result = CRUX__div_size(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const Size actual_quo_value = result.value.quo;
      const Size actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_iu08_tests (void) {
  const Char has_error_fmt[] = "%"IU08_FMT" / %"IU08_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IU08_FMT" / %"IU08_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IU08_FMT" / %"IU08_FMT" quotient must equal to %"IU08_FMT".";
  const Char rem_value_fmt[] = "%"IU08_FMT" / %"IU08_FMT" remainder must equal to %"IU08_FMT".";
  const IU08 inputs[4] = {IU08_MIN, IU08_MIN + 1, IU08_MAX - 1, IU08_MAX};
  const Bool checks[4][4] = {
    {false, false, false, false},
    { true,  true,  true,  true},
    { true,  true,  true,  true},
    { true,  true,  true,  true}};
  const IU08 quo_values[4][4] = {
    {0, 0, 0, 0},
    {IU08_MIN, IU08_MIN + 1, IU08_MAX - 1, IU08_MAX},
    {0, 0, 1, 1},
    {0, 0, 0, 1}};
  const IU08 rem_values[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {IU08_MIN, IU08_MIN + 1, 0, 1},
    {IU08_MIN, IU08_MIN + 1, IU08_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      const IU08 a = inputs[j];
      const IU08 b = inputs[i];
      const IU08 quo_value = quo_values[i][j];
      const IU08 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIU08 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IU08 actual_quo_value = result.value.quo;
      const IU08 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_iu16_tests (void) {
  const Char has_error_fmt[] = "%"IU16_FMT" / %"IU16_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IU16_FMT" / %"IU16_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IU16_FMT" / %"IU16_FMT" quotient must equal to %"IU16_FMT".";
  const Char rem_value_fmt[] = "%"IU16_FMT" / %"IU16_FMT" remainder must equal to %"IU16_FMT".";
  const IU16 inputs[4] = {IU16_MIN, IU16_MIN + 1, IU16_MAX - 1, IU16_MAX};
  const Bool checks[4][4] = {
    {false, false, false, false},
    { true,  true,  true,  true},
    { true,  true,  true,  true},
    { true,  true,  true,  true}};
  const IU16 quo_values[4][4] = {
    {0, 0, 0, 0},
    {IU16_MIN, IU16_MIN + 1, IU16_MAX - 1, IU16_MAX},
    {0, 0, 1, 1},
    {0, 0, 0, 1}};
  const IU16 rem_values[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {IU16_MIN, IU16_MIN + 1, 0, 1},
    {IU16_MIN, IU16_MIN + 1, IU16_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      const IU16 a = inputs[j];
      const IU16 b = inputs[i];
      const IU16 quo_value = quo_values[i][j];
      const IU16 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIU16 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IU16 actual_quo_value = result.value.quo;
      const IU16 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_iu32_tests (void) {
  const Char has_error_fmt[] = "%"IU32_FMT" / %"IU32_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IU32_FMT" / %"IU32_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IU32_FMT" / %"IU32_FMT" quotient must equal to %"IU32_FMT".";
  const Char rem_value_fmt[] = "%"IU32_FMT" / %"IU32_FMT" remainder must equal to %"IU32_FMT".";
  const IU32 inputs[4] = {IU32_MIN, IU32_MIN + 1, IU32_MAX - 1, IU32_MAX};
  const Bool checks[4][4] = {
    {false, false, false, false},
    { true,  true,  true,  true},
    { true,  true,  true,  true},
    { true,  true,  true,  true}};
  const IU32 quo_values[4][4] = {
    {0, 0, 0, 0},
    {IU32_MIN, IU32_MIN + 1, IU32_MAX - 1, IU32_MAX},
    {0, 0, 1, 1},
    {0, 0, 0, 1}};
  const IU32 rem_values[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {IU32_MIN, IU32_MIN + 1, 0, 1},
    {IU32_MIN, IU32_MIN + 1, IU32_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      const IU32 a = inputs[j];
      const IU32 b = inputs[i];
      const IU32 quo_value = quo_values[i][j];
      const IU32 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIU32 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IU32 actual_quo_value = result.value.quo;
      const IU32 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_iu64_tests (void) {
  const Char has_error_fmt[] = "%"IU64_FMT" / %"IU64_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IU64_FMT" / %"IU64_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IU64_FMT" / %"IU64_FMT" quotient must equal to %"IU64_FMT".";
  const Char rem_value_fmt[] = "%"IU64_FMT" / %"IU64_FMT" remainder must equal to %"IU64_FMT".";
  const IU64 inputs[4] = {IU64_MIN, IU64_MIN + 1, IU64_MAX - 1, IU64_MAX};
  const Bool checks[4][4] = {
    {false, false, false, false},
    { true,  true,  true,  true},
    { true,  true,  true,  true},
    { true,  true,  true,  true}};
  const IU64 quo_values[4][4] = {
    {0, 0, 0, 0},
    {IU64_MIN, IU64_MIN + 1, IU64_MAX - 1, IU64_MAX},
    {0, 0, 1, 1},
    {0, 0, 0, 1}};
  const IU64 rem_values[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {IU64_MIN, IU64_MIN + 1, 0, 1},
    {IU64_MIN, IU64_MIN + 1, IU64_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      const IU64 a = inputs[j];
      const IU64 b = inputs[i];
      const IU64 quo_value = quo_values[i][j];
      const IU64 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIU64 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IU64 actual_quo_value = result.value.quo;
      const IU64 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_is08_tests (void) {
  const Char has_error_fmt[] = "%"IS08_FMT" / %"IS08_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IS08_FMT" / %"IS08_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IS08_FMT" / %"IS08_FMT" quotient must equal to %"IS08_FMT".";
  const Char rem_value_fmt[] = "%"IS08_FMT" / %"IS08_FMT" remainder must equal to %"IS08_FMT".";
  const IS08 inputs[7] = {IS08_MIN, IS08_MIN + 1, -1, 0, 1, IS08_MAX - 1, IS08_MAX};
  const Bool checks[7][7] = {
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    {false,  true,  true,  true,  true,  true,  true},
    {false, false, false, false, false, false, false},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true}};
  const IS08 quo_values[7][7] = {
    {1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, -1},
    {0, IS08_MAX, 1, 0, -1, IS08_MIN + 2, IS08_MIN + 1},
    {0, 0, 0, 0, 0, 0, 0},
    {IS08_MIN, IS08_MIN + 1, -1, 0, 1, IS08_MAX - 1, IS08_MAX},
    {-1, -1, 0, 0, 0, 1, 1},
    {-1, -1, 0, 0, 0, 0, 1}};
  const IS08 rem_values[7][7] = {
    {0, IS08_MIN + 1, -1, 0, 1, IS08_MAX - 1, IS08_MAX},
    {-1, 0, -1, 0, 1, IS08_MAX - 1, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {-2, -1, -1, 0, 1, 0, 1},
    {-1, 0, -1, 0, 1, IS08_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      const IS08 a = inputs[j];
      const IS08 b = inputs[i];
      const IS08 quo_value = quo_values[i][j];
      const IS08 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIS08 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IS08 actual_quo_value = result.value.quo;
      const IS08 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_is16_tests (void) {
  const Char has_error_fmt[] = "%"IS16_FMT" / %"IS16_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IS16_FMT" / %"IS16_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IS16_FMT" / %"IS16_FMT" quotient must equal to %"IS16_FMT".";
  const Char rem_value_fmt[] = "%"IS16_FMT" / %"IS16_FMT" remainder must equal to %"IS16_FMT".";
  const IS16 inputs[7] = {IS16_MIN, IS16_MIN + 1, -1, 0, 1, IS16_MAX - 1, IS16_MAX};
  const Bool checks[7][7] = {
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    {false,  true,  true,  true,  true,  true,  true},
    {false, false, false, false, false, false, false},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true}};
  const IS16 quo_values[7][7] = {
    {1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, -1},
    {0, IS16_MAX, 1, 0, -1, IS16_MIN + 2, IS16_MIN + 1},
    {0, 0, 0, 0, 0, 0, 0},
    {IS16_MIN, IS16_MIN + 1, -1, 0, 1, IS16_MAX - 1, IS16_MAX},
    {-1, -1, 0, 0, 0, 1, 1},
    {-1, -1, 0, 0, 0, 0, 1}};
  const IS16 rem_values[7][7] = {
    {0, IS16_MIN + 1, -1, 0, 1, IS16_MAX - 1, IS16_MAX},
    {-1, 0, -1, 0, 1, IS16_MAX - 1, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {-2, -1, -1, 0, 1, 0, 1},
    {-1, 0, -1, 0, 1, IS16_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      const IS16 a = inputs[j];
      const IS16 b = inputs[i];
      const IS16 quo_value = quo_values[i][j];
      const IS16 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIS16 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IS16 actual_quo_value = result.value.quo;
      const IS16 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_is32_tests (void) {
  const Char has_error_fmt[] = "%"IS32_FMT" / %"IS32_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IS32_FMT" / %"IS32_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IS32_FMT" / %"IS32_FMT" quotient must equal to %"IS32_FMT".";
  const Char rem_value_fmt[] = "%"IS32_FMT" / %"IS32_FMT" remainder must equal to %"IS32_FMT".";
  const IS32 inputs[7] = {IS32_MIN, IS32_MIN + 1, -1, 0, 1, IS32_MAX - 1, IS32_MAX};
  const Bool checks[7][7] = {
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    {false,  true,  true,  true,  true,  true,  true},
    {false, false, false, false, false, false, false},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true}};
  const IS32 quo_values[7][7] = {
    {1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, -1},
    {0, IS32_MAX, 1, 0, -1, IS32_MIN + 2, IS32_MIN + 1},
    {0, 0, 0, 0, 0, 0, 0},
    {IS32_MIN, IS32_MIN + 1, -1, 0, 1, IS32_MAX - 1, IS32_MAX},
    {-1, -1, 0, 0, 0, 1, 1},
    {-1, -1, 0, 0, 0, 0, 1}};
  const IS32 rem_values[7][7] = {
    {0, IS32_MIN + 1, -1, 0, 1, IS32_MAX - 1, IS32_MAX},
    {-1, 0, -1, 0, 1, IS32_MAX - 1, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {-2, -1, -1, 0, 1, 0, 1},
    {-1, 0, -1, 0, 1, IS32_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      const IS32 a = inputs[j];
      const IS32 b = inputs[i];
      const IS32 quo_value = quo_values[i][j];
      const IS32 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIS32 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IS32 actual_quo_value = result.value.quo;
      const IS32 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


void CRUX__div_is64_tests (void) {
  const Char has_error_fmt[] = "%"IS64_FMT" / %"IS64_FMT" must have an error.";
  const Char not_error_fmt[] = "%"IS64_FMT" / %"IS64_FMT" must not have an error.";
  const Char quo_value_fmt[] = "%"IS64_FMT" / %"IS64_FMT" quotient must equal to %"IS64_FMT".";
  const Char rem_value_fmt[] = "%"IS64_FMT" / %"IS64_FMT" remainder must equal to %"IS64_FMT".";
  const IS64 inputs[7] = {IS64_MIN, IS64_MIN + 1, -1, 0, 1, IS64_MAX - 1, IS64_MAX};
  const Bool checks[7][7] = {
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    {false,  true,  true,  true,  true,  true,  true},
    {false, false, false, false, false, false, false},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true},
    { true,  true,  true,  true,  true,  true,  true}};
  const IS64 quo_values[7][7] = {
    {1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, -1},
    {0, IS64_MAX, 1, 0, -1, IS64_MIN + 2, IS64_MIN + 1},
    {0, 0, 0, 0, 0, 0, 0},
    {IS64_MIN, IS64_MIN + 1, -1, 0, 1, IS64_MAX - 1, IS64_MAX},
    {-1, -1, 0, 0, 0, 1, 1},
    {-1, -1, 0, 0, 0, 0, 1}};
  const IS64 rem_values[7][7] = {
    {0, IS64_MIN + 1, -1, 0, 1, IS64_MAX - 1, IS64_MAX},
    {-1, 0, -1, 0, 1, IS64_MAX - 1, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {-2, -1, -1, 0, 1, 0, 1},
    {-1, 0, -1, 0, 1, IS64_MAX - 1, 0}};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      const IS64 a = inputs[j];
      const IS64 b = inputs[i];
      const IS64 quo_value = quo_values[i][j];
      const IS64 rem_value = rem_values[i][j];
      const Bool check = checks[i][j];
      CRUX__ResultDivIS64 result = CRUX__div(a, b);
      const Bool actual_check = CRUX__trace_check(result.trace);
      const IS64 actual_quo_value = result.value.quo;
      const IS64 actual_rem_value = result.value.rem;
      if (check) {
        ok((actual_check == check), not_error_fmt, a, b);
        ok(CRUX__is_equal(actual_quo_value, quo_value), quo_value_fmt, a, b, quo_value);
        ok(CRUX__is_equal(actual_rem_value, rem_value), rem_value_fmt, a, b, rem_value);
      } else {
        ok((actual_check == check), has_error_fmt, a, b);
      }
      CRUX__trace_clean(&result.trace);
    }
  }
}


int main (int argc, char *argv[]) {
  plan(855);
  CRUX__div_char_tests();
  CRUX__div_size_tests();
  CRUX__div_iu08_tests();
  CRUX__div_iu16_tests();
  CRUX__div_iu32_tests();
  CRUX__div_iu64_tests();
  CRUX__div_is08_tests();
  CRUX__div_is16_tests();
  CRUX__div_is32_tests();
  CRUX__div_is64_tests();
  done_testing();
  return EXIT_SUCCESS;
}
