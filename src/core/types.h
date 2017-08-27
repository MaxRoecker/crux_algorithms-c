#pragma once

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>

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

#define IU08_MIN 0
#define IU16_MIN 0
#define IU32_MIN 0
#define IU64_MIN 0

#define IU08_MAX (UINT8_MAX)
#define IU16_MAX (UINT16_MAX)
#define IU32_MAX (UINT32_MAX)
#define IU64_MAX (UINT64_MAX)

typedef uint8_t     iu08;
typedef uint16_t    iu16;
typedef uint32_t    iu32;
typedef uint64_t    iu64;



#define IS08_MAX (INT8_MAX)
#define IS16_MAX (INT16_MAX)
#define IS32_MAX (INT32_MAX)
#define IS64_MAX (INT64_MAX)

#define IS08_MIN (INT8_MIN)
#define IS16_MIN (INT16_MIN)
#define IS32_MIN (INT32_MIN)
#define IS64_MIN (INT64_MIN)

typedef int8_t      is08;
typedef int16_t     is16;
typedef int32_t     is32;
typedef int64_t     is64;



#define FLP1_MAX (FLT_MAX)
#define FLP2_MAX (DBL_MAX)
#define FLP4_MAX (LDBL_MAX)

#define FLP1_MIN (FLT_MIN)
#define FLP2_MIN (DBL_MIN)
#define FLP4_MIN (LDBL_MIN)

#define FLP1_EPSILON (FLT_EPSILON)
#define FLP2_EPSILON (DBL_EPSILON)
#define FLP4_EPSILON (LDBL_EPSILON)

typedef float       flp1;
typedef double      flp2;
typedef long double flp4;
