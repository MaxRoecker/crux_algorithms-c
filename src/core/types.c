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


inline Bool CRUX__is_char_signed (void) {
  const Bool is_signed = (CHAR_MIN != as_char(0)) ? true : false;
  return is_signed;
}
