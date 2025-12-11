// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_RefereeWarning_foul_robot_id
{
public:
  explicit Init_RefereeWarning_foul_robot_id(::gary_msgs::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::RefereeWarning foul_robot_id(::gary_msgs::msg::RefereeWarning::_foul_robot_id_type arg)
  {
    msg_.foul_robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_level
{
public:
  explicit Init_RefereeWarning_level(::gary_msgs::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  Init_RefereeWarning_foul_robot_id level(::gary_msgs::msg::RefereeWarning::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_RefereeWarning_foul_robot_id(msg_);
  }

private:
  ::gary_msgs::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_header
{
public:
  Init_RefereeWarning_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeWarning_level header(::gary_msgs::msg::RefereeWarning::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RefereeWarning_level(msg_);
  }

private:
  ::gary_msgs::msg::RefereeWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::RefereeWarning>()
{
  return gary_msgs::msg::builder::Init_RefereeWarning_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
