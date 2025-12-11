// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/AerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_H_

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

/// Struct defined in msg/AerialRobotEnergy in the package gary_msgs.
/**
  * This message contains aerial robot energy data received from the referee system
 */
typedef struct gary_msgs__msg__AerialRobotEnergy
{
  std_msgs__msg__Header header;
  /// available attack time, in seconds
  uint8_t attack_time;
} gary_msgs__msg__AerialRobotEnergy;

// Struct for a sequence of gary_msgs__msg__AerialRobotEnergy.
typedef struct gary_msgs__msg__AerialRobotEnergy__Sequence
{
  gary_msgs__msg__AerialRobotEnergy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__AerialRobotEnergy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_H_
