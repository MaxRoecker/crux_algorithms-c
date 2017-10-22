/**
 * ---------------------------------------------------------------------------
 * @file   errcodes.h
 * @brief  The error codes for the package.
 * 
 */
#pragma once
#include "./../core/core.h"




/**
 * CRUX_MATH__ERROR_MATH
 * 
 * Generic math error definition. Raised when no specific error is available.
 */
extern const CRUX__Error CRUX_MATH__ERROR_MATH;

/**
 * CRUX_MATH__ERROR_OVERFLOW
 * 
 * Raised when the operation results in a integer overflow.
 */
extern const CRUX__Error CRUX_MATH__ERROR_OVERFLOW;
