/**
 * ---------------------------------------------------------------------------
 * @file   cast.h
 * @brief  Standard functions to cast types into other.
 *
 */
#pragma once
#include <math.h>
#include "./results.h"
#define CRUX__CORE_ERROR_CODE__INTEGER_CAST 0x00000100


/**
 * @brief Cast an iu16 value into a iu08.
 *
 * @param[in] value An iu16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_iu16 (const iu16 value);

/**
 * @brief Cast an iu32 value into a iu08.
 *
 * @param[in] value An iu32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_iu32 (const iu32 value);

/**
 * @brief Cast an iu64 value into a iu08.
 *
 * @param[in] value An iu64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_iu64 (const iu64 value);

/**
 * @brief Cast an is08 value into a iu08.
 *
 * @param[in] value An is08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is08 (const is08 value);

/**
 * @brief Cast an is16 value into a iu08.
 *
 * @param[in] value An is16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is16 (const is16 value);

/**
 * @brief Cast an is32 value into a iu08.
 *
 * @param[in] value An is32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is32 (const is32 value);

/**
 * @brief Cast an is64 value into a iu08.
 *
 * @param[in] value An is64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is64 (const is64 value);

/**
 * @brief Cast an iu08 value into a iu16.
 *
 * @param[in] value An iu08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_iu08 (const iu08 value);

/**
 * @brief Cast an iu32 value into a iu16.
 *
 * @param[in] value An iu32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_iu32 (const iu32 value);

/**
 * @brief Cast an iu64 value into a iu16.
 *
 * @param[in] value An iu64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_iu64 (const iu64 value);

/**
 * @brief Cast an is08 value into a iu16.
 *
 * @param[in] value An is08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is08 (const is08 value);

/**
 * @brief Cast an is16 value into a iu16.
 *
 * @param[in] value An is16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is16 (const is16 value);

/**
 * @brief Cast an is32 value into a iu16.
 *
 * @param[in] value An is32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is32 (const is32 value);

/**
 * @brief Cast an is64 value into a iu16.
 *
 * @param[in] value An is64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is64 (const is64 value);

/**
 * @brief Cast an iu08 value into a iu32.
 *
 * @param[in] value An iu08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_iu08 (const iu08 value);

/**
 * @brief Cast an iu16 value into a iu32.
 *
 * @param[in] value An iu16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_iu16 (const iu16 value);

/**
 * @brief Cast an iu64 value into a iu32.
 *
 * @param[in] value An iu64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_iu64 (const iu64 value);

/**
 * @brief Cast an is08 value into a iu32.
 *
 * @param[in] value An is08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is08 (const is08 value);

/**
 * @brief Cast an is16 value into a iu32.
 *
 * @param[in] value An is16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is16 (const is16 value);

/**
 * @brief Cast an is32 value into a iu32.
 *
 * @param[in] value An is32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is32 (const is32 value);

/**
 * @brief Cast an is64 value into a iu32.
 *
 * @param[in] value An is64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is64 (const is64 value);

/**
 * @brief Cast an iu08 value into a iu64.
 *
 * @param[in] value An iu08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_iu08 (const iu08 value);

/**
 * @brief Cast an iu16 value into a iu64.
 *
 * @param[in] value An iu16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_iu16 (const iu16 value);

/**
 * @brief Cast an iu32 value into a iu64.
 *
 * @param[in] value An iu32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_iu32 (const iu32 value);

/**
 * @brief Cast an is08 value into a iu64.
 *
 * @param[in] value An is08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is08 (const is08 value);

/**
 * @brief Cast an is16 value into a iu64.
 *
 * @param[in] value An is16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is16 (const is16 value);

/**
 * @brief Cast an is32 value into a iu64.
 *
 * @param[in] value An is32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is32 (const is32 value);

/**
 * @brief Cast an is64 value into a iu64.
 *
 * @param[in] value An is64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is64 (const is64 value);

/**
 * @brief Cast an iu08 value into a is08.
 *
 * @param[in] value An iu08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu08 (const iu08 value);

/**
 * @brief Cast an iu16 value into a is08.
 *
 * @param[in] value An iu16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu16 (const iu16 value);

/**
 * @brief Cast an iu32 value into a is08.
 *
 * @param[in] value An iu32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu32 (const iu32 value);

/**
 * @brief Cast an iu64 value into a is08.
 *
 * @param[in] value An iu64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu64 (const iu64 value);

/**
 * @brief Cast an is16 value into a is08.
 *
 * @param[in] value An is16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_is16 (const is16 value);

/**
 * @brief Cast an is32 value into a is08.
 *
 * @param[in] value An is32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_is32 (const is32 value);

/**
 * @brief Cast an is64 value into a is08.
 *
 * @param[in] value An is64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_is64 (const is64 value);

/**
 * @brief Cast an iu08 value into a is16.
 *
 * @param[in] value An iu08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu08 (const iu08 value);

/**
 * @brief Cast an iu16 value into a is16.
 *
 * @param[in] value An iu16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu16 (const iu16 value);

/**
 * @brief Cast an iu32 value into a is16.
 *
 * @param[in] value An iu32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu32 (const iu32 value);

/**
 * @brief Cast an iu64 value into a is16.
 *
 * @param[in] value An iu64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu64 (const iu64 value);

/**
 * @brief Cast an is08 value into a is16.
 *
 * @param[in] value An is08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_is08 (const is08 value);

/**
 * @brief Cast an is32 value into a is16.
 *
 * @param[in] value An is32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_is32 (const is32 value);

/**
 * @brief Cast an is64 value into a is16.
 *
 * @param[in] value An is64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_is64 (const is64 value);

/**
 * @brief Cast an iu08 value into a is32.
 *
 * @param[in] value An iu08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu08 (const iu08 value);

/**
 * @brief Cast an iu16 value into a is32.
 *
 * @param[in] value An iu16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu16 (const iu16 value);

/**
 * @brief Cast an iu32 value into a is32.
 *
 * @param[in] value An iu32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu32 (const iu32 value);

/**
 * @brief Cast an iu64 value into a is32.
 *
 * @param[in] value An iu64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu64 (const iu64 value);

/**
 * @brief Cast an is08 value into a is32.
 *
 * @param[in] value An is08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_is08 (const is08 value);

/**
 * @brief Cast an is16 value into a is32.
 *
 * @param[in] value An is16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_is16 (const is16 value);

/**
 * @brief Cast an is64 value into a is32.
 *
 * @param[in] value An is64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_is64 (const is64 value);

/**
 * @brief Cast an iu08 value into a is64.
 *
 * @param[in] value An iu08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu08 (const iu08 value);

/**
 * @brief Cast an iu16 value into a is64.
 *
 * @param[in] value An iu16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu16 (const iu16 value);

/**
 * @brief Cast an iu32 value into a is64.
 *
 * @param[in] value An iu32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu32 (const iu32 value);

/**
 * @brief Cast an iu64 value into a is64.
 *
 * @param[in] value An iu64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu64 (const iu64 value);

/**
 * @brief Cast an is08 value into a is64.
 *
 * @param[in] value An is08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_is08 (const is08 value);

/**
 * @brief Cast an is16 value into a is64.
 *
 * @param[in] value An is16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_is16 (const is16 value);

/**
 * @brief Cast an is32 value into a is64.
 *
 * @param[in] value An is32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_is32 (const is32 value);
