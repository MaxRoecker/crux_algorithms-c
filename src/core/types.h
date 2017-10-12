/**
 * ---------------------------------------------------------------------------
 * @file   types.h
 * @brief  Define the standard type system of CRUX.
 *
 * The standard type system of CRUX consists of:
 * @li IU08: unsigned integer of 08 bits;
 * @li IU16: unsigned integer of 16 bits;
 * @li IU32: unsigned integer of 32 bits;
 * @li IU64: unsigned integer of 64 bits;
 * @li IS64: signed integer of 08 bits;
 * @li IS16: signed integer of 16 bits;
 * @li IS32: signed integer of 32 bits;
 * @li IS64: signed integer of 64 bits;
 * @li FLP1: floating point with single precision;
 * @li FLP2: floating point with double precision;
 * @li FLP4: floating point with extended precision.
 *
 */
#pragma once
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#include <limits.h>
#include <math.h>




typedef uint8_t IU08;
typedef uint16_t IU16;
typedef uint32_t IU32;
typedef uint64_t IU64;

#define IU08_INT_PRECISION (8)
#define IU16_INT_PRECISION (16)
#define IU32_INT_PRECISION (32)
#define IU64_INT_PRECISION (64)

#define AS_IU08(integer) ((IU08) UINT8_C(integer))
#define AS_IU16(integer) ((IU16) UINT16_C(integer))
#define AS_IU32(integer) ((IU32) UINT32_C(integer))
#define AS_IU64(integer) ((IU64) UINT64_C(integer))

#define IU08_MIN (0U)
#define IU16_MIN (0U)
#define IU32_MIN (0U)
#define IU64_MIN (0U)

#define IU08_MAX (UINT8_MAX)
#define IU16_MAX (UINT16_MAX)
#define IU32_MAX (UINT32_MAX)
#define IU64_MAX (UINT64_MAX)

#define IU08_BIGGEST (UINT8_MAX)
#define IU16_BIGGEST (UINT16_MAX)
#define IU32_BIGGEST (UINT32_MAX)
#define IU64_BIGGEST (UINT64_MAX)

#define IU08_SMALLEST (1U)
#define IU16_SMALLEST (1U)
#define IU32_SMALLEST (1U)
#define IU64_SMALLEST (1UL)

#define IU08_FMT PRIu8
#define IU16_FMT PRIu16
#define IU32_FMT PRIu32
#define IU64_FMT PRIu64





typedef int8_t IS08;
typedef int16_t IS16;
typedef int32_t IS32;
typedef int64_t IS64;

#define IS08_INT_PRECISION (7)
#define IS16_INT_PRECISION (15)
#define IS32_INT_PRECISION (31)
#define IS64_INT_PRECISION (63)

#define AS_IS08(integer) ((IS08) INT8_C(integer))
#define AS_IS16(integer) ((IS16) INT16_C(integer))
#define AS_IS32(integer) ((IS32) INT32_C(integer))
#define AS_IS64(integer) ((IS64) INT64_C(integer))

#define IS08_MAX (INT8_MAX)
#define IS16_MAX (INT16_MAX)
#define IS32_MAX (INT32_MAX)
#define IS64_MAX (INT64_MAX)

#define IS08_MIN (INT8_MIN)
#define IS16_MIN (INT16_MIN)
#define IS32_MIN (INT32_MIN)
#define IS64_MIN (INT64_MIN)

#define IS08_BIGGEST (INT8_MAX)
#define IS16_BIGGEST (INT16_MAX)
#define IS32_BIGGEST (INT32_MAX)
#define IS64_BIGGEST (INT64_MAX)

#define IS08_SMALLEST (1)
#define IS16_SMALLEST (1)
#define IS32_SMALLEST (1)
#define IS64_SMALLEST (1L)

#define IS08_FMT PRId8
#define IS16_FMT PRId16
#define IS32_FMT PRId32
#define IS64_FMT PRId64




typedef float FLP1;
typedef double FLP2;
typedef long double FLP4;

#define FLP1_INT_PRECISION (FLT_MANT_DIG * log2(FLT_RADIX))
#define FLP2_INT_PRECISION (DBL_MANT_DIG * log2(FLT_RADIX))
#define FLP4_INT_PRECISION (LDBL_MANT_DIG * log2(FLT_RADIX))

#define FLP1_MAX (FLT_MAX)
#define FLP2_MAX (DBL_MAX)
#define FLP4_MAX (LDBL_MAX)

#define FLP1_MIN (-FLT_MAX)
#define FLP2_MIN (-DBL_MAX)
#define FLP4_MIN (-LDBL_MAX)

#define FLP1_BIGGEST (FLT_MAX)
#define FLP2_BIGGEST (DBL_MAX)
#define FLP4_BIGGEST (LDBL_MAX)

#define FLP1_SMALLEST (FLT_MIN)
#define FLP2_SMALLEST (DBL_MIN)
#define FLP4_SMALLEST (LDBL_MIN)

#define FLP1_EPSILON (FLT_EPSILON)
#define FLP2_EPSILON (DBL_EPSILON)
#define FLP4_EPSILON (LDBL_EPSILON)

