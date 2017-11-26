/**
 * ---------------------------------------------------------------------------
 * @file   order.h
 * @brief  Order comparisons for values of core types.
 *
 */
#pragma once
#include "./results.h"




/**
 * An enumeration-type for comparison results.
 *
 */
typedef enum CRUX__Order {
  CRUX__LESS,
  CRUX__LESS_EQUAL,
  CRUX__EQUAL,
  CRUX__GREATER_EQUAL,
  CRUX__GREATER
} CRUX__Order;


/**
 * @struct CRUX__ResultOrder
 * @brief  Represents a CRUX__Order result with a possible error.
 *
 */
typedef struct CRUX__ResultOrder_Struct {
  CRUX__Trace trace;        /**< The fault trace. */
  const CRUX__Order value;  /**< Result value. */
} CRUX__ResultOrder;


/**
 * A function-type that compares two comparable structures.
 *
 */
typedef CRUX__ResultOrder (*CRUX__OrderFunction)(
  const void *const one,
  const void *const another);




/**
 * @brief Check if the an Char value is less than other Char value.
 * 
 * @param[in] a An Char value;
 * @param[in] b An Char value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_char(const Char a, const Char b);


/**
 * @brief Check if the an IU08 value is less than other IU08 value.
 * 
 * @param[in] a An IU08 value;
 * @param[in] b An IU08 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_iu08(const IU08 a, const IU08 b);


/**
 * @brief Check if the an IU16 value is less than other IU16 value.
 * 
 * @param[in] a An IU16 value;
 * @param[in] b An IU16 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_iu16(const IU16 a, const IU16 b);


/**
 * @brief Check if the an IU32 value is less than other IU32 value.
 * 
 * @param[in] a An IU32 value;
 * @param[in] b An IU32 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_iu32(const IU32 a, const IU32 b);


/**
 * @brief Check if the an IU64 value is less than other IU64 value.
 * 
 * @param[in] a An IU64 value;
 * @param[in] b An IU64 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_iu64(const IU64 a, const IU64 b);


/**
 * @brief Check if the an IS08 value is less than other IS08 value.
 * 
 * @param[in] a An IS08 value;
 * @param[in] b An IS08 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_is08(const IS08 a, const IS08 b);


/**
 * @brief Check if the an IS16 value is less than other IS16 value.
 * 
 * @param[in] a An IS16 value;
 * @param[in] b An IS16 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_is16(const IS16 a, const IS16 b);


/**
 * @brief Check if the an IS32 value is less than other IS32 value.
 * 
 * @param[in] a An IS32 value;
 * @param[in] b An IS32 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_is32(const IS32 a, const IS32 b);


/**
 * @brief Check if the an IS64 value is less than other IS64 value.
 * 
 * @param[in] a An IS64 value;
 * @param[in] b An IS64 value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_is64(const IS64 a, const IS64 b);


/**
 * @brief Check if the an Size value is less than other Size value.
 * 
 * @param[in] a An Size value;
 * @param[in] b An Size value;
 * @return returns true if a < b; false otherwise.
 *
 */
Bool CRUX__is_less_size(const Size a, const Size b);


/**
 * @brief Check if the an Char value is less or equal to other Char value.
 * 
 * @param[in] a An Char value;
 * @param[in] b An Char value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_char (const Char a, const Char b);


/**
 * @brief Check if the an IU08 value is less or equal to other IU08 value.
 * 
 * @param[in] a An IU08 value;
 * @param[in] b An IU08 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Check if the an IU16 value is less or equal to other IU16 value.
 * 
 * @param[in] a An IU16 value;
 * @param[in] b An IU16 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Check if the an IU32 value is less or equal to other IU32 value.
 * 
 * @param[in] a An IU32 value;
 * @param[in] b An IU32 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Check if the an IU64 value is less or equal to other IU64 value.
 * 
 * @param[in] a An IU64 value;
 * @param[in] b An IU64 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Check if the an IS08 value is less or equal to other IS08 value.
 * 
 * @param[in] a An IS08 value;
 * @param[in] b An IS08 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_is08 (const IS08 a, const IS08 b);


/**
 * @brief Check if the an IS16 value is less or equal to other IS16 value.
 * 
 * @param[in] a An IS16 value;
 * @param[in] b An IS16 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_is16 (const IS16 a, const IS16 b);


/**
 * @brief Check if the an IS32 value is less or equal to other IS32 value.
 * 
 * @param[in] a An IS32 value;
 * @param[in] b An IS32 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_is32 (const IS32 a, const IS32 b);


/**
 * @brief Check if the an IS64 value is less or equal to other IS64 value.
 * 
 * @param[in] a An IS64 value;
 * @param[in] b An IS64 value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_is64 (const IS64 a, const IS64 b);


/**
 * @brief Check if the an Size value is less or equal to other Size value.
 * 
 * @param[in] a An Size value;
 * @param[in] b An Size value;
 * @return returns true if a <= b; false otherwise.
 *
 */
