// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_ID_RED1_HERO'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED1_HERO = 1
};

/// Constant 'ROBOT_ID_RED2_ENGINEER'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED2_ENGINEER = 2
};

/// Constant 'ROBOT_ID_RED3_INFANTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED3_INFANTRY = 3
};

/// Constant 'ROBOT_ID_RED4_INFANTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED4_INFANTRY = 4
};

/// Constant 'ROBOT_ID_RED5_INFANTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED5_INFANTRY = 5
};

/// Constant 'ROBOT_ID_RED6_AERIAL'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED6_AERIAL = 6
};

/// Constant 'ROBOT_ID_RED7_SENTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED7_SENTRY = 7
};

/// Constant 'ROBOT_ID_RED8_DART'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED8_DART = 8
};

/// Constant 'ROBOT_ID_RED9_RADAR'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_RED9_RADAR = 9
};

/// Constant 'ROBOT_ID_BLUE1_HERO'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE1_HERO = 101
};

/// Constant 'ROBOT_ID_BLUE2_ENGINEER'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE2_ENGINEER = 102
};

/// Constant 'ROBOT_ID_BLUE3_INFANTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE3_INFANTRY = 103
};

/// Constant 'ROBOT_ID_BLUE4_INFANTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE4_INFANTRY = 104
};

/// Constant 'ROBOT_ID_BLUE5_INFANTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE5_INFANTRY = 105
};

/// Constant 'ROBOT_ID_BLUE6_AERIAL'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE6_AERIAL = 106
};

/// Constant 'ROBOT_ID_BLUE7_SENTRY'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE7_SENTRY = 107
};

/// Constant 'ROBOT_ID_BLUE8_DART'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE8_DART = 108
};

/// Constant 'ROBOT_ID_BLUE9_RADAR'.
enum
{
  gary_msgs__msg__RobotStatus__ROBOT_ID_BLUE9_RADAR = 109
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RobotStatus in the package gary_msgs.
/**
  * This message contains robot status data received from the referee system
 */
typedef struct gary_msgs__msg__RobotStatus
{
  std_msgs__msg__Header header;
  /// robot id, see enum below
  uint8_t robot_id;
  /// robot level
  uint8_t robot_level;
  /// robot remain hp
  uint16_t remain_hp;
  /// robot max hp
  uint16_t max_hp;
  /// 17mm shooter 1 data, speed limit in m/s
  uint16_t shooter_17mm_id1_cooling_rate;
  uint16_t shooter_17mm_id1_cooling_limit;
  uint16_t shooter_17mm_id1_speed_limit;
  /// 17mm shooter 2 data, speed limit in m/s
  uint16_t shooter_17mm_id2_cooling_rate;
  uint16_t shooter_17mm_id2_cooling_limit;
  uint16_t shooter_17mm_id2_speed_limit;
  /// 42mm shooter 1 data, speed limit in m/s
  uint16_t shooter_42mm_id1_cooling_rate;
  uint16_t shooter_42mm_id1_cooling_limit;
  uint16_t shooter_42mm_id1_speed_limit;
  /// chassis power limit, in watt
  uint16_t chassis_power_limit;
  /// power output status
  bool gimbal_power_output;
  bool chassis_power_output;
  bool shooter_power_output;
} gary_msgs__msg__RobotStatus;

// Struct for a sequence of gary_msgs__msg__RobotStatus.
typedef struct gary_msgs__msg__RobotStatus__Sequence
{
  gary_msgs__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
