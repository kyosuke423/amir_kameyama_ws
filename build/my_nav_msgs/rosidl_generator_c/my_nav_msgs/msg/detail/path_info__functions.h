// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__FUNCTIONS_H_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "my_nav_msgs/msg/detail/path_info__struct.h"

/// Initialize msg/PathInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_nav_msgs__msg__PathInfo
 * )) before or use
 * my_nav_msgs__msg__PathInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
bool
my_nav_msgs__msg__PathInfo__init(my_nav_msgs__msg__PathInfo * msg);

/// Finalize msg/PathInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
void
my_nav_msgs__msg__PathInfo__fini(my_nav_msgs__msg__PathInfo * msg);

/// Create msg/PathInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_nav_msgs__msg__PathInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
my_nav_msgs__msg__PathInfo *
my_nav_msgs__msg__PathInfo__create();

/// Destroy msg/PathInfo message.
/**
 * It calls
 * my_nav_msgs__msg__PathInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
void
my_nav_msgs__msg__PathInfo__destroy(my_nav_msgs__msg__PathInfo * msg);

/// Check for msg/PathInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
bool
my_nav_msgs__msg__PathInfo__are_equal(const my_nav_msgs__msg__PathInfo * lhs, const my_nav_msgs__msg__PathInfo * rhs);

/// Copy a msg/PathInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
bool
my_nav_msgs__msg__PathInfo__copy(
  const my_nav_msgs__msg__PathInfo * input,
  my_nav_msgs__msg__PathInfo * output);

/// Initialize array of msg/PathInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_nav_msgs__msg__PathInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
bool
my_nav_msgs__msg__PathInfo__Sequence__init(my_nav_msgs__msg__PathInfo__Sequence * array, size_t size);

/// Finalize array of msg/PathInfo messages.
/**
 * It calls
 * my_nav_msgs__msg__PathInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
void
my_nav_msgs__msg__PathInfo__Sequence__fini(my_nav_msgs__msg__PathInfo__Sequence * array);

/// Create array of msg/PathInfo messages.
/**
 * It allocates the memory for the array and calls
 * my_nav_msgs__msg__PathInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
my_nav_msgs__msg__PathInfo__Sequence *
my_nav_msgs__msg__PathInfo__Sequence__create(size_t size);

/// Destroy array of msg/PathInfo messages.
/**
 * It calls
 * my_nav_msgs__msg__PathInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
void
my_nav_msgs__msg__PathInfo__Sequence__destroy(my_nav_msgs__msg__PathInfo__Sequence * array);

/// Check for msg/PathInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
bool
my_nav_msgs__msg__PathInfo__Sequence__are_equal(const my_nav_msgs__msg__PathInfo__Sequence * lhs, const my_nav_msgs__msg__PathInfo__Sequence * rhs);

/// Copy an array of msg/PathInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_my_nav_msgs
bool
my_nav_msgs__msg__PathInfo__Sequence__copy(
  const my_nav_msgs__msg__PathInfo__Sequence * input,
  my_nav_msgs__msg__PathInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__FUNCTIONS_H_
