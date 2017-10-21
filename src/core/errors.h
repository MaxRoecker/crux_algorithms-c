/**
 * ---------------------------------------------------------------------------
 * @file   errors.h
 * @brief  Default functions to handle errors.
 * 
 */
#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <talloc.h>
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
 * @param[in] error     A error.
 * @param[in] buffer    An Char array where the string will be stored.
 *
 */
void CRUX__error_stringify (
  const CRUX__Error error,
  Char *buffer,
  const IU64 buffer_size);




#define CRUX__EXCEPTION_FILEPATH_SIZE ((Size) 256)
#define CRUX__EXCEPTION_INFO_SIZE ((Size) 256)


/**
 * @struct CRUX__Exception
 * @brief  Represents an error exception.
 *
 * An error exception is a incident that results in a error. While the
 * `CRUX__Error` describes the error, a `CRUX__Exception` describes when and
 * where the error happened.
 *
 * An exception can have a `cause`, that points to another exception that
 * generated it. This form a stack of exceptions, where the root cause
 * points its cause to NULL.
 *
 */
typedef struct CRUX__Exception_Struct {
  struct CRUX__Exception_Struct *cause;     /**< The cause of the exception */
  CRUX__Error error;                        /**< The error of the exception */
  Char info[CRUX__EXCEPTION_FILEPATH_SIZE]; /**< Information about the exception */
  Char filepath[CRUX__EXCEPTION_INFO_SIZE]; /**< The file path where the exception happened */
  IU32 line;                                /**< The file line where the exception happend */
} CRUX__Exception;


/**
 * @brief Create a new exception and push it on the exceptions stack.
 *
 * @param[in] exceptions The exceptions stack address.
 * @param[in] error       The error of the exception.
 * @param[in] info        Information about the exception.
 * @param[in] filepath    The file path where the exception happened.
 * @param[in] line        The file line where the exception happend.
 *
 */
void CRUX__exceptions_push (
    const CRUX__Exception **exceptions,
    const CRUX__Exception exception);


/**
 * @brief Pop an exception of the error stack.
 *
 * @param[in] exceptions The exceptions stack address.
 * @return The exception popped.
 *
 */
CRUX__Exception * CRUX__exceptions_pop (
    const CRUX__Exception **exceptions);

/**
 * @brief Prints a stacktrace of an error stack into a stream file.
 *
 * @param[in] stream      The stream file.
 * @param[in] exceptions The exceptions stack address.
 *
 */
void CRUX__exceptions_print (
    FILE *stream,
    const CRUX__Exception *const *const exceptions);

/**
 * @brief Cleans the error stack, deleting all the exceptions.
 *
 * @param[in] exceptions The exceptions stack address.
 *
 */
void CRUX__exceptions_clean (
    const CRUX__Exception **exceptions);







