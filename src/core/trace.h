/**
 * ---------------------------------------------------------------------------
 * @file   fault.h
 * @brief  Default functions to handle fault traces.
 * 
 */
#pragma once

#include <talloc.h>
#include "./fault.h"




/**
 * @struct CRUX__Trace
 * @brief  Represents a chain of faults.
 *
 * The trace of every fault occurred until the original fault.
 *
 */
typedef struct CRUX__Trace_Struct {
  CRUX__Fault *top;
  void *context;
} CRUX__Trace;




/**
 * @brief Create a new empty fault trace.
 * 
 * @return A initialized CRUX__Trace.
 *
 */
CRUX__Trace CRUX__trace_create (void);


/**
 * @brief Checks if there is any faults into the trace.
 *
 * @param[in] trace The trace to be checked.
 * @return true if the trace has no fault, false otherwise.
 *
 */
Bool CRUX__trace_check (
  const CRUX__Trace trace);


/**
 * @brief Traces a fault. Set the top of the trace as the cause of the fault.
 *
 * @param[in] trace The trace where a copy of the fault will be pushed. 
 * @param[in] fault The fault that a copy will be traced.
 * @return the new trace.
 *
 */
void CRUX__trace_push (
    CRUX__Trace *restrict const trace,
    const CRUX__Fault fault);


/**
 * @brief Cleans the target, Moves all source faults to target and cleans source.
 * 
 *
 * @param[in] target  The trace where the faults will be pushed.
 * @param[in] source  The trace where from the faults will be popped.
 *
 */
void CRUX__trace_move (
    CRUX__Trace *restrict const target,
    CRUX__Trace *restrict const source);


/**
 * @brief Delete all the faults pushed into it.
 *
 * @param[in] trace The trace that will be cleaned.
 *
 */
void CRUX__trace_clean (
  CRUX__Trace *restrict const trace);


/**
 * @brief Prints the trace into a file.
 *
 * @param[in] stream  The stream file.
 * @param[in] trace   The trace that will be printed.
 *
 */
void CRUX__trace_print (
    FILE *const stream,
    const CRUX__Trace trace);
