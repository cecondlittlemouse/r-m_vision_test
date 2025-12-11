// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/InteractiveDataRecv.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN'.
/**
  * 0x200
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN = 512
};

/// Constant 'DATA_CMD_ID_ROBOT_INTERACTIVE_END'.
/**
  * 0x2FF
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_ROBOT_INTERACTIVE_END = 767
};

/// Constant 'DATA_CMD_ID_CLIENT_DELETE_GRAPHICS'.
/**
  * 0x100
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_CLIENT_DELETE_GRAPHICS = 256
};

/// Constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1'.
/**
  * 0x101
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1 = 257
};

/// Constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3'.
/**
  * 0x102
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3 = 258
};

/// Constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5'.
/**
  * 0x103
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5 = 259
};

/// Constant 'DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7'.
/**
  * 0x104
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7 = 260
};

/// Constant 'DATA_CMD_ID_CLIENT_DRAW_CHARACTER'.
/**
  * 0x110
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__DATA_CMD_ID_CLIENT_DRAW_CHARACTER = 272
};

/// Constant 'ROBOT_ID_RED1_HERO'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED1_HERO = 1
};

/// Constant 'ROBOT_ID_RED2_ENGINEER'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED2_ENGINEER = 2
};

/// Constant 'ROBOT_ID_RED3_INFANTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED3_INFANTRY = 3
};

/// Constant 'ROBOT_ID_RED4_INFANTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED4_INFANTRY = 4
};

/// Constant 'ROBOT_ID_RED5_INFANTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED5_INFANTRY = 5
};

/// Constant 'ROBOT_ID_RED6_AERIAL'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED6_AERIAL = 6
};

/// Constant 'ROBOT_ID_RED7_SENTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED7_SENTRY = 7
};

/// Constant 'ROBOT_ID_RED9_RADAR'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_RED9_RADAR = 9
};

/// Constant 'ROBOT_ID_BLUE1_HERO'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE1_HERO = 101
};

/// Constant 'ROBOT_ID_BLUE2_ENGINEER'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE2_ENGINEER = 102
};

/// Constant 'ROBOT_ID_BLUE3_INFANTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE3_INFANTRY = 103
};

/// Constant 'ROBOT_ID_BLUE4_INFANTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE4_INFANTRY = 104
};

/// Constant 'ROBOT_ID_BLUE5_INFANTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE5_INFANTRY = 105
};

/// Constant 'ROBOT_ID_BLUE6_AERIAL'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE6_AERIAL = 106
};

/// Constant 'ROBOT_ID_BLUE7_SENTRY'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE7_SENTRY = 107
};

/// Constant 'ROBOT_ID_BLUE9_RADAR'.
enum
{
  gary_msgs__msg__InteractiveDataRecv__ROBOT_ID_BLUE9_RADAR = 109
};

/// Constant 'CLIENT_ID_RED1_HERO'.
/**
  * 0x101
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_RED1_HERO = 257
};

/// Constant 'CLIENT_ID_RED2_ENGINEER'.
/**
  * 0x102
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_RED2_ENGINEER = 258
};

/// Constant 'CLIENT_ID_RED3_INFANTRY'.
/**
  * 0x103
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_RED3_INFANTRY = 259
};

/// Constant 'CLIENT_ID_RED4_INFANTRY'.
/**
  * 0x104
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_RED4_INFANTRY = 260
};

/// Constant 'CLIENT_ID_RED5_INFANTRY'.
/**
  * 0x105
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_RED5_INFANTRY = 261
};

/// Constant 'CLIENT_ID_RED6_AERIAL'.
/**
  * 0x106
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_RED6_AERIAL = 262
};

/// Constant 'CLIENT_ID_BLUE1_HERO'.
/**
  * 0x165
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_BLUE1_HERO = 357
};

/// Constant 'CLIENT_ID_BLUE2_ENGINEER'.
/**
  * 0x166
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_BLUE2_ENGINEER = 358
};

/// Constant 'CLIENT_ID_BLUE3_INFANTRY'.
/**
  * 0x167
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_BLUE3_INFANTRY = 359
};

/// Constant 'CLIENT_ID_BLUE4_INFANTRY'.
/**
  * 0x168
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_BLUE4_INFANTRY = 360
};

/// Constant 'CLIENT_ID_BLUE5_INFANTRY'.
/**
  * 0x169
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_BLUE5_INFANTRY = 361
};

/// Constant 'CLIENT_ID_BLUE6_AERIAL'.
/**
  * 0x16A
 */
enum
{
  gary_msgs__msg__InteractiveDataRecv__CLIENT_ID_BLUE6_AERIAL = 362
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/InteractiveDataRecv in the package gary_msgs.
/**
  * This message contains interactive data sent to or received from the referee system
 */
typedef struct gary_msgs__msg__InteractiveDataRecv
{
  std_msgs__msg__Header header;
  /// data cmd id, see enum below
  uint16_t data_cmd_id;
  /// sender id and receiver id, see enum below
  uint16_t sender_id;
  uint16_t receiver_id;
  /// data length
  uint8_t data_length;
  /// payload
  rosidl_runtime_c__uint8__Sequence data;
} gary_msgs__msg__InteractiveDataRecv;

// Struct for a sequence of gary_msgs__msg__InteractiveDataRecv.
typedef struct gary_msgs__msg__InteractiveDataRecv__Sequence
{
  gary_msgs__msg__InteractiveDataRecv * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__InteractiveDataRecv__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__STRUCT_H_
