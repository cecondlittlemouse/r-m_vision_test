// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gary_msgs:msg/ICRABuffDebuffZoneAndLurkStatus.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/icra_buff_debuff_zone_and_lurk_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gary_msgs/msg/detail/icra_buff_debuff_zone_and_lurk_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace gary_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gary_msgs
cdr_serialize(
  const gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: f1_zone_status
  cdr << (ros_message.f1_zone_status ? true : false);
  // Member: f1_zone_buff_debuff_status
  cdr << ros_message.f1_zone_buff_debuff_status;
  // Member: f2_zone_status
  cdr << (ros_message.f2_zone_status ? true : false);
  // Member: f2_zone_buff_debuff_status
  cdr << ros_message.f2_zone_buff_debuff_status;
  // Member: f3_zone_status
  cdr << (ros_message.f3_zone_status ? true : false);
  // Member: f3_zone_buff_debuff_status
  cdr << ros_message.f3_zone_buff_debuff_status;
  // Member: f4_zone_status
  cdr << (ros_message.f4_zone_status ? true : false);
  // Member: f4_zone_buff_debuff_status
  cdr << ros_message.f4_zone_buff_debuff_status;
  // Member: f5_zone_status
  cdr << (ros_message.f5_zone_status ? true : false);
  // Member: f5_zone_buff_debuff_status
  cdr << ros_message.f5_zone_buff_debuff_status;
  // Member: f6_zone_status
  cdr << (ros_message.f6_zone_status ? true : false);
  // Member: f6_zone_buff_debuff_status
  cdr << ros_message.f6_zone_buff_debuff_status;
  // Member: red1_bullet_left
  cdr << ros_message.red1_bullet_left;
  // Member: red2_bullet_left
  cdr << ros_message.red2_bullet_left;
  // Member: blue1_bullet_left
  cdr << ros_message.blue1_bullet_left;
  // Member: blue2_bullet_left
  cdr << ros_message.blue2_bullet_left;
  // Member: lurk_mode
  cdr << ros_message.lurk_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gary_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: f1_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.f1_zone_status = tmp ? true : false;
  }

  // Member: f1_zone_buff_debuff_status
  cdr >> ros_message.f1_zone_buff_debuff_status;

  // Member: f2_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.f2_zone_status = tmp ? true : false;
  }

  // Member: f2_zone_buff_debuff_status
  cdr >> ros_message.f2_zone_buff_debuff_status;

  // Member: f3_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.f3_zone_status = tmp ? true : false;
  }

  // Member: f3_zone_buff_debuff_status
  cdr >> ros_message.f3_zone_buff_debuff_status;

  // Member: f4_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.f4_zone_status = tmp ? true : false;
  }

  // Member: f4_zone_buff_debuff_status
  cdr >> ros_message.f4_zone_buff_debuff_status;

  // Member: f5_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.f5_zone_status = tmp ? true : false;
  }

  // Member: f5_zone_buff_debuff_status
  cdr >> ros_message.f5_zone_buff_debuff_status;

  // Member: f6_zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.f6_zone_status = tmp ? true : false;
  }

  // Member: f6_zone_buff_debuff_status
  cdr >> ros_message.f6_zone_buff_debuff_status;

  // Member: red1_bullet_left
  cdr >> ros_message.red1_bullet_left;

  // Member: red2_bullet_left
  cdr >> ros_message.red2_bullet_left;

  // Member: blue1_bullet_left
  cdr >> ros_message.blue1_bullet_left;

  // Member: blue2_bullet_left
  cdr >> ros_message.blue2_bullet_left;

  // Member: lurk_mode
  cdr >> ros_message.lurk_mode;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gary_msgs
get_serialized_size(
  const gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: f1_zone_status
  {
    size_t item_size = sizeof(ros_message.f1_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f1_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message.f1_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f2_zone_status
  {
    size_t item_size = sizeof(ros_message.f2_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f2_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message.f2_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f3_zone_status
  {
    size_t item_size = sizeof(ros_message.f3_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f3_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message.f3_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f4_zone_status
  {
    size_t item_size = sizeof(ros_message.f4_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f4_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message.f4_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f5_zone_status
  {
    size_t item_size = sizeof(ros_message.f5_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f5_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message.f5_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f6_zone_status
  {
    size_t item_size = sizeof(ros_message.f6_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f6_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message.f6_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red1_bullet_left
  {
    size_t item_size = sizeof(ros_message.red1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red2_bullet_left
  {
    size_t item_size = sizeof(ros_message.red2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue1_bullet_left
  {
    size_t item_size = sizeof(ros_message.blue1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue2_bullet_left
  {
    size_t item_size = sizeof(ros_message.blue2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lurk_mode
  {
    size_t item_size = sizeof(ros_message.lurk_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gary_msgs
max_serialized_size_ICRABuffDebuffZoneAndLurkStatus(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: f1_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f1_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f2_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f2_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f3_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f3_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f4_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f4_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f5_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f5_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f6_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f6_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: red1_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red2_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue1_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue2_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lurk_mode
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
    using DataType = gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus;
    is_plain =
      (
      offsetof(DataType, lurk_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ICRABuffDebuffZoneAndLurkStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ICRABuffDebuffZoneAndLurkStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ICRABuffDebuffZoneAndLurkStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ICRABuffDebuffZoneAndLurkStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ICRABuffDebuffZoneAndLurkStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ICRABuffDebuffZoneAndLurkStatus__callbacks = {
  "gary_msgs::msg",
  "ICRABuffDebuffZoneAndLurkStatus",
  _ICRABuffDebuffZoneAndLurkStatus__cdr_serialize,
  _ICRABuffDebuffZoneAndLurkStatus__cdr_deserialize,
  _ICRABuffDebuffZoneAndLurkStatus__get_serialized_size,
  _ICRABuffDebuffZoneAndLurkStatus__max_serialized_size
};

static rosidl_message_type_support_t _ICRABuffDebuffZoneAndLurkStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ICRABuffDebuffZoneAndLurkStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gary_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gary_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus>()
{
  return &gary_msgs::msg::typesupport_fastrtps_cpp::_ICRABuffDebuffZoneAndLurkStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gary_msgs, msg, ICRABuffDebuffZoneAndLurkStatus)() {
  return &gary_msgs::msg::typesupport_fastrtps_cpp::_ICRABuffDebuffZoneAndLurkStatus__handle;
}

#ifdef __cplusplus
}
#endif
