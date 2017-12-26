#include <tap.h>
#include "./../src/arithmetic/modadd.h"




void CRUX__modadd_char_tests (void) {
  const Char has_error_fmt[] = "(%d + %d) mod %d must have an error.";
  const Char not_error_fmt[] = "(%d + %d) mod %d must not have an error.";
  const Char result_fmt[] = "(%d + %d) mod %d must equal to %d.";
  if (CRUX__is_char_signed()) {
    const Char inputs[7] = {CHAR_MIN, CHAR_MIN + 1, -1, 0, 1, CHAR_MAX - 1, CHAR_MAX};
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
    const Char values[7][7][7] = {
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
        {CHAR_MAX - 5, CHAR_MAX - 4, CHAR_MAX - 4, CHAR_MAX - 3, CHAR_MAX - 2, CHAR_MAX - 3, CHAR_MAX - 2},
        {CHAR_MAX - 4, CHAR_MAX - 3, CHAR_MAX - 3, CHAR_MAX - 2, 0, CHAR_MAX - 2, 0},
        {CHAR_MAX - 4, CHAR_MAX - 3, CHAR_MAX - 3, CHAR_MAX - 2, 0, CHAR_MAX - 2, 0},
        {CHAR_MAX - 3, CHAR_MAX - 2, CHAR_MAX - 2, 0, 1, 0, 1},
        {CHAR_MAX - 2, 0, 0, 1, 2, 1, 2},
        {CHAR_MAX - 3, CHAR_MAX - 2, CHAR_MAX - 2, 0, 1, 0, 1},
        {CHAR_MAX - 2, 0, 0, 1, 2, 1, 2}
      }, {
        {CHAR_MAX - 2, CHAR_MAX - 1, CHAR_MAX - 2, CHAR_MAX - 1, 0, CHAR_MAX - 2, CHAR_MAX - 1},
        {CHAR_MAX - 1, 0, CHAR_MAX - 1, 0, 1, CHAR_MAX - 1, 0},
        {CHAR_MAX - 2, CHAR_MAX - 1, CHAR_MAX - 2, CHAR_MAX - 1, 0, CHAR_MAX - 2, CHAR_MAX - 1},
        {CHAR_MAX - 1, 0, CHAR_MAX - 1, 0, 1, CHAR_MAX - 1, 0},
        {0, 1, 0, 1, 2, 0, 1},
        {CHAR_MAX - 2, CHAR_MAX - 1, CHAR_MAX - 2, CHAR_MAX - 1, 0, CHAR_MAX - 2, CHAR_MAX - 1},
        {CHAR_MAX - 1, 0, CHAR_MAX - 1, 0, 1, CHAR_MAX - 1, 0},
      }};
    for (Size i = as_size(0); i < as_size(7); i += as_size(1)) {
      for (Size j = as_size(0); j < as_size(7); j += as_size(1)) {
        for (Size k = as_size(0); k < as_size(7); k += as_size(1)) {
          const Char a = inputs[k];
          const Char b = inputs[j];
          const Char modulus = inputs[i];
          const Char value = values[i][j][k];
          const Bool check = checks[i][j][k];
          CRUX__ResultChar mod_result = CRUX__modadd_char(a, b, modulus);
          if (check) {
            ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
            ok(CRUX__is_equal_char(mod_result.value, value), result_fmt, a, b, modulus, value);
          } else {
            ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
          }
          CRUX__trace_clean(&mod_result.trace);
        }
      }
    }
  } else {
    const Char inputs[4] = {CHAR_MIN, CHAR_MIN + 1, CHAR_MAX - 1, CHAR_MAX};
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
    const Char values[4][4][4] = {
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
        {0, 1, CHAR_MAX - 1, 0},
        {1, 2, 0, 1},
        {CHAR_MAX - 1, 0, CHAR_MAX - 2, CHAR_MAX - 1},
        {0, 1, CHAR_MAX - 1, 0}
      }};
    for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
      for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
        for (Size k = as_size(0); k < as_size(4); k += as_size(1)) {
          const Char a = inputs[k];
          const Char b = inputs[j];
          const Char modulus = inputs[i];
          const Char value = values[i][j][k];
          const Bool check = checks[i][j][k];
          CRUX__ResultChar mod_result = CRUX__modadd_char(a, b, modulus);
          if (check) {
            ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
            ok(CRUX__is_equal_char(mod_result.value, value), result_fmt, a, b, modulus, value);
          } else {
            ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
          }
          CRUX__trace_clean(&mod_result.trace);
        }
      }
    }
  }
}


