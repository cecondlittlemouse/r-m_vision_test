// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LEVEL_YELLOW'.
enum
{
  gary_msgs__msg__RefereeWarning__LEVEL_YELLOW = 0
};

/// Constant 'LEVEL_RED'.
enum
{
  gary_msgs__msg__RefereeWarning__LEVEL_RED = 0
};

/// Constant 'LEVEL_LOSE_GAME'.
enum
{
  gary_msgs__msg__RefereeWarning__LEVEL_LOSE_GAME = 0
};

/// Constant 'FOUL_ROBOT_ID_ALL'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_ALL = 0
};

/// Constant 'FOUL_ROBOT_ID_RED1_HERO'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_RED1_HERO = 1
};

/// Constant 'FOUL_ROBOT_ID_RED2_ENGINEER'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_RED2_ENGINEER = 2
};

/// Constant 'FOUL_ROBOT_ID_RED3_INFANTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_RED3_INFANTRY = 3
};

/// Constant 'FOUL_ROBOT_ID_RED4_INFANTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_RED4_INFANTRY = 4
};

/// Constant 'FOUL_ROBOT_ID_RED5_INFANTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_RED5_INFANTRY = 5
};

/// Constant 'FOUL_ROBOT_ID_RED6_AERIAL'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_RED6_AERIAL = 6
};

/// Constant 'FOUL_ROBOT_ID_RED7_SENTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_RED7_SENTRY = 7
};

/// Constant 'FOUL_ROBOT_ID_BLUE1_HERO'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_BLUE1_HERO = 101
};

/// Constant 'FOUL_ROBOT_ID_BLUE2_ENGINEER'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_BLUE2_ENGINEER = 102
};

/// Constant 'FOUL_ROBOT_ID_BLUE3_INFANTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_BLUE3_INFANTRY = 103
};

/// Constant 'FOUL_ROBOT_ID_BLUE4_INFANTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_BLUE4_INFANTRY = 104
};

/// Constant 'FOUL_ROBOT_ID_BLUE5_INFANTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_BLUE5_INFANTRY = 105
};

/// Constant 'FOUL_ROBOT_ID_BLUE6_AERIAL'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_BLUE6_AERIAL = 106
};

/// Constant 'FOUL_ROBOT_ID_BLUE7_SENTRY'.
enum
{
  gary_msgs__msg__RefereeWarning__FOUL_ROBOT_ID_BLUE7_SENTRY = 107
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RefereeWarning in the package gary_msgs.
/**
  * This message contains referee warning data received from the referee system
 */
typedef struct gary_msgs__msg__RefereeWarning
{
  std_msgs__msg__Header header;
  /// warning level, see enum below
  uint8_t level;
  /// foul robot id, see enum below
  uint8_t foul_robot_id;
} gary_msgs__msg__RefereeWarning;

// Struct for a sequence of gary_msgs__msg__RefereeWarning.
typedef struct gary_msgs__msg__RefereeWarning__Sequence
{
  gary_msgs__msg__RefereeWarning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__RefereeWarning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
