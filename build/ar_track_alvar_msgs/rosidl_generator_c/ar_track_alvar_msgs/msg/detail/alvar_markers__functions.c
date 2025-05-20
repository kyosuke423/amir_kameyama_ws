// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ar_track_alvar_msgs:msg/AlvarMarkers.idl
// generated code does not contain a copyright notice
#include "ar_track_alvar_msgs/msg/detail/alvar_markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `markers`
#include "ar_track_alvar_msgs/msg/detail/alvar_marker__functions.h"

bool
ar_track_alvar_msgs__msg__AlvarMarkers__init(ar_track_alvar_msgs__msg__AlvarMarkers * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ar_track_alvar_msgs__msg__AlvarMarkers__fini(msg);
    return false;
  }
  // markers
  if (!ar_track_alvar_msgs__msg__AlvarMarker__Sequence__init(&msg->markers, 0)) {
    ar_track_alvar_msgs__msg__AlvarMarkers__fini(msg);
    return false;
  }
  return true;
}

void
ar_track_alvar_msgs__msg__AlvarMarkers__fini(ar_track_alvar_msgs__msg__AlvarMarkers * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // markers
  ar_track_alvar_msgs__msg__AlvarMarker__Sequence__fini(&msg->markers);
}

bool
ar_track_alvar_msgs__msg__AlvarMarkers__are_equal(const ar_track_alvar_msgs__msg__AlvarMarkers * lhs, const ar_track_alvar_msgs__msg__AlvarMarkers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // markers
  if (!ar_track_alvar_msgs__msg__AlvarMarker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
ar_track_alvar_msgs__msg__AlvarMarkers__copy(
  const ar_track_alvar_msgs__msg__AlvarMarkers * input,
  ar_track_alvar_msgs__msg__AlvarMarkers * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // markers
  if (!ar_track_alvar_msgs__msg__AlvarMarker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

ar_track_alvar_msgs__msg__AlvarMarkers *
ar_track_alvar_msgs__msg__AlvarMarkers__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_track_alvar_msgs__msg__AlvarMarkers * msg = (ar_track_alvar_msgs__msg__AlvarMarkers *)allocator.allocate(sizeof(ar_track_alvar_msgs__msg__AlvarMarkers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ar_track_alvar_msgs__msg__AlvarMarkers));
  bool success = ar_track_alvar_msgs__msg__AlvarMarkers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ar_track_alvar_msgs__msg__AlvarMarkers__destroy(ar_track_alvar_msgs__msg__AlvarMarkers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ar_track_alvar_msgs__msg__AlvarMarkers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__init(ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_track_alvar_msgs__msg__AlvarMarkers * data = NULL;

  if (size) {
    data = (ar_track_alvar_msgs__msg__AlvarMarkers *)allocator.zero_allocate(size, sizeof(ar_track_alvar_msgs__msg__AlvarMarkers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ar_track_alvar_msgs__msg__AlvarMarkers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ar_track_alvar_msgs__msg__AlvarMarkers__fini(&data[i - 1]);
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
ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__fini(ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * array)
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
      ar_track_alvar_msgs__msg__AlvarMarkers__fini(&array->data[i]);
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

ar_track_alvar_msgs__msg__AlvarMarkers__Sequence *
ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * array = (ar_track_alvar_msgs__msg__AlvarMarkers__Sequence *)allocator.allocate(sizeof(ar_track_alvar_msgs__msg__AlvarMarkers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__destroy(ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__are_equal(const ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * lhs, const ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ar_track_alvar_msgs__msg__AlvarMarkers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ar_track_alvar_msgs__msg__AlvarMarkers__Sequence__copy(
  const ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * input,
  ar_track_alvar_msgs__msg__AlvarMarkers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ar_track_alvar_msgs__msg__AlvarMarkers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ar_track_alvar_msgs__msg__AlvarMarkers * data =
      (ar_track_alvar_msgs__msg__AlvarMarkers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ar_track_alvar_msgs__msg__AlvarMarkers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ar_track_alvar_msgs__msg__AlvarMarkers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ar_track_alvar_msgs__msg__AlvarMarkers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
