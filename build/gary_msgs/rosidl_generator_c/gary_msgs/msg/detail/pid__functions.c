// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gary_msgs:msg/PID.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
gary_msgs__msg__PID__init(gary_msgs__msg__PID * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gary_msgs__msg__PID__fini(msg);
    return false;
  }
  // kp
  // ki
  // kd
  // max_out
  // max_iout
  // set
  // feedback
  // error
  // error_sum
  // last_error
  // pout
  // iout
  // dout
  // out
  return true;
}

void
gary_msgs__msg__PID__fini(gary_msgs__msg__PID * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // kp
  // ki
  // kd
  // max_out
  // max_iout
  // set
  // feedback
  // error
  // error_sum
  // last_error
  // pout
  // iout
  // dout
  // out
}

bool
gary_msgs__msg__PID__are_equal(const gary_msgs__msg__PID * lhs, const gary_msgs__msg__PID * rhs)
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
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  // max_out
  if (lhs->max_out != rhs->max_out) {
    return false;
  }
  // max_iout
  if (lhs->max_iout != rhs->max_iout) {
    return false;
  }
  // set
  if (lhs->set != rhs->set) {
    return false;
  }
  // feedback
  if (lhs->feedback != rhs->feedback) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // error_sum
  if (lhs->error_sum != rhs->error_sum) {
    return false;
  }
  // last_error
  if (lhs->last_error != rhs->last_error) {
    return false;
  }
  // pout
  if (lhs->pout != rhs->pout) {
    return false;
  }
  // iout
  if (lhs->iout != rhs->iout) {
    return false;
  }
  // dout
  if (lhs->dout != rhs->dout) {
    return false;
  }
  // out
  if (lhs->out != rhs->out) {
    return false;
  }
  return true;
}

bool
gary_msgs__msg__PID__copy(
  const gary_msgs__msg__PID * input,
  gary_msgs__msg__PID * output)
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
  // kp
  output->kp = input->kp;
  // ki
  output->ki = input->ki;
  // kd
  output->kd = input->kd;
  // max_out
  output->max_out = input->max_out;
  // max_iout
  output->max_iout = input->max_iout;
  // set
  output->set = input->set;
  // feedback
  output->feedback = input->feedback;
  // error
  output->error = input->error;
  // error_sum
  output->error_sum = input->error_sum;
  // last_error
  output->last_error = input->last_error;
  // pout
  output->pout = input->pout;
  // iout
  output->iout = input->iout;
  // dout
  output->dout = input->dout;
  // out
  output->out = input->out;
  return true;
}

gary_msgs__msg__PID *
gary_msgs__msg__PID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__PID * msg = (gary_msgs__msg__PID *)allocator.allocate(sizeof(gary_msgs__msg__PID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__msg__PID));
  bool success = gary_msgs__msg__PID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__msg__PID__destroy(gary_msgs__msg__PID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__msg__PID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__msg__PID__Sequence__init(gary_msgs__msg__PID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__PID * data = NULL;

  if (size) {
    data = (gary_msgs__msg__PID *)allocator.zero_allocate(size, sizeof(gary_msgs__msg__PID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__msg__PID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__msg__PID__fini(&data[i - 1]);
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
gary_msgs__msg__PID__Sequence__fini(gary_msgs__msg__PID__Sequence * array)
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
      gary_msgs__msg__PID__fini(&array->data[i]);
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

gary_msgs__msg__PID__Sequence *
gary_msgs__msg__PID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__PID__Sequence * array = (gary_msgs__msg__PID__Sequence *)allocator.allocate(sizeof(gary_msgs__msg__PID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__msg__PID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__msg__PID__Sequence__destroy(gary_msgs__msg__PID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__msg__PID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__msg__PID__Sequence__are_equal(const gary_msgs__msg__PID__Sequence * lhs, const gary_msgs__msg__PID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__msg__PID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__msg__PID__Sequence__copy(
  const gary_msgs__msg__PID__Sequence * input,
  gary_msgs__msg__PID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__msg__PID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__msg__PID * data =
      (gary_msgs__msg__PID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__msg__PID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__msg__PID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__msg__PID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
