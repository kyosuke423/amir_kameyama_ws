// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from failure_detection_msgs:srv/BeforePick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__FUNCTIONS_H_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "failure_detection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "failure_detection_msgs/srv/detail/before_pick__struct.h"

/// Initialize srv/BeforePick message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__srv__BeforePick_Request
 * )) before or use
 * failure_detection_msgs__srv__BeforePick_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Request__init(failure_detection_msgs__srv__BeforePick_Request * msg);

/// Finalize srv/BeforePick message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Request__fini(failure_detection_msgs__srv__BeforePick_Request * msg);

/// Create srv/BeforePick message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__srv__BeforePick_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__srv__BeforePick_Request *
failure_detection_msgs__srv__BeforePick_Request__create();

/// Destroy srv/BeforePick message.
/**
 * It calls
 * failure_detection_msgs__srv__BeforePick_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Request__destroy(failure_detection_msgs__srv__BeforePick_Request * msg);

/// Check for srv/BeforePick message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Request__are_equal(const failure_detection_msgs__srv__BeforePick_Request * lhs, const failure_detection_msgs__srv__BeforePick_Request * rhs);

/// Copy a srv/BeforePick message.
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
failure_detection_msgs__srv__BeforePick_Request__copy(
  const failure_detection_msgs__srv__BeforePick_Request * input,
  failure_detection_msgs__srv__BeforePick_Request * output);

/// Initialize array of srv/BeforePick messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__srv__BeforePick_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Request__Sequence__init(failure_detection_msgs__srv__BeforePick_Request__Sequence * array, size_t size);

/// Finalize array of srv/BeforePick messages.
/**
 * It calls
 * failure_detection_msgs__srv__BeforePick_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Request__Sequence__fini(failure_detection_msgs__srv__BeforePick_Request__Sequence * array);

/// Create array of srv/BeforePick messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__srv__BeforePick_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__srv__BeforePick_Request__Sequence *
failure_detection_msgs__srv__BeforePick_Request__Sequence__create(size_t size);

/// Destroy array of srv/BeforePick messages.
/**
 * It calls
 * failure_detection_msgs__srv__BeforePick_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Request__Sequence__destroy(failure_detection_msgs__srv__BeforePick_Request__Sequence * array);

/// Check for srv/BeforePick message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Request__Sequence__are_equal(const failure_detection_msgs__srv__BeforePick_Request__Sequence * lhs, const failure_detection_msgs__srv__BeforePick_Request__Sequence * rhs);

/// Copy an array of srv/BeforePick messages.
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
failure_detection_msgs__srv__BeforePick_Request__Sequence__copy(
  const failure_detection_msgs__srv__BeforePick_Request__Sequence * input,
  failure_detection_msgs__srv__BeforePick_Request__Sequence * output);

/// Initialize srv/BeforePick message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * failure_detection_msgs__srv__BeforePick_Response
 * )) before or use
 * failure_detection_msgs__srv__BeforePick_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Response__init(failure_detection_msgs__srv__BeforePick_Response * msg);

/// Finalize srv/BeforePick message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Response__fini(failure_detection_msgs__srv__BeforePick_Response * msg);

/// Create srv/BeforePick message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * failure_detection_msgs__srv__BeforePick_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__srv__BeforePick_Response *
failure_detection_msgs__srv__BeforePick_Response__create();

/// Destroy srv/BeforePick message.
/**
 * It calls
 * failure_detection_msgs__srv__BeforePick_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Response__destroy(failure_detection_msgs__srv__BeforePick_Response * msg);

/// Check for srv/BeforePick message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Response__are_equal(const failure_detection_msgs__srv__BeforePick_Response * lhs, const failure_detection_msgs__srv__BeforePick_Response * rhs);

/// Copy a srv/BeforePick message.
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
failure_detection_msgs__srv__BeforePick_Response__copy(
  const failure_detection_msgs__srv__BeforePick_Response * input,
  failure_detection_msgs__srv__BeforePick_Response * output);

/// Initialize array of srv/BeforePick messages.
/**
 * It allocates the memory for the number of elements and calls
 * failure_detection_msgs__srv__BeforePick_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Response__Sequence__init(failure_detection_msgs__srv__BeforePick_Response__Sequence * array, size_t size);

/// Finalize array of srv/BeforePick messages.
/**
 * It calls
 * failure_detection_msgs__srv__BeforePick_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Response__Sequence__fini(failure_detection_msgs__srv__BeforePick_Response__Sequence * array);

/// Create array of srv/BeforePick messages.
/**
 * It allocates the memory for the array and calls
 * failure_detection_msgs__srv__BeforePick_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
failure_detection_msgs__srv__BeforePick_Response__Sequence *
failure_detection_msgs__srv__BeforePick_Response__Sequence__create(size_t size);

/// Destroy array of srv/BeforePick messages.
/**
 * It calls
 * failure_detection_msgs__srv__BeforePick_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
void
failure_detection_msgs__srv__BeforePick_Response__Sequence__destroy(failure_detection_msgs__srv__BeforePick_Response__Sequence * array);

/// Check for srv/BeforePick message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_failure_detection_msgs
bool
failure_detection_msgs__srv__BeforePick_Response__Sequence__are_equal(const failure_detection_msgs__srv__BeforePick_Response__Sequence * lhs, const failure_detection_msgs__srv__BeforePick_Response__Sequence * rhs);

/// Copy an array of srv/BeforePick messages.
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
failure_detection_msgs__srv__BeforePick_Response__Sequence__copy(
  const failure_detection_msgs__srv__BeforePick_Response__Sequence * input,
  failure_detection_msgs__srv__BeforePick_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__FUNCTIONS_H_
