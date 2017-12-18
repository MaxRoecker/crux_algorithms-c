/**
 * ---------------------------------------------------------------------------
 * @file   mod.h
 * @brief  Modulo for values of core types.
 *
 */
#pragma once
#include "./signal.h"



/**
 * @brief Returns a secure modulo of an IU08 and an IU08.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU08 CRUX__mod_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Returns a secure modulo of an IU16 and an IU16.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU16 CRUX__mod_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Returns a secure modulo of an IU32 and an IU32.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU32 CRUX__mod_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Returns a secure modulo of an IU64 and an IU64.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU64 CRUX__mod_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Returns a secure modulo of an IS08 and an IS08.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS08 CRUX__mod_is08 (const IS08 a, const IS08 b);


/**
 * @brief Returns a secure modulo of an IU16 and an IU16.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS16 CRUX__mod_is16 (const IS16 a, const IS16 b);


/**
 * @brief Returns a secure modulo of an IU32 and an IU32.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS32 CRUX__mod_is32 (const IS32 a, const IS32 b);


/**
 * @brief Returns a secure modulo of an IU64 and an IU64.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS64 CRUX__mod_is64 (const IS64 a, const IS64 b);




#define CRUX__mod_has_error(a, b) (_Generic(a,  \
  IU08 : _Generic(b,                            \
    IU08 : CRUX__is_zero(b),                    \
    default : assert(0)),                       \
  IU16 : _Generic(b,                            \
    IU16 : CRUX__is_zero(b),                    \
    default : assert(0)),                       \
  IU32 : _Generic(b,                            \
    IU32 : CRUX__is_zero(b),                    \
    default : assert(0)),                       \
  IU64 : _Generic(b,                            \
    IU64 : CRUX__is_zero(b),                    \
    default : assert(0)),                       \
  IS08 : _Generic(b,                            \
    IS08 : CRUX__is_less_equal(b, as_is08(0)),  \
    default : assert(0)),                       \
  IS16 : _Generic(b,                            \
    IS16 : CRUX__is_less_equal(b, as_is16(0)),  \
    default : assert(0)),                       \
  IS32 : _Generic(b,                            \
    IS32 : CRUX__is_less_equal(b, as_is32(0)),  \
    default : assert(0)),                       \
  IS64 : _Generic(b,                            \
    IS64 : CRUX__is_less_equal(b, as_is64(0)),  \
    default : assert(0))))


#define CRUX__mod(a, b) (_Generic(a,  \
  IU08 : _Generic(b,                  \
    IU08 : CRUX__mod_iu08(a, b),      \
    default : assert(0)),             \
  IU16 : _Generic(b,                  \
    IU16 : CRUX__mod_iu16(a, b),      \
    default : assert(0)),             \
  IU32 : _Generic(b,                  \
    IU32 : CRUX__mod_iu32(a, b),      \
    default : assert(0)),             \
  IU64 : _Generic(b,                  \
    IU64 : CRUX__mod_iu64(a, b),      \
    default : assert(0)),             \
  IS08 : _Generic(b,                  \
    IS08 : CRUX__mod_is08(a, b),      \
    default : assert(0)),             \
  IS16 : _Generic(b,                  \
    IS16 : CRUX__mod_is16(a, b),      \
    default : assert(0)),             \
  IS32 : _Generic(b,                  \
    IS32 : CRUX__mod_is32(a, b),      \
    default : assert(0)),             \
  IS64 : _Generic(b,                  \
    IS64 : CRUX__mod_is64(a, b),      \
    default : assert(0))))
