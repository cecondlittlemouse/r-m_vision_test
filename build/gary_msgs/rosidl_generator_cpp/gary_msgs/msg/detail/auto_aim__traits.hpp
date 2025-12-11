// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AUTO_AIM__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__AUTO_AIM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/auto_aim__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AutoAIM & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: target_id
  {
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << ", ";
  }

  // member: target_distance
  {
    out << "target_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.target_distance, out);
    out << ", ";
  }

  // member: vision_mode
  {
    out << "vision_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vision_mode, out);
    out << ", ";
  }

  // member: shoot_command
  {
    out << "shoot_command: ";
    rosidl_generator_traits::value_to_yaml(msg.shoot_command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutoAIM & msg,
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

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << "\n";
  }

  // member: target_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.target_distance, out);
    out << "\n";
  }

  // member: vision_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.vision_mode, out);
    out << "\n";
  }

  // member: shoot_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoot_command: ";
    rosidl_generator_traits::value_to_yaml(msg.shoot_command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutoAIM & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::AutoAIM & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::AutoAIM & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::AutoAIM>()
{
  return "gary_msgs::msg::AutoAIM";
}

template<>
inline const char * name<gary_msgs::msg::AutoAIM>()
{
  return "gary_msgs/msg/AutoAIM";
}

template<>
struct has_fixed_size<gary_msgs::msg::AutoAIM>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::AutoAIM>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::AutoAIM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__AUTO_AIM__TRAITS_HPP_
