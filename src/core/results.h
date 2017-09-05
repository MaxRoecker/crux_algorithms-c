/**
 * ---------------------------------------------------------------------------
 * @file   results.h
 * @brief  Result of operations with possible errors.
 *
 */
#pragma once
#include "./errors.h"

/**
 * @struct CRUX__ResultVoid
 * @brief  Represents a void result with a possible Error.
 *
 */
typedef struct CRUX__ResultVoid_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
} CRUX__ResultVoid;


/**
 * @struct CRUX__ResultBool
 * @brief  Represents a boolean result with a possible Error.
 *
 */
typedef struct CRUX__ResultBool_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const bool value;             /**< Result value. */
} CRUX__ResultBool;


/**
 * @struct CRUX__ResultIU08
 * @brief  Represents a iu08 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU08_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const iu08 value;             /**< Result value. */
} CRUX__ResultIU08;


/**
 * @struct CRUX__ResultIU16
 * @brief  Represents a iu16 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU16_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const iu16 value;             /**< Result value. */
} CRUX__ResultIU16;


/**
 * @struct CRUX__ResultIU32
 * @brief  Represents a iu32 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU32_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const iu32 value;             /**< Result value. */
} CRUX__ResultIU32;


/**
 * @struct CRUX__ResultIU64
 * @brief  Represents a iu64 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU64_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const iu64 value;             /**< Result value. */
} CRUX__ResultIU64;


/**
 * @struct CRUX__ResultIS08
 * @brief  Represents a is08 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS08_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const is08 value;             /**< Result value. */
} CRUX__ResultIS08;


/**
 * @struct CRUX__ResultIS16
 * @brief  Represents a is16 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS16_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const is16 value;             /**< Result value. */
} CRUX__ResultIS16;


/**
 * @struct CRUX__ResultIS32
 * @brief  Represents a is32 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS32_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const is32 value;             /**< Result value. */
} CRUX__ResultIS32;


/**
 * @struct CRUX__ResultIS64
 * @brief  Represents a is64 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS64_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const is64 value;             /**< Result value. */
} CRUX__ResultIS64;


/**
 * @struct CRUX__ResultFLP1
 * @brief  Represents a flp1 result with a possible Error.
 *
 */
typedef struct CRUX__ResultFLP1_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const flp1 value;             /**< Result value. */
} CRUX__ResultFLP1;


/**
 * @struct CRUX__ResultFLP2
 * @brief  Represents a flp2 result with a possible Error.
 *
 */
typedef struct CRUX__ResultFLP2_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const flp2 value;             /**< Result value. */
} CRUX__ResultFLP2;


/**
 * @struct CRUX__ResultFLP4
 * @brief  Represents a flp4 result with a possible Error.
 *
 */
 typedef struct CRUX__ResultFLP4_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const flp4 value;             /**< Result value. */
} CRUX__ResultFLP4;
