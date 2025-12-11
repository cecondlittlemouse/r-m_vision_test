// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_GameStatus_sync_time_stamp
{
public:
  explicit Init_GameStatus_sync_time_stamp(::gary_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::GameStatus sync_time_stamp(::gary_msgs::msg::GameStatus::_sync_time_stamp_type arg)
  {
    msg_.sync_time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_stage_remain_time
{
public:
  explicit Init_GameStatus_stage_remain_time(::gary_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_sync_time_stamp stage_remain_time(::gary_msgs::msg::GameStatus::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GameStatus_sync_time_stamp(msg_);
  }

private:
  ::gary_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_progress
{
public:
  explicit Init_GameStatus_game_progress(::gary_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stage_remain_time game_progress(::gary_msgs::msg::GameStatus::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameStatus_stage_remain_time(msg_);
  }

private:
  ::gary_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_type
{
public:
  explicit Init_GameStatus_game_type(::gary_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_game_progress game_type(::gary_msgs::msg::GameStatus::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_GameStatus_game_progress(msg_);
  }

private:
  ::gary_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_header
{
public:
  Init_GameStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStatus_game_type header(::gary_msgs::msg::GameStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameStatus_game_type(msg_);
  }

private:
  ::gary_msgs::msg::GameStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::GameStatus>()
{
  return gary_msgs::msg::builder::Init_GameStatus_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
