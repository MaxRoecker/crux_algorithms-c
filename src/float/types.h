/**
 * ---------------------------------------------------------------------------
 * @file   types.h
 * @brief  Define the standard type system of CRUX.
 *
 * The standard type system of CRUX consists of:
 * @li FLP1: floating point with single precision;
 * @li FLP2: floating point with double precision;
 * @li FLP4: floating point with extended precision.
 *
 */
#pragma once
#include <float.h>
#include <limits.h>
#include <math.h>
#include "./../core/types.h"


typedef float FLP1;
typedef double FLP2;
typedef long double FLP4;

#define FLP1_INT_PRECISION ((uint32_t) (FLT_MANT_DIG * log2(FLT_RADIX)))
#define FLP2_INT_PRECISION ((uint32_t) (DBL_MANT_DIG * log2(FLT_RADIX)))
#define FLP4_INT_PRECISION ((uint32_t) (LDBL_MANT_DIG * log2(FLT_RADIX)))

#define FLP1_MAX (FLT_MAX)
#define FLP2_MAX (DBL_MAX)
#define FLP4_MAX (LDBL_MAX)

#define FLP1_MIN (-FLT_MAX)
#define FLP2_MIN (-DBL_MAX)
#define FLP4_MIN (-LDBL_MAX)

#define FLP1_MAGNITUDE_MAX (FLT_MAX)
#define FLP2_MAGNITUDE_MAX (DBL_MAX)
#define FLP4_MAGNITUDE_MAX (LDBL_MAX)

#define FLP1_MAGNITUDE_MIN (FLT_MIN)
#define FLP2_MAGNITUDE_MIN (DBL_MIN)
#define FLP4_MAGNITUDE_MIN (LDBL_MIN)

#define FLP1_EPSILON (FLT_EPSILON)
#define FLP2_EPSILON (DBL_EPSILON)
#define FLP4_EPSILON (LDBL_EPSILON)

#define FLP1_MANTISSA_MAX ((1UL << (FLT_MANT_DIG - 1UL)) + ((1UL << (FLT_MANT_DIG - 1UL)) - 1UL))
#define FLP2_MANTISSA_MAX ((1UL << (DBL_MANT_DIG - 1UL)) + ((1UL << (DBL_MANT_DIG - 1UL)) - 1UL))
#define FLP4_MANTISSA_MAX ((1UL << (LDBL_MANT_DIG - 1UL)) + ((1UL << (LDBL_MANT_DIG - 1UL)) - 1UL))

#define FLP1_MANTISSA_MIN (-1 * FLP1_MANTISSA_MAX)
#define FLP2_MANTISSA_MIN (-1 * FLP2_MANTISSA_MAX)
#define FLP4_MANTISSA_MIN (-1 * FLP4_MANTISSA_MAX)

#define FLP1_FMT "f"
#define FLP2_FMT "lf"
#define FLP4_FMT "Lf"




#define CRUX__as_flp1(floating) ((FLP1) (floating ## f))
#define CRUX__as_flp2(floating) ((FLP2) (floating))
#define CRUX__as_flp4(floating) ((FLP4) (floating ## l))


#define CRUX__int_as_flp1(integer) ((FLP1) (integer ## .0f))
#define CRUX__int_as_flp2(integer) ((FLP2) (integer ## .0))
#define CRUX__int_as_flp4(integer) ((FLP4) (integer ## .0l))

#undef CRUX__get_int_precision
#define CRUX__get_int_precision(value) _Generic(value,  \
  IU08 : IU08_INT_PRECISION,                            \
  IU16 : IU16_INT_PRECISION,                            \
  IU32 : IU32_INT_PRECISION,                            \
  IU64 : IU64_INT_PRECISION,                            \
  IS08 : IS08_INT_PRECISION,                            \
  IS16 : IS16_INT_PRECISION,                            \
  IS32 : IS32_INT_PRECISION,                            \
  IS64 : IS64_INT_PRECISION,                            \
  FLP1 : FLP1_INT_PRECISION,                            \
  FLP2 : FLP2_INT_PRECISION,                            \
  FLP4 : FLP4_INT_PRECISION)


