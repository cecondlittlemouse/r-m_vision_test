// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/AerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/aerial_robot_energy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_AerialRobotEnergy_attack_time
{
public:
  explicit Init_AerialRobotEnergy_attack_time(::gary_msgs::msg::AerialRobotEnergy & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::AerialRobotEnergy attack_time(::gary_msgs::msg::AerialRobotEnergy::_attack_time_type arg)
  {
    msg_.attack_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::AerialRobotEnergy msg_;
};

class Init_AerialRobotEnergy_header
{
public:
  Init_AerialRobotEnergy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AerialRobotEnergy_attack_time header(::gary_msgs::msg::AerialRobotEnergy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AerialRobotEnergy_attack_time(msg_);
  }

private:
  ::gary_msgs::msg::AerialRobotEnergy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::AerialRobotEnergy>()
{
  return gary_msgs::msg::builder::Init_AerialRobotEnergy_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__BUILDER_HPP_
