/**
 * ---------------------------------------------------------------------------
 * @file   errors.h
 * @brief  Standard error definitions and functions.
 * 
 */
#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "./types.h"




#define CRUX__ERROR_NAME_SIZE ((Size) 64)
#define CRUX__ERROR_STRING_SIZE ((Size) 128)


/**
 * @struct CRUX__Error
 * @brief  Represents an error in CRUX.
 *
 */
typedef struct CRUX__Error_Struct {
  IU32 code;  /**< Error's code */
  Char name[CRUX__ERROR_NAME_SIZE]; /**< Error's name */
} CRUX__Error;


/**
 * @brief Checks if the errors are equals.
 *
 * @param[in] one       A error.
 * @param[in] another   A error.
 * @return true if the an error is equals to another error, false otherwise.
 *
 */
Bool CRUX__error_equals (
    const CRUX__Error one,
    const CRUX__Error another);


/**
 * @brief Serialize the error into a string.
 *
 * @param[in] error       the error;
 * @param[in] buffer      the Char array where the string will be stored;
 * @param[in] buffer_size the buffer maximum size;
 *
 */
void CRUX__error_stringify (
    const CRUX__Error error,
    Char *buffer,
    const Size buffer_size);


/**
 * CRUX__ERROR_GENERIC
 * 
 * Generic error definition. Raised when no specific error is available.
 */
extern const CRUX__Error CRUX__ERROR_GENERIC;


/**
 * CRUX__ERROR_VALUE
 * 
 * Raised when a function receives a inappropriate value.
 */
extern const CRUX__Error CRUX__ERROR_VALUE;


/**
 * CRUX__ERROR_MEMORY
 * 
 * Raised when there is no memory available to do the operation.
 */
extern const CRUX__Error CRUX__ERROR_MEMORY;
