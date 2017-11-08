/**
 * ---------------------------------------------------------------------------
 * @file   sum.h
 * @brief  Addition for values of core types.
 *
 */
#pragma once
#include "./error.h"





/**
 * @brief Returns a secure addition of an IU08 and an IU08.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU08 CRUX_ARITH__add_iu08_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IU08 and an IU16.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU16 CRUX_ARITH__add_iu08_iu16 (const IU08 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IU08 and an IU32.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu08_iu32 (const IU08 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IU08 and an IU64.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu08_iu64 (const IU08 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IU08 and an IS08.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU08 CRUX_ARITH__add_iu08_is08 (const IU08 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IU08 and an IS16.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS16 CRUX_ARITH__add_iu08_is16 (const IU08 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IU08 and an IS32.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_iu08_is32 (const IU08 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IU08 and an IS64.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_iu08_is64 (const IU08 a, const IS64 b);


/**
 * @brief Returns a secure addition of an IU16 and an IU08.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU16 CRUX_ARITH__add_iu16_iu08 (const IU16 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IU16 and an IU16.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU16 CRUX_ARITH__add_iu16_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IU16 and an IU32.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu16_iu32 (const IU16 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IU16 and an IU64.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu16_iu64 (const IU16 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IU16 and an IS08.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU16 CRUX_ARITH__add_iu16_is08 (const IU16 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IU16 and an IS16.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU16 CRUX_ARITH__add_iu16_is16 (const IU16 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IU16 and an IS32.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_iu16_is32 (const IU16 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IU16 and an IS64.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_iu16_is64 (const IU16 a, const IS64 b);


/**
 * @brief Returns a secure addition of an IU32 and an IU08.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu32_iu08 (const IU32 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IU32 and an IU16.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu32_iu16 (const IU32 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IU32 and an IU32.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu32_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IU32 and an IU64.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu32_iu64 (const IU32 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IU32 and an IS08.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu32_is08 (const IU32 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IU32 and an IS16.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu32_is16 (const IU32 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IU32 and an IS32.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_iu32_is32 (const IU32 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IU32 and an IS64.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_iu32_is64 (const IU32 a, const IS64 b);


/**
 * @brief Returns a secure addition of an IU64 and an IU08.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu08 (const IU64 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IU64 and an IU16.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu16 (const IU64 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IU64 and an IU32.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu32 (const IU64 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IU64 and an IU64.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IU64 and an IS08.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_is08 (const IU64 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IU64 and an IS16.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_is16 (const IU64 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IU64 and an IS32.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_is32 (const IU64 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IU64 and an IS64.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_iu64_is64 (const IU64 a, const IS64 b);


/**
 * @brief Returns a secure addition of an IS08 and an IU08.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU08 CRUX_ARITH__add_is08_iu08 (const IS08 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IS08 and an IU16.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU16 CRUX_ARITH__add_is08_iu16 (const IS08 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IS08 and an IU32.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_is08_iu32 (const IS08 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IS08 and an IU64.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_is08_iu64 (const IS08 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IS08 and an IS08.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS08 CRUX_ARITH__add_is08_is08 (const IS08 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IS08 and an IS16.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS16 CRUX_ARITH__add_is08_is16 (const IS08 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IS08 and an IS32.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_is08_is32 (const IS08 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IS08 and an IS64.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is08_is64 (const IS08 a, const IS64 b);


/**
 * @brief Returns a secure addition of an IS16 and an IU08.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS16 CRUX_ARITH__add_is16_iu08 (const IS16 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IS16 and an IU16.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU16 CRUX_ARITH__add_is16_iu16 (const IS16 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IS16 and an IU32.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_is16_iu32 (const IS16 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IS16 and an IU64.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_is16_iu64 (const IS16 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IS16 and an IS08.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS16 CRUX_ARITH__add_is16_is08 (const IS16 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IS16 and an IS16.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS16 CRUX_ARITH__add_is16_is16 (const IS16 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IS16 and an IS32.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_is16_is32 (const IS16 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IS16 and an IS64.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is16_is64 (const IS16 a, const IS64 b);


/**
 * @brief Returns a secure addition of an IS32 and an IU08.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_is32_iu08 (const IS32 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IS32 and an IU16.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_is32_iu16 (const IS32 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IS32 and an IU32.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU32 CRUX_ARITH__add_is32_iu32 (const IS32 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IS32 and an IU64.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_is32_iu64 (const IS32 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IS32 and an IS08.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_is32_is08 (const IS32 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IS32 and an IS16.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_is32_is16 (const IS32 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IS32 and an IS32.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS32 CRUX_ARITH__add_is32_is32 (const IS32 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IS32 and an IS64.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is32_is64 (const IS32 a, const IS64 b);


/**
 * @brief Returns a secure addition of an IS64 and an IU08.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is64_iu08 (const IS64 a, const IU08 b);


/**
 * @brief Returns a secure addition of an IS64 and an IU16.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is64_iu16 (const IS64 a, const IU16 b);


/**
 * @brief Returns a secure addition of an IS64 and an IU32.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is64_iu32 (const IS64 a, const IU32 b);


/**
 * @brief Returns a secure addition of an IS64 and an IU64.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIU64 CRUX_ARITH__add_is64_iu64 (const IS64 a, const IU64 b);


/**
 * @brief Returns a secure addition of an IS64 and an IS08.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS08 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is64_is08 (const IS64 a, const IS08 b);


/**
 * @brief Returns a secure addition of an IS64 and an IS16.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS16 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is64_is16 (const IS64 a, const IS16 b);


/**
 * @brief Returns a secure addition of an IS64 and an IS32.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS32 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is64_is32 (const IS64 a, const IS32 b);


/**
 * @brief Returns a secure addition of an IS64 and an IS64.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @return the result of addition of a and b.
 *
 */
