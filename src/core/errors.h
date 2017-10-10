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


/**
 * @struct CRUX__Error
 * @brief  Represents an error in CRUX.
 *
 */
typedef struct CRUX__Error_Struct {
  IU32 code;  /**< Error's code */
  char *name; /**< Error's name */
} CRUX__Error;


/**
 * @brief Checks if the errors are equals.
 *
 * @param[in] one       A error.
 * @param[in] another   A error.
 * @return true if the an error is equals to another error, false otherwise.
 *
 */
bool CRUX__error_equals (
    const CRUX__Error *const one,
    const CRUX__Error *const another);


/**
 * @brief Serialize the error into a string.
 *
 * @param[in] error     A error.
 * @return a null terminated string of the error.
 *
 */
const char * CRUX__error_stringify (
    const CRUX__Error *const error);




/**
 * @struct CRUX__Occurrence
 * @brief  Represents an error occurrence.
 *
 * An error occurrence is a incident that results in a error. While the
 * `CRUX__Error` describes the error, a `CRUX__Occurrence` describes when and
 * where the error happened.
 *
 * An occurrence can have a `cause`, that points to another occurrence that
 * generated it. This form a stack of occurrences, where the root cause
 * points its cause to NULL.
 *
 */
typedef struct CRUX__Occurrence_Struct {
  struct CRUX__Occurrence_Struct *cause; /**< The cause of the occurrence */
  CRUX__Error *error; /**< The error of the occurrence */
  char *info;         /**< Information about the occurrence */
  char *filepath;     /**< The file path where the occurrence happened */
  IU32 line;          /**< The file line where the occurrence happend */
} CRUX__Occurrence;


/**
 * @brief Create a new occurrence and push it on the occurrences stack.
 *
 * @param[in] occurrences The occurrences stack address.
 * @param[in] error       The error of the occurrence.
 * @param[in] info        Information about the occurrence.
 * @param[in] filepath    The file path where the occurrence happened.
 * @param[in] line        The file line where the occurrence happend.
 *
 */
void CRUX__occurrences_push (
    const CRUX__Occurrence **occurrences,
    const CRUX__Error *const error,
    const char *const info,
    const char *const filepath,
    const IU32 line);


/**
 * @brief Pop an occurrence of the error stack.
 *
 * @param[in] occurrences The occurrences stack address.
 * @return The occurrence popped.
 *
 */
CRUX__Occurrence * CRUX__occurrences_pop (
    const CRUX__Occurrence **occurrences);

/**
 * @brief Prints a stacktrace of an error stack into a stream file.
 *
 * @param[in] stream      The stream file.
 * @param[in] occurrences The occurrences stack address.
 *
 */
void CRUX__occurrences_print (
    FILE *stream,
    const CRUX__Occurrence *const *const occurrences);

/**
 * @brief Cleans the error stack, deleting all the occurrences.
 *
 * @param[in] occurrences The occurrences stack address.
 *
 */
void CRUX__occurrences_clean (
    const CRUX__Occurrence **occurrences);







