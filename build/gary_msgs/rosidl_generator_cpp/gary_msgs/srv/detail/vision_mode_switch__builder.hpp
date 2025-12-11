// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:srv/VisionModeSwitch.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__BUILDER_HPP_
#define GARY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/srv/detail/vision_mode_switch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace srv
{

namespace builder
{

class Init_VisionModeSwitch_Request_mode
{
public:
  Init_VisionModeSwitch_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gary_msgs::srv::VisionModeSwitch_Request mode(::gary_msgs::srv::VisionModeSwitch_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::srv::VisionModeSwitch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::srv::VisionModeSwitch_Request>()
{
  return gary_msgs::srv::builder::Init_VisionModeSwitch_Request_mode();
}

}  // namespace gary_msgs


namespace gary_msgs
{

namespace srv
{

namespace builder
{

class Init_VisionModeSwitch_Response_succ
{
public:
  Init_VisionModeSwitch_Response_succ()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gary_msgs::srv::VisionModeSwitch_Response succ(::gary_msgs::srv::VisionModeSwitch_Response::_succ_type arg)
  {
    msg_.succ = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::srv::VisionModeSwitch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::srv::VisionModeSwitch_Response>()
{
  return gary_msgs::srv::builder::Init_VisionModeSwitch_Response_succ();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__BUILDER_HPP_
