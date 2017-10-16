/**
 * ---------------------------------------------------------------------------
 * @file   abs.h
 * @brief  Absolute values for core types.
 *
 */
#pragma once
#include "./../core/core.h"
#include "./errcodes.h"


/**
 * @brief Returns the absolute (magnitude) of an IU08 value.
 *
 * @param[in] value An IU08 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU08 CRUX_MATH__abs_iu08 (const IU08 value);


/**
 * @brief Returns the absolute (magnitude) of an IU16 value.
 *
 * @param[in] value An IU16 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU16 CRUX_MATH__abs_iu16 (const IU16 value);


/**
 * @brief Returns the absolute (magnitude) of an IU32 value.
 *
 * @param[in] value An IU32 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU32 CRUX_MATH__abs_iu32 (const IU32 value);


/**
 * @brief Returns the absolute (magnitude) of an IU64 value.
 *
 * @param[in] value An IU64 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIU64 CRUX_MATH__abs_iu64 (const IU64 value);


/**
 * @brief Returns the absolute (magnitude) of an IS08 value.
 *
 * @param[in] value An IS08 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS08 CRUX_MATH__abs_is08 (const IS08 value);


/**
 * @brief Returns the absolute (magnitude) of an IS16 value.
 *
 * @param[in] value An IS16 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS16 CRUX_MATH__abs_is16 (const IS16 value);


/**
 * @brief Returns the absolute (magnitude) of an IS32 value.
 *
 * @param[in] value An IS32 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS32 CRUX_MATH__abs_is32 (const IS32 value);


/**
 * @brief Returns the absolute (magnitude) of an IS64 value.
 *
 * @param[in] value An IS64 value.
 * @return the absolute value.
 *
 */
CRUX__ResultIS64 CRUX_MATH__abs_is64 (const IS64 value);
