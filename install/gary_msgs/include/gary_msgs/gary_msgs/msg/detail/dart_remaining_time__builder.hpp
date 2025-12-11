// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/DartRemainingTime.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__DART_REMAINING_TIME__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__DART_REMAINING_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/dart_remaining_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_DartRemainingTime_dart_remaining_time
{
public:
  explicit Init_DartRemainingTime_dart_remaining_time(::gary_msgs::msg::DartRemainingTime & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::DartRemainingTime dart_remaining_time(::gary_msgs::msg::DartRemainingTime::_dart_remaining_time_type arg)
  {
    msg_.dart_remaining_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::DartRemainingTime msg_;
};

class Init_DartRemainingTime_header
{
public:
  Init_DartRemainingTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DartRemainingTime_dart_remaining_time header(::gary_msgs::msg::DartRemainingTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DartRemainingTime_dart_remaining_time(msg_);
  }

private:
  ::gary_msgs::msg::DartRemainingTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::DartRemainingTime>()
{
  return gary_msgs::msg::builder::Init_DartRemainingTime_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__DART_REMAINING_TIME__BUILDER_HPP_
