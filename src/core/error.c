#include "./error.h"


const CRUX__Error CRUX__ERROR_GENERIC = {
  .code = CRUX__as_iu32(0x00010000),
  .name = "Generic Error"};


const CRUX__Error CRUX__ERROR_VALUE = {
  .code = CRUX__as_iu32(0x00010001),
  .name = "Value Error"};


const CRUX__Error CRUX__ERROR_MEMORY = {
  .code = CRUX__as_iu32(0x00010002),
  .name = "Memory Error"};


Bool CRUX__error_equals (const CRUX__Error one, const CRUX__Error another) {
  return ((Bool) (one.code == another.code));
}


void CRUX__error_stringify (
    const CRUX__Error error,
    Char *buffer,
    const Size buffer_size) {
  assert(buffer_size >= CRUX__ERROR_STRING_SIZE);
  snprintf(buffer, buffer_size, "E#%08X %s", error.code, error.name);
}
