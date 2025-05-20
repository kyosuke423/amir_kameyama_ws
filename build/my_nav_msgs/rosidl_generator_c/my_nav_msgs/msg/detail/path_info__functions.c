// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice
#include "my_nav_msgs/msg/detail/path_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `remove_id_set`
#include "rosidl_runtime_c/string_functions.h"

bool
my_nav_msgs__msg__PathInfo__init(my_nav_msgs__msg__PathInfo * msg)
{
  if (!msg) {
    return false;
  }
  // remove_id_set
  if (!rosidl_runtime_c__String__Sequence__init(&msg->remove_id_set, 0)) {
    my_nav_msgs__msg__PathInfo__fini(msg);
    return false;
  }
  // success_rate
  return true;
}

void
my_nav_msgs__msg__PathInfo__fini(my_nav_msgs__msg__PathInfo * msg)
{
  if (!msg) {
    return;
  }
  // remove_id_set
  rosidl_runtime_c__String__Sequence__fini(&msg->remove_id_set);
  // success_rate
}

bool
my_nav_msgs__msg__PathInfo__are_equal(const my_nav_msgs__msg__PathInfo * lhs, const my_nav_msgs__msg__PathInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remove_id_set
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->remove_id_set), &(rhs->remove_id_set)))
  {
    return false;
  }
  // success_rate
  if (lhs->success_rate != rhs->success_rate) {
    return false;
  }
  return true;
}

bool
my_nav_msgs__msg__PathInfo__copy(
  const my_nav_msgs__msg__PathInfo * input,
  my_nav_msgs__msg__PathInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // remove_id_set
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->remove_id_set), &(output->remove_id_set)))
  {
    return false;
  }
  // success_rate
  output->success_rate = input->success_rate;
  return true;
}

my_nav_msgs__msg__PathInfo *
my_nav_msgs__msg__PathInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_nav_msgs__msg__PathInfo * msg = (my_nav_msgs__msg__PathInfo *)allocator.allocate(sizeof(my_nav_msgs__msg__PathInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_nav_msgs__msg__PathInfo));
  bool success = my_nav_msgs__msg__PathInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_nav_msgs__msg__PathInfo__destroy(my_nav_msgs__msg__PathInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_nav_msgs__msg__PathInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_nav_msgs__msg__PathInfo__Sequence__init(my_nav_msgs__msg__PathInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_nav_msgs__msg__PathInfo * data = NULL;

  if (size) {
    data = (my_nav_msgs__msg__PathInfo *)allocator.zero_allocate(size, sizeof(my_nav_msgs__msg__PathInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_nav_msgs__msg__PathInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_nav_msgs__msg__PathInfo__fini(&data[i - 1]);
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
my_nav_msgs__msg__PathInfo__Sequence__fini(my_nav_msgs__msg__PathInfo__Sequence * array)
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
      my_nav_msgs__msg__PathInfo__fini(&array->data[i]);
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

my_nav_msgs__msg__PathInfo__Sequence *
my_nav_msgs__msg__PathInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_nav_msgs__msg__PathInfo__Sequence * array = (my_nav_msgs__msg__PathInfo__Sequence *)allocator.allocate(sizeof(my_nav_msgs__msg__PathInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_nav_msgs__msg__PathInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_nav_msgs__msg__PathInfo__Sequence__destroy(my_nav_msgs__msg__PathInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_nav_msgs__msg__PathInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_nav_msgs__msg__PathInfo__Sequence__are_equal(const my_nav_msgs__msg__PathInfo__Sequence * lhs, const my_nav_msgs__msg__PathInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_nav_msgs__msg__PathInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_nav_msgs__msg__PathInfo__Sequence__copy(
  const my_nav_msgs__msg__PathInfo__Sequence * input,
  my_nav_msgs__msg__PathInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_nav_msgs__msg__PathInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_nav_msgs__msg__PathInfo * data =
      (my_nav_msgs__msg__PathInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_nav_msgs__msg__PathInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_nav_msgs__msg__PathInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_nav_msgs__msg__PathInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
