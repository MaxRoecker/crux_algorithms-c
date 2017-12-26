/**
 * ---------------------------------------------------------------------------
 * @file   add.h
 * @brief  Addition for values of core types.
 *
 */
#pragma once
#include "./signal.h"




/**
 * @brief Returns if addition of two Char values can have any error.
 * 
 * @param[in] a An Char value.
 * @param[in] b An Char value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_char_has_error (const Char a, const Char b);


/**
 * @brief Returns if addition of two Size values can have any error.
 * 
 * @param[in] a An Size value.
 * @param[in] b An Size value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_size_has_error (const Size a, const Size b);


/**
 * @brief Returns if addition of two IU08 values can have any error.
 * 
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_iu08_has_error (const IU08 a, const IU08 b);


/**
 * @brief Returns if addition of two IU16 values can have any error.
 * 
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_iu16_has_error (const IU16 a, const IU16 b);


/**
 * @brief Returns if addition of two IU32 values can have any error.
 * 
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_iu32_has_error (const IU32 a, const IU32 b);


/**
 * @brief Returns if addition of two IU64 values can have any error.
 * 
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_iu64_has_error (const IU64 a, const IU64 b);


/**
 * @brief Returns if addition of two IS08 values can have any error.
 * 
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_is08_has_error (const IS08 a, const IS08 b);


/**
 * @brief Returns if addition of two IS16 values can have any error.
 * 
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_is16_has_error (const IS16 a, const IS16 b);


/**
 * @brief Returns if addition of two IS32 values can have any error.
 * 
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_is32_has_error (const IS32 a, const IS32 b);


/**
 * @brief Returns if addition of two IS64 values can have any error.
 * 
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @returns true if there is any error in (a + b), false otherwise.
 */
Bool CRUX__add_is64_has_error (const IS64 a, const IS64 b);




/**
 * @brief Returns an addition of two Char values.
 *
 * @param[in] a An Char value.
 * @param[in] b An Char value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultChar CRUX__add_char (const Char a, const Char b);


/**
 * @brief Returns an addition of two Size values.
 *
 * @param[in] a An Size value.
 * @param[in] b An Size value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultSize CRUX__add_size (const Size a, const Size b);


/**
 * @brief Returns an addition of two IU08 values.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIU08 CRUX__add_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Returns an addition of two IU16 values.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIU16 CRUX__add_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Returns an addition of two IU32 values.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIU32 CRUX__add_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Returns an addition of two IU64 values.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIU64 CRUX__add_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Returns an addition of two IS08 values.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIS08 CRUX__add_is08 (const IS08 a, const IS08 b);


/**
 * @brief Returns an addition of two IS16 values.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIS16 CRUX__add_is16 (const IS16 a, const IS16 b);


/**
 * @brief Returns an addition of two IS32 values.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIS32 CRUX__add_is32 (const IS32 a, const IS32 b);


/**
 * @brief Returns an addition of two IS64 values.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @return the result of (a + b).
 *
 */
CRUX__ResultIS64 CRUX__add_is64 (const IS64 a, const IS64 b);




#define CRUX__add_has_error(a, b) (_Generic(a,  \
  IU08 : _Generic(b,                            \
    IU08 : CRUX__add_iu08_has_error(a, b),      \
    default : assert(0)),                       \
  IU16 : _Generic(b,                            \
    IU16 : CRUX__add_iu16_has_error(a, b),      \
    default : assert(0)),                       \
  IU32 : _Generic(b,                            \
    IU32 : CRUX__add_iu32_has_error(a, b),      \
    default : assert(0)),                       \
  IU64 : _Generic(b,                            \
    IU64 : CRUX__add_iu64_has_error(a, b),      \
    default : assert(0)),                       \
  IS08 : _Generic(b,                            \
    IS08 : CRUX__add_is08_has_error(a, b),      \
    default : assert(0)),                       \
  IS16 : _Generic(b,                            \
    IS16 : CRUX__add_is16_has_error(a, b),      \
    default : assert(0)),                       \
  IS32 : _Generic(b,                            \
    IS32 : CRUX__add_is32_has_error(a, b),      \
    default : assert(0)),                       \
  IS64 : _Generic(b,                            \
    IS64 : CRUX__add_is64_has_error(a, b),      \
    default : assert(0)),                       \
  default : assert(0)))


#define CRUX__add(a, b) (_Generic(a,  \
  IU08 : _Generic(b,                  \
    IU08 :  CRUX__add_iu08(a, b),     \
    default : assert(0)),             \
  IU16 : _Generic(b,                  \
    IU16 :  CRUX__add_iu16(a, b),     \
    default : assert(0)),             \
  IU32 : _Generic(b,                  \
    IU32 :  CRUX__add_iu32(a, b),     \
    default : assert(0)),             \
  IU64 : _Generic(b,                  \
    IU64 :  CRUX__add_iu64(a, b),     \
    default : assert(0)),             \
  IS08 : _Generic(b,                  \
    IS08 :  CRUX__add_is08(a, b),     \
    default : assert(0)),             \
  IS16 : _Generic(b,                  \
    IS16 :  CRUX__add_is16(a, b),     \
    default : assert(0)),             \
  IS32 : _Generic(b,                  \
    IS32 :  CRUX__add_is32(a, b),     \
    default : assert(0)),             \
  IS64 : _Generic(b,                  \
    IS64 :  CRUX__add_is64(a, b),     \
    default : assert(0)),             \
  default : assert(0)))

