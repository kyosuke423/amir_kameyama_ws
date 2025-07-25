// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:srv/CreateBT.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/srv/detail/create_bt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `bt_name`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
behavior_tree_msgs__srv__CreateBT_Request__init(behavior_tree_msgs__srv__CreateBT_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bt_name
  if (!rosidl_runtime_c__String__init(&msg->bt_name)) {
    behavior_tree_msgs__srv__CreateBT_Request__fini(msg);
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    behavior_tree_msgs__srv__CreateBT_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__srv__CreateBT_Request__fini(behavior_tree_msgs__srv__CreateBT_Request * msg)
{
  if (!msg) {
    return;
  }
  // bt_name
  rosidl_runtime_c__String__fini(&msg->bt_name);
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
behavior_tree_msgs__srv__CreateBT_Request__are_equal(const behavior_tree_msgs__srv__CreateBT_Request * lhs, const behavior_tree_msgs__srv__CreateBT_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bt_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bt_name), &(rhs->bt_name)))
  {
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
behavior_tree_msgs__srv__CreateBT_Request__copy(
  const behavior_tree_msgs__srv__CreateBT_Request * input,
  behavior_tree_msgs__srv__CreateBT_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // bt_name
  if (!rosidl_runtime_c__String__copy(
      &(input->bt_name), &(output->bt_name)))
  {
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

behavior_tree_msgs__srv__CreateBT_Request *
behavior_tree_msgs__srv__CreateBT_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__CreateBT_Request * msg = (behavior_tree_msgs__srv__CreateBT_Request *)allocator.allocate(sizeof(behavior_tree_msgs__srv__CreateBT_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__srv__CreateBT_Request));
  bool success = behavior_tree_msgs__srv__CreateBT_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__srv__CreateBT_Request__destroy(behavior_tree_msgs__srv__CreateBT_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__srv__CreateBT_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__srv__CreateBT_Request__Sequence__init(behavior_tree_msgs__srv__CreateBT_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__CreateBT_Request * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__srv__CreateBT_Request *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__srv__CreateBT_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__srv__CreateBT_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__srv__CreateBT_Request__fini(&data[i - 1]);
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
behavior_tree_msgs__srv__CreateBT_Request__Sequence__fini(behavior_tree_msgs__srv__CreateBT_Request__Sequence * array)
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
      behavior_tree_msgs__srv__CreateBT_Request__fini(&array->data[i]);
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

behavior_tree_msgs__srv__CreateBT_Request__Sequence *
behavior_tree_msgs__srv__CreateBT_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__CreateBT_Request__Sequence * array = (behavior_tree_msgs__srv__CreateBT_Request__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__srv__CreateBT_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__srv__CreateBT_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__srv__CreateBT_Request__Sequence__destroy(behavior_tree_msgs__srv__CreateBT_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__srv__CreateBT_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__srv__CreateBT_Request__Sequence__are_equal(const behavior_tree_msgs__srv__CreateBT_Request__Sequence * lhs, const behavior_tree_msgs__srv__CreateBT_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__srv__CreateBT_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__srv__CreateBT_Request__Sequence__copy(
  const behavior_tree_msgs__srv__CreateBT_Request__Sequence * input,
  behavior_tree_msgs__srv__CreateBT_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__srv__CreateBT_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__srv__CreateBT_Request * data =
      (behavior_tree_msgs__srv__CreateBT_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__srv__CreateBT_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__srv__CreateBT_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__srv__CreateBT_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
behavior_tree_msgs__srv__CreateBT_Response__init(behavior_tree_msgs__srv__CreateBT_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    behavior_tree_msgs__srv__CreateBT_Response__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__srv__CreateBT_Response__fini(behavior_tree_msgs__srv__CreateBT_Response * msg)
{
  if (!msg) {
    return;
  }
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
}

bool
behavior_tree_msgs__srv__CreateBT_Response__are_equal(const behavior_tree_msgs__srv__CreateBT_Response * lhs, const behavior_tree_msgs__srv__CreateBT_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_string), &(rhs->error_string)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__srv__CreateBT_Response__copy(
  const behavior_tree_msgs__srv__CreateBT_Response * input,
  behavior_tree_msgs__srv__CreateBT_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__copy(
      &(input->error_string), &(output->error_string)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__srv__CreateBT_Response *
behavior_tree_msgs__srv__CreateBT_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__CreateBT_Response * msg = (behavior_tree_msgs__srv__CreateBT_Response *)allocator.allocate(sizeof(behavior_tree_msgs__srv__CreateBT_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__srv__CreateBT_Response));
  bool success = behavior_tree_msgs__srv__CreateBT_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__srv__CreateBT_Response__destroy(behavior_tree_msgs__srv__CreateBT_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__srv__CreateBT_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__srv__CreateBT_Response__Sequence__init(behavior_tree_msgs__srv__CreateBT_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__CreateBT_Response * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__srv__CreateBT_Response *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__srv__CreateBT_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__srv__CreateBT_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__srv__CreateBT_Response__fini(&data[i - 1]);
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
behavior_tree_msgs__srv__CreateBT_Response__Sequence__fini(behavior_tree_msgs__srv__CreateBT_Response__Sequence * array)
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
      behavior_tree_msgs__srv__CreateBT_Response__fini(&array->data[i]);
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

behavior_tree_msgs__srv__CreateBT_Response__Sequence *
behavior_tree_msgs__srv__CreateBT_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__CreateBT_Response__Sequence * array = (behavior_tree_msgs__srv__CreateBT_Response__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__srv__CreateBT_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__srv__CreateBT_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__srv__CreateBT_Response__Sequence__destroy(behavior_tree_msgs__srv__CreateBT_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__srv__CreateBT_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__srv__CreateBT_Response__Sequence__are_equal(const behavior_tree_msgs__srv__CreateBT_Response__Sequence * lhs, const behavior_tree_msgs__srv__CreateBT_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__srv__CreateBT_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__srv__CreateBT_Response__Sequence__copy(
  const behavior_tree_msgs__srv__CreateBT_Response__Sequence * input,
  behavior_tree_msgs__srv__CreateBT_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__srv__CreateBT_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__srv__CreateBT_Response * data =
      (behavior_tree_msgs__srv__CreateBT_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__srv__CreateBT_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__srv__CreateBT_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__srv__CreateBT_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
