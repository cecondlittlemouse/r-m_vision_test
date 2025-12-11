// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/AerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/aerial_robot_energy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AerialRobotEnergy & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: attack_time
  {
    out << "attack_time: ";
    rosidl_generator_traits::value_to_yaml(msg.attack_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AerialRobotEnergy & msg,
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

  // member: attack_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attack_time: ";
    rosidl_generator_traits::value_to_yaml(msg.attack_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AerialRobotEnergy & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::AerialRobotEnergy & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::AerialRobotEnergy & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::AerialRobotEnergy>()
{
  return "gary_msgs::msg::AerialRobotEnergy";
}

template<>
inline const char * name<gary_msgs::msg::AerialRobotEnergy>()
{
  return "gary_msgs/msg/AerialRobotEnergy";
}

template<>
struct has_fixed_size<gary_msgs::msg::AerialRobotEnergy>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::AerialRobotEnergy>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::AerialRobotEnergy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__TRAITS_HPP_
