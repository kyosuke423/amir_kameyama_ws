// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__FUNCTIONS_H_
#define FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "failure_detection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "failure_detection_msgs/msg/detail/solution__struct.h"

/// Initialize msg/Solution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__msg__Solution
 * )) before or use
 * failure_detection_msgs__msg__Solution__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__msg__Solution__init(failure_detection_msgs__msg__Solution * msg);

/// Finalize msg/Solution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__msg__Solution__fini(failure_detection_msgs__msg__Solution * msg);

/// Create msg/Solution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__msg__Solution__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__msg__Solution *
failure_detection_msgs__msg__Solution__create();

/// Destroy msg/Solution message.
/**
 * It calls
 * failure_detection_msgs__msg__Solution__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__msg__Solution__destroy(failure_detection_msgs__msg__Solution * msg);

/// Check for msg/Solution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__msg__Solution__are_equal(const failure_detection_msgs__msg__Solution * lhs, const failure_detection_msgs__msg__Solution * rhs);

/// Copy a msg/Solution message.
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
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__msg__Solution__copy(
  const failure_detection_msgs__msg__Solution * input,
  failure_detection_msgs__msg__Solution * output);

/// Initialize array of msg/Solution messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__msg__Solution__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__msg__Solution__Sequence__init(failure_detection_msgs__msg__Solution__Sequence * array, size_t size);

/// Finalize array of msg/Solution messages.
/**
 * It calls
 * failure_detection_msgs__msg__Solution__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__msg__Solution__Sequence__fini(failure_detection_msgs__msg__Solution__Sequence * array);

/// Create array of msg/Solution messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__msg__Solution__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__msg__Solution__Sequence *
failure_detection_msgs__msg__Solution__Sequence__create(size_t size);

/// Destroy array of msg/Solution messages.
/**
 * It calls
 * failure_detection_msgs__msg__Solution__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__msg__Solution__Sequence__destroy(failure_detection_msgs__msg__Solution__Sequence * array);

/// Check for msg/Solution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__msg__Solution__Sequence__are_equal(const failure_detection_msgs__msg__Solution__Sequence * lhs, const failure_detection_msgs__msg__Solution__Sequence * rhs);

/// Copy an array of msg/Solution messages.
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
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__msg__Solution__Sequence__copy(
  const failure_detection_msgs__msg__Solution__Sequence * input,
  failure_detection_msgs__msg__Solution__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__FUNCTIONS_H_
