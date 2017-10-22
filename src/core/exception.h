/**
 * ---------------------------------------------------------------------------
 * @file   exception.h
 * @brief  Default functions to handle exceptions.
 * 
 */
#pragma once

#include <talloc.h>
#include "./error.h"




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
