// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/PowerHeat.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__POWER_HEAT__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__POWER_HEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/power_heat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerHeat_shooter_42mm_id1_heat
{
public:
  explicit Init_PowerHeat_shooter_42mm_id1_heat(::gary_msgs::msg::PowerHeat & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::PowerHeat shooter_42mm_id1_heat(::gary_msgs::msg::PowerHeat::_shooter_42mm_id1_heat_type arg)
  {
    msg_.shooter_42mm_id1_heat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

class Init_PowerHeat_shooter_17mm_id2_heat
{
public:
  explicit Init_PowerHeat_shooter_17mm_id2_heat(::gary_msgs::msg::PowerHeat & msg)
  : msg_(msg)
  {}
  Init_PowerHeat_shooter_42mm_id1_heat shooter_17mm_id2_heat(::gary_msgs::msg::PowerHeat::_shooter_17mm_id2_heat_type arg)
  {
    msg_.shooter_17mm_id2_heat = std::move(arg);
    return Init_PowerHeat_shooter_42mm_id1_heat(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

class Init_PowerHeat_shooter_17mm_id1_heat
{
public:
  explicit Init_PowerHeat_shooter_17mm_id1_heat(::gary_msgs::msg::PowerHeat & msg)
  : msg_(msg)
  {}
  Init_PowerHeat_shooter_17mm_id2_heat shooter_17mm_id1_heat(::gary_msgs::msg::PowerHeat::_shooter_17mm_id1_heat_type arg)
  {
    msg_.shooter_17mm_id1_heat = std::move(arg);
    return Init_PowerHeat_shooter_17mm_id2_heat(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

class Init_PowerHeat_chassis_power_buffer
{
public:
  explicit Init_PowerHeat_chassis_power_buffer(::gary_msgs::msg::PowerHeat & msg)
  : msg_(msg)
  {}
  Init_PowerHeat_shooter_17mm_id1_heat chassis_power_buffer(::gary_msgs::msg::PowerHeat::_chassis_power_buffer_type arg)
  {
    msg_.chassis_power_buffer = std::move(arg);
    return Init_PowerHeat_shooter_17mm_id1_heat(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

class Init_PowerHeat_chassis_power
{
public:
  explicit Init_PowerHeat_chassis_power(::gary_msgs::msg::PowerHeat & msg)
  : msg_(msg)
  {}
  Init_PowerHeat_chassis_power_buffer chassis_power(::gary_msgs::msg::PowerHeat::_chassis_power_type arg)
  {
    msg_.chassis_power = std::move(arg);
    return Init_PowerHeat_chassis_power_buffer(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

class Init_PowerHeat_chassis_current
{
public:
  explicit Init_PowerHeat_chassis_current(::gary_msgs::msg::PowerHeat & msg)
  : msg_(msg)
  {}
  Init_PowerHeat_chassis_power chassis_current(::gary_msgs::msg::PowerHeat::_chassis_current_type arg)
  {
    msg_.chassis_current = std::move(arg);
    return Init_PowerHeat_chassis_power(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

class Init_PowerHeat_chassis_volt
{
public:
  explicit Init_PowerHeat_chassis_volt(::gary_msgs::msg::PowerHeat & msg)
  : msg_(msg)
  {}
  Init_PowerHeat_chassis_current chassis_volt(::gary_msgs::msg::PowerHeat::_chassis_volt_type arg)
  {
    msg_.chassis_volt = std::move(arg);
    return Init_PowerHeat_chassis_current(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

class Init_PowerHeat_header
{
public:
  Init_PowerHeat_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerHeat_chassis_volt header(::gary_msgs::msg::PowerHeat::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerHeat_chassis_volt(msg_);
  }

private:
  ::gary_msgs::msg::PowerHeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::PowerHeat>()
{
  return gary_msgs::msg::builder::Init_PowerHeat_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__POWER_HEAT__BUILDER_HPP_
