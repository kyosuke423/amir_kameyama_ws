// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from failure_detection_msgs:action/Analysys.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__FUNCTIONS_H_
#define FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "failure_detection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "failure_detection_msgs/action/detail/analysys__struct.h"

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_Goal
 * )) before or use
 * failure_detection_msgs__action__Analysys_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Goal__init(failure_detection_msgs__action__Analysys_Goal * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Goal__fini(failure_detection_msgs__action__Analysys_Goal * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_Goal *
failure_detection_msgs__action__Analysys_Goal__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Goal__destroy(failure_detection_msgs__action__Analysys_Goal * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Goal__are_equal(const failure_detection_msgs__action__Analysys_Goal * lhs, const failure_detection_msgs__action__Analysys_Goal * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_Goal__copy(
  const failure_detection_msgs__action__Analysys_Goal * input,
  failure_detection_msgs__action__Analysys_Goal * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Goal__Sequence__init(failure_detection_msgs__action__Analysys_Goal__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Goal__Sequence__fini(failure_detection_msgs__action__Analysys_Goal__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_Goal__Sequence *
failure_detection_msgs__action__Analysys_Goal__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Goal__Sequence__destroy(failure_detection_msgs__action__Analysys_Goal__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Goal__Sequence__are_equal(const failure_detection_msgs__action__Analysys_Goal__Sequence * lhs, const failure_detection_msgs__action__Analysys_Goal__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_Goal__Sequence__copy(
  const failure_detection_msgs__action__Analysys_Goal__Sequence * input,
  failure_detection_msgs__action__Analysys_Goal__Sequence * output);

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_Result
 * )) before or use
 * failure_detection_msgs__action__Analysys_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Result__init(failure_detection_msgs__action__Analysys_Result * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Result__fini(failure_detection_msgs__action__Analysys_Result * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_Result *
failure_detection_msgs__action__Analysys_Result__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Result__destroy(failure_detection_msgs__action__Analysys_Result * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Result__are_equal(const failure_detection_msgs__action__Analysys_Result * lhs, const failure_detection_msgs__action__Analysys_Result * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_Result__copy(
  const failure_detection_msgs__action__Analysys_Result * input,
  failure_detection_msgs__action__Analysys_Result * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Result__Sequence__init(failure_detection_msgs__action__Analysys_Result__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Result__Sequence__fini(failure_detection_msgs__action__Analysys_Result__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_Result__Sequence *
failure_detection_msgs__action__Analysys_Result__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Result__Sequence__destroy(failure_detection_msgs__action__Analysys_Result__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Result__Sequence__are_equal(const failure_detection_msgs__action__Analysys_Result__Sequence * lhs, const failure_detection_msgs__action__Analysys_Result__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_Result__Sequence__copy(
  const failure_detection_msgs__action__Analysys_Result__Sequence * input,
  failure_detection_msgs__action__Analysys_Result__Sequence * output);

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_Feedback
 * )) before or use
 * failure_detection_msgs__action__Analysys_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Feedback__init(failure_detection_msgs__action__Analysys_Feedback * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Feedback__fini(failure_detection_msgs__action__Analysys_Feedback * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_Feedback *
failure_detection_msgs__action__Analysys_Feedback__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Feedback__destroy(failure_detection_msgs__action__Analysys_Feedback * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Feedback__are_equal(const failure_detection_msgs__action__Analysys_Feedback * lhs, const failure_detection_msgs__action__Analysys_Feedback * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_Feedback__copy(
  const failure_detection_msgs__action__Analysys_Feedback * input,
  failure_detection_msgs__action__Analysys_Feedback * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Feedback__Sequence__init(failure_detection_msgs__action__Analysys_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Feedback__Sequence__fini(failure_detection_msgs__action__Analysys_Feedback__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_Feedback__Sequence *
failure_detection_msgs__action__Analysys_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_Feedback__Sequence__destroy(failure_detection_msgs__action__Analysys_Feedback__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_Feedback__Sequence__are_equal(const failure_detection_msgs__action__Analysys_Feedback__Sequence * lhs, const failure_detection_msgs__action__Analysys_Feedback__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_Feedback__Sequence__copy(
  const failure_detection_msgs__action__Analysys_Feedback__Sequence * input,
  failure_detection_msgs__action__Analysys_Feedback__Sequence * output);

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_SendGoal_Request
 * )) before or use
 * failure_detection_msgs__action__Analysys_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Request__init(failure_detection_msgs__action__Analysys_SendGoal_Request * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Request__fini(failure_detection_msgs__action__Analysys_SendGoal_Request * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_SendGoal_Request *
failure_detection_msgs__action__Analysys_SendGoal_Request__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Request__destroy(failure_detection_msgs__action__Analysys_SendGoal_Request * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Request__are_equal(const failure_detection_msgs__action__Analysys_SendGoal_Request * lhs, const failure_detection_msgs__action__Analysys_SendGoal_Request * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_SendGoal_Request__copy(
  const failure_detection_msgs__action__Analysys_SendGoal_Request * input,
  failure_detection_msgs__action__Analysys_SendGoal_Request * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__init(failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__fini(failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence *
failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__destroy(failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__are_equal(const failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence * lhs, const failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence__copy(
  const failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence * input,
  failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence * output);

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_SendGoal_Response
 * )) before or use
 * failure_detection_msgs__action__Analysys_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Response__init(failure_detection_msgs__action__Analysys_SendGoal_Response * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Response__fini(failure_detection_msgs__action__Analysys_SendGoal_Response * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_SendGoal_Response *
failure_detection_msgs__action__Analysys_SendGoal_Response__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Response__destroy(failure_detection_msgs__action__Analysys_SendGoal_Response * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Response__are_equal(const failure_detection_msgs__action__Analysys_SendGoal_Response * lhs, const failure_detection_msgs__action__Analysys_SendGoal_Response * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_SendGoal_Response__copy(
  const failure_detection_msgs__action__Analysys_SendGoal_Response * input,
  failure_detection_msgs__action__Analysys_SendGoal_Response * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__init(failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__fini(failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence *
failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__destroy(failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__are_equal(const failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence * lhs, const failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence__copy(
  const failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence * input,
  failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence * output);

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_GetResult_Request
 * )) before or use
 * failure_detection_msgs__action__Analysys_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Request__init(failure_detection_msgs__action__Analysys_GetResult_Request * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Request__fini(failure_detection_msgs__action__Analysys_GetResult_Request * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_GetResult_Request *
failure_detection_msgs__action__Analysys_GetResult_Request__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Request__destroy(failure_detection_msgs__action__Analysys_GetResult_Request * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Request__are_equal(const failure_detection_msgs__action__Analysys_GetResult_Request * lhs, const failure_detection_msgs__action__Analysys_GetResult_Request * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_GetResult_Request__copy(
  const failure_detection_msgs__action__Analysys_GetResult_Request * input,
  failure_detection_msgs__action__Analysys_GetResult_Request * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__init(failure_detection_msgs__action__Analysys_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__fini(failure_detection_msgs__action__Analysys_GetResult_Request__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_GetResult_Request__Sequence *
failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__destroy(failure_detection_msgs__action__Analysys_GetResult_Request__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__are_equal(const failure_detection_msgs__action__Analysys_GetResult_Request__Sequence * lhs, const failure_detection_msgs__action__Analysys_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_GetResult_Request__Sequence__copy(
  const failure_detection_msgs__action__Analysys_GetResult_Request__Sequence * input,
  failure_detection_msgs__action__Analysys_GetResult_Request__Sequence * output);

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_GetResult_Response
 * )) before or use
 * failure_detection_msgs__action__Analysys_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Response__init(failure_detection_msgs__action__Analysys_GetResult_Response * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Response__fini(failure_detection_msgs__action__Analysys_GetResult_Response * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_GetResult_Response *
failure_detection_msgs__action__Analysys_GetResult_Response__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Response__destroy(failure_detection_msgs__action__Analysys_GetResult_Response * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Response__are_equal(const failure_detection_msgs__action__Analysys_GetResult_Response * lhs, const failure_detection_msgs__action__Analysys_GetResult_Response * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_GetResult_Response__copy(
  const failure_detection_msgs__action__Analysys_GetResult_Response * input,
  failure_detection_msgs__action__Analysys_GetResult_Response * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__init(failure_detection_msgs__action__Analysys_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__fini(failure_detection_msgs__action__Analysys_GetResult_Response__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_GetResult_Response__Sequence *
failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__destroy(failure_detection_msgs__action__Analysys_GetResult_Response__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__are_equal(const failure_detection_msgs__action__Analysys_GetResult_Response__Sequence * lhs, const failure_detection_msgs__action__Analysys_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_GetResult_Response__Sequence__copy(
  const failure_detection_msgs__action__Analysys_GetResult_Response__Sequence * input,
  failure_detection_msgs__action__Analysys_GetResult_Response__Sequence * output);

/// Initialize action/Analysys message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__action__Analysys_FeedbackMessage
 * )) before or use
 * failure_detection_msgs__action__Analysys_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_FeedbackMessage__init(failure_detection_msgs__action__Analysys_FeedbackMessage * msg);

/// Finalize action/Analysys message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_FeedbackMessage__fini(failure_detection_msgs__action__Analysys_FeedbackMessage * msg);

/// Create action/Analysys message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__action__Analysys_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_FeedbackMessage *
failure_detection_msgs__action__Analysys_FeedbackMessage__create();

/// Destroy action/Analysys message.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_FeedbackMessage__destroy(failure_detection_msgs__action__Analysys_FeedbackMessage * msg);

/// Check for action/Analysys message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_FeedbackMessage__are_equal(const failure_detection_msgs__action__Analysys_FeedbackMessage * lhs, const failure_detection_msgs__action__Analysys_FeedbackMessage * rhs);

/// Copy a action/Analysys message.
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
failure_detection_msgs__action__Analysys_FeedbackMessage__copy(
  const failure_detection_msgs__action__Analysys_FeedbackMessage * input,
  failure_detection_msgs__action__Analysys_FeedbackMessage * output);

/// Initialize array of action/Analysys messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__action__Analysys_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__init(failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__fini(failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence * array);

/// Create array of action/Analysys messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence *
failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Analysys messages.
/**
 * It calls
 * failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__destroy(failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence * array);

/// Check for action/Analysys message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__are_equal(const failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence * lhs, const failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Analysys messages.
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
failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence__copy(
  const failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence * input,
  failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__FUNCTIONS_H_
