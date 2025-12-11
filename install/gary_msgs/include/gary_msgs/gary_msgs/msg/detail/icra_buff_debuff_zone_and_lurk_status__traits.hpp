// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/ICRABuffDebuffZoneAndLurkStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/icra_buff_debuff_zone_and_lurk_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ICRABuffDebuffZoneAndLurkStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: f1_zone_status
  {
    out << "f1_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_status, out);
    out << ", ";
  }

  // member: f1_zone_buff_debuff_status
  {
    out << "f1_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f2_zone_status
  {
    out << "f2_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_status, out);
    out << ", ";
  }

  // member: f2_zone_buff_debuff_status
  {
    out << "f2_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f3_zone_status
  {
    out << "f3_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_status, out);
    out << ", ";
  }

  // member: f3_zone_buff_debuff_status
  {
    out << "f3_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f4_zone_status
  {
    out << "f4_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_status, out);
    out << ", ";
  }

  // member: f4_zone_buff_debuff_status
  {
    out << "f4_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f5_zone_status
  {
    out << "f5_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_status, out);
    out << ", ";
  }

  // member: f5_zone_buff_debuff_status
  {
    out << "f5_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f6_zone_status
  {
    out << "f6_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_status, out);
    out << ", ";
  }

  // member: f6_zone_buff_debuff_status
  {
    out << "f6_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: red1_bullet_left
  {
    out << "red1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red1_bullet_left, out);
    out << ", ";
  }

  // member: red2_bullet_left
  {
    out << "red2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red2_bullet_left, out);
    out << ", ";
  }

  // member: blue1_bullet_left
  {
    out << "blue1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue1_bullet_left, out);
    out << ", ";
  }

  // member: blue2_bullet_left
  {
    out << "blue2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue2_bullet_left, out);
    out << ", ";
  }

  // member: lurk_mode
  {
    out << "lurk_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.lurk_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ICRABuffDebuffZoneAndLurkStatus & msg,
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

  // member: f1_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_status, out);
    out << "\n";
  }

  // member: f1_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f2_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_status, out);
    out << "\n";
  }

  // member: f2_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f3_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_status, out);
    out << "\n";
  }

  // member: f3_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f4_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f4_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_status, out);
    out << "\n";
  }

  // member: f4_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f4_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f5_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f5_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_status, out);
    out << "\n";
  }

  // member: f5_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f5_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f6_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f6_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_status, out);
    out << "\n";
  }

  // member: f6_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f6_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: red1_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red1_bullet_left, out);
    out << "\n";
  }

  // member: red2_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red2_bullet_left, out);
    out << "\n";
  }

  // member: blue1_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue1_bullet_left, out);
    out << "\n";
  }

  // member: blue2_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue2_bullet_left, out);
    out << "\n";
  }

  // member: lurk_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lurk_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.lurk_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ICRABuffDebuffZoneAndLurkStatus & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus>()
{
  return "gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus";
}

template<>
inline const char * name<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus>()
{
  return "gary_msgs/msg/ICRABuffDebuffZoneAndLurkStatus";
}

template<>
struct has_fixed_size<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__TRAITS_HPP_
