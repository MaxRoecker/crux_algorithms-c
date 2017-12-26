/**
 * ---------------------------------------------------------------------------
 * @file   abs.h
 * @brief  Absolute values for core types.
 *
 */
#pragma once
#include "./signal.h"




/**
 * @brief Returns if absolute value of the Char value can have any error.
 * 
 * @param[in] a An Char value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_char_has_error (const Char value);


/**
 * @brief Returns if absolute value of the Size value can have any error.
 * 
 * @param[in] a An Size value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_size_has_error (const Size value);


/**
 * @brief Returns if absolute value of the IU08 value can have any error.
 * 
 * @param[in] a An IU08 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_iu08_has_error (const IU08 value);


/**
 * @brief Returns if absolute value of the IU16 value can have any error.
 * 
 * @param[in] a An IU16 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_iu16_has_error (const IU16 value);


/**
 * @brief Returns if absolute value of the IU32 value can have any error.
 * 
 * @param[in] a An IU32 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_iu32_has_error (const IU32 value);


/**
 * @brief Returns if absolute value of the IU64 value can have any error.
 * 
 * @param[in] a An IU64 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_iu64_has_error (const IU64 value);


/**
 * @brief Returns if absolute value of the IS08 value can have any error.
 * 
 * @param[in] a An IS08 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_is08_has_error (const IS08 value);


/**
 * @brief Returns if absolute value of the IS16 value can have any error.
 * 
 * @param[in] a An IS16 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_is16_has_error (const IS16 value);


/**
 * @brief Returns if absolute value of the IS32 value can have any error.
 * 
 * @param[in] a An IS32 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_is32_has_error (const IS32 value);


/**
 * @brief Returns if absolute value of the IS64 value can have any error.
 * 
 * @param[in] a An IS64 value.
 * @returns true if there is any error in abs(a), false otherwise.
 * 
 */
Bool CRUX__abs_is64_has_error (const IS64 value);




/**
 * @brief Returns the absolute (magnitude) of a Char value.
 *
 * @param[in] value A Char value.
 * @return the absolute value.
 *
 */
CRUX__ResultChar CRUX__abs_char (const Char value);


/**
 * @brief Returns the absolute (magnitude) of a Size value.
 *
 * @param[in] value A Size value.
 * @return the absolute value.
 *
 */
CRUX__ResultSize CRUX__abs_size (const Size value);


/**
 * @brief Returns the absolute (magnitude) of an IU08 value.
 *
 * @param[in] value An IU08 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU08 CRUX__abs_iu08 (const IU08 value);


/**
 * @brief Returns the absolute (magnitude) of an IU16 value.
 *
 * @param[in] value An IU16 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU16 CRUX__abs_iu16 (const IU16 value);


/**
 * @brief Returns the absolute (magnitude) of an IU32 value.
 *
 * @param[in] value An IU32 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU32 CRUX__abs_iu32 (const IU32 value);


/**
 * @brief Returns the absolute (magnitude) of an IU64 value.
 *
 * @param[in] value An IU64 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU64 CRUX__abs_iu64 (const IU64 value);


/**
 * @brief Returns the absolute (magnitude) of an IS08 value.
 *
 * @param[in] value An IS08 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS08 CRUX__abs_is08 (const IS08 value);


/**
 * @brief Returns the absolute (magnitude) of an IS16 value.
 *
 * @param[in] value An IS16 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS16 CRUX__abs_is16 (const IS16 value);


/**
 * @brief Returns the absolute (magnitude) of an IS32 value.
 *
 * @param[in] value An IS32 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS32 CRUX__abs_is32 (const IS32 value);


/**
 * @brief Returns the absolute (magnitude) of an IS64 value.
 *
 * @param[in] value An IS64 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS64 CRUX__abs_is64 (const IS64 value);




#define CRUX__abs_has_error(value) (_Generic(value, \
  IU08 : CRUX__abs_iu08_has_error(value),           \
  IU16 : CRUX__abs_iu16_has_error(value),           \
  IU32 : CRUX__abs_iu32_has_error(value),           \
  IU64 : CRUX__abs_iu64_has_error(value),           \
  IS08 : CRUX__abs_is08_has_error(value),           \
  IS16 : CRUX__abs_is16_has_error(value),           \
  IS32 : CRUX__abs_is32_has_error(value),           \
  IS64 : CRUX__abs_is64_has_error(value),           \
  default : assert(0)))



#define CRUX__abs(value) (_Generic(value, \
  IU08 : CRUX__abs_iu08(value),           \
  IU16 : CRUX__abs_iu16(value),           \
  IU32 : CRUX__abs_iu32(value),           \
  IU64 : CRUX__abs_iu64(value),           \
  IS08 : CRUX__abs_is08(value),           \
  IS16 : CRUX__abs_is16(value),           \
  IS32 : CRUX__abs_is32(value),           \
  IS64 : CRUX__abs_is64(value),           \
  default : assert(0)))
