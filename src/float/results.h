/**
 * ---------------------------------------------------------------------------
 * @file   results.h
 * @brief  Result of operations with possible errors.
 *
 */
#pragma once
#include "./../core/results.h"
#include "./types.h"




/**
 * @struct CRUX__ResultFLP1
 * @brief  Represents a FLP1 result with a possible Error.
 *
 */
typedef struct CRUX__ResultFLP1_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const FLP1 value;             /**< Result value. */
} CRUX__ResultFLP1;


/**
 * @struct CRUX__ResultFLP2
 * @brief  Represents a FLP2 result with a possible Error.
 *
 */
typedef struct CRUX__ResultFLP2_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const FLP2 value;             /**< Result value. */
} CRUX__ResultFLP2;


/**
 * @struct CRUX__ResultFLP4
 * @brief  Represents a FLP4 result with a possible Error.
 *
 */
 typedef struct CRUX__ResultFLP4_Struct {
  const CRUX__Occurrence *occ;  /**< Occurrence's stack. */
  const FLP4 value;             /**< Result value. */
} CRUX__ResultFLP4;
