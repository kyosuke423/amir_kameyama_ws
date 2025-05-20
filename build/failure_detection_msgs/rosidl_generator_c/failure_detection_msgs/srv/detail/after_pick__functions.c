// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from failure_detection_msgs:srv/AfterPick.idl
// generated code does not contain a copyright notice
#include "failure_detection_msgs/srv/detail/after_pick__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `bt_node_name`
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"
// Member `grasped_object`
#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"

bool
failure_detection_msgs__srv__AfterPick_Request__init(failure_detection_msgs__srv__AfterPick_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bt_node_name
  if (!rosidl_runtime_c__String__init(&msg->bt_node_name)) {
    failure_detection_msgs__srv__AfterPick_Request__fini(msg);
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    failure_detection_msgs__srv__AfterPick_Request__fini(msg);
    return false;
  }
  // grasped_object
  if (!moveit_msgs__msg__AttachedCollisionObject__init(&msg->grasped_object)) {
    failure_detection_msgs__srv__AfterPick_Request__fini(msg);
    return false;
  }
  return true;
}

void
failure_detection_msgs__srv__AfterPick_Request__fini(failure_detection_msgs__srv__AfterPick_Request * msg)
{
  if (!msg) {
    return;
  }
  // bt_node_name
  rosidl_runtime_c__String__fini(&msg->bt_node_name);
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
  // grasped_object
  moveit_msgs__msg__AttachedCollisionObject__fini(&msg->grasped_object);
}

bool
failure_detection_msgs__srv__AfterPick_Request__are_equal(const failure_detection_msgs__srv__AfterPick_Request * lhs, const failure_detection_msgs__srv__AfterPick_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bt_node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bt_node_name), &(rhs->bt_node_name)))
  {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_string), &(rhs->error_string)))
  {
    return false;
  }
  // grasped_object
  if (!moveit_msgs__msg__AttachedCollisionObject__are_equal(
      &(lhs->grasped_object), &(rhs->grasped_object)))
  {
    return false;
  }
  return true;
}

bool
failure_detection_msgs__srv__AfterPick_Request__copy(
  const failure_detection_msgs__srv__AfterPick_Request * input,
  failure_detection_msgs__srv__AfterPick_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // bt_node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->bt_node_name), &(output->bt_node_name)))
  {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__copy(
      &(input->error_string), &(output->error_string)))
  {
    return false;
  }
  // grasped_object
  if (!moveit_msgs__msg__AttachedCollisionObject__copy(
      &(input->grasped_object), &(output->grasped_object)))
  {
    return false;
  }
  return true;
}