CRUX__ResultIS64 CRUX_ARITH__add_is64_is64 (const IS64 a, const IS64 b);




#define CRUX_ARITH__add(a, b) _Generic(a,    \
  IU08 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_iu08_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_iu08_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_iu08_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_iu08_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_iu08_is08(a, b),  \
    IS16 : CRUX_ARITH__add_iu08_is16(a, b),  \
    IS32 : CRUX_ARITH__add_iu08_is32(a, b),  \
    IS64 : CRUX_ARITH__add_iu08_is64(a, b)), \
  IU16 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_iu16_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_iu16_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_iu16_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_iu16_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_iu16_is08(a, b),  \
    IS16 : CRUX_ARITH__add_iu16_is16(a, b),  \
    IS32 : CRUX_ARITH__add_iu16_is32(a, b),  \
    IS64 : CRUX_ARITH__add_iu16_is64(a, b)), \
  IU32 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_iu32_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_iu32_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_iu32_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_iu32_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_iu32_is08(a, b),  \
    IS16 : CRUX_ARITH__add_iu32_is16(a, b),  \
    IS32 : CRUX_ARITH__add_iu32_is32(a, b),  \
    IS64 : CRUX_ARITH__add_iu32_is64(a, b)), \
  IU64 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_iu64_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_iu64_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_iu64_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_iu64_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_iu64_is08(a, b),  \
    IS16 : CRUX_ARITH__add_iu64_is16(a, b),  \
    IS32 : CRUX_ARITH__add_iu64_is32(a, b),  \
    IS64 : CRUX_ARITH__add_iu64_is64(a, b)), \
  IS08 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_is08_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_is08_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_is08_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_is08_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_is08_is08(a, b),  \
    IS16 : CRUX_ARITH__add_is08_is16(a, b),  \
    IS32 : CRUX_ARITH__add_is08_is32(a, b),  \
    IS64 : CRUX_ARITH__add_is08_is64(a, b)), \
  IS16 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_is16_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_is16_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_is16_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_is16_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_is16_is08(a, b),  \
    IS16 : CRUX_ARITH__add_is16_is16(a, b),  \
    IS32 : CRUX_ARITH__add_is16_is32(a, b),  \
    IS64 : CRUX_ARITH__add_is16_is64(a, b)), \
  IS32 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_is32_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_is32_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_is32_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_is32_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_is32_is08(a, b),  \
    IS16 : CRUX_ARITH__add_is32_is16(a, b),  \
    IS32 : CRUX_ARITH__add_is32_is32(a, b),  \
    IS64 : CRUX_ARITH__add_is32_is64(a, b)), \
  IS64 : _Generic(b,                        \
    IU08 : CRUX_ARITH__add_is64_iu08(a, b),  \
    IU16 : CRUX_ARITH__add_is64_iu16(a, b),  \
    IU32 : CRUX_ARITH__add_is64_iu32(a, b),  \
    IU64 : CRUX_ARITH__add_is64_iu64(a, b),  \
    IS08 : CRUX_ARITH__add_is64_is08(a, b),  \
    IS16 : CRUX_ARITH__add_is64_is16(a, b),  \
    IS32 : CRUX_ARITH__add_is64_is32(a, b),  \
    IS64 : CRUX_ARITH__add_is64_is64(a, b)))
