// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LAUNCH_STATUS_OPENED'.
enum
{
  gary_msgs__msg__DartClientCmd__LAUNCH_STATUS_OPENED = 0
};

/// Constant 'LAUNCH_STATUS_CLOSED'.
enum
{
  gary_msgs__msg__DartClientCmd__LAUNCH_STATUS_CLOSED = 1
};

/// Constant 'LAUNCH_STATUS_IN_ACTION'.
enum
{
  gary_msgs__msg__DartClientCmd__LAUNCH_STATUS_IN_ACTION = 2
};

/// Constant 'ATTACK_TARGET_OUTPOST'.
enum
{
  gary_msgs__msg__DartClientCmd__ATTACK_TARGET_OUTPOST = 0
};

/// Constant 'ATTACK_TARGET_BASE'.
enum
{
  gary_msgs__msg__DartClientCmd__ATTACK_TARGET_BASE = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DartClientCmd in the package gary_msgs.
/**
  * This message contains dart client command data received from the referee system
 */
typedef struct gary_msgs__msg__DartClientCmd
{
  std_msgs__msg__Header header;
  /// launch status, see enum below
  uint8_t launch_status;
  /// attack target, see enum below
  uint8_t attack_target;
  /// the remaining time of the game when switching targets, in seconds
  uint16_t target_change_time;
  /// the remaining time of the game when the operator confirm to launch, in seconds
  uint16_t operate_launch_cmd_time;
} gary_msgs__msg__DartClientCmd;

// Struct for a sequence of gary_msgs__msg__DartClientCmd.
typedef struct gary_msgs__msg__DartClientCmd__Sequence
{
  gary_msgs__msg__DartClientCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__DartClientCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_H_
