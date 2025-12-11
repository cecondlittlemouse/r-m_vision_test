// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gary_msgs:msg/PIDWithFilter.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/pid_with_filter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
gary_msgs__msg__PIDWithFilter__init(gary_msgs__msg__PIDWithFilter * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gary_msgs__msg__PIDWithFilter__fini(msg);
    return false;
  }
  // kp
  // ki
  // kd
  // p_filter_coefficient
  // d_filter_coefficient
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
gary_msgs__msg__PIDWithFilter__fini(gary_msgs__msg__PIDWithFilter * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // kp
  // ki
  // kd
  // p_filter_coefficient
  // d_filter_coefficient
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
gary_msgs__msg__PIDWithFilter__are_equal(const gary_msgs__msg__PIDWithFilter * lhs, const gary_msgs__msg__PIDWithFilter * rhs)
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
  // p_filter_coefficient
  if (lhs->p_filter_coefficient != rhs->p_filter_coefficient) {
    return false;
  }
  // d_filter_coefficient
  if (lhs->d_filter_coefficient != rhs->d_filter_coefficient) {
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
gary_msgs__msg__PIDWithFilter__copy(
  const gary_msgs__msg__PIDWithFilter * input,
  gary_msgs__msg__PIDWithFilter * output)
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
  // p_filter_coefficient
  output->p_filter_coefficient = input->p_filter_coefficient;
  // d_filter_coefficient
  output->d_filter_coefficient = input->d_filter_coefficient;
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

gary_msgs__msg__PIDWithFilter *
gary_msgs__msg__PIDWithFilter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__PIDWithFilter * msg = (gary_msgs__msg__PIDWithFilter *)allocator.allocate(sizeof(gary_msgs__msg__PIDWithFilter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__msg__PIDWithFilter));
  bool success = gary_msgs__msg__PIDWithFilter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__msg__PIDWithFilter__destroy(gary_msgs__msg__PIDWithFilter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__msg__PIDWithFilter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__msg__PIDWithFilter__Sequence__init(gary_msgs__msg__PIDWithFilter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__PIDWithFilter * data = NULL;

  if (size) {
    data = (gary_msgs__msg__PIDWithFilter *)allocator.zero_allocate(size, sizeof(gary_msgs__msg__PIDWithFilter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__msg__PIDWithFilter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__msg__PIDWithFilter__fini(&data[i - 1]);
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
gary_msgs__msg__PIDWithFilter__Sequence__fini(gary_msgs__msg__PIDWithFilter__Sequence * array)
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
      gary_msgs__msg__PIDWithFilter__fini(&array->data[i]);
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

gary_msgs__msg__PIDWithFilter__Sequence *
gary_msgs__msg__PIDWithFilter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__PIDWithFilter__Sequence * array = (gary_msgs__msg__PIDWithFilter__Sequence *)allocator.allocate(sizeof(gary_msgs__msg__PIDWithFilter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__msg__PIDWithFilter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__msg__PIDWithFilter__Sequence__destroy(gary_msgs__msg__PIDWithFilter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__msg__PIDWithFilter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__msg__PIDWithFilter__Sequence__are_equal(const gary_msgs__msg__PIDWithFilter__Sequence * lhs, const gary_msgs__msg__PIDWithFilter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__msg__PIDWithFilter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__msg__PIDWithFilter__Sequence__copy(
  const gary_msgs__msg__PIDWithFilter__Sequence * input,
  gary_msgs__msg__PIDWithFilter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__msg__PIDWithFilter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__msg__PIDWithFilter * data =
      (gary_msgs__msg__PIDWithFilter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__msg__PIDWithFilter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__msg__PIDWithFilter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__msg__PIDWithFilter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