Bool CRUX__is_less_equal_size (const Size a, const Size b);


/**
 * @brief Check if an Char value is equal to other Char value.
 * 
 * @param[in] a An Char value;
 * @param[in] b An Char value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_char (const Char a, const Char b);


/**
 * @brief Check if an IU08 value is equal to other IU08 value.
 * 
 * @param[in] a An IU08 value;
 * @param[in] b An IU08 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Check if an IU16 value is equal to other IU16 value.
 * 
 * @param[in] a An IU16 value;
 * @param[in] b An IU16 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Check if an IU32 value is equal to other IU32 value.
 * 
 * @param[in] a An IU32 value;
 * @param[in] b An IU32 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Check if an IU64 value is equal to other IU64 value.
 * 
 * @param[in] a An IU64 value;
 * @param[in] b An IU64 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Check if an IS08 value is equal to other IS08 value.
 * 
 * @param[in] a An IS08 value;
 * @param[in] b An IS08 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_is08 (const IS08 a, const IS08 b);


/**
 * @brief Check if an IS16 value is equal to other IS16 value.
 * 
 * @param[in] a An IS16 value;
 * @param[in] b An IS16 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_is16 (const IS16 a, const IS16 b);


/**
 * @brief Check if an IS32 value is equal to other IS32 value.
 * 
 * @param[in] a An IS32 value;
 * @param[in] b An IS32 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_is32 (const IS32 a, const IS32 b);


/**
 * @brief Check if an IS64 value is equal to other IS64 value.
 * 
 * @param[in] a An IS64 value;
 * @param[in] b An IS64 value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_is64 (const IS64 a, const IS64 b);


/**
 * @brief Check if an Size value is equal to other Size value.
 * 
 * @param[in] a An Size value;
 * @param[in] b An Size value;
 * @return returns true if a == b; false otherwise.
 *
 */
Bool CRUX__is_equal_size (const Size a, const Size b);


/**
 * @brief Check if an Char value is greater or equal to other Char value.
 * 
 * @param[in] a An Char value;
 * @param[in] b An Char value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_char (const Char a, const Char b);


/**
 * @brief Check if an IU08 value is greater or equal to other IU08 value.
 * 
 * @param[in] a An IU08 value;
 * @param[in] b An IU08 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Check if an IU16 value is greater or equal to other IU16 value.
 * 
 * @param[in] a An IU16 value;
 * @param[in] b An IU16 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Check if an IU32 value is greater or equal to other IU32 value.
 * 
 * @param[in] a An IU32 value;
 * @param[in] b An IU32 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Check if an IU64 value is greater or equal to other IU64 value.
 * 
 * @param[in] a An IU64 value;
 * @param[in] b An IU64 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Check if an IS08 value is greater or equal to other IS08 value.
 * 
 * @param[in] a An IS08 value;
 * @param[in] b An IS08 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_is08 (const IS08 a, const IS08 b);


/**
 * @brief Check if an IS16 value is greater or equal to other IS16 value.
 * 
 * @param[in] a An IS16 value;
 * @param[in] b An IS16 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_is16 (const IS16 a, const IS16 b);


/**
 * @brief Check if an IS32 value is greater or equal to other IS32 value.
 * 
 * @param[in] a An IS32 value;
 * @param[in] b An IS32 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_is32 (const IS32 a, const IS32 b);


/**
 * @brief Check if an IS64 value is greater or equal to other IS64 value.
 * 
 * @param[in] a An IS64 value;
 * @param[in] b An IS64 value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_is64 (const IS64 a, const IS64 b);


/**
 * @brief Check if an Size value is greater or equal to other Size value.
 * 
 * @param[in] a An Size value;
 * @param[in] b An Size value;
 * @return returns true if a >= b; false otherwise.
 *
 */
