// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gary_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/rfid_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
gary_msgs__msg__RFIDStatus__init(gary_msgs__msg__RFIDStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gary_msgs__msg__RFIDStatus__fini(msg);
    return false;
  }
  // base_buff_point
  // elevated_ground_buff_point
  // power_rune_buff_point
  // launch_ramp_buff_point
  // outpost_buff_point
  // hp_recovery_buff_point
  // engineer_robot_revival_card
  return true;
}

void
gary_msgs__msg__RFIDStatus__fini(gary_msgs__msg__RFIDStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // base_buff_point
  // elevated_ground_buff_point
  // power_rune_buff_point
  // launch_ramp_buff_point
  // outpost_buff_point
  // hp_recovery_buff_point
  // engineer_robot_revival_card
}

bool
gary_msgs__msg__RFIDStatus__are_equal(const gary_msgs__msg__RFIDStatus * lhs, const gary_msgs__msg__RFIDStatus * rhs)
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
  // base_buff_point
  if (lhs->base_buff_point != rhs->base_buff_point) {
    return false;
  }
  // elevated_ground_buff_point
  if (lhs->elevated_ground_buff_point != rhs->elevated_ground_buff_point) {
    return false;
  }
  // power_rune_buff_point
  if (lhs->power_rune_buff_point != rhs->power_rune_buff_point) {
    return false;
  }
  // launch_ramp_buff_point
  if (lhs->launch_ramp_buff_point != rhs->launch_ramp_buff_point) {
    return false;
  }
  // outpost_buff_point
  if (lhs->outpost_buff_point != rhs->outpost_buff_point) {
    return false;
  }
  // hp_recovery_buff_point
  if (lhs->hp_recovery_buff_point != rhs->hp_recovery_buff_point) {
    return false;
  }
  // engineer_robot_revival_card
  if (lhs->engineer_robot_revival_card != rhs->engineer_robot_revival_card) {
    return false;
  }
  return true;
}

bool
gary_msgs__msg__RFIDStatus__copy(
  const gary_msgs__msg__RFIDStatus * input,
  gary_msgs__msg__RFIDStatus * output)
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
  // base_buff_point
  output->base_buff_point = input->base_buff_point;
  // elevated_ground_buff_point
  output->elevated_ground_buff_point = input->elevated_ground_buff_point;
  // power_rune_buff_point
  output->power_rune_buff_point = input->power_rune_buff_point;
  // launch_ramp_buff_point
  output->launch_ramp_buff_point = input->launch_ramp_buff_point;
  // outpost_buff_point
  output->outpost_buff_point = input->outpost_buff_point;
  // hp_recovery_buff_point
  output->hp_recovery_buff_point = input->hp_recovery_buff_point;
  // engineer_robot_revival_card
  output->engineer_robot_revival_card = input->engineer_robot_revival_card;
  return true;
}

gary_msgs__msg__RFIDStatus *
gary_msgs__msg__RFIDStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__RFIDStatus * msg = (gary_msgs__msg__RFIDStatus *)allocator.allocate(sizeof(gary_msgs__msg__RFIDStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__msg__RFIDStatus));
  bool success = gary_msgs__msg__RFIDStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__msg__RFIDStatus__destroy(gary_msgs__msg__RFIDStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__msg__RFIDStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__msg__RFIDStatus__Sequence__init(gary_msgs__msg__RFIDStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__RFIDStatus * data = NULL;

  if (size) {
    data = (gary_msgs__msg__RFIDStatus *)allocator.zero_allocate(size, sizeof(gary_msgs__msg__RFIDStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__msg__RFIDStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__msg__RFIDStatus__fini(&data[i - 1]);
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
gary_msgs__msg__RFIDStatus__Sequence__fini(gary_msgs__msg__RFIDStatus__Sequence * array)
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
      gary_msgs__msg__RFIDStatus__fini(&array->data[i]);
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

gary_msgs__msg__RFIDStatus__Sequence *
gary_msgs__msg__RFIDStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__RFIDStatus__Sequence * array = (gary_msgs__msg__RFIDStatus__Sequence *)allocator.allocate(sizeof(gary_msgs__msg__RFIDStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__msg__RFIDStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__msg__RFIDStatus__Sequence__destroy(gary_msgs__msg__RFIDStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__msg__RFIDStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__msg__RFIDStatus__Sequence__are_equal(const gary_msgs__msg__RFIDStatus__Sequence * lhs, const gary_msgs__msg__RFIDStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__msg__RFIDStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__msg__RFIDStatus__Sequence__copy(
  const gary_msgs__msg__RFIDStatus__Sequence * input,
  gary_msgs__msg__RFIDStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__msg__RFIDStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__msg__RFIDStatus * data =
      (gary_msgs__msg__RFIDStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__msg__RFIDStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__msg__RFIDStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__msg__RFIDStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
