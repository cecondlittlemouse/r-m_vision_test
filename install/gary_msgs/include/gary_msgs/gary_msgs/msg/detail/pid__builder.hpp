// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__PID__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_PID_out
{
public:
  explicit Init_PID_out(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::PID out(::gary_msgs::msg::PID::_out_type arg)
  {
    msg_.out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_dout
{
public:
  explicit Init_PID_dout(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_out dout(::gary_msgs::msg::PID::_dout_type arg)
  {
    msg_.dout = std::move(arg);
    return Init_PID_out(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_iout
{
public:
  explicit Init_PID_iout(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_dout iout(::gary_msgs::msg::PID::_iout_type arg)
  {
    msg_.iout = std::move(arg);
    return Init_PID_dout(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_pout
{
public:
  explicit Init_PID_pout(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_iout pout(::gary_msgs::msg::PID::_pout_type arg)
  {
    msg_.pout = std::move(arg);
    return Init_PID_iout(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_last_error
{
public:
  explicit Init_PID_last_error(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_pout last_error(::gary_msgs::msg::PID::_last_error_type arg)
  {
    msg_.last_error = std::move(arg);
    return Init_PID_pout(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_error_sum
{
public:
  explicit Init_PID_error_sum(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_last_error error_sum(::gary_msgs::msg::PID::_error_sum_type arg)
  {
    msg_.error_sum = std::move(arg);
    return Init_PID_last_error(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_error
{
public:
  explicit Init_PID_error(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_error_sum error(::gary_msgs::msg::PID::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PID_error_sum(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_feedback
{
public:
  explicit Init_PID_feedback(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_error feedback(::gary_msgs::msg::PID::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_PID_error(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_set
{
public:
  explicit Init_PID_set(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_feedback set(::gary_msgs::msg::PID::_set_type arg)
  {
    msg_.set = std::move(arg);
    return Init_PID_feedback(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_max_iout
{
public:
  explicit Init_PID_max_iout(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_set max_iout(::gary_msgs::msg::PID::_max_iout_type arg)
  {
    msg_.max_iout = std::move(arg);
    return Init_PID_set(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_max_out
{
public:
  explicit Init_PID_max_out(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_max_iout max_out(::gary_msgs::msg::PID::_max_out_type arg)
  {
    msg_.max_out = std::move(arg);
    return Init_PID_max_iout(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_kd
{
public:
  explicit Init_PID_kd(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_max_out kd(::gary_msgs::msg::PID::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_PID_max_out(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_ki
{
public:
  explicit Init_PID_ki(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_kd ki(::gary_msgs::msg::PID::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PID_kd(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_kp
{
public:
  explicit Init_PID_kp(::gary_msgs::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_ki kp(::gary_msgs::msg::PID::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PID_ki(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

class Init_PID_header
{
public:
  Init_PID_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_kp header(::gary_msgs::msg::PID::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PID_kp(msg_);
  }

private:
  ::gary_msgs::msg::PID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::PID>()
{
  return gary_msgs::msg::builder::Init_PID_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__PID__BUILDER_HPP_
