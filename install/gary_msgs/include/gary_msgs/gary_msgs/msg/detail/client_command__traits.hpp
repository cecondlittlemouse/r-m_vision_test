// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/ClientCommand.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__CLIENT_COMMAND__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__CLIENT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/client_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClientCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: target_position_x
  {
    out << "target_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_x, out);
    out << ", ";
  }

  // member: target_position_y
  {
    out << "target_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_y, out);
    out << ", ";
  }

  // member: target_position_z
  {
    out << "target_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_z, out);
    out << ", ";
  }

  // member: keyboard_key_pressed
  {
    out << "keyboard_key_pressed: ";
    rosidl_generator_traits::value_to_yaml(msg.keyboard_key_pressed, out);
    out << ", ";
  }

  // member: target_robot_id
  {
    out << "target_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_robot_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClientCommand & msg,
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

  // member: target_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_x, out);
    out << "\n";
  }

  // member: target_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_y, out);
    out << "\n";
  }

  // member: target_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_z, out);
    out << "\n";
  }

  // member: keyboard_key_pressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keyboard_key_pressed: ";
    rosidl_generator_traits::value_to_yaml(msg.keyboard_key_pressed, out);
    out << "\n";
  }

  // member: target_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_robot_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClientCommand & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::ClientCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::ClientCommand & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::ClientCommand>()
{
  return "gary_msgs::msg::ClientCommand";
}

template<>
inline const char * name<gary_msgs::msg::ClientCommand>()
{
  return "gary_msgs/msg/ClientCommand";
}

template<>
struct has_fixed_size<gary_msgs::msg::ClientCommand>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::ClientCommand>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::ClientCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__CLIENT_COMMAND__TRAITS_HPP_
