/**
 * ---------------------------------------------------------------------------
 * @file   iterable.h
 * @brief  Defitions for iterables structures.
 *
 */
#pragma once
#include "./element.h"




/**
 * The type of functions that returns an element.
 * 
 */
typedef CRUX__Element (*CRUX__IterableGetFunction)(
  void *const settings);


/**
 * The type of functions that checks if the iterable has a next element.
 * 
 */
typedef Bool (*CRUX__IterableHasNextFunction)(
  void *const settings);


/**
 * The type of functions that finalizes the iterator.
 * 
 */
typedef void (*CRUX__IterableFinalizeFunction)(
  void **settings);


/**
 * @struct CRUX__Element
 * @brief  Represents an generic iterator of iterable structures.
 *
 */
typedef struct CRUX__Iterator_Struct {
  void *settings;
  CRUX__IterableGetFunction get;
  CRUX__IterableHasNextFunction has_next;
  CRUX__IterableFinalizeFunction finalize;
} CRUX__Iterator;


typedef struct CRUX__ResultIterator_Struct {
  CRUX__Trace trace;
  const CRUX__Iterator value;
} CRUX__ResultIterator;




/**
 * @brief Returns the next element of the iterable structure. 
 *
 * @param[in] iterator  The iterator 
 * @return the next element.
 *
 */
CRUX__Element CRUX__iterator_next (
  const CRUX__Iterator iterator);


/**
 * @brief Checks if there's a next element in the iterable structure.
 *
 * @param[in] iterator  
 * @return true if the iterable has a next element, false otherwise.
 *
 */
Bool CRUX__iterator_has_next (
  const CRUX__Iterator iterator);


/**
 * @brief Finalizes the iterator, the iterator becomes unusable after this.
 *
 * @param[in] iterator  
 * @return a result with a possible error.
 *
 */
void CRUX__iterator_finalize (
  CRUX__Iterator *const iterator);


CRUX__Iterator CRUX__iterator_nil (void);


IU16 CRUX__iterator_real_end (
  const IU16 start,
  const IU16 end,
  const IU16 step);




