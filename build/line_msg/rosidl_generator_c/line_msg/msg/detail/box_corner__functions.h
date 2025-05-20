// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from line_msg:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#ifndef LINE_MSG__MSG__DETAIL__BOX_CORNER__FUNCTIONS_H_
#define LINE_MSG__MSG__DETAIL__BOX_CORNER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "line_msg/msg/rosidl_generator_c__visibility_control.h"

#include "line_msg/msg/detail/box_corner__struct.h"

/// Initialize msg/BoxCorner message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * line_msg__msg__BoxCorner
 * )) before or use
 * line_msg__msg__BoxCorner__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
bool
line_msg__msg__BoxCorner__init(line_msg__msg__BoxCorner * msg);

/// Finalize msg/BoxCorner message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
void
line_msg__msg__BoxCorner__fini(line_msg__msg__BoxCorner * msg);

/// Create msg/BoxCorner message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * line_msg__msg__BoxCorner__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
line_msg__msg__BoxCorner *
line_msg__msg__BoxCorner__create();

/// Destroy msg/BoxCorner message.
/**
 * It calls
 * line_msg__msg__BoxCorner__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
void
line_msg__msg__BoxCorner__destroy(line_msg__msg__BoxCorner * msg);

/// Check for msg/BoxCorner message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
bool
line_msg__msg__BoxCorner__are_equal(const line_msg__msg__BoxCorner * lhs, const line_msg__msg__BoxCorner * rhs);

/// Copy a msg/BoxCorner message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
bool
line_msg__msg__BoxCorner__copy(
  const line_msg__msg__BoxCorner * input,
  line_msg__msg__BoxCorner * output);

/// Initialize array of msg/BoxCorner messages.
/**
 * It allocates the memory for the number of elements and calls
 * line_msg__msg__BoxCorner__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
bool
line_msg__msg__BoxCorner__Sequence__init(line_msg__msg__BoxCorner__Sequence * array, size_t size);

/// Finalize array of msg/BoxCorner messages.
/**
 * It calls
 * line_msg__msg__BoxCorner__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
void
line_msg__msg__BoxCorner__Sequence__fini(line_msg__msg__BoxCorner__Sequence * array);

/// Create array of msg/BoxCorner messages.
/**
 * It allocates the memory for the array and calls
 * line_msg__msg__BoxCorner__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
line_msg__msg__BoxCorner__Sequence *
line_msg__msg__BoxCorner__Sequence__create(size_t size);

/// Destroy array of msg/BoxCorner messages.
/**
 * It calls
 * line_msg__msg__BoxCorner__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
void
line_msg__msg__BoxCorner__Sequence__destroy(line_msg__msg__BoxCorner__Sequence * array);

/// Check for msg/BoxCorner message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
bool
line_msg__msg__BoxCorner__Sequence__are_equal(const line_msg__msg__BoxCorner__Sequence * lhs, const line_msg__msg__BoxCorner__Sequence * rhs);

/// Copy an array of msg/BoxCorner messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_line_msg
bool
line_msg__msg__BoxCorner__Sequence__copy(
  const line_msg__msg__BoxCorner__Sequence * input,
  line_msg__msg__BoxCorner__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LINE_MSG__MSG__DETAIL__BOX_CORNER__FUNCTIONS_H_
