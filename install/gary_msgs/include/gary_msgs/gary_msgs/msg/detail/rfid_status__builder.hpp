// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_RFIDStatus_engineer_robot_revival_card
{
public:
  explicit Init_RFIDStatus_engineer_robot_revival_card(::gary_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::RFIDStatus engineer_robot_revival_card(::gary_msgs::msg::RFIDStatus::_engineer_robot_revival_card_type arg)
  {
    msg_.engineer_robot_revival_card = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_hp_recovery_buff_point
{
public:
  explicit Init_RFIDStatus_hp_recovery_buff_point(::gary_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  Init_RFIDStatus_engineer_robot_revival_card hp_recovery_buff_point(::gary_msgs::msg::RFIDStatus::_hp_recovery_buff_point_type arg)
  {
    msg_.hp_recovery_buff_point = std::move(arg);
    return Init_RFIDStatus_engineer_robot_revival_card(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_outpost_buff_point
{
public:
  explicit Init_RFIDStatus_outpost_buff_point(::gary_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  Init_RFIDStatus_hp_recovery_buff_point outpost_buff_point(::gary_msgs::msg::RFIDStatus::_outpost_buff_point_type arg)
  {
    msg_.outpost_buff_point = std::move(arg);
    return Init_RFIDStatus_hp_recovery_buff_point(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_launch_ramp_buff_point
{
public:
  explicit Init_RFIDStatus_launch_ramp_buff_point(::gary_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  Init_RFIDStatus_outpost_buff_point launch_ramp_buff_point(::gary_msgs::msg::RFIDStatus::_launch_ramp_buff_point_type arg)
  {
    msg_.launch_ramp_buff_point = std::move(arg);
    return Init_RFIDStatus_outpost_buff_point(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_power_rune_buff_point
{
public:
  explicit Init_RFIDStatus_power_rune_buff_point(::gary_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  Init_RFIDStatus_launch_ramp_buff_point power_rune_buff_point(::gary_msgs::msg::RFIDStatus::_power_rune_buff_point_type arg)
  {
    msg_.power_rune_buff_point = std::move(arg);
    return Init_RFIDStatus_launch_ramp_buff_point(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_elevated_ground_buff_point
{
public:
  explicit Init_RFIDStatus_elevated_ground_buff_point(::gary_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  Init_RFIDStatus_power_rune_buff_point elevated_ground_buff_point(::gary_msgs::msg::RFIDStatus::_elevated_ground_buff_point_type arg)
  {
    msg_.elevated_ground_buff_point = std::move(arg);
    return Init_RFIDStatus_power_rune_buff_point(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_base_buff_point
{
public:
  explicit Init_RFIDStatus_base_buff_point(::gary_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  Init_RFIDStatus_elevated_ground_buff_point base_buff_point(::gary_msgs::msg::RFIDStatus::_base_buff_point_type arg)
  {
    msg_.base_buff_point = std::move(arg);
    return Init_RFIDStatus_elevated_ground_buff_point(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_header
{
public:
  Init_RFIDStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RFIDStatus_base_buff_point header(::gary_msgs::msg::RFIDStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RFIDStatus_base_buff_point(msg_);
  }

private:
  ::gary_msgs::msg::RFIDStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::RFIDStatus>()
{
  return gary_msgs::msg::builder::Init_RFIDStatus_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
