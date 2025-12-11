// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/AutoAimDebug.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__STRUCT_H_

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

/// Struct defined in msg/AutoAimDebug in the package gary_msgs.
/**
  * this message contains the debug msgs for autoaim
 */
typedef struct gary_msgs__msg__AutoAimDebug
{
  std_msgs__msg__Header header;
  float plan_yaw;
  float plan_pitch;
  float yaw_diff;
  float yaw_limit_1;
  float yaw_limit_2;
} gary_msgs__msg__AutoAimDebug;

// Struct for a sequence of gary_msgs__msg__AutoAimDebug.
typedef struct gary_msgs__msg__AutoAimDebug__Sequence
{
  gary_msgs__msg__AutoAimDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__AutoAimDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__STRUCT_H_
