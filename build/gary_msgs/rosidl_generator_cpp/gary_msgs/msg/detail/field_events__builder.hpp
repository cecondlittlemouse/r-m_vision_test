// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/FieldEvents.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__FIELD_EVENTS__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__FIELD_EVENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/field_events__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_FieldEvents_outpost_alive
{
public:
  explicit Init_FieldEvents_outpost_alive(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::FieldEvents outpost_alive(::gary_msgs::msg::FieldEvents::_outpost_alive_type arg)
  {
    msg_.outpost_alive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_base_has_shield
{
public:
  explicit Init_FieldEvents_base_has_shield(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_outpost_alive base_has_shield(::gary_msgs::msg::FieldEvents::_base_has_shield_type arg)
  {
    msg_.base_has_shield = std::move(arg);
    return Init_FieldEvents_outpost_alive(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_r4b4_ground_occupation
{
public:
  explicit Init_FieldEvents_r4b4_ground_occupation(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_base_has_shield r4b4_ground_occupation(::gary_msgs::msg::FieldEvents::_r4b4_ground_occupation_type arg)
  {
    msg_.r4b4_ground_occupation = std::move(arg);
    return Init_FieldEvents_base_has_shield(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_r3b3_ground_occupation
{
public:
  explicit Init_FieldEvents_r3b3_ground_occupation(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_r4b4_ground_occupation r3b3_ground_occupation(::gary_msgs::msg::FieldEvents::_r3b3_ground_occupation_type arg)
  {
    msg_.r3b3_ground_occupation = std::move(arg);
    return Init_FieldEvents_r4b4_ground_occupation(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_r2b2_ground_occupation
{
public:
  explicit Init_FieldEvents_r2b2_ground_occupation(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_r3b3_ground_occupation r2b2_ground_occupation(::gary_msgs::msg::FieldEvents::_r2b2_ground_occupation_type arg)
  {
    msg_.r2b2_ground_occupation = std::move(arg);
    return Init_FieldEvents_r3b3_ground_occupation(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_big_power_rune_activation_status
{
public:
  explicit Init_FieldEvents_big_power_rune_activation_status(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_r2b2_ground_occupation big_power_rune_activation_status(::gary_msgs::msg::FieldEvents::_big_power_rune_activation_status_type arg)
  {
    msg_.big_power_rune_activation_status = std::move(arg);
    return Init_FieldEvents_r2b2_ground_occupation(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_small_power_rune_activation_status
{
public:
  explicit Init_FieldEvents_small_power_rune_activation_status(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_big_power_rune_activation_status small_power_rune_activation_status(::gary_msgs::msg::FieldEvents::_small_power_rune_activation_status_type arg)
  {
    msg_.small_power_rune_activation_status = std::move(arg);
    return Init_FieldEvents_big_power_rune_activation_status(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_power_rune_activation_point_occupation
{
public:
  explicit Init_FieldEvents_power_rune_activation_point_occupation(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_small_power_rune_activation_status power_rune_activation_point_occupation(::gary_msgs::msg::FieldEvents::_power_rune_activation_point_occupation_type arg)
  {
    msg_.power_rune_activation_point_occupation = std::move(arg);
    return Init_FieldEvents_small_power_rune_activation_status(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_supplier_3_occupation
{
public:
  explicit Init_FieldEvents_supplier_3_occupation(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_power_rune_activation_point_occupation supplier_3_occupation(::gary_msgs::msg::FieldEvents::_supplier_3_occupation_type arg)
  {
    msg_.supplier_3_occupation = std::move(arg);
    return Init_FieldEvents_power_rune_activation_point_occupation(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_supplier_2_occupation
{
public:
  explicit Init_FieldEvents_supplier_2_occupation(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_supplier_3_occupation supplier_2_occupation(::gary_msgs::msg::FieldEvents::_supplier_2_occupation_type arg)
  {
    msg_.supplier_2_occupation = std::move(arg);
    return Init_FieldEvents_supplier_3_occupation(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_supplier_1_occupation
{
public:
  explicit Init_FieldEvents_supplier_1_occupation(::gary_msgs::msg::FieldEvents & msg)
  : msg_(msg)
  {}
  Init_FieldEvents_supplier_2_occupation supplier_1_occupation(::gary_msgs::msg::FieldEvents::_supplier_1_occupation_type arg)
  {
    msg_.supplier_1_occupation = std::move(arg);
    return Init_FieldEvents_supplier_2_occupation(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

class Init_FieldEvents_header
{
public:
  Init_FieldEvents_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldEvents_supplier_1_occupation header(::gary_msgs::msg::FieldEvents::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FieldEvents_supplier_1_occupation(msg_);
  }

private:
  ::gary_msgs::msg::FieldEvents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::FieldEvents>()
{
  return gary_msgs::msg::builder::Init_FieldEvents_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__FIELD_EVENTS__BUILDER_HPP_