Bool CRUX__is_greater_equal_size (const Size a, const Size b);



/**
 * @brief Check if an Char value is greater than other Char value.
 * 
 * @param[in] a An Char value;
 * @param[in] b An Char value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_char (const Char a, const Char b);


/**
 * @brief Check if an IU08 value is greater than other IU08 value.
 * 
 * @param[in] a An IU08 value;
 * @param[in] b An IU08 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Check if an IU16 value is greater than other IU16 value.
 * 
 * @param[in] a An IU16 value;
 * @param[in] b An IU16 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Check if an IU32 value is greater than other IU32 value.
 * 
 * @param[in] a An IU32 value;
 * @param[in] b An IU32 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Check if an IU64 value is greater than other IU64 value.
 * 
 * @param[in] a An IU64 value;
 * @param[in] b An IU64 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Check if an IS08 value is greater than other IS08 value.
 * 
 * @param[in] a An IS08 value;
 * @param[in] b An IS08 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_is08 (const IS08 a, const IS08 b);


/**
 * @brief Check if an IS16 value is greater than other IS16 value.
 * 
 * @param[in] a An IS16 value;
 * @param[in] b An IS16 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_is16 (const IS16 a, const IS16 b);


/**
 * @brief Check if an IS32 value is greater than other IS32 value.
 * 
 * @param[in] a An IS32 value;
 * @param[in] b An IS32 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_is32 (const IS32 a, const IS32 b);


/**
 * @brief Check if an IS64 value is greater than other IS64 value.
 * 
 * @param[in] a An IS64 value;
 * @param[in] b An IS64 value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_is64 (const IS64 a, const IS64 b);


/**
 * @brief Check if an Size value is greater than other Size value.
 * 
 * @param[in] a An Size value;
 * @param[in] b An Size value;
 * @return returns true if a > b; false otherwise.
 *
 */
Bool CRUX__is_greater_size (const Size a, const Size b);




/**
 * @brief Compare two Char values.
 * 
 * @param[in] a An Char value;
 * @param[in] b An Char value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_char(const Char a, const Char b);


/**
 * @brief Compare two Char values.
 * 
 * @param[in] a An Char value;
 * @param[in] b An Char value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_size(const Size a, const Size b);


/**
 * @brief Compare two IU08 values.
 * 
 * @param[in] a An IU08 value;
 * @param[in] b An IU08 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_iu08(const IU08 a, const IU08 b);


/**
 * @brief Compare two IU16 values.
 * 
 * @param[in] a An IU16 value;
 * @param[in] b An IU16 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_iu16(const IU16 a, const IU16 b);


/**
 * @brief Compare two IU32 values.
 * 
 * @param[in] a An IU32 value;
 * @param[in] b An IU32 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_iu32(const IU32 a, const IU32 b);


/**
 * @brief Compare two IU64 values.
 * 
 * @param[in] a An IU64 value;
 * @param[in] b An IU64 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_iu64(const IU64 a, const IU64 b);


/**
 * @brief Compare two IS08 values.
 * 
 * @param[in] a An IS08 value;
 * @param[in] b An IS08 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_is08(const IS08 a, const IS08 b);


/**
 * @brief Compare two IS16 values.
 * 
 * @param[in] a An IS16 value;
 * @param[in] b An IS16 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_is16(const IS16 a, const IS16 b);


/**
 * @brief Compare two IS32 values.
 * 
 * @param[in] a An IS32 value;
 * @param[in] b An IS32 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_is32(const IS32 a, const IS32 b);


/**
 * @brief Compare two IS64 values.
 * 
 * @param[in] a An IS64 value;
 * @param[in] b An IS64 value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_is64(const IS64 a, const IS64 b);


/**
 * @brief Compare two Size values.
 * 
 * @param[in] a An Size value;
 * @param[in] b An Size value;
 * @return returns the order relation from a to b.
 *
 */
CRUX__Order CRUX__compare_size(const Size a, const Size b);




