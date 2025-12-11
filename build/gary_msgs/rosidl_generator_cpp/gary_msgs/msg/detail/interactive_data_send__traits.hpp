// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gary_msgs:msg/InteractiveDataSend.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_SEND__TRAITS_HPP_
#define GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_SEND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gary_msgs/msg/detail/interactive_data_send__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gary_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InteractiveDataSend & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: valid_time
  {
    out << "valid_time: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_time, out);
    out << ", ";
  }

  // member: data_cmd_id
  {
    out << "data_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_cmd_id, out);
    out << ", ";
  }

  // member: sender_id
  {
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << ", ";
  }

  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: data_length
  {
    out << "data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.data_length, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InteractiveDataSend & msg,
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

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: valid_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_time: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_time, out);
    out << "\n";
  }

  // member: data_cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_cmd_id, out);
    out << "\n";
  }

  // member: sender_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << "\n";
  }

  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: data_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.data_length, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InteractiveDataSend & msg, bool use_flow_style = false)
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
  const gary_msgs::msg::InteractiveDataSend & msg,
  std::ostream & out, size_t indentation = 0)
{
  gary_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gary_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gary_msgs::msg::InteractiveDataSend & msg)
{
  return gary_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gary_msgs::msg::InteractiveDataSend>()
{
  return "gary_msgs::msg::InteractiveDataSend";
}

template<>
inline const char * name<gary_msgs::msg::InteractiveDataSend>()
{
  return "gary_msgs/msg/InteractiveDataSend";
}

template<>
struct has_fixed_size<gary_msgs::msg::InteractiveDataSend>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gary_msgs::msg::InteractiveDataSend>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gary_msgs::msg::InteractiveDataSend>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_SEND__TRAITS_HPP_
