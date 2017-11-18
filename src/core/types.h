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
 * @li IS64: signed integer of 64 bits.
 *
 */
#pragma once
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <limits.h>




#define nil(type) ((type *) 0)


typedef bool Bool;
typedef char Char;
typedef size_t Size;
typedef uint8_t IU08;
typedef uint16_t IU16;
typedef uint32_t IU32;
typedef uint64_t IU64;
typedef int8_t IS08;
typedef int16_t IS16;
typedef int32_t IS32;
typedef int64_t IS64;


#define BOOL_MIN ((Bool) false)
#define SIZE_MIN ((Size) 0)
#define IU08_MIN UINT8_C(0)
#define IU16_MIN UINT16_C(0)
#define IU32_MIN UINT32_C(0)
#define IU64_MIN UINT64_C(0)
#define IS08_MIN (INT8_MIN)
#define IS16_MIN (INT16_MIN)
#define IS32_MIN (INT32_MIN)
#define IS64_MIN (INT64_MIN)


#define BOOL_MAX ((Bool) true)
#define IU08_MAX (UINT8_MAX)
#define IU16_MAX (UINT16_MAX)
#define IU32_MAX (UINT32_MAX)
#define IU64_MAX (UINT64_MAX)
#define IS08_MAX (INT8_MAX)
#define IS16_MAX (INT16_MAX)
#define IS32_MAX (INT32_MAX)
#define IS64_MAX (INT64_MAX)


#define BOOL_MAGNITUDE_MIN ((Bool) true)
#define CHAR_MAGNITUDE_MIN ((Char) 1)
#define SIZE_MAGNITUDE_MIN ((Size) 1)
#define IU08_MAGNITUDE_MIN UINT8_C(1)
#define IU16_MAGNITUDE_MIN UINT16_C(1)
#define IU32_MAGNITUDE_MIN UINT32_C(1)
#define IU64_MAGNITUDE_MIN UINT64_C(1)
#define IS08_MAGNITUDE_MIN INT8_C(1)
#define IS16_MAGNITUDE_MIN INT16_C(1)
#define IS32_MAGNITUDE_MIN INT32_C(1)
#define IS64_MAGNITUDE_MIN INT64_C(1)


#define BOOL_MAGNITUDE_MAX ((Bool) true)
#define CHAR_MAGNITUDE_MAX (CHAR_MAX)
#define SIZE_MAGNITUDE_MAX (SIZE_MAX)
#define IU08_MAGNITUDE_MAX (UINT8_MAX)
#define IU16_MAGNITUDE_MAX (UINT16_MAX)
#define IU32_MAGNITUDE_MAX (UINT32_MAX)
#define IU64_MAGNITUDE_MAX (UINT64_MAX)
#define IS08_MAGNITUDE_MAX (INT8_MAX)
#define IS16_MAGNITUDE_MAX (INT16_MAX)
#define IS32_MAGNITUDE_MAX (INT32_MAX)
#define IS64_MAGNITUDE_MAX (INT64_MAX)


#define BOOL_INT_PRECISION CRUX__popcount(BOOL_MAX)
#define CHAR_INT_PRECISION CRUX__popcount(CHAR_MAX)
#define SIZE_INT_PRECISION CRUX__popcount(SIZE_MAX)
#define IU08_INT_PRECISION ((Size) 8)
#define IU16_INT_PRECISION ((Size) 16)
#define IU32_INT_PRECISION ((Size) 32)
#define IU64_INT_PRECISION ((Size) 64)
#define IS08_INT_PRECISION ((Size) 7)
#define IS16_INT_PRECISION ((Size) 15)
#define IS32_INT_PRECISION ((Size) 31)
#define IS64_INT_PRECISION ((Size) 63)


#define BOOL_FMT "d"
#define CHAR_FMT "c"
#define SIZE_FMT "zu"
#define IU08_FMT PRIu8
#define IU16_FMT PRIu16
#define IU32_FMT PRIu32
#define IU64_FMT PRIu64
#define IS08_FMT PRId8
#define IS16_FMT PRId16
#define IS32_FMT PRId32
#define IS64_FMT PRId64


