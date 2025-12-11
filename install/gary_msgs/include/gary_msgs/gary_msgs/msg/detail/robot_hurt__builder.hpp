// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/robot_hurt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHurt_armor_id
{
public:
  explicit Init_RobotHurt_armor_id(::gary_msgs::msg::RobotHurt & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::RobotHurt armor_id(::gary_msgs::msg::RobotHurt::_armor_id_type arg)
  {
    msg_.armor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::RobotHurt msg_;
};

class Init_RobotHurt_hurt_type
{
public:
  explicit Init_RobotHurt_hurt_type(::gary_msgs::msg::RobotHurt & msg)
  : msg_(msg)
  {}
  Init_RobotHurt_armor_id hurt_type(::gary_msgs::msg::RobotHurt::_hurt_type_type arg)
  {
    msg_.hurt_type = std::move(arg);
    return Init_RobotHurt_armor_id(msg_);
  }

private:
  ::gary_msgs::msg::RobotHurt msg_;
};

class Init_RobotHurt_header
{
public:
  Init_RobotHurt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHurt_hurt_type header(::gary_msgs::msg::RobotHurt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHurt_hurt_type(msg_);
  }

private:
  ::gary_msgs::msg::RobotHurt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::RobotHurt>()
{
  return gary_msgs::msg::builder::Init_RobotHurt_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