void CRUX__modadd_size_tests (void) {
  const Char has_error_fmt[] = "(%"SIZE_FMT" + %"SIZE_FMT") mod %"SIZE_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"SIZE_FMT" + %"SIZE_FMT") mod %"SIZE_FMT" must not have an error.";
  const Char result_fmt[] = "(%"SIZE_FMT" + %"SIZE_FMT") mod %"SIZE_FMT" must equal to %"SIZE_FMT".";
  const Size inputs[4] = {SIZE_MIN, SIZE_MIN + 1, SIZE_MAX - 1, SIZE_MAX};
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
  const Size values[4][4][4] = {
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
      {0, 1, SIZE_MAX - 1, 0},
      {1, 2, 0, 1},
      {SIZE_MAX - 1, 0, SIZE_MAX - 2, SIZE_MAX - 1},
      {0, 1, SIZE_MAX - 1, 0}
    }};
  for (Size i = as_size(0); i < as_size(4); i += as_size(1)) {
    for (Size j = as_size(0); j < as_size(4); j += as_size(1)) {
      for (Size k = as_size(0); k < as_size(4); k += as_size(1)) {
        const Size a = inputs[k];
        const Size b = inputs[j];
        const Size modulus = inputs[i];
        const Size value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultSize mod_result = CRUX__modadd_size(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal_size(mod_result.value, value), result_fmt, a, b, modulus, value);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}


void CRUX__modadd_iu08_tests (void) {
  const Char has_error_fmt[] = "(%"IU08_FMT" + %"IU08_FMT") mod %"IU08_FMT" must have an error.";
  const Char not_error_fmt[] = "(%"IU08_FMT" + %"IU08_FMT") mod %"IU08_FMT" must not have an error.";
  const Char result_fmt[] = "(%"IU08_FMT" + %"IU08_FMT") mod %"IU08_FMT" must equal to %"IU08_FMT".";
  const IU08 inputs[4] = {IU08_MIN, IU08_MIN + 1, IU08_MAX - 1, IU08_MAX};
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
  const IU08 values[4][4][4] = {
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
        const IU08 a = inputs[k];
        const IU08 b = inputs[j];
        const IU08 modulus = inputs[i];
        const IU08 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU08 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
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
  const IU16 inputs[4] = {IU16_MIN, IU16_MIN + 1, IU16_MAX - 1, IU16_MAX};
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
  const IU16 values[4][4][4] = {
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
        const IU16 a = inputs[k];
        const IU16 b = inputs[j];
        const IU16 modulus = inputs[i];
        const IU16 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU16 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
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
  const IU32 inputs[4] = {IU32_MIN, IU32_MIN + 1, IU32_MAX - 1, IU32_MAX};
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
  const IU32 values[4][4][4] = {
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
        const IU32 a = inputs[k];
        const IU32 b = inputs[j];
        const IU32 modulus = inputs[i];
        const IU32 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU32 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
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
  const IU64 inputs[4] = {IU64_MIN, IU64_MIN + 1, IU64_MAX - 1, IU64_MAX};
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
  const IU64 values[4][4][4] = {
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
        const IU64 a = inputs[k];
        const IU64 b = inputs[j];
        const IU64 modulus = inputs[i];
        const IU64 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIU64 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
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
  const IS08 inputs[7] = {IS08_MIN, IS08_MIN + 1, -1, 0, 1, IS08_MAX - 1, IS08_MAX};
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
  const IS08 values[7][7][7] = {
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
        const IS08 a = inputs[k];
        const IS08 b = inputs[j];
        const IS08 modulus = inputs[i];
        const IS08 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS08 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
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
  const IS16 inputs[7] = {IS16_MIN, IS16_MIN + 1, -1, 0, 1, IS16_MAX - 1, IS16_MAX};
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
  const IS16 values[7][7][7] = {
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
        const IS16 a = inputs[k];
        const IS16 b = inputs[j];
        const IS16 modulus = inputs[i];
        const IS16 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS16 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
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
  const IS32 inputs[7] = {IS32_MIN, IS32_MIN + 1, -1, 0, 1, IS32_MAX - 1, IS32_MAX};
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
  const IS32 values[7][7][7] = {
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
        const IS32 a = inputs[k];
        const IS32 b = inputs[j];
        const IS32 modulus = inputs[i];
        const IS32 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS32 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
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
  const IS64 inputs[7] = {IS64_MIN, IS64_MIN + 1, -1, 0, 1, IS64_MAX - 1, IS64_MAX};
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
  const IS64 values[7][7][7] = {
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
        const IS64 a = inputs[k];
        const IS64 b = inputs[j];
        const IS64 modulus = inputs[i];
        const IS64 value = values[i][j][k];
        const Bool check = checks[i][j][k];
        CRUX__ResultIS64 mod_result = CRUX__modadd(a, b, modulus);
        if (check) {
          ok((CRUX__trace_check(mod_result.trace) == check), not_error_fmt, a, b, modulus);
          ok(CRUX__is_equal(mod_result.value, value), result_fmt, a, b, modulus, value);
        } else {
          ok((CRUX__trace_check(mod_result.trace) == check), has_error_fmt, a, b, modulus);
        }
        CRUX__trace_clean(&mod_result.trace);
      }
    }
  }
}



int main (int argc, char *argv[]) {
  plan(3010);
  CRUX__modadd_char_tests();
  CRUX__modadd_size_tests();
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
