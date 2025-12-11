// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gary_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/rfid_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gary_msgs/msg/detail/rfid_status__struct.hpp"

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
  const gary_msgs::msg::RFIDStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: base_buff_point
  cdr << (ros_message.base_buff_point ? true : false);
  // Member: elevated_ground_buff_point
  cdr << (ros_message.elevated_ground_buff_point ? true : false);
  // Member: power_rune_buff_point
  cdr << (ros_message.power_rune_buff_point ? true : false);
  // Member: launch_ramp_buff_point
  cdr << (ros_message.launch_ramp_buff_point ? true : false);
  // Member: outpost_buff_point
  cdr << (ros_message.outpost_buff_point ? true : false);
  // Member: hp_recovery_buff_point
  cdr << (ros_message.hp_recovery_buff_point ? true : false);
  // Member: engineer_robot_revival_card
  cdr << (ros_message.engineer_robot_revival_card ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gary_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gary_msgs::msg::RFIDStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: base_buff_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.base_buff_point = tmp ? true : false;
  }

  // Member: elevated_ground_buff_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.elevated_ground_buff_point = tmp ? true : false;
  }

  // Member: power_rune_buff_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_rune_buff_point = tmp ? true : false;
  }

  // Member: launch_ramp_buff_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.launch_ramp_buff_point = tmp ? true : false;
  }

  // Member: outpost_buff_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.outpost_buff_point = tmp ? true : false;
  }

  // Member: hp_recovery_buff_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hp_recovery_buff_point = tmp ? true : false;
  }

  // Member: engineer_robot_revival_card
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engineer_robot_revival_card = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gary_msgs
get_serialized_size(
  const gary_msgs::msg::RFIDStatus & ros_message,
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
  // Member: base_buff_point
  {
    size_t item_size = sizeof(ros_message.base_buff_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elevated_ground_buff_point
  {
    size_t item_size = sizeof(ros_message.elevated_ground_buff_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_rune_buff_point
  {
    size_t item_size = sizeof(ros_message.power_rune_buff_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: launch_ramp_buff_point
  {
    size_t item_size = sizeof(ros_message.launch_ramp_buff_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outpost_buff_point
  {
    size_t item_size = sizeof(ros_message.outpost_buff_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hp_recovery_buff_point
  {
    size_t item_size = sizeof(ros_message.hp_recovery_buff_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_robot_revival_card
  {
    size_t item_size = sizeof(ros_message.engineer_robot_revival_card);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gary_msgs
max_serialized_size_RFIDStatus(
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

  // Member: base_buff_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: elevated_ground_buff_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_rune_buff_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: launch_ramp_buff_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: outpost_buff_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hp_recovery_buff_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engineer_robot_revival_card
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
    using DataType = gary_msgs::msg::RFIDStatus;
    is_plain =
      (
      offsetof(DataType, engineer_robot_revival_card) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RFIDStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gary_msgs::msg::RFIDStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RFIDStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gary_msgs::msg::RFIDStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RFIDStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gary_msgs::msg::RFIDStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RFIDStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RFIDStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RFIDStatus__callbacks = {
  "gary_msgs::msg",
  "RFIDStatus",
  _RFIDStatus__cdr_serialize,
  _RFIDStatus__cdr_deserialize,
  _RFIDStatus__get_serialized_size,
  _RFIDStatus__max_serialized_size
};

static rosidl_message_type_support_t _RFIDStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RFIDStatus__callbacks,
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
get_message_type_support_handle<gary_msgs::msg::RFIDStatus>()
{
  return &gary_msgs::msg::typesupport_fastrtps_cpp::_RFIDStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gary_msgs, msg, RFIDStatus)() {
  return &gary_msgs::msg::typesupport_fastrtps_cpp::_RFIDStatus__handle;
}

#ifdef __cplusplus
}
#endif
