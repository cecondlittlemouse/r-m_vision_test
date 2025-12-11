// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:srv/VisionModeSwitch.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__TRAITS_HPP_
#define GARY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/srv/detail/vision_mode_switch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gary_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const VisionModeSwitch_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionModeSwitch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionModeSwitch_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gary_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gary_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gary_msgs::srv::VisionModeSwitch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::srv::VisionModeSwitch_Request & msg)
{
  return gary_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::srv::VisionModeSwitch_Request>()
{
  return "gary_msgs::srv::VisionModeSwitch_Request";
}

template<>
inline const char * name<gary_msgs::srv::VisionModeSwitch_Request>()
{
  return "gary_msgs/srv/VisionModeSwitch_Request";
}

template<>
struct has_fixed_size<gary_msgs::srv::VisionModeSwitch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gary_msgs::srv::VisionModeSwitch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gary_msgs::srv::VisionModeSwitch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gary_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const VisionModeSwitch_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: succ
  {
    out << "succ: ";
    rosidl_generator_traits::value_to_yaml(msg.succ, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionModeSwitch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: succ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "succ: ";
    rosidl_generator_traits::value_to_yaml(msg.succ, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionModeSwitch_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gary_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gary_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gary_msgs::srv::VisionModeSwitch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::srv::VisionModeSwitch_Response & msg)
{
  return gary_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::srv::VisionModeSwitch_Response>()
{
  return "gary_msgs::srv::VisionModeSwitch_Response";
}

template<>
inline const char * name<gary_msgs::srv::VisionModeSwitch_Response>()
{
  return "gary_msgs/srv/VisionModeSwitch_Response";
}

template<>
struct has_fixed_size<gary_msgs::srv::VisionModeSwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gary_msgs::srv::VisionModeSwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gary_msgs::srv::VisionModeSwitch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gary_msgs::srv::VisionModeSwitch>()
{
  return "gary_msgs::srv::VisionModeSwitch";
}

template<>
inline const char * name<gary_msgs::srv::VisionModeSwitch>()
{
  return "gary_msgs/srv/VisionModeSwitch";
}

template<>
struct has_fixed_size<gary_msgs::srv::VisionModeSwitch>
  : std::integral_constant<
    bool,
    has_fixed_size<gary_msgs::srv::VisionModeSwitch_Request>::value &&
    has_fixed_size<gary_msgs::srv::VisionModeSwitch_Response>::value
  >
{
};

template<>
struct has_bounded_size<gary_msgs::srv::VisionModeSwitch>
  : std::integral_constant<
    bool,
    has_bounded_size<gary_msgs::srv::VisionModeSwitch_Request>::value &&
    has_bounded_size<gary_msgs::srv::VisionModeSwitch_Response>::value
  >
{
};

template<>
struct is_service<gary_msgs::srv::VisionModeSwitch>
  : std::true_type
{
};

template<>
struct is_service_request<gary_msgs::srv::VisionModeSwitch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gary_msgs::srv::VisionModeSwitch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__TRAITS_HPP_
