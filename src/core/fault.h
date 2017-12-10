/**
 * ---------------------------------------------------------------------------
 * @file   fault.h
 * @brief  Default functions to handle faults.
 * 
 */
#pragma once

#include "./error.h"




#define CRUX__FAULT_FILEPATH_SIZE ((Size) 256)
#define CRUX__FAULT_INFO_SIZE ((Size) 256)




/**
 * @struct CRUX__Fault
 * @brief  Represents an error fault.
 *
 * An fault is a incident that results from an error. While the `CRUX__Error`
 * describes the error, a `CRUX__Fault` describes where the error happened,
 * providing more information about. An fault can also have a cause, i.e.
 * another fault that caused this fault.
 *
 */
typedef struct CRUX__Fault_Struct {
  struct CRUX__Fault_Struct *cause;     /**< The cause of the fault */
  CRUX__Error error;                    /**< The error of the fault */
  Char info[CRUX__FAULT_FILEPATH_SIZE]; /**< Information about the fault */
  Char filepath[CRUX__FAULT_INFO_SIZE]; /**< The file path where the fault happened */
  IU32 line;                            /**< The file line where the fault happend */
} CRUX__Fault;




/**
 * @brief Checks if the faults are equals.
 *
 * @param[in] one       A fault.
 * @param[in] another   A fault.
 * @return true if the an fault is equals to another fault, false otherwise.
 *
 */
Bool CRUX__fault_equals (
    const CRUX__Fault one,
    const CRUX__Fault another);




/**
 * @brief Put a formated string as info of an fault.
 * 
 * @param[in] fault   The fault where info will be placed.
 * @param[in] format  The formated string.
 */
#define CRUX__fault_infoprintf(fault, format, ...) \
  snprintf(fault.info, CRUX__FAULT_FILEPATH_SIZE, format, __VA_ARGS__);


/**
 * @brief Returns the absolute line from the current line offset.
 * 
 * @param[in] offset  The offset of the current line. 
 */
#define CRUX__fault_line(offset) (((IU32) __LINE__) + as_iu32(offset))


/**
 * @brief Returns the current file absolute path.
 * 
 */
#define CRUX__fault_filepath() (__FILE__)
