// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gary_msgs:msg/PowerHeat.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/power_heat__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gary_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gary_msgs/msg/detail/power_heat__struct.h"
#include "gary_msgs/msg/detail/power_heat__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gary_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gary_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gary_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PowerHeat__ros_msg_type = gary_msgs__msg__PowerHeat;

static bool _PowerHeat__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PowerHeat__ros_msg_type * ros_message = static_cast<const _PowerHeat__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: chassis_volt
  {
    cdr << ros_message->chassis_volt;
  }

  // Field name: chassis_current
  {
    cdr << ros_message->chassis_current;
  }

  // Field name: chassis_power
  {
    cdr << ros_message->chassis_power;
  }

  // Field name: chassis_power_buffer
  {
    cdr << ros_message->chassis_power_buffer;
  }

  // Field name: shooter_17mm_id1_heat
  {
    cdr << ros_message->shooter_17mm_id1_heat;
  }

  // Field name: shooter_17mm_id2_heat
  {
    cdr << ros_message->shooter_17mm_id2_heat;
  }

  // Field name: shooter_42mm_id1_heat
  {
    cdr << ros_message->shooter_42mm_id1_heat;
  }

  return true;
}

static bool _PowerHeat__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PowerHeat__ros_msg_type * ros_message = static_cast<_PowerHeat__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: chassis_volt
  {
    cdr >> ros_message->chassis_volt;
  }

  // Field name: chassis_current
  {
    cdr >> ros_message->chassis_current;
  }

  // Field name: chassis_power
  {
    cdr >> ros_message->chassis_power;
  }

  // Field name: chassis_power_buffer
  {
    cdr >> ros_message->chassis_power_buffer;
  }

  // Field name: shooter_17mm_id1_heat
  {
    cdr >> ros_message->shooter_17mm_id1_heat;
  }

  // Field name: shooter_17mm_id2_heat
  {
    cdr >> ros_message->shooter_17mm_id2_heat;
  }

  // Field name: shooter_42mm_id1_heat
  {
    cdr >> ros_message->shooter_42mm_id1_heat;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gary_msgs
size_t get_serialized_size_gary_msgs__msg__PowerHeat(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PowerHeat__ros_msg_type * ros_message = static_cast<const _PowerHeat__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name chassis_volt
  {
    size_t item_size = sizeof(ros_message->chassis_volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chassis_current
  {
    size_t item_size = sizeof(ros_message->chassis_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chassis_power
  {
    size_t item_size = sizeof(ros_message->chassis_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chassis_power_buffer
  {
    size_t item_size = sizeof(ros_message->chassis_power_buffer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_17mm_id1_heat
  {
    size_t item_size = sizeof(ros_message->shooter_17mm_id1_heat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_17mm_id2_heat
  {
    size_t item_size = sizeof(ros_message->shooter_17mm_id2_heat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_42mm_id1_heat
  {
    size_t item_size = sizeof(ros_message->shooter_42mm_id1_heat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PowerHeat__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gary_msgs__msg__PowerHeat(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gary_msgs
size_t max_serialized_size_gary_msgs__msg__PowerHeat(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: chassis_volt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: chassis_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: chassis_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: chassis_power_buffer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_17mm_id1_heat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_17mm_id2_heat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_42mm_id1_heat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gary_msgs__msg__PowerHeat;
    is_plain =
      (
      offsetof(DataType, shooter_42mm_id1_heat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PowerHeat__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gary_msgs__msg__PowerHeat(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PowerHeat = {
  "gary_msgs::msg",
  "PowerHeat",
  _PowerHeat__cdr_serialize,
  _PowerHeat__cdr_deserialize,
  _PowerHeat__get_serialized_size,
  _PowerHeat__max_serialized_size
};

static rosidl_message_type_support_t _PowerHeat__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PowerHeat,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gary_msgs, msg, PowerHeat)() {
  return &_PowerHeat__type_support;
}

#if defined(__cplusplus)
}
#endif