#define CRUX__as_iu08(integer) ((IU08) UINT8_C(integer))
#define CRUX__as_iu16(integer) ((IU16) UINT16_C(integer))
#define CRUX__as_iu32(integer) ((IU32) UINT32_C(integer))
#define CRUX__as_iu64(integer) ((IU64) UINT64_C(integer))
#define CRUX__as_is08(integer) ((IS08) INT8_C(integer))
#define CRUX__as_is16(integer) ((IS16) INT16_C(integer))
#define CRUX__as_is32(integer) ((IS32) INT32_C(integer))
#define CRUX__as_is64(integer) ((IS64) INT64_C(integer))
#define CRUX__as_size(integer) ((Size) integer)


#define CRUX__get_int_precision(value) _Generic(value,  \
  Bool : BOOL_INT_PRECISION,                            \
  Char : CHAR_INT_PRECISION,                            \
  IU08 : IU08_INT_PRECISION,                            \
  IU16 : IU16_INT_PRECISION,                            \
  IU32 : IU32_INT_PRECISION,                            \
  IU64 : IU64_INT_PRECISION,                            \
  IS08 : IS08_INT_PRECISION,                            \
  IS16 : IS16_INT_PRECISION,                            \
  IS32 : IS32_INT_PRECISION,                            \
  IS64 : IS64_INT_PRECISION)


#define CRUX__get_max_of(value) _Generic(value, \
  Bool : BOOL_MAX,                              \
  Char : CHAR_MAX,                              \
  IU08 : IU08_MAX,                              \
  IU16 : IU16_MAX,                              \
  IU32 : IU32_MAX,                              \
  IU64 : IU64_MAX,                              \
  IS08 : IS08_MAX,                              \
  IS16 : IS16_MAX,                              \
  IS32 : IS32_MAX,                              \
  IS64 : IS64_MAX)


#define CRUX__get_min_of(value) _Generic(value, \
  Bool : BOOL_MIN,                              \
  Char : CHAR_MIN,                              \
  IU08 : IU08_MIN,                              \
  IU16 : IU16_MIN,                              \
  IU32 : IU32_MIN,                              \
  IU64 : IU64_MIN,                              \
  IS08 : IS08_MIN,                              \
  IS16 : IS16_MIN,                              \
  IS32 : IS32_MIN,                              \
  IS64 : IS64_MIN)


#define CRUX__get_magnitude_max_of(value) _Generic(value, \
  Bool : BOOL_MAGNITUDE_MAX,                              \
  Char : CHAR_MAGNITUDE_MAX,                              \
  IU08 : IU08_MAGNITUDE_MAX,                              \
  IU16 : IU16_MAGNITUDE_MAX,                              \
  IU32 : IU32_MAGNITUDE_MAX,                              \
  IU64 : IU64_MAGNITUDE_MAX,                              \
  IS08 : IS08_MAGNITUDE_MAX,                              \
  IS16 : IS16_MAGNITUDE_MAX,                              \
  IS32 : IS32_MAGNITUDE_MAX,                              \
  IS64 : IS64_MAGNITUDE_MAX)


#define CRUX__get_magnitude_min_of(value) _Generic(value, \
  Bool : BOOL_MAGNITUDE_MIN,                              \
  Char : CHAR_MAGNITUDE_MIN,                              \
  IU08 : IU08_MAGNITUDE_MIN,                              \
  IU16 : IU16_MAGNITUDE_MIN,                              \
  IU32 : IU32_MAGNITUDE_MIN,                              \
  IU64 : IU64_MAGNITUDE_MIN,                              \
  IS08 : IS08_MAGNITUDE_MIN,                              \
  IS16 : IS16_MAGNITUDE_MIN,                              \
  IS32 : IS32_MAGNITUDE_MIN,                              \
  IS64 : IS64_MAGNITUDE_MIN)


#define CRUX__get_fmt_of(value) _Generic(value, \
  Bool : BOOL_FMT,                              \
  Char : CHAR_FMT,                              \
  IU08 : IU08_FMT,                              \
  IU16 : IU16_FMT,                              \
  IU32 : IU32_FMT,                              \
  IU64 : IU64_FMT,                              \
  IS08 : IS08_FMT,                              \
  IS16 : IS16_FMT,                              \
  IS32 : IS32_FMT,                              \
  IS64 : IS64_FMT)


/**
 * @brief The popcount function returns the integer precision of any integer.
 *
 * @param[in] value the value where bits will be count;
 * @return the number of bits on value.
 *
 */
Size CRUX__popcount (uintmax_t value);
