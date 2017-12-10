#include "./element.h"


inline CRUX__Element CRUX__element_nil (void) {
  const CRUX__Element element = {
    .addr = nil(void),
    .size = as_size(0)};
  return element;
}


Bool CRUX__element_equals (const CRUX__Element a, const CRUX__Element b) {
  const Bool equals = (a.addr == b.addr) && (a.size == b.size);
  return equals;
}
