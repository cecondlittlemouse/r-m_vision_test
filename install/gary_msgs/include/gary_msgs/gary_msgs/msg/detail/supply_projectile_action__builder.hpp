// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/supply_projectile_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_SupplyProjectileAction_supply_bullet_num
{
public:
  explicit Init_SupplyProjectileAction_supply_bullet_num(::gary_msgs::msg::SupplyProjectileAction & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::SupplyProjectileAction supply_bullet_num(::gary_msgs::msg::SupplyProjectileAction::_supply_bullet_num_type arg)
  {
    msg_.supply_bullet_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::SupplyProjectileAction msg_;
};

class Init_SupplyProjectileAction_supply_projectile_step
{
public:
  explicit Init_SupplyProjectileAction_supply_projectile_step(::gary_msgs::msg::SupplyProjectileAction & msg)
  : msg_(msg)
  {}
  Init_SupplyProjectileAction_supply_bullet_num supply_projectile_step(::gary_msgs::msg::SupplyProjectileAction::_supply_projectile_step_type arg)
  {
    msg_.supply_projectile_step = std::move(arg);
    return Init_SupplyProjectileAction_supply_bullet_num(msg_);
  }

private:
  ::gary_msgs::msg::SupplyProjectileAction msg_;
};

class Init_SupplyProjectileAction_supply_robot_id
{
public:
  explicit Init_SupplyProjectileAction_supply_robot_id(::gary_msgs::msg::SupplyProjectileAction & msg)
  : msg_(msg)
  {}
  Init_SupplyProjectileAction_supply_projectile_step supply_robot_id(::gary_msgs::msg::SupplyProjectileAction::_supply_robot_id_type arg)
  {
    msg_.supply_robot_id = std::move(arg);
    return Init_SupplyProjectileAction_supply_projectile_step(msg_);
  }

private:
  ::gary_msgs::msg::SupplyProjectileAction msg_;
};

class Init_SupplyProjectileAction_supply_projectile_id
{
public:
  explicit Init_SupplyProjectileAction_supply_projectile_id(::gary_msgs::msg::SupplyProjectileAction & msg)
  : msg_(msg)
  {}
  Init_SupplyProjectileAction_supply_robot_id supply_projectile_id(::gary_msgs::msg::SupplyProjectileAction::_supply_projectile_id_type arg)
  {
    msg_.supply_projectile_id = std::move(arg);
    return Init_SupplyProjectileAction_supply_robot_id(msg_);
  }

private:
  ::gary_msgs::msg::SupplyProjectileAction msg_;
};

class Init_SupplyProjectileAction_header
{
public:
  Init_SupplyProjectileAction_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SupplyProjectileAction_supply_projectile_id header(::gary_msgs::msg::SupplyProjectileAction::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SupplyProjectileAction_supply_projectile_id(msg_);
  }

private:
  ::gary_msgs::msg::SupplyProjectileAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::SupplyProjectileAction>()
{
  return gary_msgs::msg::builder::Init_SupplyProjectileAction_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_
