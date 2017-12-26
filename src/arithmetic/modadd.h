/**
 * ---------------------------------------------------------------------------
 * @file   modadd.h
 * @brief  Modular addition for values of core types.
 *
 */
#pragma once
#include "./signal.h"



/**
 * @brief Checks if the modular addition of two Char values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An Char value;
 * @param[in] b       An Char value;
 * @param[in] modulus An Char value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_char_has_error (
  const Char a,
  const Char b,
  const Char modulus);


/**
 * @brief Checks if the modular addition of two Size values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An Size value;
 * @param[in] b       An Size value;
 * @param[in] modulus An Size value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_size_has_error (
  const Size a,
  const Size b,
  const Size modulus);


/**
 * @brief Checks if the modular addition of two IU08 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IU08 value;
 * @param[in] b       An IU08 value;
 * @param[in] modulus An IU08 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_iu08_has_error (
  const IU08 a,
  const IU08 b,
  const IU08 modulus);


/**
 * @brief Checks if the modular addition of two IU16 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IU16 value;
 * @param[in] b       An IU16 value;
 * @param[in] modulus An IU16 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_iu16_has_error (
  const IU16 a,
  const IU16 b,
  const IU16 modulus);


/**
 * @brief Checks if the modular addition of two IU32 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IU32 value;
 * @param[in] b       An IU32 value;
 * @param[in] modulus An IU32 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_iu32_has_error (
  const IU32 a,
  const IU32 b,
  const IU32 modulus);


/**
 * @brief Checks if the modular addition of two IU64 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IU64 value;
 * @param[in] b       An IU64 value;
 * @param[in] modulus An IU64 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_iu64_has_error (
  const IU64 a,
  const IU64 b,
  const IU64 modulus);


/**
 * @brief Checks if the modular addition of two IS08 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IS08 value;
 * @param[in] b       An IS08 value;
 * @param[in] modulus An IS08 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_is08_has_error (
  const IS08 a,
  const IS08 b,
  const IS08 modulus);


/**
 * @brief Checks if the modular addition of two IS16 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IS16 value;
 * @param[in] b       An IS16 value;
 * @param[in] modulus An IS16 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_is16_has_error (
  const IS16 a,
  const IS16 b,
  const IS16 modulus);


/**
 * @brief Checks if the modular addition of two IS32 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IS32 value;
 * @param[in] b       An IS32 value;
 * @param[in] modulus An IS32 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_is32_has_error (
  const IS32 a,
  const IS32 b,
  const IS32 modulus);


/**
 * @brief Checks if the modular addition of two IS64 values in an Char
 *        modulus has any errors.
 * 
 * @param[in] a       An IS64 value;
 * @param[in] b       An IS64 value;
 * @param[in] modulus An IS64 value;
 * @return true if the result modulus is less than zero, false otherwise.
 * 
 */
Bool CRUX__modadd_is64_has_error (
  const IS64 a,
  const IS64 b,
  const IS64 modulus);




