// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/PIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PIDWithFilter in the package gary_msgs.
/**
  * This message contains PID with filter controller data
 */
typedef struct gary_msgs__msg__PIDWithFilter
{
  std_msgs__msg__Header header;
  /// parameters
  double kp;
  double ki;
  double kd;
  double p_filter_coefficient;
  double d_filter_coefficient;
  /// limitations
  double max_out;
  double max_iout;
  /// status
  double set;
  double feedback;
  double error;
  double error_sum;
  double last_error;
  /// output
  double pout;
  double iout;
  double dout;
  double out;
} gary_msgs__msg__PIDWithFilter;

// Struct for a sequence of gary_msgs__msg__PIDWithFilter.
typedef struct gary_msgs__msg__PIDWithFilter__Sequence
{
  gary_msgs__msg__PIDWithFilter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__PIDWithFilter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__STRUCT_H_
