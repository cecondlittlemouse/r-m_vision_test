// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/PowerHeat.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__POWER_HEAT__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__POWER_HEAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/power_heat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerHeat & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: chassis_volt
  {
    out << "chassis_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_volt, out);
    out << ", ";
  }

  // member: chassis_current
  {
    out << "chassis_current: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_current, out);
    out << ", ";
  }

  // member: chassis_power
  {
    out << "chassis_power: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power, out);
    out << ", ";
  }

  // member: chassis_power_buffer
  {
    out << "chassis_power_buffer: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_buffer, out);
    out << ", ";
  }

  // member: shooter_17mm_id1_heat
  {
    out << "shooter_17mm_id1_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_heat, out);
    out << ", ";
  }

  // member: shooter_17mm_id2_heat
  {
    out << "shooter_17mm_id2_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_heat, out);
    out << ", ";
  }

  // member: shooter_42mm_id1_heat
  {
    out << "shooter_42mm_id1_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_heat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerHeat & msg,
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

  // member: chassis_volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_volt: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_volt, out);
    out << "\n";
  }

  // member: chassis_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_current: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_current, out);
    out << "\n";
  }

  // member: chassis_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_power: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power, out);
    out << "\n";
  }

  // member: chassis_power_buffer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_power_buffer: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_buffer, out);
    out << "\n";
  }

  // member: shooter_17mm_id1_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id1_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_heat, out);
    out << "\n";
  }

  // member: shooter_17mm_id2_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id2_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_heat, out);
    out << "\n";
  }

  // member: shooter_42mm_id1_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_42mm_id1_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_heat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerHeat & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::PowerHeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::PowerHeat & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::PowerHeat>()
{
  return "gary_msgs::msg::PowerHeat";
}

template<>
inline const char * name<gary_msgs::msg::PowerHeat>()
{
  return "gary_msgs/msg/PowerHeat";
}

template<>
struct has_fixed_size<gary_msgs::msg::PowerHeat>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::PowerHeat>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::PowerHeat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__POWER_HEAT__TRAITS_HPP_
