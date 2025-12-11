// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__ROBOT_HURT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HURT_TYPE_ARMOR_DAMAGE'.
enum
{
  gary_msgs__msg__RobotHurt__HURT_TYPE_ARMOR_DAMAGE = 0
};

/// Constant 'HURT_TYPE_MODULE_OFFLINE'.
enum
{
  gary_msgs__msg__RobotHurt__HURT_TYPE_MODULE_OFFLINE = 1
};

/// Constant 'HURT_TYPE_SHOOT_OVER_SPEED'.
enum
{
  gary_msgs__msg__RobotHurt__HURT_TYPE_SHOOT_OVER_SPEED = 2
};

/// Constant 'HURT_TYPE_SHOOT_OVER_HEAT'.
enum
{
  gary_msgs__msg__RobotHurt__HURT_TYPE_SHOOT_OVER_HEAT = 3
};

/// Constant 'HURT_TYPE_CHASSIS_OVER_POWER'.
enum
{
  gary_msgs__msg__RobotHurt__HURT_TYPE_CHASSIS_OVER_POWER = 4
};

/// Constant 'HURT_TYPE_ARMOR_COLLISION'.
enum
{
  gary_msgs__msg__RobotHurt__HURT_TYPE_ARMOR_COLLISION = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RobotHurt in the package gary_msgs.
/**
  * This message contains robot hurt data received from the referee system
 */
typedef struct gary_msgs__msg__RobotHurt
{
  std_msgs__msg__Header header;
  /// hurt type, see enum below
  uint8_t hurt_type;
  /// armor id
  uint8_t armor_id;
} gary_msgs__msg__RobotHurt;

// Struct for a sequence of gary_msgs__msg__RobotHurt.
typedef struct gary_msgs__msg__RobotHurt__Sequence
{
  gary_msgs__msg__RobotHurt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__RobotHurt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
