#include "./cast.h"




CRUX__ResultIU08 CRUX__cast_iu08_iu16 (const IU16 value) {
  IU08 casted = CRUX__as_iu08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU16) IU08_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_iu32 (const IU32 value) {
  IU08 casted = CRUX__as_iu08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU32) IU08_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_iu64 (const IU64 value) {
  IU08 casted = CRUX__as_iu08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU64) IU08_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is08 (const IS08 value) {
  IU08 casted = CRUX__as_iu08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS08) IU08_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is16 (const IS16 value) {
  IU08 casted = CRUX__as_iu08(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS16) IU08_MIN)) || (value > ((IS16) IU08_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is32 (const IS32 value) {
  IU08 casted = CRUX__as_iu08(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS32) IU08_MIN)) || (value > ((IS32) IU08_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU08 CRUX__cast_iu08_is64 (const IS64 value) {
  IU08 casted = CRUX__as_iu08(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS64) IU08_MIN)) || (value > ((IS64) IU08_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU08) value;
  }
  CRUX__ResultIU08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu08 (const IU08 value) {
  IU16 casted = CRUX__as_iu16(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IU16) value;
  CRUX__ResultIU16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu32 (const IU32 value) {
  IU16 casted = CRUX__as_iu16(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU32) IU16_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_iu64 (const IU64 value) {
  IU16 casted = CRUX__as_iu16(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU64) IU16_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is08 (const IS08 value) {
  IU16 casted = CRUX__as_iu16(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS08) IU16_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is16 (const IS16 value) {
  IU16 casted = CRUX__as_iu16(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS16) IU16_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is32 (const IS32 value) {
  IU16 casted = CRUX__as_iu16(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS32) IU16_MIN)) || (value > ((IS32) IU16_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU16 CRUX__cast_iu16_is64 (const IS64 value) {
  IU16 casted = CRUX__as_iu16(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS64) IU16_MIN)) || (value > ((IS64) IU16_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU16) value;
  }
  CRUX__ResultIU16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu08 (const IU08 value) {
  IU32 casted = CRUX__as_iu32(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IU32) value;
  CRUX__ResultIU32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu16 (const IU16 value) {
  IU32 casted = CRUX__as_iu32(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IU32) value;
  CRUX__ResultIU32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_iu64 (const IU64 value) {
  IU32 casted = CRUX__as_iu32(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU64) IU32_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU32 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is08 (const IS08 value) {
  IU32 casted = CRUX__as_iu32(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS08) IU32_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU32 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is16 (const IS16 value) {
  IU32 casted = CRUX__as_iu32(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS16) IU32_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU32 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is32 (const IS32 value) {
  IU32 casted = CRUX__as_iu32(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS32) IU32_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU32 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU32 CRUX__cast_iu32_is64 (const IS64 value) {
  IU32 casted = CRUX__as_iu32(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS64) IU32_MIN)) || (value > ((IS64) IU32_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU32 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU32) value;
  }
  CRUX__ResultIU32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu08 (const IU08 value) {
  IU64 casted = CRUX__as_iu64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu16 (const IU16 value) {
  IU64 casted = CRUX__as_iu64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_iu32 (const IU32 value) {
  IU64 casted = CRUX__as_iu64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IU64) value;
  CRUX__ResultIU64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is08 (const IS08 value) {
  IU64 casted = CRUX__as_iu64(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS08) IU64_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU64 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is16 (const IS16 value) {
  IU64 casted = CRUX__as_iu64(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS16) IU64_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU64 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is32 (const IS32 value) {
  IU64 casted = CRUX__as_iu64(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS32) IU64_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU64 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIU64 CRUX__cast_iu64_is64 (const IS64 value) {
  IU64 casted = CRUX__as_iu64(0);
  const CRUX__Exception *exceptions = NULL;
  if (value < ((IS64) IU64_MIN)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IU64 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IU64) value;
  }
  CRUX__ResultIU64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu08 (const IU08 value) {
  IS08 casted = CRUX__as_is08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU08) IS08_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu16 (const IU16 value) {
  IS08 casted = CRUX__as_is08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU16) IS08_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu32 (const IU32 value) {
  IS08 casted = CRUX__as_is08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU32) IS08_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_iu64 (const IU64 value) {
  IS08 casted = CRUX__as_is08(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU64) IS08_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is16 (const IS16 value) {
  IS08 casted = CRUX__as_is08(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS16) IS08_MIN)) || (value > ((IS16) IS08_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is32 (const IS32 value) {
  IS08 casted = CRUX__as_is08(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS32) IS08_MIN)) || (value > ((IS32) IS08_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS08 CRUX__cast_is08_is64 (const IS64 value) {
  IS08 casted = CRUX__as_is08(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS64) IS08_MIN)) || (value > ((IS64) IS08_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS08 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS08) value;
  }
  CRUX__ResultIS08 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu08 (const IU08 value) {
  IS16 casted = CRUX__as_is16(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS16) value;
  CRUX__ResultIS16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu16 (const IU16 value) {
  IS16 casted = CRUX__as_is16(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU16) IS16_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu32 (const IU32 value) {
  IS16 casted = CRUX__as_is16(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU32) IS16_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_iu64 (const IU64 value) {
  IS16 casted = CRUX__as_is16(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU64) IS16_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is08 (const IS08 value) {
  IS16 casted = CRUX__as_is16(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS16) value;
  CRUX__ResultIS16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is32 (const IS32 value) {
  IS16 casted = CRUX__as_is16(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS32) IS16_MIN)) || (value > ((IS32) IS16_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS16 CRUX__cast_is16_is64 (const IS64 value) {
  IS16 casted = CRUX__as_is16(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS64) IS16_MIN)) || (value > ((IS64) IS16_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS16 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS16) value;
  }
  CRUX__ResultIS16 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu08 (const IU08 value) {
  IS32 casted = CRUX__as_is32(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu16 (const IU16 value) {
  IS32 casted = CRUX__as_is32(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu32 (const IU32 value) {
  IS32 casted = CRUX__as_is32(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU32) IS32_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS32 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_iu64 (const IU64 value) {
  IS32 casted = CRUX__as_is32(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU64) IS32_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS32 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is08 (const IS08 value) {
  IS32 casted = CRUX__as_is32(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is16 (const IS16 value) {
  IS32 casted = CRUX__as_is32(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS32) value;
  CRUX__ResultIS32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS32 CRUX__cast_is32_is64 (const IS64 value) {
  IS32 casted = CRUX__as_is32(0);
  const CRUX__Exception *exceptions = NULL;
  if ((value < ((IS64) IS32_MIN)) || (value > ((IS64) IS32_MAX))) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS64 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS32) value;
  }
  CRUX__ResultIS32 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu08 (const IU08 value) {
  IS64 casted = CRUX__as_is64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu16 (const IU16 value) {
  IS64 casted = CRUX__as_is64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu32 (const IU32 value) {
  IS64 casted = CRUX__as_is64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_iu64 (const IU64 value) {
  IS64 casted = CRUX__as_is64(0);
  const CRUX__Exception *exceptions = NULL;
  if (value > ((IU64) IS64_MAX)) {
    const CRUX__Exception exception = {
      .error = CRUX__ERROR_VALUE,
      .info = "Casting to IS64 result in lost data.",
      .filepath = __FILE__,
      .line = (((IU32) __LINE__) + CRUX__as_iu32(3))};
    CRUX__exceptions_push(&exceptions, exception);
  } else {
    casted = (IS64) value;
  }
  CRUX__ResultIS64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is08 (const IS08 value) {
  IS64 casted = CRUX__as_is64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is16 (const IS16 value) {
  IS64 casted = CRUX__as_is64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.expts = exceptions, .value = casted};
  return result;
}


CRUX__ResultIS64 CRUX__cast_is64_is32 (const IS32 value) {
  IS64 casted = CRUX__as_is64(0);
  const CRUX__Exception *exceptions = NULL;
  casted = (IS64) value;
  CRUX__ResultIS64 result = {.expts = exceptions, .value = casted};
  return result;
}
