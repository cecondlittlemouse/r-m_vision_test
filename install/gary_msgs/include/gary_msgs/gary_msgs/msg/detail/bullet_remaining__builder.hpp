// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_BulletRemaining_remaining_coin_num
{
public:
  explicit Init_BulletRemaining_remaining_coin_num(::gary_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::BulletRemaining remaining_coin_num(::gary_msgs::msg::BulletRemaining::_remaining_coin_num_type arg)
  {
    msg_.remaining_coin_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_remaining_42mm_num
{
public:
  explicit Init_BulletRemaining_remaining_42mm_num(::gary_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_remaining_coin_num remaining_42mm_num(::gary_msgs::msg::BulletRemaining::_remaining_42mm_num_type arg)
  {
    msg_.remaining_42mm_num = std::move(arg);
    return Init_BulletRemaining_remaining_coin_num(msg_);
  }

private:
  ::gary_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_remaining_17mm_num
{
public:
  explicit Init_BulletRemaining_remaining_17mm_num(::gary_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_remaining_42mm_num remaining_17mm_num(::gary_msgs::msg::BulletRemaining::_remaining_17mm_num_type arg)
  {
    msg_.remaining_17mm_num = std::move(arg);
    return Init_BulletRemaining_remaining_42mm_num(msg_);
  }

private:
  ::gary_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_header
{
public:
  Init_BulletRemaining_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BulletRemaining_remaining_17mm_num header(::gary_msgs::msg::BulletRemaining::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BulletRemaining_remaining_17mm_num(msg_);
  }

private:
  ::gary_msgs::msg::BulletRemaining msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::BulletRemaining>()
{
  return gary_msgs::msg::builder::Init_BulletRemaining_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
