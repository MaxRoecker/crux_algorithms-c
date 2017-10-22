/**
 * ---------------------------------------------------------------------------
 * @file   results.h
 * @brief  Result of operations with possible errors.
 *
 */
#pragma once
#include "./exception.h"

/**
 * @struct CRUX__ResultVoid
 * @brief  Represents a void result with a possible Error.
 *
 */
typedef struct CRUX__ResultVoid_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
} CRUX__ResultVoid;


/**
 * @struct CRUX__ResultIU08
 * @brief  Represents a IU08 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU08_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IU08 value;             /**< Result value. */
} CRUX__ResultIU08;


/**
 * @struct CRUX__ResultIU16
 * @brief  Represents a IU16 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU16_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IU16 value;             /**< Result value. */
} CRUX__ResultIU16;


/**
 * @struct CRUX__ResultIU32
 * @brief  Represents a IU32 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU32_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IU32 value;             /**< Result value. */
} CRUX__ResultIU32;


/**
 * @struct CRUX__ResultIU64
 * @brief  Represents a IU64 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIU64_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IU64 value;             /**< Result value. */
} CRUX__ResultIU64;


/**
 * @struct CRUX__ResultIS08
 * @brief  Represents a IS08 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS08_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IS08 value;             /**< Result value. */
} CRUX__ResultIS08;


/**
 * @struct CRUX__ResultIS16
 * @brief  Represents a IS16 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS16_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IS16 value;             /**< Result value. */
} CRUX__ResultIS16;


/**
 * @struct CRUX__ResultIS32
 * @brief  Represents a IS32 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS32_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IS32 value;             /**< Result value. */
} CRUX__ResultIS32;


/**
 * @struct CRUX__ResultIS64
 * @brief  Represents a IS64 result with a possible Error.
 *
 */
typedef struct CRUX__ResultIS64_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const IS64 value;             /**< Result value. */
} CRUX__ResultIS64;


/**
 * @struct CRUX__ResultBool
 * @brief  Represents a boolean result with a possible Error.
 *
 */
typedef struct CRUX__ResultBool_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const Bool value;             /**< Result value. */
} CRUX__ResultBool;


/**
 * @struct CRUX__ResultChar
 * @brief  Represents a character result with a possible Error.
 *
 */
typedef struct CRUX__ResultChar_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const Char value;             /**< Result value. */
} CRUX__ResultChar;


/**
 * @struct CRUX__ResultSize
 * @brief  Represents a size result with a possible Error.
 *
 */
typedef struct CRUX__ResultSize_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const Size value;             /**< Result value. */
} CRUX__ResultSize;


/**
 * @struct CRUX__ResultAddr
 * @brief  Represents an address result with a possible Error.
 *
 */
typedef struct CRUX__ResultAddr_Struct {
  const CRUX__Exception *expts;  /**< Occurrence's stack. */
  const void *value;             /**< Result value. */
} CRUX__ResultAddr;

