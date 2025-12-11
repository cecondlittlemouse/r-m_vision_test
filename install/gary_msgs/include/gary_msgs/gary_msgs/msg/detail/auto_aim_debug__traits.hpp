// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/AutoAimDebug.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/auto_aim_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AutoAimDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: plan_yaw
  {
    out << "plan_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_yaw, out);
    out << ", ";
  }

  // member: plan_pitch
  {
    out << "plan_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_pitch, out);
    out << ", ";
  }

  // member: yaw_diff
  {
    out << "yaw_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_diff, out);
    out << ", ";
  }

  // member: yaw_limit_1
  {
    out << "yaw_limit_1: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_limit_1, out);
    out << ", ";
  }

  // member: yaw_limit_2
  {
    out << "yaw_limit_2: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_limit_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutoAimDebug & msg,
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

  // member: plan_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_yaw, out);
    out << "\n";
  }

  // member: plan_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_pitch, out);
    out << "\n";
  }

  // member: yaw_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_diff, out);
    out << "\n";
  }

  // member: yaw_limit_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_limit_1: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_limit_1, out);
    out << "\n";
  }

  // member: yaw_limit_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_limit_2: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_limit_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutoAimDebug & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::AutoAimDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::AutoAimDebug & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::AutoAimDebug>()
{
  return "gary_msgs::msg::AutoAimDebug";
}

template<>
inline const char * name<gary_msgs::msg::AutoAimDebug>()
{
  return "gary_msgs/msg/AutoAimDebug";
}

template<>
struct has_fixed_size<gary_msgs::msg::AutoAimDebug>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::AutoAimDebug>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::AutoAimDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__TRAITS_HPP_
