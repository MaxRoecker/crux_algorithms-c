/**
 * ---------------------------------------------------------------------------
 * @file   signal.h
 * @brief  Absolute values for core types.
 *
 */
#pragma once
#include "./error.h"


/**
 * @brief Checks if the Char is positive.
 * 
 * @param[in] value An Char value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_char (const Char value);


/**
 * @brief Checks if the Size is positive.
 * 
 * @param[in] value An Size value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_size (const Size value);


/**
 * @brief Checks if the IU08 is positive.
 * 
 * @param[in] value An IU08 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_iu08 (const IU08 value);


/**
 * @brief Checks if the IU16 is positive.
 * 
 * @param[in] value An IU16 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_iu16 (const IU16 value);


/**
 * @brief Checks if the IU32 is positive.
 * 
 * @param[in] value An IU32 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_iu32 (const IU32 value);


/**
 * @brief Checks if the IU64 is positive.
 * 
 * @param[in] value An IU64 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_iu64 (const IU64 value);


/**
 * @brief Checks if the IS08 is positive.
 * 
 * @param[in] value An IS08 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_is08 (const IS08 value);


/**
 * @brief Checks if the IS16 is positive.
 * 
 * @param[in] value An IS16 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_is16 (const IS16 value);


/**
 * @brief Checks if the IS32 is positive.
 * 
 * @param[in] value An IS32 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_is32 (const IS32 value);


/**
 * @brief Checks if the IS64 is positive.
 * 
 * @param[in] value An IS64 value.
 * @returns true if the value is greater than zero, false otherwise.
 * 
 */
Bool CRUX__is_positive_is64 (const IS64 value);




/**
 * @brief Checks if the Char is positive.
 * 
 * @param[in] value An Char value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_char (const Char value);


/**
 * @brief Checks if the Size is positive.
 * 
 * @param[in] value An Size value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_size (const Size value);


/**
 * @brief Checks if the IU08 is positive.
 * 
 * @param[in] value An IU08 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_iu08 (const IU08 value);


/**
 * @brief Checks if the IU16 is positive.
 * 
 * @param[in] value An IU16 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_iu16 (const IU16 value);


/**
 * @brief Checks if the IU32 is positive.
 * 
 * @param[in] value An IU32 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_iu32 (const IU32 value);


/**
 * @brief Checks if the IU64 is positive.
 * 
 * @param[in] value An IU64 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_iu64 (const IU64 value);


/**
 * @brief Checks if the IS08 is positive.
 * 
 * @param[in] value An IS08 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_is08 (const IS08 value);


/**
 * @brief Checks if the IS16 is positive.
 * 
 * @param[in] value An IS16 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_is16 (const IS16 value);


/**
 * @brief Checks if the IS32 is positive.
 * 
 * @param[in] value An IS32 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_is32 (const IS32 value);


/**
 * @brief Checks if the IS64 is positive.
 * 
 * @param[in] value An IS64 value.
 * @returns true if the value is less than zero, false otherwise.
 * 
 */
Bool CRUX__is_negative_is64 (const IS64 value);




/**
 * @brief Checks if the Char is positive.
 * 
 * @param[in] value An Char value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_char (const Char value);


/**
 * @brief Checks if the Size is positive.
 * 
 * @param[in] value An Size value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_size (const Size value);


/**
 * @brief Checks if the IU08 is positive.
 * 
 * @param[in] value An IU08 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_iu08 (const IU08 value);


/**
 * @brief Checks if the IU16 is positive.
 * 
 * @param[in] value An IU16 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_iu16 (const IU16 value);


/**
 * @brief Checks if the IU32 is positive.
 * 
 * @param[in] value An IU32 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_iu32 (const IU32 value);


/**
 * @brief Checks if the IU64 is positive.
 * 
 * @param[in] value An IU64 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_iu64 (const IU64 value);


/**
 * @brief Checks if the IS08 is positive.
 * 
 * @param[in] value An IS08 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_is08 (const IS08 value);


/**
 * @brief Checks if the IS16 is positive.
 * 
 * @param[in] value An IS16 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_is16 (const IS16 value);


/**
 * @brief Checks if the IS32 is positive.
 * 
 * @param[in] value An IS32 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_is32 (const IS32 value);


/**
 * @brief Checks if the IS64 is positive.
 * 
 * @param[in] value An IS64 value.
 * @returns true if the value is equal to zero, false otherwise.
 * 
 */
Bool CRUX__is_zero_is64 (const IS64 value);




#define CRUX__is_positive(value) (_Generic(value, \
  IU08 : CRUX__is_positive_iu08(value),           \
  IU16 : CRUX__is_positive_iu16(value),           \
  IU32 : CRUX__is_positive_iu32(value),           \
  IU64 : CRUX__is_positive_iu64(value),           \
  IS08 : CRUX__is_positive_is08(value),           \
  IS16 : CRUX__is_positive_is16(value),           \
  IS32 : CRUX__is_positive_is32(value),           \
  IS64 : CRUX__is_positive_is64(value),           \
  default : assert(0)))


#define CRUX__is_negative(value) (_Generic(value, \
  IU08 : CRUX__is_negative_iu08(value),           \
  IU16 : CRUX__is_negative_iu16(value),           \
  IU32 : CRUX__is_negative_iu32(value),           \
  IU64 : CRUX__is_negative_iu64(value),           \
  IS08 : CRUX__is_negative_is08(value),           \
  IS16 : CRUX__is_negative_is16(value),           \
  IS32 : CRUX__is_negative_is32(value),           \
  IS64 : CRUX__is_negative_is64(value),           \
  default : assert(0)))


#define CRUX__is_zero(value) (_Generic(value, \
  IU08 : CRUX__is_zero_iu08(value),           \
  IU16 : CRUX__is_zero_iu16(value),           \
  IU32 : CRUX__is_zero_iu32(value),           \
  IU64 : CRUX__is_zero_iu64(value),           \
  IS08 : CRUX__is_zero_is08(value),           \
  IS16 : CRUX__is_zero_is16(value),           \
  IS32 : CRUX__is_zero_is32(value),           \
  IS64 : CRUX__is_zero_is64(value),           \
  default : assert(0)))