failure_detection_msgs__srv__AfterPick_Request *
failure_detection_msgs__srv__AfterPick_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__AfterPick_Request * msg = (failure_detection_msgs__srv__AfterPick_Request *)allocator.allocate(sizeof(failure_detection_msgs__srv__AfterPick_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(failure_detection_msgs__srv__AfterPick_Request));
  bool success = failure_detection_msgs__srv__AfterPick_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
failure_detection_msgs__srv__AfterPick_Request__destroy(failure_detection_msgs__srv__AfterPick_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    failure_detection_msgs__srv__AfterPick_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
failure_detection_msgs__srv__AfterPick_Request__Sequence__init(failure_detection_msgs__srv__AfterPick_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__AfterPick_Request * data = NULL;

  if (size) {
    data = (failure_detection_msgs__srv__AfterPick_Request *)allocator.zero_allocate(size, sizeof(failure_detection_msgs__srv__AfterPick_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = failure_detection_msgs__srv__AfterPick_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        failure_detection_msgs__srv__AfterPick_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
failure_detection_msgs__srv__AfterPick_Request__Sequence__fini(failure_detection_msgs__srv__AfterPick_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      failure_detection_msgs__srv__AfterPick_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

failure_detection_msgs__srv__AfterPick_Request__Sequence *
failure_detection_msgs__srv__AfterPick_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__AfterPick_Request__Sequence * array = (failure_detection_msgs__srv__AfterPick_Request__Sequence *)allocator.allocate(sizeof(failure_detection_msgs__srv__AfterPick_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = failure_detection_msgs__srv__AfterPick_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
failure_detection_msgs__srv__AfterPick_Request__Sequence__destroy(failure_detection_msgs__srv__AfterPick_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    failure_detection_msgs__srv__AfterPick_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
failure_detection_msgs__srv__AfterPick_Request__Sequence__are_equal(const failure_detection_msgs__srv__AfterPick_Request__Sequence * lhs, const failure_detection_msgs__srv__AfterPick_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!failure_detection_msgs__srv__AfterPick_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
failure_detection_msgs__srv__AfterPick_Request__Sequence__copy(
  const failure_detection_msgs__srv__AfterPick_Request__Sequence * input,
  failure_detection_msgs__srv__AfterPick_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(failure_detection_msgs__srv__AfterPick_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    failure_detection_msgs__srv__AfterPick_Request * data =
      (failure_detection_msgs__srv__AfterPick_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!failure_detection_msgs__srv__AfterPick_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          failure_detection_msgs__srv__AfterPick_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!failure_detection_msgs__srv__AfterPick_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `command`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
failure_detection_msgs__srv__AfterPick_Response__init(failure_detection_msgs__srv__AfterPick_Response * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    failure_detection_msgs__srv__AfterPick_Response__fini(msg);
    return false;
  }
  return true;
}

void
failure_detection_msgs__srv__AfterPick_Response__fini(failure_detection_msgs__srv__AfterPick_Response * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
failure_detection_msgs__srv__AfterPick_Response__are_equal(const failure_detection_msgs__srv__AfterPick_Response * lhs, const failure_detection_msgs__srv__AfterPick_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
failure_detection_msgs__srv__AfterPick_Response__copy(
  const failure_detection_msgs__srv__AfterPick_Response * input,
  failure_detection_msgs__srv__AfterPick_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

failure_detection_msgs__srv__AfterPick_Response *
failure_detection_msgs__srv__AfterPick_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__AfterPick_Response * msg = (failure_detection_msgs__srv__AfterPick_Response *)allocator.allocate(sizeof(failure_detection_msgs__srv__AfterPick_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(failure_detection_msgs__srv__AfterPick_Response));
  bool success = failure_detection_msgs__srv__AfterPick_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
failure_detection_msgs__srv__AfterPick_Response__destroy(failure_detection_msgs__srv__AfterPick_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    failure_detection_msgs__srv__AfterPick_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
failure_detection_msgs__srv__AfterPick_Response__Sequence__init(failure_detection_msgs__srv__AfterPick_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__AfterPick_Response * data = NULL;

  if (size) {
    data = (failure_detection_msgs__srv__AfterPick_Response *)allocator.zero_allocate(size, sizeof(failure_detection_msgs__srv__AfterPick_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = failure_detection_msgs__srv__AfterPick_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        failure_detection_msgs__srv__AfterPick_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
failure_detection_msgs__srv__AfterPick_Response__Sequence__fini(failure_detection_msgs__srv__AfterPick_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      failure_detection_msgs__srv__AfterPick_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

failure_detection_msgs__srv__AfterPick_Response__Sequence *
failure_detection_msgs__srv__AfterPick_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__AfterPick_Response__Sequence * array = (failure_detection_msgs__srv__AfterPick_Response__Sequence *)allocator.allocate(sizeof(failure_detection_msgs__srv__AfterPick_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = failure_detection_msgs__srv__AfterPick_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
failure_detection_msgs__srv__AfterPick_Response__Sequence__destroy(failure_detection_msgs__srv__AfterPick_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    failure_detection_msgs__srv__AfterPick_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
failure_detection_msgs__srv__AfterPick_Response__Sequence__are_equal(const failure_detection_msgs__srv__AfterPick_Response__Sequence * lhs, const failure_detection_msgs__srv__AfterPick_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!failure_detection_msgs__srv__AfterPick_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
failure_detection_msgs__srv__AfterPick_Response__Sequence__copy(
  const failure_detection_msgs__srv__AfterPick_Response__Sequence * input,
  failure_detection_msgs__srv__AfterPick_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(failure_detection_msgs__srv__AfterPick_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    failure_detection_msgs__srv__AfterPick_Response * data =
      (failure_detection_msgs__srv__AfterPick_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!failure_detection_msgs__srv__AfterPick_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          failure_detection_msgs__srv__AfterPick_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!failure_detection_msgs__srv__AfterPick_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
