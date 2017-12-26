/**
 * ---------------------------------------------------------------------------
 * @file   div.h
 * @brief  Division for values of core types.
 *
 */
#pragma once
#include "./signal.h"




/**
 * @struct CRUX__DivChar
 * @brief  Represents a Char division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivChar_Struct {
  Char quo; /**< Division quotient. */
  Char rem; /**< Division remainder. */
} CRUX__DivChar;


/**
 * @struct CRUX__DivSize
 * @brief  Represents a Size division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivSize_Struct {
  Size quo; /**< Division quotient. */
  Size rem; /**< Division remainder. */
} CRUX__DivSize;


/**
 * @struct CRUX__DivIU08
 * @brief  Represents a IU08 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIU08_Struct {
  IU08 quo; /**< Division quotient. */
  IU08 rem; /**< Division remainder. */
} CRUX__DivIU08;


/**
 * @struct CRUX__DivIU16
 * @brief  Represents a IU16 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIU16_Struct {
  IU16 quo; /**< Division quotient. */
  IU16 rem; /**< Division remainder. */
} CRUX__DivIU16;


/**
 * @struct CRUX__DivIU32
 * @brief  Represents a IU32 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIU32_Struct {
  IU32 quo; /**< Division quotient. */
  IU32 rem; /**< Division remainder. */
} CRUX__DivIU32;


/**
 * @struct CRUX__DivIU64
 * @brief  Represents a IU64 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIU64_Struct {
  IU64 quo; /**< Division quotient. */
  IU64 rem; /**< Division remainder. */
} CRUX__DivIU64;


/**
 * @struct CRUX__DivIS08
 * @brief  Represents a IS08 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIS08_Struct {
  IS08 quo; /**< Division quotient. */
  IS08 rem; /**< Division remainder. */
} CRUX__DivIS08;


/**
 * @struct CRUX__DivIS16
 * @brief  Represents a IS16 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIS16_Struct {
  IS16 quo; /**< Division quotient. */
  IS16 rem; /**< Division remainder. */
} CRUX__DivIS16;


/**
 * @struct CRUX__DivIS32
 * @brief  Represents a IS32 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIS32_Struct {
  IS32 quo; /**< Division quotient. */
  IS32 rem; /**< Division remainder. */
} CRUX__DivIS32;


/**
 * @struct CRUX__DivIS64
 * @brief  Represents a IS64 division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivIS64_Struct {
  IS64 quo; /**< Division quotient. */
  IS64 rem; /**< Division remainder. */
} CRUX__DivIS64;




/**
 * @struct CRUX__ResultDivChar
 * @brief  Represents a Char division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivChar_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivChar value;  /**< Division value. */
} CRUX__ResultDivChar;


/**
 * @struct CRUX__ResultDivSize
 * @brief  Represents a Size division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivSize_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivSize value;  /**< Division value. */
} CRUX__ResultDivSize;


/**
 * @struct CRUX__ResultDivIU08
 * @brief  Represents a IU08 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIU08_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIU08 value;  /**< Division value. */
} CRUX__ResultDivIU08;


/**
 * @struct CRUX__ResultDivIU16
 * @brief  Represents a IU16 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIU16_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIU16 value;  /**< Division value. */
} CRUX__ResultDivIU16;


/**
 * @struct CRUX__ResultDivIU32
 * @brief  Represents a IU32 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIU32_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIU32 value;  /**< Division value. */
} CRUX__ResultDivIU32;


/**
 * @struct CRUX__ResultDivIU64
 * @brief  Represents a IU64 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIU64_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIU64 value;  /**< Division value. */
} CRUX__ResultDivIU64;


/**
 * @struct CRUX__ResultDivIS08
 * @brief  Represents a IS08 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIS08_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIS08 value;  /**< Division value. */
} CRUX__ResultDivIS08;


/**
 * @struct CRUX__ResultDivIS16
 * @brief  Represents a IS16 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIS16_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIS16 value;  /**< Division value. */
} CRUX__ResultDivIS16;


/**
 * @struct CRUX__ResultDivIS32
 * @brief  Represents a IS32 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIS32_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIS32 value;  /**< Division value. */
} CRUX__ResultDivIS32;


/**
 * @struct CRUX__ResultDivIS64
 * @brief  Represents a IS64 division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivIS64_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivIS64 value;  /**< Division value. */
} CRUX__ResultDivIS64;




