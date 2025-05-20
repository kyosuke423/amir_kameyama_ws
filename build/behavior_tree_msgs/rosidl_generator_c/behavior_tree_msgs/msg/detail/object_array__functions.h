// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from behavior_tree_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT_ARRAY__FUNCTIONS_H_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_tree_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "behavior_tree_msgs/msg/detail/object_array__struct.h"

/// Initialize msg/ObjectArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_tree_msgs__msg__ObjectArray
 * )) before or use
 * behavior_tree_msgs__msg__ObjectArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__ObjectArray__init(behavior_tree_msgs__msg__ObjectArray * msg);

/// Finalize msg/ObjectArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__ObjectArray__fini(behavior_tree_msgs__msg__ObjectArray * msg);

/// Create msg/ObjectArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_tree_msgs__msg__ObjectArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
behavior_tree_msgs__msg__ObjectArray *
behavior_tree_msgs__msg__ObjectArray__create();

/// Destroy msg/ObjectArray message.
/**
 * It calls
 * behavior_tree_msgs__msg__ObjectArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__ObjectArray__destroy(behavior_tree_msgs__msg__ObjectArray * msg);

/// Check for msg/ObjectArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__ObjectArray__are_equal(const behavior_tree_msgs__msg__ObjectArray * lhs, const behavior_tree_msgs__msg__ObjectArray * rhs);

/// Copy a msg/ObjectArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__ObjectArray__copy(
  const behavior_tree_msgs__msg__ObjectArray * input,
  behavior_tree_msgs__msg__ObjectArray * output);

/// Initialize array of msg/ObjectArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_tree_msgs__msg__ObjectArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__ObjectArray__Sequence__init(behavior_tree_msgs__msg__ObjectArray__Sequence * array, size_t size);

/// Finalize array of msg/ObjectArray messages.
/**
 * It calls
 * behavior_tree_msgs__msg__ObjectArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__ObjectArray__Sequence__fini(behavior_tree_msgs__msg__ObjectArray__Sequence * array);

/// Create array of msg/ObjectArray messages.
/**
 * It allocates the memory for the array and calls
 * behavior_tree_msgs__msg__ObjectArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
behavior_tree_msgs__msg__ObjectArray__Sequence *
behavior_tree_msgs__msg__ObjectArray__Sequence__create(size_t size);

/// Destroy array of msg/ObjectArray messages.
/**
 * It calls
 * behavior_tree_msgs__msg__ObjectArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
void
behavior_tree_msgs__msg__ObjectArray__Sequence__destroy(behavior_tree_msgs__msg__ObjectArray__Sequence * array);

/// Check for msg/ObjectArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__ObjectArray__Sequence__are_equal(const behavior_tree_msgs__msg__ObjectArray__Sequence * lhs, const behavior_tree_msgs__msg__ObjectArray__Sequence * rhs);

/// Copy an array of msg/ObjectArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_tree_msgs
bool
behavior_tree_msgs__msg__ObjectArray__Sequence__copy(
  const behavior_tree_msgs__msg__ObjectArray__Sequence * input,
  behavior_tree_msgs__msg__ObjectArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT_ARRAY__FUNCTIONS_H_
