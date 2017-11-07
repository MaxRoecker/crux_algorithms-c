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
 * CRUX_MATH__ERROR_DOMAIN
 * 
 * Raised when the operation can't be applied to the arguments.
 */
extern const CRUX__Error CRUX_MATH__ERROR_DOMAIN;

/**
 * CRUX_MATH__ERROR_RANGE
 * 
 * Raised when the operation can't be representable as a result.
 */
extern const CRUX__Error CRUX_MATH__ERROR_RANGE;
