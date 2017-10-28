#include "./error.h"


const CRUX__Error CRUX_MATH__ERROR_MATH = {
  .code = CRUX__as_iu32(0x00020000),
  .name = "Math Error"};


const CRUX__Error CRUX_MATH__ERROR_DOMAIN = {
  .code = CRUX__as_iu32(0x00020001),
  .name = "Domain Error"};


const CRUX__Error CRUX_MATH__ERROR_RANGE = {
  .code = CRUX__as_iu32(0x00020002),
  .name = "Range Error"};

