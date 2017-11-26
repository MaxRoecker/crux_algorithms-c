/**
 * ---------------------------------------------------------------------------
 * @file   div.h
 * @brief  Division for values of core types.
 *
 */
#pragma once
#include "./signal.h"




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
 * @struct CRUX__DivSize
 * @brief  Represents a Size division with a quotient and remainder.
 *
 */
typedef struct CRUX__DivSize_Struct {
  Size quo; /**< Division quotient. */
  Size rem; /**< Division remainder. */
} CRUX__DivSize;




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
 * @struct CRUX__ResultDivSize
 * @brief  Represents a Size division result with a possible Error.
 *
 */
typedef struct CRUX__ResultDivSize_Struct {
  CRUX__Trace trace;          /**< The fault trace. */
  const CRUX__DivSize value;  /**< Division value. */
} CRUX__ResultDivSize;




/**
 * @brief Returns a secure division of an IU08 and an IU08.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU08 CRUX_ARITH__div_iu08_iu08 (const IU08 a, const IU08 b);


/**
 * @brief Returns a secure division of an IU08 and an IU16.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU16 CRUX_ARITH__div_iu08_iu16 (const IU08 a, const IU16 b);


/**
 * @brief Returns a secure division of an IU08 and an IU32.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu08_iu32 (const IU08 a, const IU32 b);


/**
 * @brief Returns a secure division of an IU08 and an IU64.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu08_iu64 (const IU08 a, const IU64 b);


/**
 * @brief Returns a secure division of an IU08 and an IS08.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU08 CRUX_ARITH__div_iu08_is08 (const IU08 a, const IS08 b);


/**
 * @brief Returns a secure division of an IU08 and an IS16.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS16 CRUX_ARITH__div_iu08_is16 (const IU08 a, const IS16 b);


/**
 * @brief Returns a secure division of an IU08 and an IS32.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_iu08_is32 (const IU08 a, const IS32 b);


/**
 * @brief Returns a secure division of an IU08 and an IS64.
 *
 * @param[in] a An IU08 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_iu08_is64 (const IU08 a, const IS64 b);


/**
 * @brief Returns a secure division of an IU16 and an IU08.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_iu08 (const IU16 a, const IU08 b);


/**
 * @brief Returns a secure division of an IU16 and an IU16.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_iu16 (const IU16 a, const IU16 b);


/**
 * @brief Returns a secure division of an IU16 and an IU32.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu16_iu32 (const IU16 a, const IU32 b);


/**
 * @brief Returns a secure division of an IU16 and an IU64.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu16_iu64 (const IU16 a, const IU64 b);


/**
 * @brief Returns a secure division of an IU16 and an IS08.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_is08 (const IU16 a, const IS08 b);


/**
 * @brief Returns a secure division of an IU16 and an IS16.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU16 CRUX_ARITH__div_iu16_is16 (const IU16 a, const IS16 b);


/**
 * @brief Returns a secure division of an IU16 and an IS32.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_iu16_is32 (const IU16 a, const IS32 b);


/**
 * @brief Returns a secure division of an IU16 and an IS64.
 *
 * @param[in] a An IU16 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_iu16_is64 (const IU16 a, const IS64 b);


/**
 * @brief Returns a secure division of an IU32 and an IU08.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu08 (const IU32 a, const IU08 b);


/**
 * @brief Returns a secure division of an IU32 and an IU16.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu16 (const IU32 a, const IU16 b);


/**
 * @brief Returns a secure division of an IU32 and an IU32.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_iu32 (const IU32 a, const IU32 b);


/**
 * @brief Returns a secure division of an IU32 and an IU64.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu32_iu64 (const IU32 a, const IU64 b);


/**
 * @brief Returns a secure division of an IU32 and an IS08.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is08 (const IU32 a, const IS08 b);


/**
 * @brief Returns a secure division of an IU32 and an IS16.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is16 (const IU32 a, const IS16 b);


/**
 * @brief Returns a secure division of an IU32 and an IS32.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_iu32_is32 (const IU32 a, const IS32 b);


/**
 * @brief Returns a secure division of an IU32 and an IS64.
 *
 * @param[in] a An IU32 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_iu32_is64 (const IU32 a, const IS64 b);


/**
 * @brief Returns a secure division of an IU64 and an IU08.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu08 (const IU64 a, const IU08 b);


/**
 * @brief Returns a secure division of an IU64 and an IU16.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu16 (const IU64 a, const IU16 b);


/**
 * @brief Returns a secure division of an IU64 and an IU32.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu32 (const IU64 a, const IU32 b);


/**
 * @brief Returns a secure division of an IU64 and an IU64.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_iu64 (const IU64 a, const IU64 b);


/**
 * @brief Returns a secure division of an IU64 and an IS08.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is08 (const IU64 a, const IS08 b);


/**
 * @brief Returns a secure division of an IU64 and an IS16.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is16 (const IU64 a, const IS16 b);


/**
 * @brief Returns a secure division of an IU64 and an IS32.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is32 (const IU64 a, const IS32 b);


/**
 * @brief Returns a secure division of an IU64 and an IS64.
 *
 * @param[in] a An IU64 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_iu64_is64 (const IU64 a, const IS64 b);


/**
 * @brief Returns a secure division of an IS08 and an IU08.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU08 CRUX_ARITH__div_is08_iu08 (const IS08 a, const IU08 b);


/**
 * @brief Returns a secure division of an IS08 and an IU16.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU16 CRUX_ARITH__div_is08_iu16 (const IS08 a, const IU16 b);


/**
 * @brief Returns a secure division of an IS08 and an IU32.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_is08_iu32 (const IS08 a, const IU32 b);


/**
 * @brief Returns a secure division of an IS08 and an IU64.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_is08_iu64 (const IS08 a, const IU64 b);


/**
 * @brief Returns a secure division of an IS08 and an IS08.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS08 CRUX_ARITH__div_is08_is08 (const IS08 a, const IS08 b);


/**
 * @brief Returns a secure division of an IS08 and an IS16.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS16 CRUX_ARITH__div_is08_is16 (const IS08 a, const IS16 b);


/**
 * @brief Returns a secure division of an IS08 and an IS32.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_is08_is32 (const IS08 a, const IS32 b);


/**
 * @brief Returns a secure division of an IS08 and an IS64.
 *
 * @param[in] a An IS08 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is08_is64 (const IS08 a, const IS64 b);


/**
 * @brief Returns a secure division of an IS16 and an IU08.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS16 CRUX_ARITH__div_is16_iu08 (const IS16 a, const IU08 b);


/**
 * @brief Returns a secure division of an IS16 and an IU16.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU16 CRUX_ARITH__div_is16_iu16 (const IS16 a, const IU16 b);


/**
 * @brief Returns a secure division of an IS16 and an IU32.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_is16_iu32 (const IS16 a, const IU32 b);


/**
 * @brief Returns a secure division of an IS16 and an IU64.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_is16_iu64 (const IS16 a, const IU64 b);


/**
 * @brief Returns a secure division of an IS16 and an IS08.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS16 CRUX_ARITH__div_is16_is08 (const IS16 a, const IS08 b);


/**
 * @brief Returns a secure division of an IS16 and an IS16.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS16 CRUX_ARITH__div_is16_is16 (const IS16 a, const IS16 b);


/**
 * @brief Returns a secure division of an IS16 and an IS32.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_is16_is32 (const IS16 a, const IS32 b);


/**
 * @brief Returns a secure division of an IS16 and an IS64.
 *
 * @param[in] a An IS16 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is16_is64 (const IS16 a, const IS64 b);


/**
 * @brief Returns a secure division of an IS32 and an IU08.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_is32_iu08 (const IS32 a, const IU08 b);


/**
 * @brief Returns a secure division of an IS32 and an IU16.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_is32_iu16 (const IS32 a, const IU16 b);


/**
 * @brief Returns a secure division of an IS32 and an IU32.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU32 CRUX_ARITH__div_is32_iu32 (const IS32 a, const IU32 b);


/**
 * @brief Returns a secure division of an IS32 and an IU64.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_is32_iu64 (const IS32 a, const IU64 b);


/**
 * @brief Returns a secure division of an IS32 and an IS08.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is08 (const IS32 a, const IS08 b);


/**
 * @brief Returns a secure division of an IS32 and an IS16.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is16 (const IS32 a, const IS16 b);


/**
 * @brief Returns a secure division of an IS32 and an IS32.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS32 CRUX_ARITH__div_is32_is32 (const IS32 a, const IS32 b);


/**
 * @brief Returns a secure division of an IS32 and an IS64.
 *
 * @param[in] a An IS32 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is32_is64 (const IS32 a, const IS64 b);


/**
 * @brief Returns a secure division of an IS64 and an IU08.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu08 (const IS64 a, const IU08 b);


/**
 * @brief Returns a secure division of an IS64 and an IU16.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu16 (const IS64 a, const IU16 b);


/**
 * @brief Returns a secure division of an IS64 and an IU32.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is64_iu32 (const IS64 a, const IU32 b);


/**
 * @brief Returns a secure division of an IS64 and an IU64.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IU64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIU64 CRUX_ARITH__div_is64_iu64 (const IS64 a, const IU64 b);


/**
 * @brief Returns a secure division of an IS64 and an IS08.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS08 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is08 (const IS64 a, const IS08 b);


/**
 * @brief Returns a secure division of an IS64 and an IS16.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS16 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is16 (const IS64 a, const IS16 b);


/**
 * @brief Returns a secure division of an IS64 and an IS32.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS32 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is32 (const IS64 a, const IS32 b);


/**
 * @brief Returns a secure division of an IS64 and an IS64.
 *
 * @param[in] a An IS64 value.
 * @param[in] b An IS64 value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivIS64 CRUX_ARITH__div_is64_is64 (const IS64 a, const IS64 b);


/**
 * @brief Returns a secure division of a Size and a Size.
 *
 * @param[in] a A Size value.
 * @param[in] b A Size value.
 * @return the result of division of a and b.
 *
 */
