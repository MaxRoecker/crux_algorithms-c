/**
 * ---------------------------------------------------------------------------
 * @file   memory.h
 * @brief  Default functions to dynamic memory allocation.
 * 
 */
#pragma once
#include "./results.h"




/**
 * @brief Allocates a zero-initialized memory space in a new context;
 *
 * @param[in] size    the size of the allocation;
 * @return the address of the memory allocation.
 *
 */
CRUX__ResultAddr CRUX__alloc (const Size size);


/**
 * @brief Allocates a zero-initialized memory space in a existing context.
 *
 * @param[in] context the parent's context;
 * @param[in] size    the size of the allocation;
 * @return the address of the memory allocation.
 *
 */
CRUX__ResultAddr CRUX__alloc_into (const void *context, const Size size);


/**
 * @brief Allocates a zero-spaced new context.
 *
 * @return the address of the context.
 *
 */
CRUX__ResultAddr CRUX__alloc_context (void);


/**
 * @brief Allocates a zero-spaced new context in a existing context.
 *
 * @param[in] context the parent's context;
 * @return the address of the context.
 *
 */
CRUX__ResultAddr CRUX__alloc_context_into (const void *context);


/**
 * @brief Returns the memory space size of the context.
 *
 * @param[in] context the context which size will be get;
 * @return the size of the context only.
 *
 */
CRUX__ResultSize CRUX__alloc_get_size (const void *context);


/**
 * @brief Returns the memory space size of the context and its children.
 *
 * @param[in] context the context which total size will be get;
 * @return the size of the context and its children.
 *
 */
CRUX__ResultSize CRUX__alloc_get_total_size (const void *context);


/**
 * @brief Changes the address' context to a new one and sets it to nil.
 *
 * @param[in] new_context the new parent's context;
 * @param[in] address     the address that will have a new context;
 * @return a new contextualized address
 *
 */
CRUX__ResultAddr CRUX__alloc_move (const void *new_context, void **address);


/**
 * @brief Free the context and all of its children and sets it to nil.
 *
 * @param[in] context the context to be freed;
 * @return the result of the context freeing.
 *
 */
CRUX__ResultVoid CRUX__alloc_free (void **context);
