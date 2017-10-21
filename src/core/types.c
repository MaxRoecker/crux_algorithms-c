#include "./types.h"


Size CRUX__popcount (uintmax_t value) {
  Size precision = 0;
  while (value != 0) {
    if ((value % 2) == 1) {
      precision += 1;
    }
    value >>= 1;
  }
  return precision;
}
