// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:msg/Pixel.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/pixel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
behavior_tree_msgs__msg__Pixel__init(behavior_tree_msgs__msg__Pixel * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
behavior_tree_msgs__msg__Pixel__fini(behavior_tree_msgs__msg__Pixel * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
behavior_tree_msgs__msg__Pixel__are_equal(const behavior_tree_msgs__msg__Pixel * lhs, const behavior_tree_msgs__msg__Pixel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__msg__Pixel__copy(
  const behavior_tree_msgs__msg__Pixel * input,
  behavior_tree_msgs__msg__Pixel * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

behavior_tree_msgs__msg__Pixel *
behavior_tree_msgs__msg__Pixel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__Pixel * msg = (behavior_tree_msgs__msg__Pixel *)allocator.allocate(sizeof(behavior_tree_msgs__msg__Pixel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__msg__Pixel));
  bool success = behavior_tree_msgs__msg__Pixel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__msg__Pixel__destroy(behavior_tree_msgs__msg__Pixel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__msg__Pixel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__msg__Pixel__Sequence__init(behavior_tree_msgs__msg__Pixel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__Pixel * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__msg__Pixel *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__msg__Pixel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__msg__Pixel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__msg__Pixel__fini(&data[i - 1]);
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
behavior_tree_msgs__msg__Pixel__Sequence__fini(behavior_tree_msgs__msg__Pixel__Sequence * array)
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
      behavior_tree_msgs__msg__Pixel__fini(&array->data[i]);
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

behavior_tree_msgs__msg__Pixel__Sequence *
behavior_tree_msgs__msg__Pixel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__Pixel__Sequence * array = (behavior_tree_msgs__msg__Pixel__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__msg__Pixel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__msg__Pixel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__msg__Pixel__Sequence__destroy(behavior_tree_msgs__msg__Pixel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__msg__Pixel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__msg__Pixel__Sequence__are_equal(const behavior_tree_msgs__msg__Pixel__Sequence * lhs, const behavior_tree_msgs__msg__Pixel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__msg__Pixel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__msg__Pixel__Sequence__copy(
  const behavior_tree_msgs__msg__Pixel__Sequence * input,
  behavior_tree_msgs__msg__Pixel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__msg__Pixel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__msg__Pixel * data =
      (behavior_tree_msgs__msg__Pixel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__msg__Pixel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__msg__Pixel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__msg__Pixel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