CRUX__ResultDivSize CRUX_ARITH__div_size_size (const Size a, const Size b);




#define CRUX_ARITH__div_overflow(a, b) (_Generic(a, \
  IU08 : _Generic(b,                                \
    IU08 : CRUX__is_zero(b),                        \
    default : assert(0)),                           \
  IU16 : _Generic(b,                                \
    IU16 : CRUX__is_zero(b),                        \
    default : assert(0)),                           \
  IU32 : _Generic(b,                                \
    IU32 : CRUX__is_zero(b),                        \
    default : assert(0)),                           \
  IU64 : _Generic(b,                                \
    IU64 : CRUX__is_zero(b),                        \
    default : assert(0)),                           \
  IS08 : _Generic(b,                                \
    IS08 : CRUX__is_zero(b)                         \
      || (CRUX__is_min(a) && (b == ((IS08) -1))),   \
    default : assert(0)),                           \
  IS16 : _Generic(b,                                \
    IS16 : CRUX__is_zero(b)                         \
      || (CRUX__is_min(a) && (b == ((IS16) -1))),   \
    default : assert(0)),                           \
  IS32 : _Generic(b,                                \
    IS32 : CRUX__is_zero(b)                         \
      || (CRUX__is_min(a) && (b == ((IS32) -1))),   \
    default : assert(0)),                           \
  IS64 : _Generic(b,                                \
    IS64 : CRUX__is_zero(b)                         \
      || (CRUX__is_min(a) && (b == ((IS64) -1))),   \
    default : assert(0))))


