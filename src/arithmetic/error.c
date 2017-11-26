#include "./error.h"


const CRUX__Error CRUX__ERROR_ARITHMETIC = {
  .code = CRUX__as_iu32(0x00020000),
  .name = "Arithmetic Error"};
