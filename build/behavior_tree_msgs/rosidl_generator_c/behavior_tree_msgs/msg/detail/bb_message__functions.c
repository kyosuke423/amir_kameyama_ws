// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:msg/BBMessage.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/bb_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `poses`
#include "behavior_tree_msgs/msg/detail/bb_pose__functions.h"
// Member `paths`
#include "behavior_tree_msgs/msg/detail/bb_path__functions.h"
// Member `float_array_set`
#include "behavior_tree_msgs/msg/detail/bb_float64_array__functions.h"

bool
behavior_tree_msgs__msg__BBMessage__init(behavior_tree_msgs__msg__BBMessage * msg)
{
  if (!msg) {
    return false;
  }
  // poses
  if (!behavior_tree_msgs__msg__BBPose__Sequence__init(&msg->poses, 0)) {
    behavior_tree_msgs__msg__BBMessage__fini(msg);
    return false;
  }
  // paths
  if (!behavior_tree_msgs__msg__BBPath__Sequence__init(&msg->paths, 0)) {
    behavior_tree_msgs__msg__BBMessage__fini(msg);
    return false;
  }
  // float_array_set
  if (!behavior_tree_msgs__msg__BBFloat64Array__Sequence__init(&msg->float_array_set, 0)) {
    behavior_tree_msgs__msg__BBMessage__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__msg__BBMessage__fini(behavior_tree_msgs__msg__BBMessage * msg)
{
  if (!msg) {
    return;
  }
  // poses
  behavior_tree_msgs__msg__BBPose__Sequence__fini(&msg->poses);
  // paths
  behavior_tree_msgs__msg__BBPath__Sequence__fini(&msg->paths);
  // float_array_set
  behavior_tree_msgs__msg__BBFloat64Array__Sequence__fini(&msg->float_array_set);
}

bool
behavior_tree_msgs__msg__BBMessage__are_equal(const behavior_tree_msgs__msg__BBMessage * lhs, const behavior_tree_msgs__msg__BBMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // poses
  if (!behavior_tree_msgs__msg__BBPose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // paths
  if (!behavior_tree_msgs__msg__BBPath__Sequence__are_equal(
      &(lhs->paths), &(rhs->paths)))
  {
    return false;
  }
  // float_array_set
  if (!behavior_tree_msgs__msg__BBFloat64Array__Sequence__are_equal(
      &(lhs->float_array_set), &(rhs->float_array_set)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__msg__BBMessage__copy(
  const behavior_tree_msgs__msg__BBMessage * input,
  behavior_tree_msgs__msg__BBMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // poses
  if (!behavior_tree_msgs__msg__BBPose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // paths
  if (!behavior_tree_msgs__msg__BBPath__Sequence__copy(
      &(input->paths), &(output->paths)))
  {
    return false;
  }
  // float_array_set
  if (!behavior_tree_msgs__msg__BBFloat64Array__Sequence__copy(
      &(input->float_array_set), &(output->float_array_set)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__msg__BBMessage *
behavior_tree_msgs__msg__BBMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BBMessage * msg = (behavior_tree_msgs__msg__BBMessage *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BBMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__msg__BBMessage));
  bool success = behavior_tree_msgs__msg__BBMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__msg__BBMessage__destroy(behavior_tree_msgs__msg__BBMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__msg__BBMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__msg__BBMessage__Sequence__init(behavior_tree_msgs__msg__BBMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BBMessage * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__msg__BBMessage *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__msg__BBMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__msg__BBMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__msg__BBMessage__fini(&data[i - 1]);
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
behavior_tree_msgs__msg__BBMessage__Sequence__fini(behavior_tree_msgs__msg__BBMessage__Sequence * array)
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
      behavior_tree_msgs__msg__BBMessage__fini(&array->data[i]);
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

behavior_tree_msgs__msg__BBMessage__Sequence *
behavior_tree_msgs__msg__BBMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__BBMessage__Sequence * array = (behavior_tree_msgs__msg__BBMessage__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__msg__BBMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__msg__BBMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__msg__BBMessage__Sequence__destroy(behavior_tree_msgs__msg__BBMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__msg__BBMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__msg__BBMessage__Sequence__are_equal(const behavior_tree_msgs__msg__BBMessage__Sequence * lhs, const behavior_tree_msgs__msg__BBMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__msg__BBMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__msg__BBMessage__Sequence__copy(
  const behavior_tree_msgs__msg__BBMessage__Sequence * input,
  behavior_tree_msgs__msg__BBMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__msg__BBMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__msg__BBMessage * data =
      (behavior_tree_msgs__msg__BBMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__msg__BBMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__msg__BBMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__msg__BBMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
