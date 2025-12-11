// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/InteractiveDataSend.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_SEND__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_SEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/interactive_data_send__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_InteractiveDataSend_data
{
public:
  explicit Init_InteractiveDataSend_data(::gary_msgs::msg::InteractiveDataSend & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::InteractiveDataSend data(::gary_msgs::msg::InteractiveDataSend::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

class Init_InteractiveDataSend_data_length
{
public:
  explicit Init_InteractiveDataSend_data_length(::gary_msgs::msg::InteractiveDataSend & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataSend_data data_length(::gary_msgs::msg::InteractiveDataSend::_data_length_type arg)
  {
    msg_.data_length = std::move(arg);
    return Init_InteractiveDataSend_data(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

class Init_InteractiveDataSend_receiver_id
{
public:
  explicit Init_InteractiveDataSend_receiver_id(::gary_msgs::msg::InteractiveDataSend & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataSend_data_length receiver_id(::gary_msgs::msg::InteractiveDataSend::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_InteractiveDataSend_data_length(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

class Init_InteractiveDataSend_sender_id
{
public:
  explicit Init_InteractiveDataSend_sender_id(::gary_msgs::msg::InteractiveDataSend & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataSend_receiver_id sender_id(::gary_msgs::msg::InteractiveDataSend::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_InteractiveDataSend_receiver_id(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

class Init_InteractiveDataSend_data_cmd_id
{
public:
  explicit Init_InteractiveDataSend_data_cmd_id(::gary_msgs::msg::InteractiveDataSend & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataSend_sender_id data_cmd_id(::gary_msgs::msg::InteractiveDataSend::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_InteractiveDataSend_sender_id(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

class Init_InteractiveDataSend_valid_time
{
public:
  explicit Init_InteractiveDataSend_valid_time(::gary_msgs::msg::InteractiveDataSend & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataSend_data_cmd_id valid_time(::gary_msgs::msg::InteractiveDataSend::_valid_time_type arg)
  {
    msg_.valid_time = std::move(arg);
    return Init_InteractiveDataSend_data_cmd_id(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

class Init_InteractiveDataSend_priority
{
public:
  explicit Init_InteractiveDataSend_priority(::gary_msgs::msg::InteractiveDataSend & msg)
  : msg_(msg)
  {}
  Init_InteractiveDataSend_valid_time priority(::gary_msgs::msg::InteractiveDataSend::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_InteractiveDataSend_valid_time(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

class Init_InteractiveDataSend_header
{
public:
  Init_InteractiveDataSend_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InteractiveDataSend_priority header(::gary_msgs::msg::InteractiveDataSend::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InteractiveDataSend_priority(msg_);
  }

private:
  ::gary_msgs::msg::InteractiveDataSend msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::InteractiveDataSend>()
{
  return gary_msgs::msg::builder::Init_InteractiveDataSend_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_SEND__BUILDER_HPP_
