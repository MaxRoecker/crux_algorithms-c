#include <tap.h>
#include "./../src/arithmetic/modadd.h"




void CRUX__modadd_iu08_tests (void) {
  const Char has_error_fmt[] = "(%"IU08_FMT" + %"IU08_FMT") mod %"IU08_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IU08_FMT" + %"IU08_FMT") mod %"IU08_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IU08_FMT" + %"IU08_FMT") mod %"IU08_FMT" must equal to %"IU08_FMT".";
  const IU08 values[4] = {IU08_MIN, IU08_MIN + 1, IU08_MAX - 1, IU08_MAX};
  const Bool checks[4][4][4] = {
    {
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }};
  const IU08 results[4][4][4] = {
    {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 1},
      {1, 2, 1, 2},
      {0, 1, 0, 1},
      {1, 2, 1, 2}
    }, {
      {0, 1, IU08_MAX - 1, 0},
      {1, 2, 0, 1},
      {IU08_MAX - 1, 0, IU08_MAX - 2, IU08_MAX - 1},
      {0, 1, IU08_MAX - 1, 0}
    }};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(4); k += as_size(1)) {
        const IU08 a = values[k];
        const IU08 b = values[j];
        const IU08 modulus = values[i];
        const IU08 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU08 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_iu16_tests (void) {
  const Char has_error_fmt[] = "(%"IU16_FMT" + %"IU16_FMT") mod %"IU16_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IU16_FMT" + %"IU16_FMT") mod %"IU16_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IU16_FMT" + %"IU16_FMT") mod %"IU16_FMT" must equal to %"IU16_FMT".";
  const IU16 values[4] = {IU16_MIN, IU16_MIN + 1, IU16_MAX - 1, IU16_MAX};
  const Bool checks[4][4][4] = {
    {
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }};
  const IU16 results[4][4][4] = {
    {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 1},
      {1, 2, 1, 2},
      {0, 1, 0, 1},
      {1, 2, 1, 2}
    }, {
      {0, 1, IU16_MAX - 1, 0},
      {1, 2, 0, 1},
      {IU16_MAX - 1, 0, IU16_MAX - 2, IU16_MAX - 1},
      {0, 1, IU16_MAX - 1, 0}
    }};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(4); k += as_size(1)) {
        const IU16 a = values[k];
        const IU16 b = values[j];
        const IU16 modulus = values[i];
        const IU16 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU16 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_iu32_tests (void) {
  const Char has_error_fmt[] = "(%"IU32_FMT" + %"IU32_FMT") mod %"IU32_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IU32_FMT" + %"IU32_FMT") mod %"IU32_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IU32_FMT" + %"IU32_FMT") mod %"IU32_FMT" must equal to %"IU32_FMT".";
  const IU32 values[4] = {IU32_MIN, IU32_MIN + 1, IU32_MAX - 1, IU32_MAX};
  const Bool checks[4][4][4] = {
    {
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }};
  const IU32 results[4][4][4] = {
    {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 1},
      {1, 2, 1, 2},
      {0, 1, 0, 1},
      {1, 2, 1, 2}
    }, {
      {0, 1, IU32_MAX - 1, 0},
      {1, 2, 0, 1},
      {IU32_MAX - 1, 0, IU32_MAX - 2, IU32_MAX - 1},
      {0, 1, IU32_MAX - 1, 0}
    }};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(4); k += as_size(1)) {
        const IU32 a = values[k];
        const IU32 b = values[j];
        const IU32 modulus = values[i];
        const IU32 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU32 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_iu64_tests (void) {
  const Char has_error_fmt[] = "(%"IU64_FMT" + %"IU64_FMT") mod %"IU64_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IU64_FMT" + %"IU64_FMT") mod %"IU64_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IU64_FMT" + %"IU64_FMT") mod %"IU64_FMT" must equal to %"IU64_FMT".";
  const IU64 values[4] = {IU64_MIN, IU64_MIN + 1, IU64_MAX - 1, IU64_MAX};
  const Bool checks[4][4][4] = {
    {
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false},
      {false, false, false, false}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }, {
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true},
      {true, true, true, true}
    }};
  const IU64 results[4][4][4] = {
    {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 1},
      {1, 2, 1, 2},
      {0, 1, 0, 1},
      {1, 2, 1, 2}
    }, {
      {0, 1, IU64_MAX - 1, 0},
      {1, 2, 0, 1},
      {IU64_MAX - 1, 0, IU64_MAX - 2, IU64_MAX - 1},
      {0, 1, IU64_MAX - 1, 0}
    }};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(4); k += as_size(1)) {
        const IU64 a = values[k];
        const IU64 b = values[j];
        const IU64 modulus = values[i];
        const IU64 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU64 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_is08_tests (void) {
  const Char has_error_fmt[] = "(%"IS08_FMT" + %"IS08_FMT") mod %"IS08_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IS08_FMT" + %"IS08_FMT") mod %"IS08_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IS08_FMT" + %"IS08_FMT") mod %"IS08_FMT" must equal to %"IS08_FMT".";
  const IS08 values[7] = {IS08_MIN, IS08_MIN + 1, -1, 0, 1, IS08_MAX - 1, IS08_MAX};
  const Bool checks[7][7][7] = {
    {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }};
  const IS08 results[7][7][7] = {
    {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {IS08_MAX - 5, IS08_MAX - 4, IS08_MAX - 4, IS08_MAX - 3, IS08_MAX - 2, IS08_MAX - 3, IS08_MAX - 2},
      {IS08_MAX - 4, IS08_MAX - 3, IS08_MAX - 3, IS08_MAX - 2, 0, IS08_MAX - 2, 0},
      {IS08_MAX - 4, IS08_MAX - 3, IS08_MAX - 3, IS08_MAX - 2, 0, IS08_MAX - 2, 0},
      {IS08_MAX - 3, IS08_MAX - 2, IS08_MAX - 2, 0, 1, 0, 1},
      {IS08_MAX - 2, 0, 0, 1, 2, 1, 2},
      {IS08_MAX - 3, IS08_MAX - 2, IS08_MAX - 2, 0, 1, 0, 1},
      {IS08_MAX - 2, 0, 0, 1, 2, 1, 2}
    }, {
      {IS08_MAX - 2, IS08_MAX - 1, IS08_MAX - 2, IS08_MAX - 1, 0, IS08_MAX - 2, IS08_MAX - 1},
      {IS08_MAX - 1, 0, IS08_MAX - 1, 0, 1, IS08_MAX - 1, 0},
      {IS08_MAX - 2, IS08_MAX - 1, IS08_MAX - 2, IS08_MAX - 1, 0, IS08_MAX - 2, IS08_MAX - 1},
      {IS08_MAX - 1, 0, IS08_MAX - 1, 0, 1, IS08_MAX - 1, 0},
      {0, 1, 0, 1, 2, 0, 1},
      {IS08_MAX - 2, IS08_MAX - 1, IS08_MAX - 2, IS08_MAX - 1, 0, IS08_MAX - 2, IS08_MAX - 1},
      {IS08_MAX - 1, 0, IS08_MAX - 1, 0, 1, IS08_MAX - 1, 0},
    }};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(7); k += as_size(1)) {
        const IS08 a = values[k];
        const IS08 b = values[j];
        const IS08 modulus = values[i];
        const IS08 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS08 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_is16_tests (void) {
  const Char has_error_fmt[] = "(%"IS16_FMT" + %"IS16_FMT") mod %"IS16_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IS16_FMT" + %"IS16_FMT") mod %"IS16_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IS16_FMT" + %"IS16_FMT") mod %"IS16_FMT" must equal to %"IS16_FMT".";
  const IS16 values[7] = {IS16_MIN, IS16_MIN + 1, -1, 0, 1, IS16_MAX - 1, IS16_MAX};
  const Bool checks[7][7][7] = {
    {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }};
  const IS16 results[7][7][7] = {
    {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {IS16_MAX - 5, IS16_MAX - 4, IS16_MAX - 4, IS16_MAX - 3, IS16_MAX - 2, IS16_MAX - 3, IS16_MAX - 2},
      {IS16_MAX - 4, IS16_MAX - 3, IS16_MAX - 3, IS16_MAX - 2, 0, IS16_MAX - 2, 0},
      {IS16_MAX - 4, IS16_MAX - 3, IS16_MAX - 3, IS16_MAX - 2, 0, IS16_MAX - 2, 0},
      {IS16_MAX - 3, IS16_MAX - 2, IS16_MAX - 2, 0, 1, 0, 1},
      {IS16_MAX - 2, 0, 0, 1, 2, 1, 2},
      {IS16_MAX - 3, IS16_MAX - 2, IS16_MAX - 2, 0, 1, 0, 1},
      {IS16_MAX - 2, 0, 0, 1, 2, 1, 2}
    }, {
      {IS16_MAX - 2, IS16_MAX - 1, IS16_MAX - 2, IS16_MAX - 1, 0, IS16_MAX - 2, IS16_MAX - 1},
      {IS16_MAX - 1, 0, IS16_MAX - 1, 0, 1, IS16_MAX - 1, 0},
      {IS16_MAX - 2, IS16_MAX - 1, IS16_MAX - 2, IS16_MAX - 1, 0, IS16_MAX - 2, IS16_MAX - 1},
      {IS16_MAX - 1, 0, IS16_MAX - 1, 0, 1, IS16_MAX - 1, 0},
      {0, 1, 0, 1, 2, 0, 1},
      {IS16_MAX - 2, IS16_MAX - 1, IS16_MAX - 2, IS16_MAX - 1, 0, IS16_MAX - 2, IS16_MAX - 1},
      {IS16_MAX - 1, 0, IS16_MAX - 1, 0, 1, IS16_MAX - 1, 0},
    }};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(7); k += as_size(1)) {
        const IS16 a = values[k];
        const IS16 b = values[j];
        const IS16 modulus = values[i];
        const IS16 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS16 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_is32_tests (void) {
  const Char has_error_fmt[] = "(%"IS32_FMT" + %"IS32_FMT") mod %"IS32_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IS32_FMT" + %"IS32_FMT") mod %"IS32_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IS32_FMT" + %"IS32_FMT") mod %"IS32_FMT" must equal to %"IS32_FMT".";
  const IS32 values[7] = {IS32_MIN, IS32_MIN + 1, -1, 0, 1, IS32_MAX - 1, IS32_MAX};
  const Bool checks[7][7][7] = {
    {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }};
  const IS32 results[7][7][7] = {
    {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {IS32_MAX - 5, IS32_MAX - 4, IS32_MAX - 4, IS32_MAX - 3, IS32_MAX - 2, IS32_MAX - 3, IS32_MAX - 2},
      {IS32_MAX - 4, IS32_MAX - 3, IS32_MAX - 3, IS32_MAX - 2, 0, IS32_MAX - 2, 0},
      {IS32_MAX - 4, IS32_MAX - 3, IS32_MAX - 3, IS32_MAX - 2, 0, IS32_MAX - 2, 0},
      {IS32_MAX - 3, IS32_MAX - 2, IS32_MAX - 2, 0, 1, 0, 1},
      {IS32_MAX - 2, 0, 0, 1, 2, 1, 2},
      {IS32_MAX - 3, IS32_MAX - 2, IS32_MAX - 2, 0, 1, 0, 1},
      {IS32_MAX - 2, 0, 0, 1, 2, 1, 2}
    }, {
      {IS32_MAX - 2, IS32_MAX - 1, IS32_MAX - 2, IS32_MAX - 1, 0, IS32_MAX - 2, IS32_MAX - 1},
      {IS32_MAX - 1, 0, IS32_MAX - 1, 0, 1, IS32_MAX - 1, 0},
      {IS32_MAX - 2, IS32_MAX - 1, IS32_MAX - 2, IS32_MAX - 1, 0, IS32_MAX - 2, IS32_MAX - 1},
      {IS32_MAX - 1, 0, IS32_MAX - 1, 0, 1, IS32_MAX - 1, 0},
      {0, 1, 0, 1, 2, 0, 1},
      {IS32_MAX - 2, IS32_MAX - 1, IS32_MAX - 2, IS32_MAX - 1, 0, IS32_MAX - 2, IS32_MAX - 1},
      {IS32_MAX - 1, 0, IS32_MAX - 1, 0, 1, IS32_MAX - 1, 0},
    }};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(7); k += as_size(1)) {
        const IS32 a = values[k];
        const IS32 b = values[j];
        const IS32 modulus = values[i];
        const IS32 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS32 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_is64_tests (void) {
  const Char has_error_fmt[] = "(%"IS64_FMT" + %"IS64_FMT") mod %"IS64_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IS64_FMT" + %"IS64_FMT") mod %"IS64_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IS64_FMT" + %"IS64_FMT") mod %"IS64_FMT" must equal to %"IS64_FMT".";
  const IS64 values[7] = {IS64_MIN, IS64_MIN + 1, -1, 0, 1, IS64_MAX - 1, IS64_MAX};
  const Bool checks[7][7][7] = {
    {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false},
      {false, false, false, false, false, false, false}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }, {
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true},
      {true, true, true, true, true, true, true}
    }};
  const IS64 results[7][7][7] = {
    {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0}
    }, {
      {IS64_MAX - 5, IS64_MAX - 4, IS64_MAX - 4, IS64_MAX - 3, IS64_MAX - 2, IS64_MAX - 3, IS64_MAX - 2},
      {IS64_MAX - 4, IS64_MAX - 3, IS64_MAX - 3, IS64_MAX - 2, 0, IS64_MAX - 2, 0},
      {IS64_MAX - 4, IS64_MAX - 3, IS64_MAX - 3, IS64_MAX - 2, 0, IS64_MAX - 2, 0},
      {IS64_MAX - 3, IS64_MAX - 2, IS64_MAX - 2, 0, 1, 0, 1},
      {IS64_MAX - 2, 0, 0, 1, 2, 1, 2},
      {IS64_MAX - 3, IS64_MAX - 2, IS64_MAX - 2, 0, 1, 0, 1},
      {IS64_MAX - 2, 0, 0, 1, 2, 1, 2}
    }, {
      {IS64_MAX - 2, IS64_MAX - 1, IS64_MAX - 2, IS64_MAX - 1, 0, IS64_MAX - 2, IS64_MAX - 1},
      {IS64_MAX - 1, 0, IS64_MAX - 1, 0, 1, IS64_MAX - 1, 0},
      {IS64_MAX - 2, IS64_MAX - 1, IS64_MAX - 2, IS64_MAX - 1, 0, IS64_MAX - 2, IS64_MAX - 1},
      {IS64_MAX - 1, 0, IS64_MAX - 1, 0, 1, IS64_MAX - 1, 0},
      {0, 1, 0, 1, 2, 0, 1},
      {IS64_MAX - 2, IS64_MAX - 1, IS64_MAX - 2, IS64_MAX - 1, 0, IS64_MAX - 2, IS64_MAX - 1},
      {IS64_MAX - 1, 0, IS64_MAX - 1, 0, 1, IS64_MAX - 1, 0},
    }};
  for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(7); k += as_size(1)) {
        const IS64 a = values[k];
        const IS64 b = values[j];
        const IS64 modulus = values[i];
        const IS64 result = results[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS64 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, result), result_fmt, a, b, modulus, result);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}



int main (int argc, char *argv[]) {
  plan(2408);
  CRUX__modadd_iu08_tests();
  CRUX__modadd_iu16_tests();
  CRUX__modadd_iu32_tests();
  CRUX__modadd_iu64_tests();
  CRUX__modadd_is08_tests();
  CRUX__modadd_is16_tests();
  CRUX__modadd_is32_tests();
  CRUX__modadd_is64_tests();
  done_testing();
  return EXIT_SUCCESS;
}
