// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TARGET_ID0_NONE'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID0_NONE = 0
};

/// Constant 'TARGET_ID1_HERO'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID1_HERO = 1
};

/// Constant 'TARGET_ID2_ENGINEER'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID2_ENGINEER = 2
};

/// Constant 'TARGET_ID3_INFANTRY'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID3_INFANTRY = 3
};

/// Constant 'TARGET_ID4_INFANTRY'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID4_INFANTRY = 4
};

/// Constant 'TARGET_ID5_INFANTRY'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID5_INFANTRY = 5
};

/// Constant 'TARGET_ID6_OUTPOST'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID6_OUTPOST = 6
};

/// Constant 'TARGET_ID7_SENTRY'.
enum
{
  gary_msgs__msg__AutoAIM__TARGET_ID7_SENTRY = 7
};

/// Constant 'VISION_MODE_ARMOR'.
enum
{
  gary_msgs__msg__AutoAIM__VISION_MODE_ARMOR = 1
};

/// Constant 'VISION_MODE_SMALL'.
enum
{
  gary_msgs__msg__AutoAIM__VISION_MODE_SMALL = 2
};

/// Constant 'VISION_MODE_BIG'.
enum
{
  gary_msgs__msg__AutoAIM__VISION_MODE_BIG = 3
};

/// Constant 'VISION_MODE_TAG'.
enum
{
  gary_msgs__msg__AutoAIM__VISION_MODE_TAG = 4
};

/// Constant 'CEASE_FIRE'.
enum
{
  gary_msgs__msg__AutoAIM__CEASE_FIRE = 0
};

/// Constant 'ALLOW_SHOOT'.
enum
{
  gary_msgs__msg__AutoAIM__ALLOW_SHOOT = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/AutoAIM in the package gary_msgs.
/**
  * This message contains auto aiming data
 */
typedef struct gary_msgs__msg__AutoAIM
{
  std_msgs__msg__Header header;
  float pitch;
  float yaw;
  /// auto aiming target, see enum below
  uint8_t target_id;
  /// auto aiming target distance
  float target_distance;
  /// auto aiming mode, see enum below
  uint8_t vision_mode;
  /// auto aiming shoot command, see enum below
  uint8_t shoot_command;
} gary_msgs__msg__AutoAIM;

// Struct for a sequence of gary_msgs__msg__AutoAIM.
typedef struct gary_msgs__msg__AutoAIM__Sequence
{
  gary_msgs__msg__AutoAIM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__AutoAIM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_
