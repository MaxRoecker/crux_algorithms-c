/**
 * ---------------------------------------------------------------------------
 * @file   array.h
 * @brief  A array implementation.
 *
 */
#pragma once
#include "./error.h"



typedef struct CRUX__Array_Struct {
  IU16 length;
  Size element_size;
  void *context;
  void *addr;
} CRUX__Array;


typedef struct CRUX__ResultArray_Struct {
  CRUX__Trace trace;
  const CRUX__Array value;
} CRUX__ResultArray;




CRUX__ResultElement CRUX__array_get (
  const CRUX__Array array,
  const IU16 index);


CRUX__ResultElement CRUX__array_put (
  const CRUX__Array array,
  const IU16 index,
  void *restrict const element_addr);


IU16 CRUX__array_length (
  const CRUX__Array array);


Size CRUX__array_element_size (
  const CRUX__Array array);


void * CRUX__array_context (
  const CRUX__Array array);


CRUX__ResultArray CRUX__array_create (
  const IU16 length,
  const Size element_size);


CRUX__ResultArray CRUX__array_create_into (
  void *const context,
  const IU16 length,
  const Size element_size);


void CRUX__array_clean (
  CRUX__Array *restrict const array);


CRUX__Array CRUX__array_nil (void);




typedef struct CRUX__ArrayIterState_Struct {
  void *context;
  Bool inverse;
  IU16 start;
  IU16 end;
  IU16 step;
  IU16 last;
  CRUX__Array array;
} CRUX__ArrayIterState;


CRUX__ResultIterator CRUX__array_iterator_create_with (
  void *const context,
  const CRUX__Array array,
  const IU16 start,
  const IU16 end,
  const IU16 step);

CRUX__ResultIterator CRUX__array_iterator_create_at (
  const CRUX__Array array,
  const IU16 start,
  const IU16 end);

CRUX__ResultIterator CRUX__array_iterator_create (
  const CRUX__Array array);


CRUX__Element CRUX__array_iterator_get(
  void *const iterator_state);


Bool CRUX__array_iterator_has_next(
  void *const iterator_state);


void CRUX__array_iterator_finalize(
  void **iterator_state);


CRUX__ArrayIterState CRUX__array_iterator_nil (void);

