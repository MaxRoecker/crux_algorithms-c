#include "./error.h"


const CRUX__Error CRUX_MATH__ERROR_MATH = {
  .code = CRUX__as_iu32(0x00020000),
  .name = "Math Error"};


const CRUX__Error CRUX_MATH__ERROR_OVERFLOW = {
  .code = CRUX__as_iu32(0x00020001),
  .name = "Integer overflow"};

