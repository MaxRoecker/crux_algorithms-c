#include "./types.h"

flp1 CRUX__trunc_flp1 (const flp1 value) {
  const flp1 truncated = truncf(value);
  return truncated;
}

flp2 CRUX__trunc_flp2 (const flp2 value) {
  const flp2 truncated = trunc(value);
  return truncated;
}

flp4 CRUX__trunc_flp4 (const flp4 value) {
  const flp4 truncated = truncl(value);
  return truncated;
}
