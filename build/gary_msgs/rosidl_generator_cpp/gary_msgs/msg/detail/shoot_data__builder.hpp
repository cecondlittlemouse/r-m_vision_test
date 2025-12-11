// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_ShootData_bullet_speed
{
public:
  explicit Init_ShootData_bullet_speed(::gary_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::ShootData bullet_speed(::gary_msgs::msg::ShootData::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::ShootData msg_;
};

class Init_ShootData_bullet_freq
{
public:
  explicit Init_ShootData_bullet_freq(::gary_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_speed bullet_freq(::gary_msgs::msg::ShootData::_bullet_freq_type arg)
  {
    msg_.bullet_freq = std::move(arg);
    return Init_ShootData_bullet_speed(msg_);
  }

private:
  ::gary_msgs::msg::ShootData msg_;
};

class Init_ShootData_shooter_id
{
public:
  explicit Init_ShootData_shooter_id(::gary_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_freq shooter_id(::gary_msgs::msg::ShootData::_shooter_id_type arg)
  {
    msg_.shooter_id = std::move(arg);
    return Init_ShootData_bullet_freq(msg_);
  }

private:
  ::gary_msgs::msg::ShootData msg_;
};

class Init_ShootData_bullet_type
{
public:
  explicit Init_ShootData_bullet_type(::gary_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_shooter_id bullet_type(::gary_msgs::msg::ShootData::_bullet_type_type arg)
  {
    msg_.bullet_type = std::move(arg);
    return Init_ShootData_shooter_id(msg_);
  }

private:
  ::gary_msgs::msg::ShootData msg_;
};

class Init_ShootData_header
{
public:
  Init_ShootData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootData_bullet_type header(::gary_msgs::msg::ShootData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ShootData_bullet_type(msg_);
  }

private:
  ::gary_msgs::msg::ShootData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::ShootData>()
{
  return gary_msgs::msg::builder::Init_ShootData_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
