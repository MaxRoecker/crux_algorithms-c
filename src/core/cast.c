#include "./cast.h"


static const CRUX__Error CRUX__ERROR_INTEGER_CAST = {
  .code = CRUX__INTEGER_CAST_ERROR_CODE,
  .name = "Integer cast error"};


static const CRUX__Error CRUX__ERROR_FLOATING_POINT_CAST = {
  .code = CRUX__FLOATING_POINT_CAST_ERROR_CODE,
  .name = "Floating point cast error"};


CRUX__ResultIU08 CRUX__cast_iu08_iu16 (const IU16 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU16) IU08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU16_FMT" (IU16) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_iu32 (const IU32 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU32) IU08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (IU32) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_iu64 (const IU64 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU64) IU08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (IU64) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is08 (const IS08 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS08) IU08_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (IS08) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is16 (const IS16 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS16) IU08_MIN)) || (value > ((IS16) IU08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (IS16) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is32 (const IS32 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS32) IU08_MIN)) || (value > ((IS32) IU08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (IS32) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is64 (const IS64 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS64) IU08_MIN)) || (value > ((IS64) IU08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (IS64) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu08 (const IU08 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IU16) value;
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu32 (const IU32 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU32) IU16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (IU32) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu64 (const IU64 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU64) IU16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (IU64) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is08 (const IS08 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS08) IU16_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (IS08) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is16 (const IS16 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS16) IU16_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (IS16) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is32 (const IS32 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS32) IU16_MIN)) || (value > ((IS32) IU16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (IS32) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is64 (const IS64 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS64) IU16_MIN)) || (value > ((IS64) IU16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (IS64) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu08 (const IU08 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IU32) value;
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu16 (const IU16 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IU32) value;
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu64 (const IU64 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU64) IU32_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (IU64) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is08 (const IS08 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS08) IU32_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (IS08) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is16 (const IS16 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS16) IU32_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (IS16) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is32 (const IS32 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS32) IU32_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (IS32) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is64 (const IS64 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS64) IU32_MIN)) || (value > ((IS64) IU32_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (IS64) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu08 (const IU08 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu16 (const IU16 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu32 (const IU32 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is08 (const IS08 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS08) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS08_FMT" (IS08) into a IU64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is16 (const IS16 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS16) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (IS16) into a IU64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is32 (const IS32 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS32) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (IS32) into a IU64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is64 (const IS64 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value < ((IS64) IU64_MIN)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (IS64) into a IU64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu08 (const IU08 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU08) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU08_FMT" (IU08) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu16 (const IU16 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU16) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU16_FMT" (IU16) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu32 (const IU32 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU32) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (IU32) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu64 (const IU64 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU64) IS08_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (IU64) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is16 (const IS16 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS16) IS08_MIN)) || (value > ((IS16) IS08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS16_FMT" (IS16) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is32 (const IS32 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS32) IS08_MIN)) || (value > ((IS32) IS08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (IS32) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is64 (const IS64 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS64) IS08_MIN)) || (value > ((IS64) IS08_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (IS64) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu08 (const IU08 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS16) value;
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu16 (const IU16 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU16) IS16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU16_FMT" (IU16) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu32 (const IU32 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU32) IS16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (IU32) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu64 (const IU64 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU64) IS16_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (IU64) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is08 (const IS08 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS16) value;
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is32 (const IS32 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS32) IS16_MIN)) || (value > ((IS32) IS16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS32_FMT" (IS32) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is64 (const IS64 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS64) IS16_MIN)) || (value > ((IS64) IS16_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (IS64) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu08 (const IU08 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu16 (const IU16 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu32 (const IU32 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU32) IS32_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU32_FMT" (IU32) into a IS32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu64 (const IU64 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU64) IS32_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (IU64) into a IS32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is08 (const IS08 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is16 (const IS16 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is64 (const IS64 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  if ((value < ((IS64) IS32_MIN)) || (value > ((IS64) IS32_MAX))) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IS64_FMT" (IS64) into a IS32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu08 (const IU08 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu16 (const IU16 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu32 (const IU32 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu64 (const IU64 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  if (value > ((IU64) IS64_MAX)) {
    const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
    const char *const info_fmt = 
      "Cast %"IU64_FMT" (IU64) into a IS64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS64) value;
  }
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is08 (const IS08 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is16 (const IS16 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is32 (const IS32 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_flp1 (const FLP1 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP1) IU08_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) truncated;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_flp2 (const FLP2 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP2) IU08_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) truncated;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_flp4 (const FLP4 value) {
  IU08 casted = AS_IU08(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP4) IU08_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IU08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU08) truncated;
  }
  CRUX__ResultIU08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_flp1 (const FLP1 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP1) IU16_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) truncated;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_flp2 (const FLP2 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP2) IU16_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) truncated;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_flp4 (const FLP4 value) {
  IU16 casted = AS_IU16(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP4) IU16_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IU16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU16) truncated;
  }
  CRUX__ResultIU16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_flp1 (const FLP1 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP1) IU32_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) truncated;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_flp2 (const FLP2 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP2) IU32_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) truncated;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_flp4 (const FLP4 value) {
  IU32 casted = AS_IU32(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP4) IU32_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IU32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU32) truncated;
  }
  CRUX__ResultIU32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_flp1 (const FLP1 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP1) IU64_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IU64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU64) truncated;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_flp2 (const FLP2 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP2) IU64_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IU64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU64) truncated;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_flp4 (const FLP4 value) {
  IU64 casted = AS_IU64(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (value < 0.0)
    || (((FLP4) IU64_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IU64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IU64) truncated;
  }
  CRUX__ResultIU64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_flp1 (const FLP1 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP1) IS08_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) truncated;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_flp2 (const FLP2 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP2) IS08_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) truncated;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_flp4 (const FLP4 value) {
  IS08 casted = AS_IS08(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP4) IS08_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IS08 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS08) truncated;
  }
  CRUX__ResultIS08 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_flp1 (const FLP1 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP1) IS16_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) truncated;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_flp2 (const FLP2 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP2) IS16_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) truncated;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_flp4 (const FLP4 value) {
  IS16 casted = AS_IS16(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP4) IS16_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IS16 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS16) truncated;
  }
  CRUX__ResultIS16 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_flp1 (const FLP1 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP1) IS32_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IS32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS32) truncated;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_flp2 (const FLP2 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP2) IS32_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IS32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS32) truncated;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_flp4 (const FLP4 value) {
  IS32 casted = AS_IS32(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP4) IS32_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IS32 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS32) truncated;
  }
  CRUX__ResultIS32 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_flp1 (const FLP1 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP1 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP1) IS64_INT_PRECISION) < log2f(fabsf(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP1_FMT" (FLP1) into a IS64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS64) truncated;
  }
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_flp2 (const FLP2 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP2 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP2) IS64_INT_PRECISION) < log2(fabs(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP2_FMT" (FLP2) into a IS64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS64) truncated;
  }
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_flp4 (const FLP4 value) {
  IS64 casted = AS_IS64(0);
  const CRUX__Occurrence *occurrences = NULL;
  const FLP4 truncated = FLP_TRUNC(value);
  const bool has_overflow = (value != truncated)
    || (((FLP4) IS64_INT_PRECISION) < log2l(fabsl(value)));
  if (has_overflow) {
    const CRUX__Error *const error = &CRUX__ERROR_FLOATING_POINT_CAST;
    const char *const info_fmt = 
        "Cast %"FLP4_FMT" (FLP4) into a IS64 resulted in lost data.";
    const char *const info = talloc_asprintf(NULL, info_fmt, value);
    const char *const filepath = __FILE__;
    const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
    CRUX__occurrences_push(&occurrences, error, info, filepath, line);
    talloc_free((void *) info);
  } else {
    casted = (IS64) truncated;
  }
  CRUX__ResultIS64 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_iu08 (const IU08 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU08_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU08) FLP1_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU08_FMT" (IU08) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_iu16 (const IU16 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU16_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU16) FLP1_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU16_FMT" (IU16) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_iu32 (const IU32 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU32_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU32) FLP1_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU32_FMT" (IU32) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_iu64 (const IU64 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU64_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU64) FLP1_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU64_FMT" (IU64) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_is08 (const IS08 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS08_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS08) FLP1_MANTISSA_MAX))
      || (value < (-1 * ((IS08) FLP1_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS08_FMT" (IS08) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_is16 (const IS16 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS16_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS16) FLP1_MANTISSA_MAX))
      || (value < (-1 * ((IS16) FLP1_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS16_FMT" (IS16) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_is32 (const IS32 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS32_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS32) FLP1_MANTISSA_MAX))
      || (value < (-1 * ((IS32) FLP1_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS32_FMT" (IS32) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP1 CRUX__cast_flp1_is64 (const IS64 value) {
  FLP1 casted = AS_FLP1(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS64_INT_PRECISION) > ((FLP2) FLP1_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS64) FLP1_MANTISSA_MAX))
      || (value < (-1 * ((IS64) FLP1_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS64_FMT" (IS64) into a FLP1 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP1) value;
    }
  } else {
    casted = (FLP1) value;
  }
  CRUX__ResultFLP1 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_iu08 (const IU08 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU08_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU08) FLP2_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU08_FMT" (IU08) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_iu16 (const IU16 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU16_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU16) FLP2_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU16_FMT" (IU16) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_iu32 (const IU32 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU32_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU32) FLP2_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU32_FMT" (IU32) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_iu64 (const IU64 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU64_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU64) FLP2_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU64_FMT" (IU64) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_is08 (const IS08 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS08_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS08) FLP2_MANTISSA_MAX))
      || (value < (-1 * ((IS08) FLP2_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS08_FMT" (IS08) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_is16 (const IS16 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS16_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS16) FLP2_MANTISSA_MAX))
      || (value < (-1 * ((IS16) FLP2_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS16_FMT" (IS16) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_is32 (const IS32 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS32_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS32) FLP2_MANTISSA_MAX))
      || (value < (-1 * ((IS32) FLP2_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS32_FMT" (IS32) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP2 CRUX__cast_flp2_is64 (const IS64 value) {
  FLP2 casted = AS_FLP2(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS64_INT_PRECISION) > ((FLP2) FLP2_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS64) FLP2_MANTISSA_MAX))
      || (value < (-1 * ((IS64) FLP2_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS64_FMT" (IS64) into a FLP2 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP2) value;
    }
  } else {
    casted = (FLP2) value;
  }
  CRUX__ResultFLP2 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_iu08 (const IU08 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU08_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU08) FLP4_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU08_FMT" (IU08) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_iu16 (const IU16 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU16_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU16) FLP4_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU16_FMT" (IU16) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_iu32 (const IU32 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU32_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU32) FLP4_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU32_FMT" (IU32) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_iu64 (const IU64 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IU64_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IU64) FLP4_MANTISSA_MAX));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IU64_FMT" (IU64) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_is08 (const IS08 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS08_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS08) FLP4_MANTISSA_MAX))
      || (value < (-1 * ((IS08) FLP4_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS08_FMT" (IS08) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_is16 (const IS16 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS16_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS16) FLP4_MANTISSA_MAX))
      || (value < (-1 * ((IS16) FLP4_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS16_FMT" (IS16) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_is32 (const IS32 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS32_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS32) FLP4_MANTISSA_MAX))
      || (value < (-1 * ((IS32) FLP4_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS32_FMT" (IS32) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}


CRUX__ResultFLP4 CRUX__cast_flp4_is64 (const IS64 value) {
  FLP4 casted = AS_FLP4(0.0);
  const CRUX__Occurrence *occurrences = NULL;
  if (((FLP2) IS64_INT_PRECISION) > ((FLP2) FLP4_INT_PRECISION)) {
    const bool has_overflow = (value > ((IS64) FLP4_MANTISSA_MAX))
      || (value < (-1 * ((IS64) FLP4_MANTISSA_MAX)));
    if (has_overflow) {
      const CRUX__Error *const error = &CRUX__ERROR_INTEGER_CAST;
      const char *const info_fmt = 
          "Cast %"IS64_FMT" (IS64) into a FLP4 resulted in lost data.";
      const char *const info = talloc_asprintf(NULL, info_fmt, value);
      const char *const filepath = __FILE__;
      const IU32 line = ((IU32) __LINE__) + AS_IU32(4);
      CRUX__occurrences_push(&occurrences, error, info, filepath, line);
      talloc_free((void *) info);
    } else {
      casted = (FLP4) value;
    }
  } else {
    casted = (FLP4) value;
  }
  CRUX__ResultFLP4 result = {.occ = occurrences, .value = casted};
  return result;
}

