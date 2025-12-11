// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/PIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/pid_with_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_PIDWithFilter_out
{
public:
  explicit Init_PIDWithFilter_out(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::PIDWithFilter out(::gary_msgs::msg::PIDWithFilter::_out_type arg)
  {
    msg_.out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_dout
{
public:
  explicit Init_PIDWithFilter_dout(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_out dout(::gary_msgs::msg::PIDWithFilter::_dout_type arg)
  {
    msg_.dout = std::move(arg);
    return Init_PIDWithFilter_out(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_iout
{
public:
  explicit Init_PIDWithFilter_iout(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_dout iout(::gary_msgs::msg::PIDWithFilter::_iout_type arg)
  {
    msg_.iout = std::move(arg);
    return Init_PIDWithFilter_dout(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_pout
{
public:
  explicit Init_PIDWithFilter_pout(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_iout pout(::gary_msgs::msg::PIDWithFilter::_pout_type arg)
  {
    msg_.pout = std::move(arg);
    return Init_PIDWithFilter_iout(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_last_error
{
public:
  explicit Init_PIDWithFilter_last_error(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_pout last_error(::gary_msgs::msg::PIDWithFilter::_last_error_type arg)
  {
    msg_.last_error = std::move(arg);
    return Init_PIDWithFilter_pout(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_error_sum
{
public:
  explicit Init_PIDWithFilter_error_sum(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_last_error error_sum(::gary_msgs::msg::PIDWithFilter::_error_sum_type arg)
  {
    msg_.error_sum = std::move(arg);
    return Init_PIDWithFilter_last_error(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_error
{
public:
  explicit Init_PIDWithFilter_error(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_error_sum error(::gary_msgs::msg::PIDWithFilter::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PIDWithFilter_error_sum(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_feedback
{
public:
  explicit Init_PIDWithFilter_feedback(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_error feedback(::gary_msgs::msg::PIDWithFilter::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_PIDWithFilter_error(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_set
{
public:
  explicit Init_PIDWithFilter_set(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_feedback set(::gary_msgs::msg::PIDWithFilter::_set_type arg)
  {
    msg_.set = std::move(arg);
    return Init_PIDWithFilter_feedback(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_max_iout
{
public:
  explicit Init_PIDWithFilter_max_iout(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_set max_iout(::gary_msgs::msg::PIDWithFilter::_max_iout_type arg)
  {
    msg_.max_iout = std::move(arg);
    return Init_PIDWithFilter_set(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_max_out
{
public:
  explicit Init_PIDWithFilter_max_out(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_max_iout max_out(::gary_msgs::msg::PIDWithFilter::_max_out_type arg)
  {
    msg_.max_out = std::move(arg);
    return Init_PIDWithFilter_max_iout(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_d_filter_coefficient
{
public:
  explicit Init_PIDWithFilter_d_filter_coefficient(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_max_out d_filter_coefficient(::gary_msgs::msg::PIDWithFilter::_d_filter_coefficient_type arg)
  {
    msg_.d_filter_coefficient = std::move(arg);
    return Init_PIDWithFilter_max_out(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_p_filter_coefficient
{
public:
  explicit Init_PIDWithFilter_p_filter_coefficient(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_d_filter_coefficient p_filter_coefficient(::gary_msgs::msg::PIDWithFilter::_p_filter_coefficient_type arg)
  {
    msg_.p_filter_coefficient = std::move(arg);
    return Init_PIDWithFilter_d_filter_coefficient(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_kd
{
public:
  explicit Init_PIDWithFilter_kd(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_p_filter_coefficient kd(::gary_msgs::msg::PIDWithFilter::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_PIDWithFilter_p_filter_coefficient(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_ki
{
public:
  explicit Init_PIDWithFilter_ki(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_kd ki(::gary_msgs::msg::PIDWithFilter::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PIDWithFilter_kd(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_kp
{
public:
  explicit Init_PIDWithFilter_kp(::gary_msgs::msg::PIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_PIDWithFilter_ki kp(::gary_msgs::msg::PIDWithFilter::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PIDWithFilter_ki(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

class Init_PIDWithFilter_header
{
public:
  Init_PIDWithFilter_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PIDWithFilter_kp header(::gary_msgs::msg::PIDWithFilter::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PIDWithFilter_kp(msg_);
  }

private:
  ::gary_msgs::msg::PIDWithFilter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::PIDWithFilter>()
{
  return gary_msgs::msg::builder::Init_PIDWithFilter_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__BUILDER_HPP_
