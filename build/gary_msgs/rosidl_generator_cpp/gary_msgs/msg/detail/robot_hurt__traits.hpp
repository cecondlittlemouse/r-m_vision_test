// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ROBOT_HURT__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__ROBOT_HURT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/robot_hurt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotHurt & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hurt_type
  {
    out << "hurt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hurt_type, out);
    out << ", ";
  }

  // member: armor_id
  {
    out << "armor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotHurt & msg,
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

  // member: hurt_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hurt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hurt_type, out);
    out << "\n";
  }

  // member: armor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotHurt & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::RobotHurt & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::RobotHurt & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::RobotHurt>()
{
  return "gary_msgs::msg::RobotHurt";
}

template<>
inline const char * name<gary_msgs::msg::RobotHurt>()
{
  return "gary_msgs/msg/RobotHurt";
}

template<>
struct has_fixed_size<gary_msgs::msg::RobotHurt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::RobotHurt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::RobotHurt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__ROBOT_HURT__TRAITS_HPP_
