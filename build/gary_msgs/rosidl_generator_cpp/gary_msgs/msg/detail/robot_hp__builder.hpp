// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/RobotHP.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ROBOT_HP__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__ROBOT_HP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHP_blue_base_hp
{
public:
  explicit Init_RobotHP_blue_base_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::RobotHP blue_base_hp(::gary_msgs::msg::RobotHP::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_outpost_hp
{
public:
  explicit Init_RobotHP_blue_outpost_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_base_hp blue_outpost_hp(::gary_msgs::msg::RobotHP::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_RobotHP_blue_base_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_7_sentry_hp
{
public:
  explicit Init_RobotHP_blue_7_sentry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_outpost_hp blue_7_sentry_hp(::gary_msgs::msg::RobotHP::_blue_7_sentry_hp_type arg)
  {
    msg_.blue_7_sentry_hp = std::move(arg);
    return Init_RobotHP_blue_outpost_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_5_infantry_hp
{
public:
  explicit Init_RobotHP_blue_5_infantry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_7_sentry_hp blue_5_infantry_hp(::gary_msgs::msg::RobotHP::_blue_5_infantry_hp_type arg)
  {
    msg_.blue_5_infantry_hp = std::move(arg);
    return Init_RobotHP_blue_7_sentry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_4_infantry_hp
{
public:
  explicit Init_RobotHP_blue_4_infantry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_5_infantry_hp blue_4_infantry_hp(::gary_msgs::msg::RobotHP::_blue_4_infantry_hp_type arg)
  {
    msg_.blue_4_infantry_hp = std::move(arg);
    return Init_RobotHP_blue_5_infantry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_3_infantry_hp
{
public:
  explicit Init_RobotHP_blue_3_infantry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_4_infantry_hp blue_3_infantry_hp(::gary_msgs::msg::RobotHP::_blue_3_infantry_hp_type arg)
  {
    msg_.blue_3_infantry_hp = std::move(arg);
    return Init_RobotHP_blue_4_infantry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_2_engineer_hp
{
public:
  explicit Init_RobotHP_blue_2_engineer_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_3_infantry_hp blue_2_engineer_hp(::gary_msgs::msg::RobotHP::_blue_2_engineer_hp_type arg)
  {
    msg_.blue_2_engineer_hp = std::move(arg);
    return Init_RobotHP_blue_3_infantry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_blue_1_hero_hp
{
public:
  explicit Init_RobotHP_blue_1_hero_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_2_engineer_hp blue_1_hero_hp(::gary_msgs::msg::RobotHP::_blue_1_hero_hp_type arg)
  {
    msg_.blue_1_hero_hp = std::move(arg);
    return Init_RobotHP_blue_2_engineer_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_base_hp
{
public:
  explicit Init_RobotHP_red_base_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_blue_1_hero_hp red_base_hp(::gary_msgs::msg::RobotHP::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_RobotHP_blue_1_hero_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_outpost_hp
{
public:
  explicit Init_RobotHP_red_outpost_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_base_hp red_outpost_hp(::gary_msgs::msg::RobotHP::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_RobotHP_red_base_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_7_sentry_hp
{
public:
  explicit Init_RobotHP_red_7_sentry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_outpost_hp red_7_sentry_hp(::gary_msgs::msg::RobotHP::_red_7_sentry_hp_type arg)
  {
    msg_.red_7_sentry_hp = std::move(arg);
    return Init_RobotHP_red_outpost_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_5_infantry_hp
{
public:
  explicit Init_RobotHP_red_5_infantry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_7_sentry_hp red_5_infantry_hp(::gary_msgs::msg::RobotHP::_red_5_infantry_hp_type arg)
  {
    msg_.red_5_infantry_hp = std::move(arg);
    return Init_RobotHP_red_7_sentry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_4_infantry_hp
{
public:
  explicit Init_RobotHP_red_4_infantry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_5_infantry_hp red_4_infantry_hp(::gary_msgs::msg::RobotHP::_red_4_infantry_hp_type arg)
  {
    msg_.red_4_infantry_hp = std::move(arg);
    return Init_RobotHP_red_5_infantry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_3_infantry_hp
{
public:
  explicit Init_RobotHP_red_3_infantry_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_4_infantry_hp red_3_infantry_hp(::gary_msgs::msg::RobotHP::_red_3_infantry_hp_type arg)
  {
    msg_.red_3_infantry_hp = std::move(arg);
    return Init_RobotHP_red_4_infantry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_2_engineer_hp
{
public:
  explicit Init_RobotHP_red_2_engineer_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_3_infantry_hp red_2_engineer_hp(::gary_msgs::msg::RobotHP::_red_2_engineer_hp_type arg)
  {
    msg_.red_2_engineer_hp = std::move(arg);
    return Init_RobotHP_red_3_infantry_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_red_1_hero_hp
{
public:
  explicit Init_RobotHP_red_1_hero_hp(::gary_msgs::msg::RobotHP & msg)
  : msg_(msg)
  {}
  Init_RobotHP_red_2_engineer_hp red_1_hero_hp(::gary_msgs::msg::RobotHP::_red_1_hero_hp_type arg)
  {
    msg_.red_1_hero_hp = std::move(arg);
    return Init_RobotHP_red_2_engineer_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

class Init_RobotHP_header
{
public:
  Init_RobotHP_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHP_red_1_hero_hp header(::gary_msgs::msg::RobotHP::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHP_red_1_hero_hp(msg_);
  }

private:
  ::gary_msgs::msg::RobotHP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::RobotHP>()
{
  return gary_msgs::msg::builder::Init_RobotHP_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__ROBOT_HP__BUILDER_HPP_
