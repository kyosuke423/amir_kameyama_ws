// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:action/Search.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/action/detail/search__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
// Member `id`
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
behavior_tree_msgs__action__Search_Goal__init(behavior_tree_msgs__action__Search_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    behavior_tree_msgs__action__Search_Goal__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    behavior_tree_msgs__action__Search_Goal__fini(msg);
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    behavior_tree_msgs__action__Search_Goal__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    behavior_tree_msgs__action__Search_Goal__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Search_Goal__fini(behavior_tree_msgs__action__Search_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

bool
behavior_tree_msgs__action__Search_Goal__are_equal(const behavior_tree_msgs__action__Search_Goal * lhs, const behavior_tree_msgs__action__Search_Goal * rhs)
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
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_Goal__copy(
  const behavior_tree_msgs__action__Search_Goal * input,
  behavior_tree_msgs__action__Search_Goal * output)
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
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Search_Goal *
behavior_tree_msgs__action__Search_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Goal * msg = (behavior_tree_msgs__action__Search_Goal *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_Goal));
  bool success = behavior_tree_msgs__action__Search_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_Goal__destroy(behavior_tree_msgs__action__Search_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_Goal__Sequence__init(behavior_tree_msgs__action__Search_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Goal * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_Goal *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_Goal__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_Goal__Sequence__fini(behavior_tree_msgs__action__Search_Goal__Sequence * array)
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
      behavior_tree_msgs__action__Search_Goal__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_Goal__Sequence *
behavior_tree_msgs__action__Search_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Goal__Sequence * array = (behavior_tree_msgs__action__Search_Goal__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_Goal__Sequence__destroy(behavior_tree_msgs__action__Search_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_Goal__Sequence__are_equal(const behavior_tree_msgs__action__Search_Goal__Sequence * lhs, const behavior_tree_msgs__action__Search_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_Goal__Sequence__copy(
  const behavior_tree_msgs__action__Search_Goal__Sequence * input,
  behavior_tree_msgs__action__Search_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_Goal * data =
      (behavior_tree_msgs__action__Search_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_Goal__copy(
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
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `poses`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
behavior_tree_msgs__action__Search_Result__init(behavior_tree_msgs__action__Search_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    behavior_tree_msgs__action__Search_Result__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    behavior_tree_msgs__action__Search_Result__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->poses, 0)) {
    behavior_tree_msgs__action__Search_Result__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Search_Result__fini(behavior_tree_msgs__action__Search_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // poses
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->poses);
}

bool
behavior_tree_msgs__action__Search_Result__are_equal(const behavior_tree_msgs__action__Search_Result * lhs, const behavior_tree_msgs__action__Search_Result * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_Result__copy(
  const behavior_tree_msgs__action__Search_Result * input,
  behavior_tree_msgs__action__Search_Result * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Search_Result *
behavior_tree_msgs__action__Search_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Result * msg = (behavior_tree_msgs__action__Search_Result *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_Result));
  bool success = behavior_tree_msgs__action__Search_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_Result__destroy(behavior_tree_msgs__action__Search_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_Result__Sequence__init(behavior_tree_msgs__action__Search_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Result * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_Result *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_Result__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_Result__Sequence__fini(behavior_tree_msgs__action__Search_Result__Sequence * array)
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
      behavior_tree_msgs__action__Search_Result__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_Result__Sequence *
behavior_tree_msgs__action__Search_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Result__Sequence * array = (behavior_tree_msgs__action__Search_Result__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_Result__Sequence__destroy(behavior_tree_msgs__action__Search_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_Result__Sequence__are_equal(const behavior_tree_msgs__action__Search_Result__Sequence * lhs, const behavior_tree_msgs__action__Search_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_Result__Sequence__copy(
  const behavior_tree_msgs__action__Search_Result__Sequence * input,
  behavior_tree_msgs__action__Search_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_Result * data =
      (behavior_tree_msgs__action__Search_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
behavior_tree_msgs__action__Search_Feedback__init(behavior_tree_msgs__action__Search_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
behavior_tree_msgs__action__Search_Feedback__fini(behavior_tree_msgs__action__Search_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
behavior_tree_msgs__action__Search_Feedback__are_equal(const behavior_tree_msgs__action__Search_Feedback * lhs, const behavior_tree_msgs__action__Search_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_Feedback__copy(
  const behavior_tree_msgs__action__Search_Feedback * input,
  behavior_tree_msgs__action__Search_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

behavior_tree_msgs__action__Search_Feedback *
behavior_tree_msgs__action__Search_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Feedback * msg = (behavior_tree_msgs__action__Search_Feedback *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_Feedback));
  bool success = behavior_tree_msgs__action__Search_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_Feedback__destroy(behavior_tree_msgs__action__Search_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_Feedback__Sequence__init(behavior_tree_msgs__action__Search_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Feedback * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_Feedback *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_Feedback__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_Feedback__Sequence__fini(behavior_tree_msgs__action__Search_Feedback__Sequence * array)
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
      behavior_tree_msgs__action__Search_Feedback__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_Feedback__Sequence *
behavior_tree_msgs__action__Search_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_Feedback__Sequence * array = (behavior_tree_msgs__action__Search_Feedback__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_Feedback__Sequence__destroy(behavior_tree_msgs__action__Search_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_Feedback__Sequence__are_equal(const behavior_tree_msgs__action__Search_Feedback__Sequence * lhs, const behavior_tree_msgs__action__Search_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_Feedback__Sequence__copy(
  const behavior_tree_msgs__action__Search_Feedback__Sequence * input,
  behavior_tree_msgs__action__Search_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_Feedback * data =
      (behavior_tree_msgs__action__Search_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "behavior_tree_msgs/action/detail/search__functions.h"

bool
behavior_tree_msgs__action__Search_SendGoal_Request__init(behavior_tree_msgs__action__Search_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_tree_msgs__action__Search_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!behavior_tree_msgs__action__Search_Goal__init(&msg->goal)) {
    behavior_tree_msgs__action__Search_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Search_SendGoal_Request__fini(behavior_tree_msgs__action__Search_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  behavior_tree_msgs__action__Search_Goal__fini(&msg->goal);
}

bool
behavior_tree_msgs__action__Search_SendGoal_Request__are_equal(const behavior_tree_msgs__action__Search_SendGoal_Request * lhs, const behavior_tree_msgs__action__Search_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!behavior_tree_msgs__action__Search_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_SendGoal_Request__copy(
  const behavior_tree_msgs__action__Search_SendGoal_Request * input,
  behavior_tree_msgs__action__Search_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!behavior_tree_msgs__action__Search_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Search_SendGoal_Request *
behavior_tree_msgs__action__Search_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_SendGoal_Request * msg = (behavior_tree_msgs__action__Search_SendGoal_Request *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_SendGoal_Request));
  bool success = behavior_tree_msgs__action__Search_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_SendGoal_Request__destroy(behavior_tree_msgs__action__Search_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__init(behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_SendGoal_Request * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_SendGoal_Request *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_SendGoal_Request__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__fini(behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * array)
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
      behavior_tree_msgs__action__Search_SendGoal_Request__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_SendGoal_Request__Sequence *
behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * array = (behavior_tree_msgs__action__Search_SendGoal_Request__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__destroy(behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__are_equal(const behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * lhs, const behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_SendGoal_Request__Sequence__copy(
  const behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * input,
  behavior_tree_msgs__action__Search_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_SendGoal_Request * data =
      (behavior_tree_msgs__action__Search_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
behavior_tree_msgs__action__Search_SendGoal_Response__init(behavior_tree_msgs__action__Search_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    behavior_tree_msgs__action__Search_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Search_SendGoal_Response__fini(behavior_tree_msgs__action__Search_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
behavior_tree_msgs__action__Search_SendGoal_Response__are_equal(const behavior_tree_msgs__action__Search_SendGoal_Response * lhs, const behavior_tree_msgs__action__Search_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_SendGoal_Response__copy(
  const behavior_tree_msgs__action__Search_SendGoal_Response * input,
  behavior_tree_msgs__action__Search_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Search_SendGoal_Response *
behavior_tree_msgs__action__Search_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_SendGoal_Response * msg = (behavior_tree_msgs__action__Search_SendGoal_Response *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_SendGoal_Response));
  bool success = behavior_tree_msgs__action__Search_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_SendGoal_Response__destroy(behavior_tree_msgs__action__Search_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__init(behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_SendGoal_Response * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_SendGoal_Response *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_SendGoal_Response__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__fini(behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * array)
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
      behavior_tree_msgs__action__Search_SendGoal_Response__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_SendGoal_Response__Sequence *
behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * array = (behavior_tree_msgs__action__Search_SendGoal_Response__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__destroy(behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__are_equal(const behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * lhs, const behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_SendGoal_Response__Sequence__copy(
  const behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * input,
  behavior_tree_msgs__action__Search_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_SendGoal_Response * data =
      (behavior_tree_msgs__action__Search_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
behavior_tree_msgs__action__Search_GetResult_Request__init(behavior_tree_msgs__action__Search_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_tree_msgs__action__Search_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Search_GetResult_Request__fini(behavior_tree_msgs__action__Search_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
behavior_tree_msgs__action__Search_GetResult_Request__are_equal(const behavior_tree_msgs__action__Search_GetResult_Request * lhs, const behavior_tree_msgs__action__Search_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_GetResult_Request__copy(
  const behavior_tree_msgs__action__Search_GetResult_Request * input,
  behavior_tree_msgs__action__Search_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Search_GetResult_Request *
behavior_tree_msgs__action__Search_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_GetResult_Request * msg = (behavior_tree_msgs__action__Search_GetResult_Request *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_GetResult_Request));
  bool success = behavior_tree_msgs__action__Search_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_GetResult_Request__destroy(behavior_tree_msgs__action__Search_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_GetResult_Request__Sequence__init(behavior_tree_msgs__action__Search_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_GetResult_Request * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_GetResult_Request *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_GetResult_Request__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_GetResult_Request__Sequence__fini(behavior_tree_msgs__action__Search_GetResult_Request__Sequence * array)
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
      behavior_tree_msgs__action__Search_GetResult_Request__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_GetResult_Request__Sequence *
behavior_tree_msgs__action__Search_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_GetResult_Request__Sequence * array = (behavior_tree_msgs__action__Search_GetResult_Request__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_GetResult_Request__Sequence__destroy(behavior_tree_msgs__action__Search_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_GetResult_Request__Sequence__are_equal(const behavior_tree_msgs__action__Search_GetResult_Request__Sequence * lhs, const behavior_tree_msgs__action__Search_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_GetResult_Request__Sequence__copy(
  const behavior_tree_msgs__action__Search_GetResult_Request__Sequence * input,
  behavior_tree_msgs__action__Search_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_GetResult_Request * data =
      (behavior_tree_msgs__action__Search_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "behavior_tree_msgs/action/detail/search__functions.h"

bool
behavior_tree_msgs__action__Search_GetResult_Response__init(behavior_tree_msgs__action__Search_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!behavior_tree_msgs__action__Search_Result__init(&msg->result)) {
    behavior_tree_msgs__action__Search_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Search_GetResult_Response__fini(behavior_tree_msgs__action__Search_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  behavior_tree_msgs__action__Search_Result__fini(&msg->result);
}

bool
behavior_tree_msgs__action__Search_GetResult_Response__are_equal(const behavior_tree_msgs__action__Search_GetResult_Response * lhs, const behavior_tree_msgs__action__Search_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!behavior_tree_msgs__action__Search_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_GetResult_Response__copy(
  const behavior_tree_msgs__action__Search_GetResult_Response * input,
  behavior_tree_msgs__action__Search_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!behavior_tree_msgs__action__Search_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Search_GetResult_Response *
behavior_tree_msgs__action__Search_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_GetResult_Response * msg = (behavior_tree_msgs__action__Search_GetResult_Response *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_GetResult_Response));
  bool success = behavior_tree_msgs__action__Search_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_GetResult_Response__destroy(behavior_tree_msgs__action__Search_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_GetResult_Response__Sequence__init(behavior_tree_msgs__action__Search_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_GetResult_Response * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_GetResult_Response *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_GetResult_Response__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_GetResult_Response__Sequence__fini(behavior_tree_msgs__action__Search_GetResult_Response__Sequence * array)
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
      behavior_tree_msgs__action__Search_GetResult_Response__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_GetResult_Response__Sequence *
behavior_tree_msgs__action__Search_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_GetResult_Response__Sequence * array = (behavior_tree_msgs__action__Search_GetResult_Response__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_GetResult_Response__Sequence__destroy(behavior_tree_msgs__action__Search_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_GetResult_Response__Sequence__are_equal(const behavior_tree_msgs__action__Search_GetResult_Response__Sequence * lhs, const behavior_tree_msgs__action__Search_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_GetResult_Response__Sequence__copy(
  const behavior_tree_msgs__action__Search_GetResult_Response__Sequence * input,
  behavior_tree_msgs__action__Search_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_GetResult_Response * data =
      (behavior_tree_msgs__action__Search_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "behavior_tree_msgs/action/detail/search__functions.h"

bool
behavior_tree_msgs__action__Search_FeedbackMessage__init(behavior_tree_msgs__action__Search_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_tree_msgs__action__Search_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!behavior_tree_msgs__action__Search_Feedback__init(&msg->feedback)) {
    behavior_tree_msgs__action__Search_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Search_FeedbackMessage__fini(behavior_tree_msgs__action__Search_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  behavior_tree_msgs__action__Search_Feedback__fini(&msg->feedback);
}

bool
behavior_tree_msgs__action__Search_FeedbackMessage__are_equal(const behavior_tree_msgs__action__Search_FeedbackMessage * lhs, const behavior_tree_msgs__action__Search_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!behavior_tree_msgs__action__Search_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_FeedbackMessage__copy(
  const behavior_tree_msgs__action__Search_FeedbackMessage * input,
  behavior_tree_msgs__action__Search_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!behavior_tree_msgs__action__Search_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Search_FeedbackMessage *
behavior_tree_msgs__action__Search_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_FeedbackMessage * msg = (behavior_tree_msgs__action__Search_FeedbackMessage *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Search_FeedbackMessage));
  bool success = behavior_tree_msgs__action__Search_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Search_FeedbackMessage__destroy(behavior_tree_msgs__action__Search_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Search_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__init(behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_FeedbackMessage * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Search_FeedbackMessage *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Search_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Search_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Search_FeedbackMessage__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__fini(behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * array)
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
      behavior_tree_msgs__action__Search_FeedbackMessage__fini(&array->data[i]);
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

behavior_tree_msgs__action__Search_FeedbackMessage__Sequence *
behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * array = (behavior_tree_msgs__action__Search_FeedbackMessage__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Search_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__destroy(behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__are_equal(const behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * lhs, const behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Search_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Search_FeedbackMessage__Sequence__copy(
  const behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * input,
  behavior_tree_msgs__action__Search_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Search_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Search_FeedbackMessage * data =
      (behavior_tree_msgs__action__Search_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Search_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Search_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Search_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
