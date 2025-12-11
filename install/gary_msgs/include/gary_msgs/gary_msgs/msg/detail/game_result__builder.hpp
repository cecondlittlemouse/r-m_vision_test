// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/game_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_GameResult_winner
{
public:
  explicit Init_GameResult_winner(::gary_msgs::msg::GameResult & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::GameResult winner(::gary_msgs::msg::GameResult::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::GameResult msg_;
};

class Init_GameResult_header
{
public:
  Init_GameResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameResult_winner header(::gary_msgs::msg::GameResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameResult_winner(msg_);
  }

private:
  ::gary_msgs::msg::GameResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::GameResult>()
{
  return gary_msgs::msg::builder::Init_GameResult_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
