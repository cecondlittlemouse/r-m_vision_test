// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/dart_client_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_DartClientCmd_operate_launch_cmd_time
{
public:
  explicit Init_DartClientCmd_operate_launch_cmd_time(::gary_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::DartClientCmd operate_launch_cmd_time(::gary_msgs::msg::DartClientCmd::_operate_launch_cmd_time_type arg)
  {
    msg_.operate_launch_cmd_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_target_change_time
{
public:
  explicit Init_DartClientCmd_target_change_time(::gary_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  Init_DartClientCmd_operate_launch_cmd_time target_change_time(::gary_msgs::msg::DartClientCmd::_target_change_time_type arg)
  {
    msg_.target_change_time = std::move(arg);
    return Init_DartClientCmd_operate_launch_cmd_time(msg_);
  }

private:
  ::gary_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_attack_target
{
public:
  explicit Init_DartClientCmd_attack_target(::gary_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  Init_DartClientCmd_target_change_time attack_target(::gary_msgs::msg::DartClientCmd::_attack_target_type arg)
  {
    msg_.attack_target = std::move(arg);
    return Init_DartClientCmd_target_change_time(msg_);
  }

private:
  ::gary_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_launch_status
{
public:
  explicit Init_DartClientCmd_launch_status(::gary_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  Init_DartClientCmd_attack_target launch_status(::gary_msgs::msg::DartClientCmd::_launch_status_type arg)
  {
    msg_.launch_status = std::move(arg);
    return Init_DartClientCmd_attack_target(msg_);
  }

private:
  ::gary_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_header
{
public:
  Init_DartClientCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DartClientCmd_launch_status header(::gary_msgs::msg::DartClientCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DartClientCmd_launch_status(msg_);
  }

private:
  ::gary_msgs::msg::DartClientCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::DartClientCmd>()
{
  return gary_msgs::msg::builder::Init_DartClientCmd_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__BUILDER_HPP_