/**
 * @brief Compare two Char values in the addresses.
 * 
 * @param[in] one     An Char address.
 * @param[in] another An Char address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_char(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IU08 values in the addresses.
 * 
 * @param[in] one     An IU08 address.
 * @param[in] another An IU08 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_iu08(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IU16 values in the addresses.
 * 
 * @param[in] one     An IU16 address.
 * @param[in] another An IU16 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_iu16(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IU32 values in the addresses.
 * 
 * @param[in] one     An IU32 address.
 * @param[in] another An IU32 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_iu32(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IU64 values in the addresses.
 * 
 * @param[in] one     An IU64 address.
 * @param[in] another An IU64 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_iu64(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IS08 values in the addresses.
 * 
 * @param[in] one     An IS08 address.
 * @param[in] another An IS08 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_is08(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IS16 values in the addresses.
 * 
 * @param[in] one     An IS16 address.
 * @param[in] another An IS16 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_is16(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IS32 values in the addresses.
 * 
 * @param[in] one     An IS32 address.
 * @param[in] another An IS32 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_is32(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two IS64 values in the addresses.
 * 
 * @param[in] one     An IS64 address.
 * @param[in] another An IS64 address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_is64(
  const void *const one,
  const void *const another);


/**
 * @brief Compare two Size values in the addresses.
 * 
 * @param[in] one     An Size address.
 * @param[in] another An Size address.
 * 
 * @returns the result of the order relation.
 * 
 */
CRUX__ResultOrder CRUX__compare_addr_size(
  const void *const one,
  const void *const another);




#define CRUX__is_less(a, b) (_Generic(a,                    \
  Char : _Generic(b,                                        \
    Char : CRUX__is_less_char(a, b), default : assert(0)),  \
  IU08 : _Generic(b,                                        \
    IU08 : CRUX__is_less_iu08(a, b), default : assert(0)),  \
  IU16 : _Generic(b,                                        \
    IU16 : CRUX__is_less_iu16(a, b), default : assert(0)),  \
  IU32 : _Generic(b,                                        \
    IU32 : CRUX__is_less_iu32(a, b), default : assert(0)),  \
  IU64 : _Generic(b,                                        \
    IU64 : CRUX__is_less_iu64(a, b), default : assert(0)),  \
  IS08 : _Generic(b,                                        \
    IS08 : CRUX__is_less_is08(a, b), default : assert(0)),  \
  IS16 : _Generic(b,                                        \
    IS16 : CRUX__is_less_is16(a, b), default : assert(0)),  \
  IS32 : _Generic(b,                                        \
    IS32 : CRUX__is_less_is32(a, b), default : assert(0)),  \
  IS64 : _Generic(b,                                        \
    IS64 : CRUX__is_less_is64(a, b), default : assert(0))))


#define CRUX__is_less_equal(a, b) (_Generic(a,                    \
  Char : _Generic(b,                                              \
    Char : CRUX__is_less_equal_char(a, b), default : assert(0)),  \
  IU08 : _Generic(b,                                              \
    IU08 : CRUX__is_less_equal_iu08(a, b), default : assert(0)),  \
  IU16 : _Generic(b,                                              \
    IU16 : CRUX__is_less_equal_iu16(a, b), default : assert(0)),  \
  IU32 : _Generic(b,                                              \
    IU32 : CRUX__is_less_equal_iu32(a, b), default : assert(0)),  \
  IU64 : _Generic(b,                                              \
    IU64 : CRUX__is_less_equal_iu64(a, b), default : assert(0)),  \
  IS08 : _Generic(b,                                              \
    IS08 : CRUX__is_less_equal_is08(a, b), default : assert(0)),  \
  IS16 : _Generic(b,                                              \
    IS16 : CRUX__is_less_equal_is16(a, b), default : assert(0)),  \
  IS32 : _Generic(b,                                              \
    IS32 : CRUX__is_less_equal_is32(a, b), default : assert(0)),  \
  IS64 : _Generic(b,                                              \
    IS64 : CRUX__is_less_equal_is64(a, b), default : assert(0))))


