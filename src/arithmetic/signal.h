/**
 * ---------------------------------------------------------------------------
 * @file   signal.h
 * @brief  Absolute values for core types.
 *
 */
#pragma once
#include "./error.h"




#define CRUX__is_positive(value) (_Generic(value,   \
  Char : CRUX__is_greater_char(value, ((Char) 0)),  \
  IU08 : CRUX__is_greater_iu08(value, ((IU08) 0)),  \
  IU16 : CRUX__is_greater_iu16(value, ((IU16) 0)),  \
  IU32 : CRUX__is_greater_iu32(value, ((IU32) 0)),  \
  IU64 : CRUX__is_greater_iu64(value, ((IU64) 0)),  \
  IS08 : CRUX__is_greater_is08(value, ((IS08) 0)),  \
  IS16 : CRUX__is_greater_is16(value, ((IS16) 0)),  \
  IS32 : CRUX__is_greater_is32(value, ((IS32) 0)),  \
  IS64 : CRUX__is_greater_is64(value, ((IS64) 0))))


#define CRUX__is_negative(value) (_Generic(value, \
  Char : CRUX__is_less_char(value, ((Char) 0)),   \
  IU08 : CRUX__is_less_iu08(value, ((IU08) 0)),   \
  IU16 : CRUX__is_less_iu16(value, ((IU16) 0)),   \
  IU32 : CRUX__is_less_iu32(value, ((IU32) 0)),   \
  IU64 : CRUX__is_less_iu64(value, ((IU64) 0)),   \
  IS08 : CRUX__is_less_is08(value, ((IS08) 0)),   \
  IS16 : CRUX__is_less_is16(value, ((IS16) 0)),   \
  IS32 : CRUX__is_less_is32(value, ((IS32) 0)),   \
  IS64 : CRUX__is_less_is64(value, ((IS64) 0))))


#define CRUX__is_zero(value) (_Generic(value,     \
  Char : CRUX__is_equal_char(value, ((Char) 0)),  \
  IU08 : CRUX__is_equal_iu08(value, ((IU08) 0)),  \
  IU16 : CRUX__is_equal_iu16(value, ((IU16) 0)),  \
  IU32 : CRUX__is_equal_iu32(value, ((IU32) 0)),  \
  IU64 : CRUX__is_equal_iu64(value, ((IU64) 0)),  \
  IS08 : CRUX__is_equal_is08(value, ((IS08) 0)),  \
  IS16 : CRUX__is_equal_is16(value, ((IS16) 0)),  \
  IS32 : CRUX__is_equal_is32(value, ((IS32) 0)),  \
  IS64 : CRUX__is_equal_is64(value, ((IS64) 0))))
