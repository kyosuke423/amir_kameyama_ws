// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice
#include "failure_detection_msgs/srv/detail/path_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `paths`
#include "my_nav_msgs/msg/detail/path_with_condition__functions.h"

bool
failure_detection_msgs__srv__PathCheck_Request__init(failure_detection_msgs__srv__PathCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // paths
  if (!my_nav_msgs__msg__PathWithCondition__Sequence__init(&msg->paths, 0)) {
    failure_detection_msgs__srv__PathCheck_Request__fini(msg);
    return false;
  }
  return true;
}

void
failure_detection_msgs__srv__PathCheck_Request__fini(failure_detection_msgs__srv__PathCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // paths
  my_nav_msgs__msg__PathWithCondition__Sequence__fini(&msg->paths);
}

bool
failure_detection_msgs__srv__PathCheck_Request__are_equal(const failure_detection_msgs__srv__PathCheck_Request * lhs, const failure_detection_msgs__srv__PathCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // paths
  if (!my_nav_msgs__msg__PathWithCondition__Sequence__are_equal(
      &(lhs->paths), &(rhs->paths)))
  {
    return false;
  }
  return true;
}

bool
failure_detection_msgs__srv__PathCheck_Request__copy(
  const failure_detection_msgs__srv__PathCheck_Request * input,
  failure_detection_msgs__srv__PathCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // paths
  if (!my_nav_msgs__msg__PathWithCondition__Sequence__copy(
      &(input->paths), &(output->paths)))
  {
    return false;
  }
  return true;
}

