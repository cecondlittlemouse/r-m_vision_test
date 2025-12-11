// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/CustomController.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/custom_controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomController_data
{
public:
  explicit Init_CustomController_data(::gary_msgs::msg::CustomController & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::CustomController data(::gary_msgs::msg::CustomController::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::CustomController msg_;
};

class Init_CustomController_data_length
{
public:
  explicit Init_CustomController_data_length(::gary_msgs::msg::CustomController & msg)
  : msg_(msg)
  {}
  Init_CustomController_data data_length(::gary_msgs::msg::CustomController::_data_length_type arg)
  {
    msg_.data_length = std::move(arg);
    return Init_CustomController_data(msg_);
  }

private:
  ::gary_msgs::msg::CustomController msg_;
};

class Init_CustomController_header
{
public:
  Init_CustomController_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomController_data_length header(::gary_msgs::msg::CustomController::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CustomController_data_length(msg_);
  }

private:
  ::gary_msgs::msg::CustomController msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::CustomController>()
{
  return gary_msgs::msg::builder::Init_CustomController_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__BUILDER_HPP_