#undef CRUX__get_max_of
#define CRUX__get_max_of(value) _Generic(value, \
  IU08 : IU08_MAX,                              \
  IU16 : IU16_MAX,                              \
  IU32 : IU32_MAX,                              \
  IU64 : IU64_MAX,                              \
  IS08 : IS08_MAX,                              \
  IS16 : IS16_MAX,                              \
  IS32 : IS32_MAX,                              \
  IS64 : IS64_MAX,                              \
  FLP1 : FLP1_MAX,                              \
  FLP2 : FLP2_MAX,                              \
  FLP4 : FLP4_MAX)


#undef CRUX__get_min_of
#define CRUX__get_min_of(value) _Generic(value, \
  IU08 : IU08_MIN,                              \
  IU16 : IU16_MIN,                              \
  IU32 : IU32_MIN,                              \
  IU64 : IU64_MIN,                              \
  IS08 : IS08_MIN,                              \
  IS16 : IS16_MIN,                              \
  IS32 : IS32_MIN,                              \
  IS64 : IS64_MIN,                              \
  FLP1 : FLP1_MIN,                              \
  FLP2 : FLP2_MIN,                              \
  FLP4 : FLP4_MIN)


#undef CRUX__get_magnitude_max_of
#define CRUX__get_magnitude_max_of(value) _Generic(value, \
  IU08 : IU08_MAGNITUDE_MAX,                              \
  IU16 : IU16_MAGNITUDE_MAX,                              \
  IU32 : IU32_MAGNITUDE_MAX,                              \
  IU64 : IU64_MAGNITUDE_MAX,                              \
  IS08 : IS08_MAGNITUDE_MAX,                              \
  IS16 : IS16_MAGNITUDE_MAX,                              \
  IS32 : IS32_MAGNITUDE_MAX,                              \
  IS64 : IS64_MAGNITUDE_MAX,                              \
  FLP1 : FLP1_MAGNITUDE_MAX,                              \
  FLP2 : FLP2_MAGNITUDE_MAX,                              \
  FLP4 : FLP4_MAGNITUDE_MAX)


#undef CRUX__get_magnitude_min_of
#define CRUX__get_magnitude_min_of(value) _Generic(value, \
  IU08 : IU08_MAGNITUDE_MIN,                              \
  IU16 : IU16_MAGNITUDE_MIN,                              \
  IU32 : IU32_MAGNITUDE_MIN,                              \
  IU64 : IU64_MAGNITUDE_MIN,                              \
  IS08 : IS08_MAGNITUDE_MIN,                              \
  IS16 : IS16_MAGNITUDE_MIN,                              \
  IS32 : IS32_MAGNITUDE_MIN,                              \
  IS64 : IS64_MAGNITUDE_MIN,                              \
  FLP1 : FLP1_MAGNITUDE_MIN,                              \
  FLP2 : FLP2_MAGNITUDE_MIN,                              \
  FLP4 : FLP4_MAGNITUDE_MIN)


#undef CRUX__get_fmt_of
#define CRUX__get_fmt_of(value) _Generic(value, \
  IU08 : IU08_FMT,                              \
  IU16 : IU16_FMT,                              \
  IU32 : IU32_FMT,                              \
  IU64 : IU64_FMT,                              \
  IS08 : IS08_FMT,                              \
  IS16 : IS16_FMT,                              \
  IS32 : IS32_FMT,                              \
  IS64 : IS64_FMT,                              \
  FLP1 : FLP1_FMT,                              \
  FLP2 : FLP2_FMT,                              \
  FLP4 : FLP4_FMT)


#define CRUX__trunc(value) _Generic(value,  \
  FLP1 : ((FLP1) truncf(value)),            \
  FLP2 : ((FLP2) trunc(value)),             \
  FLP4 : ((FLP4) truncl(value)))
