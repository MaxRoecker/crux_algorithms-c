/**
 * ---------------------------------------------------------------------------
 * @file   element.h
 * @brief  Definitions for element of structures.
 *
 */
#pragma once
#include "./error.h"




typedef struct CRUX__Element_Struct {
  void *addr;
  Size size;
} CRUX__Element;


typedef struct CRUX__ResultElement_Struct {
  CRUX__Trace trace;
  const CRUX__Element value;
} CRUX__ResultElement;




CRUX__Element CRUX__element_nil (void);


Bool CRUX__element_equals (
  const CRUX__Element a,
  const CRUX__Element b);
