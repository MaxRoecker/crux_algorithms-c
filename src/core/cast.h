/**
 * ---------------------------------------------------------------------------
 * @file   cast.h
 * @brief  Standard functions to cast types into other.
 *
 */
#pragma once
#include "./results.h"
#define CRUX__CORE_ERROR_CODE__INTEGER_CAST 0x00000100


/**
 * @brief Cast an IU16 value into a IU08.
 *
 * @param[in] value An IU16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_iu16 (const IU16 value);

/**
 * @brief Cast an IU32 value into a IU08.
 *
 * @param[in] value An IU32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_iu32 (const IU32 value);

/**
 * @brief Cast an IU64 value into a IU08.
 *
 * @param[in] value An IU64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_iu64 (const IU64 value);

/**
 * @brief Cast an IS08 value into a IU08.
 *
 * @param[in] value An IS08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is08 (const IS08 value);

/**
 * @brief Cast an IS16 value into a IU08.
 *
 * @param[in] value An IS16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is16 (const IS16 value);

/**
 * @brief Cast an IS32 value into a IU08.
 *
 * @param[in] value An IS32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is32 (const IS32 value);

/**
 * @brief Cast an IS64 value into a IU08.
 *
 * @param[in] value An IS64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_is64 (const IS64 value);

/**
 * @brief Cast an IU08 value into a IU16.
 *
 * @param[in] value An IU08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_iu08 (const IU08 value);

/**
 * @brief Cast an IU32 value into a IU16.
 *
 * @param[in] value An IU32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_iu32 (const IU32 value);

/**
 * @brief Cast an IU64 value into a IU16.
 *
 * @param[in] value An IU64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_iu64 (const IU64 value);

/**
 * @brief Cast an IS08 value into a IU16.
 *
 * @param[in] value An IS08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is08 (const IS08 value);

/**
 * @brief Cast an IS16 value into a IU16.
 *
 * @param[in] value An IS16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is16 (const IS16 value);

/**
 * @brief Cast an IS32 value into a IU16.
 *
 * @param[in] value An IS32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is32 (const IS32 value);

/**
 * @brief Cast an IS64 value into a IU16.
 *
 * @param[in] value An IS64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_is64 (const IS64 value);

/**
 * @brief Cast an IU08 value into a IU32.
 *
 * @param[in] value An IU08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_iu08 (const IU08 value);

/**
 * @brief Cast an IU16 value into a IU32.
 *
 * @param[in] value An IU16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_iu16 (const IU16 value);

/**
 * @brief Cast an IU64 value into a IU32.
 *
 * @param[in] value An IU64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_iu64 (const IU64 value);

/**
 * @brief Cast an IS08 value into a IU32.
 *
 * @param[in] value An IS08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is08 (const IS08 value);

/**
 * @brief Cast an IS16 value into a IU32.
 *
 * @param[in] value An IS16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is16 (const IS16 value);

/**
 * @brief Cast an IS32 value into a IU32.
 *
 * @param[in] value An IS32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is32 (const IS32 value);

/**
 * @brief Cast an IS64 value into a IU32.
 *
 * @param[in] value An IS64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_is64 (const IS64 value);

/**
 * @brief Cast an IU08 value into a IU64.
 *
 * @param[in] value An IU08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_iu08 (const IU08 value);

/**
 * @brief Cast an IU16 value into a IU64.
 *
 * @param[in] value An IU16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_iu16 (const IU16 value);

/**
 * @brief Cast an IU32 value into a IU64.
 *
 * @param[in] value An IU32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_iu32 (const IU32 value);

/**
 * @brief Cast an IS08 value into a IU64.
 *
 * @param[in] value An IS08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is08 (const IS08 value);

/**
 * @brief Cast an IS16 value into a IU64.
 *
 * @param[in] value An IS16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is16 (const IS16 value);

/**
 * @brief Cast an IS32 value into a IU64.
 *
 * @param[in] value An IS32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is32 (const IS32 value);

/**
 * @brief Cast an IS64 value into a IU64.
 *
 * @param[in] value An IS64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_is64 (const IS64 value);

/**
 * @brief Cast an IU08 value into a IS08.
 *
 * @param[in] value An IU08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu08 (const IU08 value);

/**
 * @brief Cast an IU16 value into a IS08.
 *
 * @param[in] value An IU16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu16 (const IU16 value);

/**
 * @brief Cast an IU32 value into a IS08.
 *
 * @param[in] value An IU32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu32 (const IU32 value);

/**
 * @brief Cast an IU64 value into a IS08.
 *
 * @param[in] value An IU64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_iu64 (const IU64 value);

/**
 * @brief Cast an IS16 value into a IS08.
 *
 * @param[in] value An IS16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_is16 (const IS16 value);

/**
 * @brief Cast an IS32 value into a IS08.
 *
 * @param[in] value An IS32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_is32 (const IS32 value);

/**
 * @brief Cast an IS64 value into a IS08.
 *
 * @param[in] value An IS64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_is64 (const IS64 value);

/**
 * @brief Cast an IU08 value into a IS16.
 *
 * @param[in] value An IU08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu08 (const IU08 value);

/**
 * @brief Cast an IU16 value into a IS16.
 *
 * @param[in] value An IU16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu16 (const IU16 value);

/**
 * @brief Cast an IU32 value into a IS16.
 *
 * @param[in] value An IU32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu32 (const IU32 value);

/**
 * @brief Cast an IU64 value into a IS16.
 *
 * @param[in] value An IU64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_iu64 (const IU64 value);

/**
 * @brief Cast an IS08 value into a IS16.
 *
 * @param[in] value An IS08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_is08 (const IS08 value);

/**
 * @brief Cast an IS32 value into a IS16.
 *
 * @param[in] value An IS32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_is32 (const IS32 value);

/**
 * @brief Cast an IS64 value into a IS16.
 *
 * @param[in] value An IS64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_is64 (const IS64 value);

/**
 * @brief Cast an IU08 value into a IS32.
 *
 * @param[in] value An IU08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu08 (const IU08 value);

/**
 * @brief Cast an IU16 value into a IS32.
 *
 * @param[in] value An IU16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu16 (const IU16 value);

/**
 * @brief Cast an IU32 value into a IS32.
 *
 * @param[in] value An IU32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu32 (const IU32 value);

/**
 * @brief Cast an IU64 value into a IS32.
 *
 * @param[in] value An IU64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_iu64 (const IU64 value);

/**
 * @brief Cast an IS08 value into a IS32.
 *
 * @param[in] value An IS08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_is08 (const IS08 value);

/**
 * @brief Cast an IS16 value into a IS32.
 *
 * @param[in] value An IS16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_is16 (const IS16 value);

/**
 * @brief Cast an IS64 value into a IS32.
 *
 * @param[in] value An IS64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_is64 (const IS64 value);

/**
 * @brief Cast an IU08 value into a IS64.
 *
 * @param[in] value An IU08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu08 (const IU08 value);

/**
 * @brief Cast an IU16 value into a IS64.
 *
 * @param[in] value An IU16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu16 (const IU16 value);

/**
 * @brief Cast an IU32 value into a IS64.
 *
 * @param[in] value An IU32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu32 (const IU32 value);

/**
 * @brief Cast an IU64 value into a IS64.
 *
 * @param[in] value An IU64 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_iu64 (const IU64 value);

/**
 * @brief Cast an IS08 value into a IS64.
 *
 * @param[in] value An IS08 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_is08 (const IS08 value);

/**
 * @brief Cast an IS16 value into a IS64.
 *
 * @param[in] value An IS16 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_is16 (const IS16 value);

/**
 * @brief Cast an IS32 value into a IS64.
 *
 * @param[in] value An IS32 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_is32 (const IS32 value);

/**
 * @brief Cast an FLP1 value into a IU08.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IU08.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IU08.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU08 CRUX__cast_iu08_flp4 (const FLP4 value);

/**
 * @brief Cast an FLP1 value into a IU16.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IU16.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IU16.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU16 CRUX__cast_iu16_flp4 (const FLP4 value);

/**
 * @brief Cast an FLP1 value into a IU32.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IU32.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IU32.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU32 CRUX__cast_iu32_flp4 (const FLP4 value);

/**
 * @brief Cast an FLP1 value into a IU64.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IU64.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IU64.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIU64 CRUX__cast_iu64_flp4 (const FLP4 value);

/**
 * @brief Cast an FLP1 value into a IS08.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IS08.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IS08.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS08 CRUX__cast_is08_flp4 (const FLP4 value);

/**
 * @brief Cast an FLP1 value into a IS16.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IS16.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IS16.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS16 CRUX__cast_is16_flp4 (const FLP4 value);

/**
 * @brief Cast an FLP1 value into a IS32.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IS32.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IS32.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS32 CRUX__cast_is32_flp4 (const FLP4 value);

/**
 * @brief Cast an FLP1 value into a IS64.
 *
 * @param[in] value An FLP1 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_flp1 (const FLP1 value);

/**
 * @brief Cast an FLP2 value into a IS64.
 *
 * @param[in] value An FLP2 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_flp2 (const FLP2 value);

/**
 * @brief Cast an FLP4 value into a IS64.
 *
 * @param[in] value An FLP4 value.
 * @return the result of the casting.
 *
 */
CRUX__ResultIS64 CRUX__cast_is64_flp4 (const FLP4 value);