#define CRUX_ARITH__div(a, b) _Generic(a,    \
  IU08 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_iu08_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_iu08_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_iu08_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_iu08_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_iu08_is08(a, b),  \
    IS16 : CRUX_ARITH__div_iu08_is16(a, b),  \
    IS32 : CRUX_ARITH__div_iu08_is32(a, b),  \
    IS64 : CRUX_ARITH__div_iu08_is64(a, b)), \
  IU16 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_iu16_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_iu16_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_iu16_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_iu16_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_iu16_is08(a, b),  \
    IS16 : CRUX_ARITH__div_iu16_is16(a, b),  \
    IS32 : CRUX_ARITH__div_iu16_is32(a, b),  \
    IS64 : CRUX_ARITH__div_iu16_is64(a, b)), \
  IU32 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_iu32_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_iu32_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_iu32_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_iu32_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_iu32_is08(a, b),  \
    IS16 : CRUX_ARITH__div_iu32_is16(a, b),  \
    IS32 : CRUX_ARITH__div_iu32_is32(a, b),  \
    IS64 : CRUX_ARITH__div_iu32_is64(a, b)), \
  IU64 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_iu64_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_iu64_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_iu64_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_iu64_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_iu64_is08(a, b),  \
    IS16 : CRUX_ARITH__div_iu64_is16(a, b),  \
    IS32 : CRUX_ARITH__div_iu64_is32(a, b),  \
    IS64 : CRUX_ARITH__div_iu64_is64(a, b)), \
  IS08 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_is08_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_is08_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_is08_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_is08_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_is08_is08(a, b),  \
    IS16 : CRUX_ARITH__div_is08_is16(a, b),  \
    IS32 : CRUX_ARITH__div_is08_is32(a, b),  \
    IS64 : CRUX_ARITH__div_is08_is64(a, b)), \
  IS16 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_is16_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_is16_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_is16_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_is16_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_is16_is08(a, b),  \
    IS16 : CRUX_ARITH__div_is16_is16(a, b),  \
    IS32 : CRUX_ARITH__div_is16_is32(a, b),  \
    IS64 : CRUX_ARITH__div_is16_is64(a, b)), \
  IS32 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_is32_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_is32_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_is32_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_is32_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_is32_is08(a, b),  \
    IS16 : CRUX_ARITH__div_is32_is16(a, b),  \
    IS32 : CRUX_ARITH__div_is32_is32(a, b),  \
    IS64 : CRUX_ARITH__div_is32_is64(a, b)), \
  IS64 : _Generic(b,                        \
    IU08 : CRUX_ARITH__div_is64_iu08(a, b),  \
    IU16 : CRUX_ARITH__div_is64_iu16(a, b),  \
    IU32 : CRUX_ARITH__div_is64_iu32(a, b),  \
    IU64 : CRUX_ARITH__div_is64_iu64(a, b),  \
    IS08 : CRUX_ARITH__div_is64_is08(a, b),  \
    IS16 : CRUX_ARITH__div_is64_is16(a, b),  \
    IS32 : CRUX_ARITH__div_is64_is32(a, b),  \
    IS64 : CRUX_ARITH__div_is64_is64(a, b)))
