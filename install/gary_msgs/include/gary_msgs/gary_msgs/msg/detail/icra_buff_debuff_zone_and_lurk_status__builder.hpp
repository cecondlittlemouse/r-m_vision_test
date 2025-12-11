// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/ICRABuffDebuffZoneAndLurkStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/icra_buff_debuff_zone_and_lurk_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_ICRABuffDebuffZoneAndLurkStatus_lurk_mode
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_lurk_mode(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus lurk_mode(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_lurk_mode_type arg)
  {
    msg_.lurk_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_blue2_bullet_left
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_blue2_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_lurk_mode blue2_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_blue2_bullet_left_type arg)
  {
    msg_.blue2_bullet_left = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_lurk_mode(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_blue1_bullet_left
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_blue1_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_blue2_bullet_left blue1_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_blue1_bullet_left_type arg)
  {
    msg_.blue1_bullet_left = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_blue2_bullet_left(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_red2_bullet_left
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_red2_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_blue1_bullet_left red2_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_red2_bullet_left_type arg)
  {
    msg_.red2_bullet_left = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_blue1_bullet_left(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_red1_bullet_left
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_red1_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_red2_bullet_left red1_bullet_left(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_red1_bullet_left_type arg)
  {
    msg_.red1_bullet_left = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_red2_bullet_left(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_buff_debuff_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_red1_bullet_left f6_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f6_zone_buff_debuff_status_type arg)
  {
    msg_.f6_zone_buff_debuff_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_red1_bullet_left(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_buff_debuff_status f6_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f6_zone_status_type arg)
  {
    msg_.f6_zone_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_buff_debuff_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_buff_debuff_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_status f5_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f5_zone_buff_debuff_status_type arg)
  {
    msg_.f5_zone_buff_debuff_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f6_zone_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_buff_debuff_status f5_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f5_zone_status_type arg)
  {
    msg_.f5_zone_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_buff_debuff_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_buff_debuff_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_status f4_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f4_zone_buff_debuff_status_type arg)
  {
    msg_.f4_zone_buff_debuff_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f5_zone_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_buff_debuff_status f4_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f4_zone_status_type arg)
  {
    msg_.f4_zone_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_buff_debuff_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_buff_debuff_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_status f3_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f3_zone_buff_debuff_status_type arg)
  {
    msg_.f3_zone_buff_debuff_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f4_zone_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_buff_debuff_status f3_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f3_zone_status_type arg)
  {
    msg_.f3_zone_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_buff_debuff_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_buff_debuff_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_status f2_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f2_zone_buff_debuff_status_type arg)
  {
    msg_.f2_zone_buff_debuff_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f3_zone_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_buff_debuff_status f2_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f2_zone_status_type arg)
  {
    msg_.f2_zone_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_buff_debuff_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_buff_debuff_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_status f1_zone_buff_debuff_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f1_zone_buff_debuff_status_type arg)
  {
    msg_.f1_zone_buff_debuff_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f2_zone_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_status
{
public:
  explicit Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus & msg)
  : msg_(msg)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_buff_debuff_status f1_zone_status(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_f1_zone_status_type arg)
  {
    msg_.f1_zone_status = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_buff_debuff_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

class Init_ICRABuffDebuffZoneAndLurkStatus_header
{
public:
  Init_ICRABuffDebuffZoneAndLurkStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_status header(::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ICRABuffDebuffZoneAndLurkStatus_f1_zone_status(msg_);
  }

private:
  ::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus>()
{
  return gary_msgs::msg::builder::Init_ICRABuffDebuffZoneAndLurkStatus_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__BUILDER_HPP_
