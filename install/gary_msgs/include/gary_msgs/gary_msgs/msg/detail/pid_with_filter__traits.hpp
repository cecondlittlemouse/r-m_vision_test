// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/PIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/pid_with_filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PIDWithFilter & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: ki
  {
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: p_filter_coefficient
  {
    out << "p_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.p_filter_coefficient, out);
    out << ", ";
  }

  // member: d_filter_coefficient
  {
    out << "d_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.d_filter_coefficient, out);
    out << ", ";
  }

  // member: max_out
  {
    out << "max_out: ";
    rosidl_generator_traits::value_to_yaml(msg.max_out, out);
    out << ", ";
  }

  // member: max_iout
  {
    out << "max_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iout, out);
    out << ", ";
  }

  // member: set
  {
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: error_sum
  {
    out << "error_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.error_sum, out);
    out << ", ";
  }

  // member: last_error
  {
    out << "last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error, out);
    out << ", ";
  }

  // member: pout
  {
    out << "pout: ";
    rosidl_generator_traits::value_to_yaml(msg.pout, out);
    out << ", ";
  }

  // member: iout
  {
    out << "iout: ";
    rosidl_generator_traits::value_to_yaml(msg.iout, out);
    out << ", ";
  }

  // member: dout
  {
    out << "dout: ";
    rosidl_generator_traits::value_to_yaml(msg.dout, out);
    out << ", ";
  }

  // member: out
  {
    out << "out: ";
    rosidl_generator_traits::value_to_yaml(msg.out, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PIDWithFilter & msg,
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

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: p_filter_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.p_filter_coefficient, out);
    out << "\n";
  }

  // member: d_filter_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.d_filter_coefficient, out);
    out << "\n";
  }

  // member: max_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_out: ";
    rosidl_generator_traits::value_to_yaml(msg.max_out, out);
    out << "\n";
  }

  // member: max_iout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iout, out);
    out << "\n";
  }

  // member: set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
    out << "\n";
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: error_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.error_sum, out);
    out << "\n";
  }

  // member: last_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.last_error, out);
    out << "\n";
  }

  // member: pout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pout: ";
    rosidl_generator_traits::value_to_yaml(msg.pout, out);
    out << "\n";
  }

  // member: iout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iout: ";
    rosidl_generator_traits::value_to_yaml(msg.iout, out);
    out << "\n";
  }

  // member: dout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dout: ";
    rosidl_generator_traits::value_to_yaml(msg.dout, out);
    out << "\n";
  }

  // member: out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "out: ";
    rosidl_generator_traits::value_to_yaml(msg.out, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDWithFilter & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::PIDWithFilter & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::PIDWithFilter & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::PIDWithFilter>()
{
  return "gary_msgs::msg::PIDWithFilter";
}

template<>
inline const char * name<gary_msgs::msg::PIDWithFilter>()
{
  return "gary_msgs/msg/PIDWithFilter";
}

template<>
struct has_fixed_size<gary_msgs::msg::PIDWithFilter>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gary_msgs::msg::PIDWithFilter>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gary_msgs::msg::PIDWithFilter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__TRAITS_HPP_
