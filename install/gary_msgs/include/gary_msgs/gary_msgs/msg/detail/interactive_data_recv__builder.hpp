// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/InteractiveDataRecv.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/interactive_data_recv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveDataRecv_data
{
public:
  explicit Init_InteractiveDataRecv_data(::gary_msgs::msg::InteractiveDataRecv & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::InteractiveDataRecv data(::gary_msgs::msg::InteractiveDataRecv::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataRecv msg_;
};

class Init_InteractiveDataRecv_data_length
{
public:
  explicit Init_InteractiveDataRecv_data_length(::gary_msgs::msg::InteractiveDataRecv & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataRecv_data data_length(::gary_msgs::msg::InteractiveDataRecv::_data_length_type arg)
  {
    msg_.data_length = std::move(arg);
    return Init_InteractiveDataRecv_data(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataRecv msg_;
};

class Init_InteractiveDataRecv_receiver_id
{
public:
  explicit Init_InteractiveDataRecv_receiver_id(::gary_msgs::msg::InteractiveDataRecv & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataRecv_data_length receiver_id(::gary_msgs::msg::InteractiveDataRecv::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_InteractiveDataRecv_data_length(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataRecv msg_;
};

class Init_InteractiveDataRecv_sender_id
{
public:
  explicit Init_InteractiveDataRecv_sender_id(::gary_msgs::msg::InteractiveDataRecv & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataRecv_receiver_id sender_id(::gary_msgs::msg::InteractiveDataRecv::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_InteractiveDataRecv_receiver_id(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataRecv msg_;
};

class Init_InteractiveDataRecv_data_cmd_id
{
public:
  explicit Init_InteractiveDataRecv_data_cmd_id(::gary_msgs::msg::InteractiveDataRecv & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataRecv_sender_id data_cmd_id(::gary_msgs::msg::InteractiveDataRecv::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_InteractiveDataRecv_sender_id(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataRecv msg_;
};

class Init_InteractiveDataRecv_header
{
public:
  Init_InteractiveDataRecv_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveDataRecv_data_cmd_id header(::gary_msgs::msg::InteractiveDataRecv::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InteractiveDataRecv_data_cmd_id(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataRecv msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::InteractiveDataRecv>()
{
  return gary_msgs::msg::builder::Init_InteractiveDataRecv_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__BUILDER_HPP_
