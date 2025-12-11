// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gary_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/auto_aim__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
gary_msgs__msg__AutoAIM__init(gary_msgs__msg__AutoAIM * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gary_msgs__msg__AutoAIM__fini(msg);
    return false;
  }
  // pitch
  // yaw
  // target_id
  // target_distance
  // vision_mode
  // shoot_command
  return true;
}

void
gary_msgs__msg__AutoAIM__fini(gary_msgs__msg__AutoAIM * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pitch
  // yaw
  // target_id
  // target_distance
  // vision_mode
  // shoot_command
}

bool
gary_msgs__msg__AutoAIM__are_equal(const gary_msgs__msg__AutoAIM * lhs, const gary_msgs__msg__AutoAIM * rhs)
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
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // target_id
  if (lhs->target_id != rhs->target_id) {
    return false;
  }
  // target_distance
  if (lhs->target_distance != rhs->target_distance) {
    return false;
  }
  // vision_mode
  if (lhs->vision_mode != rhs->vision_mode) {
    return false;
  }
  // shoot_command
  if (lhs->shoot_command != rhs->shoot_command) {
    return false;
  }
  return true;
}

bool
gary_msgs__msg__AutoAIM__copy(
  const gary_msgs__msg__AutoAIM * input,
  gary_msgs__msg__AutoAIM * output)
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
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // target_id
  output->target_id = input->target_id;
  // target_distance
  output->target_distance = input->target_distance;
  // vision_mode
  output->vision_mode = input->vision_mode;
  // shoot_command
  output->shoot_command = input->shoot_command;
  return true;
}

gary_msgs__msg__AutoAIM *
gary_msgs__msg__AutoAIM__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__AutoAIM * msg = (gary_msgs__msg__AutoAIM *)allocator.allocate(sizeof(gary_msgs__msg__AutoAIM), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__msg__AutoAIM));
  bool success = gary_msgs__msg__AutoAIM__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__msg__AutoAIM__destroy(gary_msgs__msg__AutoAIM * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__msg__AutoAIM__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__msg__AutoAIM__Sequence__init(gary_msgs__msg__AutoAIM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__AutoAIM * data = NULL;

  if (size) {
    data = (gary_msgs__msg__AutoAIM *)allocator.zero_allocate(size, sizeof(gary_msgs__msg__AutoAIM), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__msg__AutoAIM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__msg__AutoAIM__fini(&data[i - 1]);
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
gary_msgs__msg__AutoAIM__Sequence__fini(gary_msgs__msg__AutoAIM__Sequence * array)
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
      gary_msgs__msg__AutoAIM__fini(&array->data[i]);
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

gary_msgs__msg__AutoAIM__Sequence *
gary_msgs__msg__AutoAIM__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__AutoAIM__Sequence * array = (gary_msgs__msg__AutoAIM__Sequence *)allocator.allocate(sizeof(gary_msgs__msg__AutoAIM__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__msg__AutoAIM__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__msg__AutoAIM__Sequence__destroy(gary_msgs__msg__AutoAIM__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__msg__AutoAIM__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__msg__AutoAIM__Sequence__are_equal(const gary_msgs__msg__AutoAIM__Sequence * lhs, const gary_msgs__msg__AutoAIM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__msg__AutoAIM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__msg__AutoAIM__Sequence__copy(
  const gary_msgs__msg__AutoAIM__Sequence * input,
  gary_msgs__msg__AutoAIM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__msg__AutoAIM);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__msg__AutoAIM * data =
      (gary_msgs__msg__AutoAIM *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__msg__AutoAIM__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__msg__AutoAIM__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__msg__AutoAIM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
