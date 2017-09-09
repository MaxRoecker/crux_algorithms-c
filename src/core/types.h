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

#define IU08_MIN (0u)
#define IU16_MIN (0u)
#define IU32_MIN (0u)
#define IU64_MIN (0u)

#define IU08_MAX (UINT8_MAX)
#define IU16_MAX (UINT16_MAX)
#define IU32_MAX (UINT32_MAX)
#define IU64_MAX (UINT64_MAX)

#define IU08_FMT PRIu8
#define IU16_FMT PRIu16
#define IU32_FMT PRIu32
#define IU64_FMT PRIu64

#define AS_IU08(integer) ((is08) UINT8_C(integer))
#define AS_IU16(integer) ((is16) UINT16_C(integer))
#define AS_IU32(integer) ((is32) UINT32_C(integer))
#define AS_IU64(integer) ((is64) UINT64_C(integer))




typedef int8_t is08;
typedef int16_t is16;
typedef int32_t is32;
typedef int64_t is64;

#define IS08_MAX (INT8_MAX)
#define IS16_MAX (INT16_MAX)
#define IS32_MAX (INT32_MAX)
#define IS64_MAX (INT64_MAX)

#define IS08_MIN (INT8_MIN)
#define IS16_MIN (INT16_MIN)
#define IS32_MIN (INT32_MIN)
#define IS64_MIN (INT64_MIN)

#define IS08_FMT PRId8
#define IS16_FMT PRId16
#define IS32_FMT PRId32
#define IS64_FMT PRId64

#define AS_IS08(integer) ((is08) INT8_C(integer))
#define AS_IS16(integer) ((is16) INT16_C(integer))
#define AS_IS32(integer) ((is32) INT32_C(integer))
#define AS_IS64(integer) ((is64) INT64_C(integer))




typedef float flp1;
typedef double flp2;
typedef long double flp4;

#define FLP1_MAX_POSITIVE (FLT_MAX)
#define FLP2_MAX_POSITIVE (DBL_MAX)
#define FLP4_MAX_POSITIVE (LDBL_MAX)

#define FLP1_MAX_NEGATIVE (-FLT_MAX)
#define FLP2_MAX_NEGATIVE (-DBL_MAX)
#define FLP4_MAX_NEGATIVE (-LDBL_MAX)

#define FLP1_MIN_POSITIVE (FLT_MIN)
#define FLP2_MIN_POSITIVE (DBL_MIN)
#define FLP4_MIN_POSITIVE (LDBL_MIN)

#define FLP1_MIN_NEGATIVE (-FLT_MIN)
#define FLP2_MIN_NEGATIVE (-DBL_MIN)
#define FLP4_MIN_NEGATIVE (-LDBL_MIN)

#define FLP1_EPSILON (FLT_EPSILON)
#define FLP2_EPSILON (DBL_EPSILON)
#define FLP4_EPSILON (LDBL_EPSILON)

#define FLP1_FMT "f"
#define FLP2_FMT "lf"
#define FLP4_FMT "Lf"

#define INT_AS_FLP1(integer) integer ## .0f
#define INT_AS_FLP2(integer) integer ## .0
#define INT_AS_FLP4(integer) integer ## .0l

#define AS_FLP1(floating) floating ## f
#define AS_FLP2(floating) floating
#define AS_FLP4(floating) floating ## l

#define FLP1_MANTISSA_BITS (FLT_MANT_DIG)
#define FLP2_MANTISSA_BITS (DBL_MANT_DIG)
#define FLP4_MANTISSA_BITS (LDBL_MANT_DIG)




#define INT_PRECISION(value) _Generic(value,  \
  iu08 : 8,                                   \
  iu16 : 16,                                  \
  iu32 : 32,                                  \
  iu64 : 64,                                  \
  is08 : 7,                                   \
  is16 : 15,                                  \
  is32 : 31,                                  \
  is64 : 63,                                  \
  flp1 : FLP1_MANTISSA_BITS,                  \
  flp2 : FLP2_MANTISSA_BITS,                  \
  flp4 : FLP4_MANTISSA_BITS,                  \
  default: 0)


#define FLP_TRUNC(value) _Generic(value,  \
  flp1 : ((flp1) truncf(value)),          \
  flp2 : ((flp2) trunc(value)),           \
  flp4 : ((flp4) truncl(value)),          \
  default: trunc(value))
