/**
 * ---------------------------------------------------------------------------
 * @file   mod.h
 * @brief  Modulo for values of core types.
 *
 */
#pragma once
#include "./signal.h"



/**
 * @brief Returns if modulo of two Char values can have any error.
 * 
 * @param[in] a An Char value.
 * @param[in] b An Char value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_char_has_error (const Char a, const Char b);


/**
 * @brief Returns if modulo of two Size values can have any error.
 * 
 * @param[in] a An Size value.
 * @param[in] b An Size value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_size_has_error (const Size a, const Size b);


/**
 * @brief Returns if modulo of two IU08 values can have any error.
 * 
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_iu08_has_error (const IU08 a, const IU08 b);


/**
 * @brief Returns if modulo of two IU16 values can have any error.
 * 
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_iu16_has_error (const IU16 a, const IU16 b);


/**
 * @brief Returns if modulo of two IU32 values can have any error.
 * 
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_iu32_has_error (const IU32 a, const IU32 b);


/**
 * @brief Returns if modulo of two IU64 values can have any error.
 * 
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_iu64_has_error (const IU64 a, const IU64 b);


/**
 * @brief Returns if modulo of two IS08 values can have any error.
 * 
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_is08_has_error (const IS08 a, const IS08 b);


/**
 * @brief Returns if modulo of two IS16 values can have any error.
 * 
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_is16_has_error (const IS16 a, const IS16 b);


/**
 * @brief Returns if modulo of two IS32 values can have any error.
 * 
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_is32_has_error (const IS32 a, const IS32 b);


/**
 * @brief Returns if modulo of two IS64 values can have any error.
 * 
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @returns true if there is any error in (a mod b), false otherwise.
 * 
 */
Bool CRUX__mod_is64_has_error (const IS64 a, const IS64 b);




/**
 * @brief Returns a modulo of an Char and an Char.
 *
 * @param[in] a An Char value.
 * @param[in] b An Char value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultChar CRUX__mod_char (const Char a, const Char b);


/**
 * @brief Returns a modulo of an Size and an Size.
 *
 * @param[in] a An Size value.
 * @param[in] b An Size value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultSize CRUX__mod_size (const Size a, const Size b);


/**
 * @brief Returns a modulo of an IU08 and an IU08.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU08 CRUX__mod_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Returns a modulo of an IU16 and an IU16.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU16 CRUX__mod_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Returns a modulo of an IU32 and an IU32.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU32 CRUX__mod_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Returns a modulo of an IU64 and an IU64.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIU64 CRUX__mod_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Returns a modulo of an IS08 and an IS08.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS08 CRUX__mod_is08 (const IS08 a, const IS08 b);


/**
 * @brief Returns a modulo of an IU16 and an IU16.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS16 CRUX__mod_is16 (const IS16 a, const IS16 b);


/**
 * @brief Returns a modulo of an IU32 and an IU32.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS32 CRUX__mod_is32 (const IS32 a, const IS32 b);


/**
 * @brief Returns a modulo of an IU64 and an IU64.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @return the result of modulo of a and b.
 *
 */
CRUX__ResultIS64 CRUX__mod_is64 (const IS64 a, const IS64 b);




#define CRUX__mod_has_error(a, b) (_Generic(a,  \
  IU08 : _Generic(b,                            \
    IU08 : CRUX__is_less_equal(b, as_iu08(0)),  \
    default : assert(0)),                       \
  IU16 : _Generic(b,                            \
    IU16 : CRUX__is_less_equal(b, as_iu16(0)),  \
    default : assert(0)),                       \
  IU32 : _Generic(b,                            \
    IU32 : CRUX__is_less_equal(b, as_iu32(0)),  \
    default : assert(0)),                       \
  IU64 : _Generic(b,                            \
    IU64 : CRUX__is_less_equal(b, as_iu64(0)),  \
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