/**
 * @brief Returns if division of two Char values can have any error.
 * 
 * @param[in] a An Char value.
 * @param[in] b An Char value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_char_has_error (const Char a, const Char b);


/**
 * @brief Returns if division of two Size values can have any error.
 * 
 * @param[in] a An Size value.
 * @param[in] b An Size value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_size_has_error (const Size a, const Size b);


/**
 * @brief Returns if division of two IU08 values can have any error.
 * 
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_iu08_has_error (const IU08 a, const IU08 b);


/**
 * @brief Returns if division of two IU16 values can have any error.
 * 
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_iu16_has_error (const IU16 a, const IU16 b);


/**
 * @brief Returns if division of two IU32 values can have any error.
 * 
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_iu32_has_error (const IU32 a, const IU32 b);


/**
 * @brief Returns if division of two IU64 values can have any error.
 * 
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_iu64_has_error (const IU64 a, const IU64 b);


/**
 * @brief Returns if division of two IS08 values can have any error.
 * 
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_is08_has_error (const IS08 a, const IS08 b);


/**
 * @brief Returns if division of two IS16 values can have any error.
 * 
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_is16_has_error (const IS16 a, const IS16 b);


/**
 * @brief Returns if division of two IS32 values can have any error.
 * 
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_is32_has_error (const IS32 a, const IS32 b);


/**
 * @brief Returns if division of two IS64 values can have any error.
 * 
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @returns true if there is any error in (a / b), false otherwise.
 */
Bool CRUX__div_is64_has_error (const IS64 a, const IS64 b);




/**
 * @brief Returns an division of two Char values.
 *
 * @param[in] a An Char value.
 * @param[in] b An Char value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivChar CRUX__div_char (const Char a, const Char b);


/**
 * @brief Returns an division of two Size values.
 *
 * @param[in] a An Size value.
 * @param[in] b An Size value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivSize CRUX__div_size (const Size a, const Size b);


/**
 * @brief Returns an division of two IU08 values.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIU08 CRUX__div_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Returns an division of two IU16 values.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIU16 CRUX__div_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Returns an division of two IU32 values.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIU32 CRUX__div_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Returns an division of two IU64 values.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIU64 CRUX__div_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Returns an division of two IS08 values.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIS08 CRUX__div_is08 (const IS08 a, const IS08 b);


/**
 * @brief Returns an division of two IS16 values.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIS16 CRUX__div_is16 (const IS16 a, const IS16 b);


/**
 * @brief Returns an division of two IS32 values.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIS32 CRUX__div_is32 (const IS32 a, const IS32 b);


/**
 * @brief Returns an division of two IS64 values.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @return the result of (a / b).
 *
 */
CRUX__ResultDivIS64 CRUX__div_is64 (const IS64 a, const IS64 b);




#define CRUX__div_has_error(a, b) (_Generic(a,  \
  IU08 : _Generic(b,                            \
    IU08 : CRUX__div_iu08_has_error(a, b),      \
    default : assert(0)),                       \
  IU16 : _Generic(b,                            \
    IU16 : CRUX__div_iu16_has_error(a, b),      \
    default : assert(0)),                       \
  IU32 : _Generic(b,                            \
    IU32 : CRUX__div_iu32_has_error(a, b),      \
    default : assert(0)),                       \
  IU64 : _Generic(b,                            \
    IU64 : CRUX__div_iu64_has_error(a, b),      \
    default : assert(0)),                       \
  IS08 : _Generic(b,                            \
    IS08 : CRUX__div_is08_has_error(a, b),      \
    default : assert(0)),                       \
  IS16 : _Generic(b,                            \
    IS16 : CRUX__div_is16_has_error(a, b),      \
    default : assert(0)),                       \
  IS32 : _Generic(b,                            \
    IS32 : CRUX__div_is32_has_error(a, b),      \
    default : assert(0)),                       \
  IS64 : _Generic(b,                            \
    IS64 : CRUX__div_is64_has_error(a, b),      \
    default : assert(0)),                       \
  default : assert(0)))


#define CRUX__div(a, b) (_Generic(a,  \
  IU08 : _Generic(b,                  \
    IU08 :  CRUX__div_iu08(a, b),     \
    default : assert(0)),             \
  IU16 : _Generic(b,                  \
    IU16 :  CRUX__div_iu16(a, b),     \
    default : assert(0)),             \
  IU32 : _Generic(b,                  \
    IU32 :  CRUX__div_iu32(a, b),     \
    default : assert(0)),             \
  IU64 : _Generic(b,                  \
    IU64 :  CRUX__div_iu64(a, b),     \
    default : assert(0)),             \
  IS08 : _Generic(b,                  \
    IS08 :  CRUX__div_is08(a, b),     \
    default : assert(0)),             \
  IS16 : _Generic(b,                  \
    IS16 :  CRUX__div_is16(a, b),     \
    default : assert(0)),             \
  IS32 : _Generic(b,                  \
    IS32 :  CRUX__div_is32(a, b),     \
    default : assert(0)),             \
  IS64 : _Generic(b,                  \
    IS64 :  CRUX__div_is64(a, b),     \
    default : assert(0)),             \
  default : assert(0)))
