/**
 * ---------------------------------------------------------------------------
 * @file   abs.h
 * @brief  Absolute values for core types.
 *
 */
#pragma once
#include "./signal.h"


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


/**
 * @brief Returns the absolute (magnitude) of a Size value.
 *
 * @param[in] value A Size value.
 * @return the absolute value.
 *
 */
CRUX__ResultSize CRUX__abs_size (const Size value);



#define CRUX__abs_has_error(value) (_Generic(value, \
  IU08 : false,                                     \
  IU16 : false,                                     \
  IU32 : false,                                     \
  IU64 : false,                                     \
  IS08 : is_min(value),                             \
  IS16 : is_min(value),                             \
  IS32 : is_min(value),                             \
  IS64 : is_min(value)))



#define CRUX__abs(value) _Generic(value, \
  IU08 : CRUX__abs_iu08(value),          \
  IU16 : CRUX__abs_iu16(value),          \
  IU32 : CRUX__abs_iu32(value),          \
  IU64 : CRUX__abs_iu64(value),          \
  IS08 : CRUX__abs_is08(value),          \
  IS16 : CRUX__abs_is16(value),          \
  IS32 : CRUX__abs_is32(value),          \
  IS64 : CRUX__abs_is64(value))
