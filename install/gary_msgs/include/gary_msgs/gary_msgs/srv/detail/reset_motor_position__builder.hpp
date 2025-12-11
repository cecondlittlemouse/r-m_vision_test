// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:srv/ResetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__BUILDER_HPP_
#define GARY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/srv/detail/reset_motor_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetMotorPosition_Request_motor_name
{
public:
  Init_ResetMotorPosition_Request_motor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gary_msgs::srv::ResetMotorPosition_Request motor_name(::gary_msgs::srv::ResetMotorPosition_Request::_motor_name_type arg)
  {
    msg_.motor_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::srv::ResetMotorPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::srv::ResetMotorPosition_Request>()
{
  return gary_msgs::srv::builder::Init_ResetMotorPosition_Request_motor_name();
}

}  // namespace gary_msgs


namespace gary_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetMotorPosition_Response_succ
{
public:
  Init_ResetMotorPosition_Response_succ()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gary_msgs::srv::ResetMotorPosition_Response succ(::gary_msgs::srv::ResetMotorPosition_Response::_succ_type arg)
  {
    msg_.succ = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::srv::ResetMotorPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::srv::ResetMotorPosition_Response>()
{
  return gary_msgs::srv::builder::Init_ResetMotorPosition_Response_succ();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__BUILDER_HPP_