failure_detection_msgs__srv__PathCheck_Request *
failure_detection_msgs__srv__PathCheck_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__PathCheck_Request * msg = (failure_detection_msgs__srv__PathCheck_Request *)allocator.allocate(sizeof(failure_detection_msgs__srv__PathCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(failure_detection_msgs__srv__PathCheck_Request));
  bool success = failure_detection_msgs__srv__PathCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
failure_detection_msgs__srv__PathCheck_Request__destroy(failure_detection_msgs__srv__PathCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    failure_detection_msgs__srv__PathCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
failure_detection_msgs__srv__PathCheck_Request__Sequence__init(failure_detection_msgs__srv__PathCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__PathCheck_Request * data = NULL;

  if (size) {
    data = (failure_detection_msgs__srv__PathCheck_Request *)allocator.zero_allocate(size, sizeof(failure_detection_msgs__srv__PathCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = failure_detection_msgs__srv__PathCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        failure_detection_msgs__srv__PathCheck_Request__fini(&data[i - 1]);
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
failure_detection_msgs__srv__PathCheck_Request__Sequence__fini(failure_detection_msgs__srv__PathCheck_Request__Sequence * array)
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
      failure_detection_msgs__srv__PathCheck_Request__fini(&array->data[i]);
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

failure_detection_msgs__srv__PathCheck_Request__Sequence *
failure_detection_msgs__srv__PathCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__PathCheck_Request__Sequence * array = (failure_detection_msgs__srv__PathCheck_Request__Sequence *)allocator.allocate(sizeof(failure_detection_msgs__srv__PathCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = failure_detection_msgs__srv__PathCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
failure_detection_msgs__srv__PathCheck_Request__Sequence__destroy(failure_detection_msgs__srv__PathCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    failure_detection_msgs__srv__PathCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
failure_detection_msgs__srv__PathCheck_Request__Sequence__are_equal(const failure_detection_msgs__srv__PathCheck_Request__Sequence * lhs, const failure_detection_msgs__srv__PathCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!failure_detection_msgs__srv__PathCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
failure_detection_msgs__srv__PathCheck_Request__Sequence__copy(
  const failure_detection_msgs__srv__PathCheck_Request__Sequence * input,
  failure_detection_msgs__srv__PathCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(failure_detection_msgs__srv__PathCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    failure_detection_msgs__srv__PathCheck_Request * data =
      (failure_detection_msgs__srv__PathCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!failure_detection_msgs__srv__PathCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          failure_detection_msgs__srv__PathCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!failure_detection_msgs__srv__PathCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `info_set`
#include "my_nav_msgs/msg/detail/path_info__functions.h"

bool
failure_detection_msgs__srv__PathCheck_Response__init(failure_detection_msgs__srv__PathCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error_strings
  if (!rosidl_runtime_c__String__init(&msg->error_strings)) {
    failure_detection_msgs__srv__PathCheck_Response__fini(msg);
    return false;
  }
  // info_set
  if (!my_nav_msgs__msg__PathInfo__Sequence__init(&msg->info_set, 0)) {
    failure_detection_msgs__srv__PathCheck_Response__fini(msg);
    return false;
  }
  return true;
}

void
failure_detection_msgs__srv__PathCheck_Response__fini(failure_detection_msgs__srv__PathCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // error_strings
  rosidl_runtime_c__String__fini(&msg->error_strings);
  // info_set
  my_nav_msgs__msg__PathInfo__Sequence__fini(&msg->info_set);
}

bool
failure_detection_msgs__srv__PathCheck_Response__are_equal(const failure_detection_msgs__srv__PathCheck_Response * lhs, const failure_detection_msgs__srv__PathCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_strings
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_strings), &(rhs->error_strings)))
  {
    return false;
  }
  // info_set
  if (!my_nav_msgs__msg__PathInfo__Sequence__are_equal(
      &(lhs->info_set), &(rhs->info_set)))
  {
    return false;
  }
  return true;
}

bool
failure_detection_msgs__srv__PathCheck_Response__copy(
  const failure_detection_msgs__srv__PathCheck_Response * input,
  failure_detection_msgs__srv__PathCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error_strings
  if (!rosidl_runtime_c__String__copy(
      &(input->error_strings), &(output->error_strings)))
  {
    return false;
  }
  // info_set
  if (!my_nav_msgs__msg__PathInfo__Sequence__copy(
      &(input->info_set), &(output->info_set)))
  {
    return false;
  }
  return true;
}

failure_detection_msgs__srv__PathCheck_Response *
failure_detection_msgs__srv__PathCheck_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__PathCheck_Response * msg = (failure_detection_msgs__srv__PathCheck_Response *)allocator.allocate(sizeof(failure_detection_msgs__srv__PathCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(failure_detection_msgs__srv__PathCheck_Response));
  bool success = failure_detection_msgs__srv__PathCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
failure_detection_msgs__srv__PathCheck_Response__destroy(failure_detection_msgs__srv__PathCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    failure_detection_msgs__srv__PathCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
failure_detection_msgs__srv__PathCheck_Response__Sequence__init(failure_detection_msgs__srv__PathCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__PathCheck_Response * data = NULL;

  if (size) {
    data = (failure_detection_msgs__srv__PathCheck_Response *)allocator.zero_allocate(size, sizeof(failure_detection_msgs__srv__PathCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = failure_detection_msgs__srv__PathCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        failure_detection_msgs__srv__PathCheck_Response__fini(&data[i - 1]);
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
failure_detection_msgs__srv__PathCheck_Response__Sequence__fini(failure_detection_msgs__srv__PathCheck_Response__Sequence * array)
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
      failure_detection_msgs__srv__PathCheck_Response__fini(&array->data[i]);
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

failure_detection_msgs__srv__PathCheck_Response__Sequence *
failure_detection_msgs__srv__PathCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  failure_detection_msgs__srv__PathCheck_Response__Sequence * array = (failure_detection_msgs__srv__PathCheck_Response__Sequence *)allocator.allocate(sizeof(failure_detection_msgs__srv__PathCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = failure_detection_msgs__srv__PathCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
failure_detection_msgs__srv__PathCheck_Response__Sequence__destroy(failure_detection_msgs__srv__PathCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    failure_detection_msgs__srv__PathCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
failure_detection_msgs__srv__PathCheck_Response__Sequence__are_equal(const failure_detection_msgs__srv__PathCheck_Response__Sequence * lhs, const failure_detection_msgs__srv__PathCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!failure_detection_msgs__srv__PathCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
failure_detection_msgs__srv__PathCheck_Response__Sequence__copy(
  const failure_detection_msgs__srv__PathCheck_Response__Sequence * input,
  failure_detection_msgs__srv__PathCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(failure_detection_msgs__srv__PathCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    failure_detection_msgs__srv__PathCheck_Response * data =
      (failure_detection_msgs__srv__PathCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!failure_detection_msgs__srv__PathCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          failure_detection_msgs__srv__PathCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!failure_detection_msgs__srv__PathCheck_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
