// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/AutoAimDebug.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/auto_aim_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoAimDebug_yaw_limit_2
{
public:
  explicit Init_AutoAimDebug_yaw_limit_2(::gary_msgs::msg::AutoAimDebug & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::AutoAimDebug yaw_limit_2(::gary_msgs::msg::AutoAimDebug::_yaw_limit_2_type arg)
  {
    msg_.yaw_limit_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::AutoAimDebug msg_;
};

class Init_AutoAimDebug_yaw_limit_1
{
public:
  explicit Init_AutoAimDebug_yaw_limit_1(::gary_msgs::msg::AutoAimDebug & msg)
  : msg_(msg)
  {}
  Init_AutoAimDebug_yaw_limit_2 yaw_limit_1(::gary_msgs::msg::AutoAimDebug::_yaw_limit_1_type arg)
  {
    msg_.yaw_limit_1 = std::move(arg);
    return Init_AutoAimDebug_yaw_limit_2(msg_);
  }

private:
  ::gary_msgs::msg::AutoAimDebug msg_;
};

class Init_AutoAimDebug_yaw_diff
{
public:
  explicit Init_AutoAimDebug_yaw_diff(::gary_msgs::msg::AutoAimDebug & msg)
  : msg_(msg)
  {}
  Init_AutoAimDebug_yaw_limit_1 yaw_diff(::gary_msgs::msg::AutoAimDebug::_yaw_diff_type arg)
  {
    msg_.yaw_diff = std::move(arg);
    return Init_AutoAimDebug_yaw_limit_1(msg_);
  }

private:
  ::gary_msgs::msg::AutoAimDebug msg_;
};

class Init_AutoAimDebug_plan_pitch
{
public:
  explicit Init_AutoAimDebug_plan_pitch(::gary_msgs::msg::AutoAimDebug & msg)
  : msg_(msg)
  {}
  Init_AutoAimDebug_yaw_diff plan_pitch(::gary_msgs::msg::AutoAimDebug::_plan_pitch_type arg)
  {
    msg_.plan_pitch = std::move(arg);
    return Init_AutoAimDebug_yaw_diff(msg_);
  }

private:
  ::gary_msgs::msg::AutoAimDebug msg_;
};

class Init_AutoAimDebug_plan_yaw
{
public:
  explicit Init_AutoAimDebug_plan_yaw(::gary_msgs::msg::AutoAimDebug & msg)
  : msg_(msg)
  {}
  Init_AutoAimDebug_plan_pitch plan_yaw(::gary_msgs::msg::AutoAimDebug::_plan_yaw_type arg)
  {
    msg_.plan_yaw = std::move(arg);
    return Init_AutoAimDebug_plan_pitch(msg_);
  }

private:
  ::gary_msgs::msg::AutoAimDebug msg_;
};

class Init_AutoAimDebug_header
{
public:
  Init_AutoAimDebug_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoAimDebug_plan_yaw header(::gary_msgs::msg::AutoAimDebug::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AutoAimDebug_plan_yaw(msg_);
  }

private:
  ::gary_msgs::msg::AutoAimDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::AutoAimDebug>()
{
  return gary_msgs::msg::builder::Init_AutoAimDebug_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__BUILDER_HPP_
