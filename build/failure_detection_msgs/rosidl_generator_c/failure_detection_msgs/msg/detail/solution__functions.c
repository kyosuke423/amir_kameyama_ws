// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice
#include "failure_detection_msgs/msg/detail/solution__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bt_node_name`
// Member `solutions`
#include "rosidl_runtime_c/string_functions.h"
// Member `priorities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bb_message`
#include "behavior_tree_msgs/msg/detail/bb_message__functions.h"

bool
failure_detection_msgs__msg__Solution__init(failure_detection_msgs__msg__Solution * msg)
{
  if (!msg) {
    return false;
  }
  // bt_node_name
  if (!rosidl_runtime_c__String__init(&msg->bt_node_name)) {
    failure_detection_msgs__msg__Solution__fini(msg);
    return false;
  }
  // solutions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->solutions, 0)) {
    failure_detection_msgs__msg__Solution__fini(msg);
    return false;
  }
  // priorities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->priorities, 0)) {
    failure_detection_msgs__msg__Solution__fini(msg);
    return false;
  }
  // bb_message
  if (!behavior_tree_msgs__msg__BBMessage__init(&msg->bb_message)) {
    failure_detection_msgs__msg__Solution__fini(msg);
    return false;
  }
  return true;
}

void
failure_detection_msgs__msg__Solution__fini(failure_detection_msgs__msg__Solution * msg)
{
  if (!msg) {
    return;
  }
  // bt_node_name
  rosidl_runtime_c__String__fini(&msg->bt_node_name);
  // solutions
  rosidl_runtime_c__String__Sequence__fini(&msg->solutions);
  // priorities
  rosidl_runtime_c__float__Sequence__fini(&msg->priorities);
  // bb_message
  behavior_tree_msgs__msg__BBMessage__fini(&msg->bb_message);
}

bool
failure_detection_msgs__msg__Solution__are_equal(const failure_detection_msgs__msg__Solution * lhs, const failure_detection_msgs__msg__Solution * rhs)
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
  // solutions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->solutions), &(rhs->solutions)))
  {
    return false;
  }
  // priorities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->priorities), &(rhs->priorities)))
  {
    return false;
  }
  // bb_message
  if (!behavior_tree_msgs__msg__BBMessage__are_equal(
      &(lhs->bb_message), &(rhs->bb_message)))
  {
    return false;
  }
  return true;
}

bool
failure_detection_msgs__msg__Solution__copy(
  const failure_detection_msgs__msg__Solution * input,
  failure_detection_msgs__msg__Solution * output)
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
  // solutions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->solutions), &(output->solutions)))
  {
    return false;
  }
  // priorities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->priorities), &(output->priorities)))
  {
    return false;
  }
  // bb_message
  if (!behavior_tree_msgs__msg__BBMessage__copy(
      &(input->bb_message), &(output->bb_message)))
  {
    return false;
  }
  return true;
}

failure_detection_msgs__msg__Solution *
failure_detection_msgs__msg__Solution__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__msg__Solution * msg = (failure_detection_msgs__msg__Solution *)allocator.allocate(sizeof(failure_detection_msgs__msg__Solution), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(failure_detection_msgs__msg__Solution));
  bool success = failure_detection_msgs__msg__Solution__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
failure_detection_msgs__msg__Solution__destroy(failure_detection_msgs__msg__Solution * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    failure_detection_msgs__msg__Solution__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
failure_detection_msgs__msg__Solution__Sequence__init(failure_detection_msgs__msg__Solution__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__msg__Solution * data = NULL;

  if (size) {
    data = (failure_detection_msgs__msg__Solution *)allocator.zero_allocate(size, sizeof(failure_detection_msgs__msg__Solution), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = failure_detection_msgs__msg__Solution__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        failure_detection_msgs__msg__Solution__fini(&data[i - 1]);
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
failure_detection_msgs__msg__Solution__Sequence__fini(failure_detection_msgs__msg__Solution__Sequence * array)
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
      failure_detection_msgs__msg__Solution__fini(&array->data[i]);
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

failure_detection_msgs__msg__Solution__Sequence *
failure_detection_msgs__msg__Solution__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__msg__Solution__Sequence * array = (failure_detection_msgs__msg__Solution__Sequence *)allocator.allocate(sizeof(failure_detection_msgs__msg__Solution__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = failure_detection_msgs__msg__Solution__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
failure_detection_msgs__msg__Solution__Sequence__destroy(failure_detection_msgs__msg__Solution__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    failure_detection_msgs__msg__Solution__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
failure_detection_msgs__msg__Solution__Sequence__are_equal(const failure_detection_msgs__msg__Solution__Sequence * lhs, const failure_detection_msgs__msg__Solution__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!failure_detection_msgs__msg__Solution__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
failure_detection_msgs__msg__Solution__Sequence__copy(
  const failure_detection_msgs__msg__Solution__Sequence * input,
  failure_detection_msgs__msg__Solution__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(failure_detection_msgs__msg__Solution);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    failure_detection_msgs__msg__Solution * data =
      (failure_detection_msgs__msg__Solution *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!failure_detection_msgs__msg__Solution__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          failure_detection_msgs__msg__Solution__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!failure_detection_msgs__msg__Solution__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