#define CRUX__is_equal(a, b) (_Generic(a,                   \
  Char : _Generic(b,                                        \
    Char : CRUX__is_equal_char(a, b), default : assert(0)), \
  IU08 : _Generic(b,                                        \
    IU08 : CRUX__is_equal_iu08(a, b), default : assert(0)), \
  IU16 : _Generic(b,                                        \
    IU16 : CRUX__is_equal_iu16(a, b), default : assert(0)), \
  IU32 : _Generic(b,                                        \
    IU32 : CRUX__is_equal_iu32(a, b), default : assert(0)), \
  IU64 : _Generic(b,                                        \
    IU64 : CRUX__is_equal_iu64(a, b), default : assert(0)), \
  IS08 : _Generic(b,                                        \
    IS08 : CRUX__is_equal_is08(a, b), default : assert(0)), \
  IS16 : _Generic(b,                                        \
    IS16 : CRUX__is_equal_is16(a, b), default : assert(0)), \
  IS32 : _Generic(b,                                        \
    IS32 : CRUX__is_equal_is32(a, b), default : assert(0)), \
  IS64 : _Generic(b,                                        \
    IS64 : CRUX__is_equal_is64(a, b), default : assert(0))))


#define CRUX__is_greater_equal(a, b) (_Generic(a,                   \
  Char : _Generic(b,                                                \
    Char : CRUX__is_greater_equal_char(a, b), default : assert(0)), \
  IU08 : _Generic(b,                                                \
    IU08 : CRUX__is_greater_equal_iu08(a, b), default : assert(0)), \
  IU16 : _Generic(b,                                                \
    IU16 : CRUX__is_greater_equal_iu16(a, b), default : assert(0)), \
  IU32 : _Generic(b,                                                \
    IU32 : CRUX__is_greater_equal_iu32(a, b), default : assert(0)), \
  IU64 : _Generic(b,                                                \
    IU64 : CRUX__is_greater_equal_iu64(a, b), default : assert(0)), \
  IS08 : _Generic(b,                                                \
    IS08 : CRUX__is_greater_equal_is08(a, b), default : assert(0)), \
  IS16 : _Generic(b,                                                \
    IS16 : CRUX__is_greater_equal_is16(a, b), default : assert(0)), \
  IS32 : _Generic(b,                                                \
    IS32 : CRUX__is_greater_equal_is32(a, b), default : assert(0)), \
  IS64 : _Generic(b,                                                \
    IS64 : CRUX__is_greater_equal_is64(a, b), default : assert(0))))


#define CRUX__is_greater(a, b) (_Generic(a,                   \
  Char : _Generic(b,                                          \
    Char : CRUX__is_greater_char(a, b), default : assert(0)), \
  IU08 : _Generic(b,                                          \
    IU08 : CRUX__is_greater_iu08(a, b), default : assert(0)), \
  IU16 : _Generic(b,                                          \
    IU16 : CRUX__is_greater_iu16(a, b), default : assert(0)), \
  IU32 : _Generic(b,                                          \
    IU32 : CRUX__is_greater_iu32(a, b), default : assert(0)), \
  IU64 : _Generic(b,                                          \
    IU64 : CRUX__is_greater_iu64(a, b), default : assert(0)), \
  IS08 : _Generic(b,                                          \
    IS08 : CRUX__is_greater_is08(a, b), default : assert(0)), \
  IS16 : _Generic(b,                                          \
    IS16 : CRUX__is_greater_is16(a, b), default : assert(0)), \
  IS32 : _Generic(b,                                          \
    IS32 : CRUX__is_greater_is32(a, b), default : assert(0)), \
  IS64 : _Generic(b,                                          \
    IS64 : CRUX__is_greater_is64(a, b), default : assert(0)))) 


#define CRUX__compare(a, b) (_Generic(a,                    \
  Char : _Generic(b,                                        \
    Char : CRUX__compare_char(a, b), default : assert(0)),  \
  IU08 : _Generic(b,                                        \
    IU08 : CRUX__compare_iu08(a, b), default : assert(0)),  \
  IU16 : _Generic(b,                                        \
    IU16 : CRUX__compare_iu16(a, b), default : assert(0)),  \
  IU32 : _Generic(b,                                        \
    IU32 : CRUX__compare_iu32(a, b), default : assert(0)),  \
  IU64 : _Generic(b,                                        \
    IU64 : CRUX__compare_iu64(a, b), default : assert(0)),  \
  IS08 : _Generic(b,                                        \
    IS08 : CRUX__compare_is08(a, b), default : assert(0)),  \
  IS16 : _Generic(b,                                        \
    IS16 : CRUX__compare_is16(a, b), default : assert(0)),  \
  IS32 : _Generic(b,                                        \
    IS32 : CRUX__compare_is32(a, b), default : assert(0)),  \
  IS64 : _Generic(b,                                        \
    IS64 : CRUX__compare_is64(a, b), default : assert(0))))


