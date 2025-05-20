// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:msg/BTStatus.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/bt_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bt`
#include "rosidl_runtime_c/string_functions.h"
// Member `root_status`
// Member `bt_status`
#include "behavior_tree_msgs/msg/detail/node_status__functions.h"

bool
behavior_tree_msgs__msg__BTStatus__init(behavior_tree_msgs__msg__BTStatus * msg)
{
  if (!msg) {
    return false;
  }
  // bt
  if (!rosidl_runtime_c__String__init(&msg->bt)) {
    behavior_tree_msgs__msg__BTStatus__fini(msg);
    return false;
  }
  // root_status
  if (!behavior_tree_msgs__msg__NodeStatus__init(&msg->root_status)) {
    behavior_tree_msgs__msg__BTStatus__fini(msg);
    return false;
  }
  // bt_status
  if (!behavior_tree_msgs__msg__NodeStatus__Sequence__init(&msg->bt_status, 0)) {
    behavior_tree_msgs__msg__BTStatus__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__msg__BTStatus__fini(behavior_tree_msgs__msg__BTStatus * msg)
{
  if (!msg) {
    return;
  }
  // bt
  rosidl_runtime_c__String__fini(&msg->bt);
  // root_status
  behavior_tree_msgs__msg__NodeStatus__fini(&msg->root_status);
  // bt_status
  behavior_tree_msgs__msg__NodeStatus__Sequence__fini(&msg->bt_status);
}

bool
behavior_tree_msgs__msg__BTStatus__are_equal(const behavior_tree_msgs__msg__BTStatus * lhs, const behavior_tree_msgs__msg__BTStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bt), &(rhs->bt)))
  {
    return false;
  }
  // root_status
  if (!behavior_tree_msgs__msg__NodeStatus__are_equal(
      &(lhs->root_status), &(rhs->root_status)))
  {
    return false;
  }
  // bt_status
  if (!behavior_tree_msgs__msg__NodeStatus__Sequence__are_equal(
      &(lhs->bt_status), &(rhs->bt_status)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__msg__BTStatus__copy(
  const behavior_tree_msgs__msg__BTStatus * input,
  behavior_tree_msgs__msg__BTStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // bt
  if (!rosidl_runtime_c__String__copy(
      &(input->bt), &(output->bt)))
  {
    return false;
  }
  // root_status
  if (!behavior_tree_msgs__msg__NodeStatus__copy(
      &(input->root_status), &(output->root_status)))
  {
    return false;
  }
  // bt_status
  if (!behavior_tree_msgs__msg__NodeStatus__Sequence__copy(
      &(input->bt_status), &(output->bt_status)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__msg__BTStatus *
behavior_tree_msgs__msg__BTStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BTStatus * msg = (behavior_tree_msgs__msg__BTStatus *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BTStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__msg__BTStatus));
  bool success = behavior_tree_msgs__msg__BTStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__msg__BTStatus__destroy(behavior_tree_msgs__msg__BTStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__msg__BTStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__msg__BTStatus__Sequence__init(behavior_tree_msgs__msg__BTStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BTStatus * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__msg__BTStatus *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__msg__BTStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__msg__BTStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__msg__BTStatus__fini(&data[i - 1]);
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
behavior_tree_msgs__msg__BTStatus__Sequence__fini(behavior_tree_msgs__msg__BTStatus__Sequence * array)
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
      behavior_tree_msgs__msg__BTStatus__fini(&array->data[i]);
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

behavior_tree_msgs__msg__BTStatus__Sequence *
behavior_tree_msgs__msg__BTStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BTStatus__Sequence * array = (behavior_tree_msgs__msg__BTStatus__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BTStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__msg__BTStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__msg__BTStatus__Sequence__destroy(behavior_tree_msgs__msg__BTStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__msg__BTStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__msg__BTStatus__Sequence__are_equal(const behavior_tree_msgs__msg__BTStatus__Sequence * lhs, const behavior_tree_msgs__msg__BTStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__msg__BTStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__msg__BTStatus__Sequence__copy(
  const behavior_tree_msgs__msg__BTStatus__Sequence * input,
  behavior_tree_msgs__msg__BTStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__msg__BTStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__msg__BTStatus * data =
      (behavior_tree_msgs__msg__BTStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__msg__BTStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__msg__BTStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__msg__BTStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