/**
 * @brief Returns a modular addition of two Char values in an Char modulus.
 * 
 * @param[in] a       An Char value;
 * @param[in] b       An Char value;
 * @param[in] modulus An Char value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultChar CRUX__modadd_char (
  const Char a,
  const Char b,
  const Char modulus);


/**
 * @brief Returns a modular addition of two Size values in an Size modulus.
 * 
 * @param[in] a       An Size value;
 * @param[in] b       An Size value;
 * @param[in] modulus An Size value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultSize CRUX__modadd_size (
  const Size a,
  const Size b,
  const Size modulus);


/**
 * @brief Returns a modular addition of two IU08 values in an IU08 modulus.
 * 
 * @param[in] a       An IU08 value;
 * @param[in] b       An IU08 value;
 * @param[in] modulus An IU08 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIU08 CRUX__modadd_iu08 (
  const IU08 a,
  const IU08 b,
  const IU08 modulus);


/**
 * @brief Returns a modular addition of two IU16 values in an IU16 modulus.
 * 
 * @param[in] a       An IU16 value;
 * @param[in] b       An IU16 value;
 * @param[in] modulus An IU16 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIU16 CRUX__modadd_iu16 (
  const IU16 a,
  const IU16 b,
  const IU16 modulus);


/**
 * @brief Returns a modular addition of two IU32 values in an IU32 modulus.
 * 
 * @param[in] a       An IU32 value;
 * @param[in] b       An IU32 value;
 * @param[in] modulus An IU32 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIU32 CRUX__modadd_iu32 (
  const IU32 a,
  const IU32 b,
  const IU32 modulus);


/**
 * @brief Returns a modular addition of two IU64 values in an IU64 modulus.
 * 
 * @param[in] a       An IU64 value;
 * @param[in] b       An IU64 value;
 * @param[in] modulus An IU64 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIU64 CRUX__modadd_iu64 (
  const IU64 a,
  const IU64 b,
  const IU64 modulus);


/**
 * @brief Returns a modular addition of two IS08 values in an IS08 modulus.
 * 
 * @param[in] a       An IS08 value;
 * @param[in] b       An IS08 value;
 * @param[in] modulus An IS08 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIS08 CRUX__modadd_is08 (
  const IS08 a,
  const IS08 b,
  const IS08 modulus);


/**
 * @brief Returns a modular addition of two IS16 values in an IS16 modulus.
 * 
 * @param[in] a       An IS16 value;
 * @param[in] b       An IS16 value;
 * @param[in] modulus An IS16 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIS16 CRUX__modadd_is16 (
  const IS16 a,
  const IS16 b,
  const IS16 modulus);


/**
 * @brief Returns a modular addition of two IS32 values in an IS32 modulus.
 * 
 * @param[in] a       An IS32 value;
 * @param[in] b       An IS32 value;
 * @param[in] modulus An IS32 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIS32 CRUX__modadd_is32 (
  const IS32 a,
  const IS32 b,
  const IS32 modulus);


/**
 * @brief Returns a modular addition of two IS64 values in an IS64 modulus.
 * 
 * @param[in] a       An IS64 value;
 * @param[in] b       An IS64 value;
 * @param[in] modulus An IS64 value;
 * @return the result of (a + b) in a modulus.
 * 
 */
CRUX__ResultIS64 CRUX__modadd_is64 (
  const IS64 a,
  const IS64 b,
  const IS64 modulus);




#define CRUX__modadd_has_error(a, b, modulus) (_Generic(a,  \
  IU08 : _Generic(b,                                        \
    IU08 : _Generic(modulus,                                \
      IU08 : CRUX__modadd_iu08_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  IU16 : _Generic(b,                                        \
    IU16 : _Generic(modulus,                                \
      IU16 : CRUX__modadd_iu16_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  IU32 : _Generic(b,                                        \
    IU32 : _Generic(modulus,                                \
      IU32 : CRUX__modadd_iu32_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  IU64 : _Generic(b,                                        \
    IU64 : _Generic(modulus,                                \
      IU64 : CRUX__modadd_iu64_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  IS08 : _Generic(b,                                        \
    IS08 : _Generic(modulus,                                \
      IS08 : CRUX__modadd_is08_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  IS16 : _Generic(b,                                        \
    IS16 : _Generic(modulus,                                \
      IS16 : CRUX__modadd_is16_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  IS32 : _Generic(b,                                        \
    IS32 : _Generic(modulus,                                \
      IS32 : CRUX__modadd_is32_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  IS64 : _Generic(b,                                        \
    IS64 : _Generic(modulus,                                \
      IS64 : CRUX__modadd_is64_has_error(a, b, modulus),    \
      default : assert(0)),                                 \
    default : assert(0)),                                   \
  default : assert(0)))


#define CRUX__modadd(a, b, modulus) (_Generic(a,  \
  IU08 : _Generic(b,                              \
    IU08 : _Generic(modulus,                      \
      IU08 : CRUX__modadd_iu08(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  IU16 : _Generic(b,                              \
    IU16 : _Generic(modulus,                      \
      IU16 : CRUX__modadd_iu16(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  IU32 : _Generic(b,                              \
    IU32 : _Generic(modulus,                      \
      IU32 : CRUX__modadd_iu32(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  IU64 : _Generic(b,                              \
    IU64 : _Generic(modulus,                      \
      IU64 : CRUX__modadd_iu64(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  IS08 : _Generic(b,                              \
    IS08 : _Generic(modulus,                      \
      IS08 : CRUX__modadd_is08(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  IS16 : _Generic(b,                              \
    IS16 : _Generic(modulus,                      \
      IS16 : CRUX__modadd_is16(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  IS32 : _Generic(b,                              \
    IS32 : _Generic(modulus,                      \
      IS32 : CRUX__modadd_is32(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  IS64 : _Generic(b,                              \
    IS64 : _Generic(modulus,                      \
      IS64 : CRUX__modadd_is64(a, b, modulus),    \
      default : assert(0)),                       \
    default : assert(0)),                         \
  default : assert(0)))
