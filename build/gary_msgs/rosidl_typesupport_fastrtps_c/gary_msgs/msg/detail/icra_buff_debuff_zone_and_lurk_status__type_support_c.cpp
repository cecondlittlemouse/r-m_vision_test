// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gary_msgs:msg/ICRABuffDebuffZoneAndLurkStatus.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/icra_buff_debuff_zone_and_lurk_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gary_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gary_msgs/msg/detail/icra_buff_debuff_zone_and_lurk_status__struct.h"
#include "gary_msgs/msg/detail/icra_buff_debuff_zone_and_lurk_status__functions.h"
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


using _ICRABuffDebuffZoneAndLurkStatus__ros_msg_type = gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus;

static bool _ICRABuffDebuffZoneAndLurkStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ICRABuffDebuffZoneAndLurkStatus__ros_msg_type * ros_message = static_cast<const _ICRABuffDebuffZoneAndLurkStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: f1_zone_status
  {
    cdr << (ros_message->f1_zone_status ? true : false);
  }

  // Field name: f1_zone_buff_debuff_status
  {
    cdr << ros_message->f1_zone_buff_debuff_status;
  }

  // Field name: f2_zone_status
  {
    cdr << (ros_message->f2_zone_status ? true : false);
  }

  // Field name: f2_zone_buff_debuff_status
  {
    cdr << ros_message->f2_zone_buff_debuff_status;
  }

  // Field name: f3_zone_status
  {
    cdr << (ros_message->f3_zone_status ? true : false);
  }

  // Field name: f3_zone_buff_debuff_status
  {
    cdr << ros_message->f3_zone_buff_debuff_status;
  }

  // Field name: f4_zone_status
  {
    cdr << (ros_message->f4_zone_status ? true : false);
  }

  // Field name: f4_zone_buff_debuff_status
  {
    cdr << ros_message->f4_zone_buff_debuff_status;
  }

  // Field name: f5_zone_status
  {
    cdr << (ros_message->f5_zone_status ? true : false);
  }

  // Field name: f5_zone_buff_debuff_status
  {
    cdr << ros_message->f5_zone_buff_debuff_status;
  }

  // Field name: f6_zone_status
  {
    cdr << (ros_message->f6_zone_status ? true : false);
  }

  // Field name: f6_zone_buff_debuff_status
  {
    cdr << ros_message->f6_zone_buff_debuff_status;
  }

  // Field name: red1_bullet_left
  {
    cdr << ros_message->red1_bullet_left;
  }

  // Field name: red2_bullet_left
  {
    cdr << ros_message->red2_bullet_left;
  }

  // Field name: blue1_bullet_left
  {
    cdr << ros_message->blue1_bullet_left;
  }

  // Field name: blue2_bullet_left
  {
    cdr << ros_message->blue2_bullet_left;
  }

  // Field name: lurk_mode
  {
    cdr << ros_message->lurk_mode;
  }

  return true;
}

static bool _ICRABuffDebuffZoneAndLurkStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ICRABuffDebuffZoneAndLurkStatus__ros_msg_type * ros_message = static_cast<_ICRABuffDebuffZoneAndLurkStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: f1_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->f1_zone_status = tmp ? true : false;
  }

  // Field name: f1_zone_buff_debuff_status
  {
    cdr >> ros_message->f1_zone_buff_debuff_status;
  }

  // Field name: f2_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->f2_zone_status = tmp ? true : false;
  }

  // Field name: f2_zone_buff_debuff_status
  {
    cdr >> ros_message->f2_zone_buff_debuff_status;
  }

  // Field name: f3_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->f3_zone_status = tmp ? true : false;
  }

  // Field name: f3_zone_buff_debuff_status
  {
    cdr >> ros_message->f3_zone_buff_debuff_status;
  }

  // Field name: f4_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->f4_zone_status = tmp ? true : false;
  }

  // Field name: f4_zone_buff_debuff_status
  {
    cdr >> ros_message->f4_zone_buff_debuff_status;
  }

  // Field name: f5_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->f5_zone_status = tmp ? true : false;
  }

  // Field name: f5_zone_buff_debuff_status
  {
    cdr >> ros_message->f5_zone_buff_debuff_status;
  }

  // Field name: f6_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->f6_zone_status = tmp ? true : false;
  }

  // Field name: f6_zone_buff_debuff_status
  {
    cdr >> ros_message->f6_zone_buff_debuff_status;
  }

  // Field name: red1_bullet_left
  {
    cdr >> ros_message->red1_bullet_left;
  }

  // Field name: red2_bullet_left
  {
    cdr >> ros_message->red2_bullet_left;
  }

  // Field name: blue1_bullet_left
  {
    cdr >> ros_message->blue1_bullet_left;
  }

  // Field name: blue2_bullet_left
  {
    cdr >> ros_message->blue2_bullet_left;
  }

  // Field name: lurk_mode
  {
    cdr >> ros_message->lurk_mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gary_msgs
size_t get_serialized_size_gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ICRABuffDebuffZoneAndLurkStatus__ros_msg_type * ros_message = static_cast<const _ICRABuffDebuffZoneAndLurkStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name f1_zone_status
  {
    size_t item_size = sizeof(ros_message->f1_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f1_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f1_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2_zone_status
  {
    size_t item_size = sizeof(ros_message->f2_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f2_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3_zone_status
  {
    size_t item_size = sizeof(ros_message->f3_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f3_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f4_zone_status
  {
    size_t item_size = sizeof(ros_message->f4_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f4_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f4_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f5_zone_status
  {
    size_t item_size = sizeof(ros_message->f5_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f5_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f5_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f6_zone_status
  {
    size_t item_size = sizeof(ros_message->f6_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f6_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f6_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red1_bullet_left
  {
    size_t item_size = sizeof(ros_message->red1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red2_bullet_left
  {
    size_t item_size = sizeof(ros_message->red2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue1_bullet_left
  {
    size_t item_size = sizeof(ros_message->blue1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue2_bullet_left
  {
    size_t item_size = sizeof(ros_message->blue2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lurk_mode
  {
    size_t item_size = sizeof(ros_message->lurk_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ICRABuffDebuffZoneAndLurkStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gary_msgs
size_t max_serialized_size_gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus(
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
  // member: f1_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f1_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f2_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f2_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f3_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f3_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f4_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f4_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f5_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f5_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f6_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f6_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: red1_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red2_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue1_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue2_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lurk_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus;
    is_plain =
      (
      offsetof(DataType, lurk_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ICRABuffDebuffZoneAndLurkStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ICRABuffDebuffZoneAndLurkStatus = {
  "gary_msgs::msg",
  "ICRABuffDebuffZoneAndLurkStatus",
  _ICRABuffDebuffZoneAndLurkStatus__cdr_serialize,
  _ICRABuffDebuffZoneAndLurkStatus__cdr_deserialize,
  _ICRABuffDebuffZoneAndLurkStatus__get_serialized_size,
  _ICRABuffDebuffZoneAndLurkStatus__max_serialized_size
};

static rosidl_message_type_support_t _ICRABuffDebuffZoneAndLurkStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ICRABuffDebuffZoneAndLurkStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gary_msgs, msg, ICRABuffDebuffZoneAndLurkStatus)() {
  return &_ICRABuffDebuffZoneAndLurkStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
