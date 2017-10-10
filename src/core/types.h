/**
 * ---------------------------------------------------------------------------
 * @file   types.h
 * @brief  Define the standard type system of CRUX.
 *
 * The standard type system of CRUX consists of:
 * @li iu08: unsigned integer of 08 bits;
 * @li iu16: unsigned integer of 16 bits;
 * @li iu32: unsigned integer of 32 bits;
 * @li iu64: unsigned integer of 64 bits;
 * @li is08: signed integer of 08 bits;
 * @li is16: signed integer of 16 bits;
 * @li is32: signed integer of 32 bits;
 * @li is64: signed integer of 64 bits;
 * @li flp1: floating point with single precision;
 * @li flp2: floating point with double precision;
 * @li flp4: floating point with extended precision.
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




typedef uint8_t iu08;
typedef uint16_t iu16;
typedef uint32_t iu32;
typedef uint64_t iu64;

#define IU08_INT_PRECISION 8
#define IU16_INT_PRECISION 16
#define IU32_INT_PRECISION 32
#define IU64_INT_PRECISION 64

#define AS_IU08(integer) ((iu08) UINT8_C(integer))
#define AS_IU16(integer) ((iu16) UINT16_C(integer))
#define AS_IU32(integer) ((iu32) UINT32_C(integer))
#define AS_IU64(integer) ((iu64) UINT64_C(integer))

#define IU08_MIN (0u)
#define IU16_MIN (0u)
#define IU32_MIN (0u)
#define IU64_MIN (0u)

#define IU08_MAX (UINT8_MAX)
#define IU16_MAX (UINT16_MAX)
#define IU32_MAX (UINT32_MAX)
#define IU64_MAX (UINT64_MAX)

#define IU08_BIGGEST (UINT8_MAX)
#define IU16_BIGGEST (UINT16_MAX)
#define IU32_BIGGEST (UINT32_MAX)
#define IU64_BIGGEST (UINT64_MAX)

#define IU08_SMALLEST AS_IU08(1)
#define IU16_SMALLEST AS_IU16(1)
#define IU32_SMALLEST AS_IU32(1)
#define IU64_SMALLEST AS_IU64(1)

#define IU08_FMT PRIu8
#define IU16_FMT PRIu16
#define IU32_FMT PRIu32
#define IU64_FMT PRIu64





typedef int8_t is08;
typedef int16_t is16;
typedef int32_t is32;
typedef int64_t is64;

#define IS08_INT_PRECISION 7
#define IS16_INT_PRECISION 15
#define IS32_INT_PRECISION 31
#define IS64_INT_PRECISION 63

#define AS_IS08(integer) ((is08) INT8_C(integer))
#define AS_IS16(integer) ((is16) INT16_C(integer))
#define AS_IS32(integer) ((is32) INT32_C(integer))
#define AS_IS64(integer) ((is64) INT64_C(integer))

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

#define IS08_SMALLEST AS_IS08(1)
#define IS16_SMALLEST AS_IS16(1)
#define IS32_SMALLEST AS_IS32(1)
#define IS64_SMALLEST AS_IS64(1)

#define IS08_FMT PRId8
#define IS16_FMT PRId16
#define IS32_FMT PRId32
#define IS64_FMT PRId64




typedef float flp1;
typedef double flp2;
typedef long double flp4;

#define FLP1_INT_PRECISION (FLT_MANT_DIG)
#define FLP2_INT_PRECISION (DBL_MANT_DIG)
#define FLP4_INT_PRECISION (LDBL_MANT_DIG)

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
  iu08 : IU08_INT_PRECISION,                  \
  iu16 : IU16_INT_PRECISION,                  \
  iu32 : IU32_INT_PRECISION,                  \
  iu64 : IU64_INT_PRECISION,                  \
  is08 : IS08_INT_PRECISION,                  \
  is16 : IS16_INT_PRECISION,                  \
  is32 : IS32_INT_PRECISION,                  \
  is64 : IS64_INT_PRECISION,                  \
  flp1 : FLP1_INT_PRECISION,                  \
  flp2 : FLP2_INT_PRECISION,                  \
  flp4 : FLP4_INT_PRECISION,                  \
  default: 0)


#define FMT(value) _Generic(value,  \
  iu08 : IU08_FMT,                  \
  iu16 : IU16_FMT,                  \
  iu32 : IU32_FMT,                  \
  iu64 : IU64_FMT,                  \
  is08 : IS08_FMT,                  \
  is16 : IS16_FMT,                  \
  is32 : IS32_FMT,                  \
  is64 : IS64_FMT,                  \
  flp1 : FLP1_FMT,                  \
  flp2 : FLP2_FMT,                  \
  flp4 : FLP4_FMT,                  \
  default: "")


#define FLP_TRUNC(value) _Generic(value,  \
  flp1 : ((flp1) truncf(value)),          \
  flp2 : ((flp2) trunc(value)),           \
  flp4 : ((flp4) truncl(value)),          \
  default: trunc(value))
