#include "./cast.h"


static const CRUX__Error CRUX__ERROR__INTEGER_CAST = {
  .code = CRUX__CORE_ERROR_CODE__INTEGER_CAST,
  .name = "Integer cast error"};




CRUX__ResultIU08 CRUX__cast_iu08_iu16 (const iu16 value) {
  iu08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu16) IU08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU16_FMT" (iu16) into a iu08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU08 CRUX__cast_iu08_iu32 (const iu32 value) {
  iu08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu32) IU08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (iu32) into a iu08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU08 CRUX__cast_iu08_iu64 (const iu64 value) {
  iu08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu64) IU08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (iu64) into a iu08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU08 CRUX__cast_iu08_is08 (const is08 value) {
  iu08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is08) IU08_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (is08) into a iu08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU08 CRUX__cast_iu08_is16 (const is16 value) {
  iu08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is16) IU08_MIN)) || (value > ((is16) IU08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (is16) into a iu08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU08 CRUX__cast_iu08_is32 (const is32 value) {
  iu08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is32) IU08_MIN)) || (value > ((is32) IU08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (is32) into a iu08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU08 CRUX__cast_iu08_is64 (const is64 value) {
  iu08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is64) IU08_MIN)) || (value > ((is64) IU08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (is64) into a iu08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU16 CRUX__cast_iu16_iu08 (const iu08 value) {
  iu16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (iu16) value;
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU16 CRUX__cast_iu16_iu32 (const iu32 value) {
  iu16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu32) IU16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (iu32) into a iu16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU16 CRUX__cast_iu16_iu64 (const iu64 value) {
  iu16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu64) IU16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (iu64) into a iu16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU16 CRUX__cast_iu16_is08 (const is08 value) {
  iu16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is08) IU16_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (is08) into a iu16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU16 CRUX__cast_iu16_is16 (const is16 value) {
  iu16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is16) IU16_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (is16) into a iu16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU16 CRUX__cast_iu16_is32 (const is32 value) {
  iu16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is32) IU16_MIN)) || (value > ((is32) IU16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (is32) into a iu16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU16 CRUX__cast_iu16_is64 (const is64 value) {
  iu16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is64) IU16_MIN)) || (value > ((is64) IU16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (is64) into a iu16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU32 CRUX__cast_iu32_iu08 (const iu08 value) {
  iu32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (iu32) value;
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU32 CRUX__cast_iu32_iu16 (const iu16 value) {
  iu32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (iu32) value;
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU32 CRUX__cast_iu32_iu64 (const iu64 value) {
  iu32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu64) IU32_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (iu64) into a iu32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU32 CRUX__cast_iu32_is08 (const is08 value) {
  iu32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is08) IU32_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (is08) into a iu32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU32 CRUX__cast_iu32_is16 (const is16 value) {
  iu32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is16) IU32_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (is16) into a iu32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU32 CRUX__cast_iu32_is32 (const is32 value) {
  iu32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is32) IU32_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (is32) into a iu32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU32 CRUX__cast_iu32_is64 (const is64 value) {
  iu32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is64) IU32_MIN)) || (value > ((is64) IU32_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (is64) into a iu32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU64 CRUX__cast_iu64_iu08 (const iu08 value) {
  iu64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (iu64) value;
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU64 CRUX__cast_iu64_iu16 (const iu16 value) {
  iu64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (iu64) value;
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU64 CRUX__cast_iu64_iu32 (const iu32 value) {
  iu64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (iu64) value;
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU64 CRUX__cast_iu64_is08 (const is08 value) {
  iu64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is08) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (is08) into a iu64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU64 CRUX__cast_iu64_is16 (const is16 value) {
  iu64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is16) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (is16) into a iu64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU64 CRUX__cast_iu64_is32 (const is32 value) {
  iu64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is32) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (is32) into a iu64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIU64 CRUX__cast_iu64_is64 (const is64 value) {
  iu64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((is64) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (is64) into a iu64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (iu64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS08 CRUX__cast_is08_iu08 (const iu08 value) {
  is08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu08) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU08_FMT" (iu08) into a is08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS08 CRUX__cast_is08_iu16 (const iu16 value) {
  is08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu16) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU16_FMT" (iu16) into a is08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS08 CRUX__cast_is08_iu32 (const iu32 value) {
  is08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu32) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (iu32) into a is08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS08 CRUX__cast_is08_iu64 (const iu64 value) {
  is08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu64) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (iu64) into a is08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS08 CRUX__cast_is08_is16 (const is16 value) {
  is08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is16) IS08_MIN)) || (value > ((is16) IS08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (is16) into a is08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS08 CRUX__cast_is08_is32 (const is32 value) {
  is08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is32) IS08_MIN)) || (value > ((is32) IS08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (is32) into a is08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS08 CRUX__cast_is08_is64 (const is64 value) {
  is08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is64) IS08_MIN)) || (value > ((is64) IS08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (is64) into a is08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS16 CRUX__cast_is16_iu08 (const iu08 value) {
  is16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is16) value;
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS16 CRUX__cast_is16_iu16 (const iu16 value) {
  is16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu16) IS16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU16_FMT" (iu16) into a is16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS16 CRUX__cast_is16_iu32 (const iu32 value) {
  is16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu32) IS16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (iu32) into a is16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS16 CRUX__cast_is16_iu64 (const iu64 value) {
  is16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu64) IS16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (iu64) into a is16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS16 CRUX__cast_is16_is08 (const is08 value) {
  is16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is16) value;
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS16 CRUX__cast_is16_is32 (const is32 value) {
  is16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is32) IS16_MIN)) || (value > ((is32) IS16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (is32) into a is16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS16 CRUX__cast_is16_is64 (const is64 value) {
  is16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is64) IS16_MIN)) || (value > ((is64) IS16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (is64) into a is16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS32 CRUX__cast_is32_iu08 (const iu08 value) {
  is32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS32 CRUX__cast_is32_iu16 (const iu16 value) {
  is32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS32 CRUX__cast_is32_iu32 (const iu32 value) {
  is32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu32) IS32_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (iu32) into a is32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is32) value;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS32 CRUX__cast_is32_iu64 (const iu64 value) {
  is32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu64) IS32_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (iu64) into a is32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is32) value;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS32 CRUX__cast_is32_is08 (const is08 value) {
  is32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS32 CRUX__cast_is32_is16 (const is16 value) {
  is32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS32 CRUX__cast_is32_is64 (const is64 value) {
  is32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((is64) IS32_MIN)) || (value > ((is64) IS32_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (is64) into a is32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is32) value;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS64 CRUX__cast_is64_iu08 (const iu08 value) {
  is64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS64 CRUX__cast_is64_iu16 (const iu16 value) {
  is64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS64 CRUX__cast_is64_iu32 (const iu32 value) {
  is64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS64 CRUX__cast_is64_iu64 (const iu64 value) {
  is64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((iu64) IS64_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR__INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (iu64) into a is64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const iu32 line = ((iu32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (is64) value;
  }
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS64 CRUX__cast_is64_is08 (const is08 value) {
  is64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS64 CRUX__cast_is64_is16 (const is16 value) {
  is64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}

CRUX__ResultIS64 CRUX__cast_is64_is32 (const is32 value) {
  is64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (is64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}
