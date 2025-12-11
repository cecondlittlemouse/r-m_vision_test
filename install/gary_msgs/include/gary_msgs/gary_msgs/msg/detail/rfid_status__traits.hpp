// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RFIDStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: base_buff_point
  {
    out << "base_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.base_buff_point, out);
    out << ", ";
  }

  // member: elevated_ground_buff_point
  {
    out << "elevated_ground_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.elevated_ground_buff_point, out);
    out << ", ";
  }

  // member: power_rune_buff_point
  {
    out << "power_rune_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.power_rune_buff_point, out);
    out << ", ";
  }

  // member: launch_ramp_buff_point
  {
    out << "launch_ramp_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.launch_ramp_buff_point, out);
    out << ", ";
  }

  // member: outpost_buff_point
  {
    out << "outpost_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.outpost_buff_point, out);
    out << ", ";
  }

  // member: hp_recovery_buff_point
  {
    out << "hp_recovery_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.hp_recovery_buff_point, out);
    out << ", ";
  }

  // member: engineer_robot_revival_card
  {
    out << "engineer_robot_revival_card: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_robot_revival_card, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RFIDStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: base_buff_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.base_buff_point, out);
    out << "\n";
  }

  // member: elevated_ground_buff_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevated_ground_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.elevated_ground_buff_point, out);
    out << "\n";
  }

  // member: power_rune_buff_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_rune_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.power_rune_buff_point, out);
    out << "\n";
  }

  // member: launch_ramp_buff_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "launch_ramp_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.launch_ramp_buff_point, out);
    out << "\n";
  }

  // member: outpost_buff_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outpost_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.outpost_buff_point, out);
    out << "\n";
  }

  // member: hp_recovery_buff_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hp_recovery_buff_point: ";
    rosidl_generator_traits::value_to_yaml(msg.hp_recovery_buff_point, out);
    out << "\n";
  }

  // member: engineer_robot_revival_card
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_robot_revival_card: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_robot_revival_card, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RFIDStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gary_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gary_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gary_msgs::msg::RFIDStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::RFIDStatus & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::RFIDStatus>()
{
  return "gary_msgs::msg::RFIDStatus";
}

template<>
inline const char * name<gary_msgs::msg::RFIDStatus>()
{
  return "gary_msgs/msg/RFIDStatus";
}

template<>
struct has_fixed_size<gary_msgs::msg::RFIDStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::RFIDStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::RFIDStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_