#define FLP1_MANTISSA_MAX (1UL << (FLT_MANT_DIG - 1UL)) + ((1UL << (FLT_MANT_DIG - 1)) - 1UL)
#define FLP2_MANTISSA_MAX (1UL << (DBL_MANT_DIG - 1UL)) + ((1UL << (DBL_MANT_DIG - 1)) - 1UL)
#define FLP4_MANTISSA_MAX (1UL << (LDBL_MANT_DIG - 1UL)) + ((1UL << (LDBL_MANT_DIG - 1)) - 1UL)

#define FLP1_FMT "f"
#define FLP2_FMT "lf"
#define FLP4_FMT "Lf"

#define INT_AS_FLP1(integer) integer ## .0f
#define INT_AS_FLP2(integer) integer ## .0
#define INT_AS_FLP4(integer) integer ## .0l

#define AS_FLP1(floating) floating ## f
#define AS_FLP2(floating) floating
#define AS_FLP4(floating) floating ## l




#define INT_PRECISION(value) _Generic(value,  \
  IU08 : IU08_INT_PRECISION,                  \
  IU16 : IU16_INT_PRECISION,                  \
  IU32 : IU32_INT_PRECISION,                  \
  IU64 : IU64_INT_PRECISION,                  \
  IS08 : IS08_INT_PRECISION,                  \
  IS16 : IS16_INT_PRECISION,                  \
  IS32 : IS32_INT_PRECISION,                  \
  IS64 : IS64_INT_PRECISION,                  \
  FLP1 : FLP1_INT_PRECISION,                  \
  FLP2 : FLP2_INT_PRECISION,                  \
  FLP4 : FLP4_INT_PRECISION,                  \
  default: 0)


#define MAX(value) _Generic(value,  \
  IU08 : IU08_MAX,                  \
  IU16 : IU16_MAX,                  \
  IU32 : IU32_MAX,                  \
  IU64 : IU64_MAX,                  \
  IS08 : IS08_MAX,                  \
  IS16 : IS16_MAX,                  \
  IS32 : IS32_MAX,                  \
  IS64 : IS64_MAX,                  \
  FLP1 : FLP1_MAX,                  \
  FLP2 : FLP2_MAX,                  \
  FLP4 : FLP4_MAX,                  \
  default: 0)


#define MIN(value) _Generic(value,  \
  IU08 : IU08_MIN,                  \
  IU16 : IU16_MIN,                  \
  IU32 : IU32_MIN,                  \
  IU64 : IU64_MIN,                  \
  IS08 : IS08_MIN,                  \
  IS16 : IS16_MIN,                  \
  IS32 : IS32_MIN,                  \
  IS64 : IS64_MIN,                  \
  FLP1 : FLP1_MIN,                  \
  FLP2 : FLP2_MIN,                  \
  FLP4 : FLP4_MIN,                  \
  default: 0)


#define BIGGEST(value) _Generic(value,  \
  IU08 : IU08_BIGGEST,                  \
  IU16 : IU16_BIGGEST,                  \
  IU32 : IU32_BIGGEST,                  \
  IU64 : IU64_BIGGEST,                  \
  IS08 : IS08_BIGGEST,                  \
  IS16 : IS16_BIGGEST,                  \
  IS32 : IS32_BIGGEST,                  \
  IS64 : IS64_BIGGEST,                  \
  FLP1 : FLP1_BIGGEST,                  \
  FLP2 : FLP2_BIGGEST,                  \
  FLP4 : FLP4_BIGGEST,                  \
  default: 0)


#define SMALLEST(value) _Generic(value,  \
  IU08 : IU08_SMALLEST,                  \
  IU16 : IU16_SMALLEST,                  \
  IU32 : IU32_SMALLEST,                  \
  IU64 : IU64_SMALLEST,                  \
  IS08 : IS08_SMALLEST,                  \
  IS16 : IS16_SMALLEST,                  \
  IS32 : IS32_SMALLEST,                  \
  IS64 : IS64_SMALLEST,                  \
  FLP1 : FLP1_SMALLEST,                  \
  FLP2 : FLP2_SMALLEST,                  \
  FLP4 : FLP4_SMALLEST,                  \
  default: 0)


#define FMT(value) _Generic(value,  \
  IU08 : IU08_FMT,                  \
  IU16 : IU16_FMT,                  \
  IU32 : IU32_FMT,                  \
  IU64 : IU64_FMT,                  \
  IS08 : IS08_FMT,                  \
  IS16 : IS16_FMT,                  \
  IS32 : IS32_FMT,                  \
  IS64 : IS64_FMT,                  \
  FLP1 : FLP1_FMT,                  \
  FLP2 : FLP2_FMT,                  \
  FLP4 : FLP4_FMT,                  \
  default: "")


#define FLP_TRUNC(value) _Generic(value,  \
  FLP1 : ((FLP1) truncf(value)),          \
  FLP2 : ((FLP2) trunc(value)),           \
  FLP4 : ((FLP4) truncl(value)),          \
  default: trunc(value))
