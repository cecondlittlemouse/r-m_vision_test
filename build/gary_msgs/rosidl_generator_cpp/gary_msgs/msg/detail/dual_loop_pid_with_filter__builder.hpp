// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/dual_loop_pid_with_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_DualLoopPIDWithFilter_outer_out
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_out(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::DualLoopPIDWithFilter outer_out(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_out_type arg)
  {
    msg_.outer_out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_dout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_dout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_out outer_dout(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_dout_type arg)
  {
    msg_.outer_dout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_out(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_iout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_dout outer_iout(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_iout_type arg)
  {
    msg_.outer_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_dout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_pout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_pout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_iout outer_pout(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_pout_type arg)
  {
    msg_.outer_pout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_iout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_out
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_out(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_pout inner_out(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_out_type arg)
  {
    msg_.inner_out = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_pout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_dout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_dout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_out inner_dout(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_dout_type arg)
  {
    msg_.inner_dout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_out(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_iout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_dout inner_iout(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_iout_type arg)
  {
    msg_.inner_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_dout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_pout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_pout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_iout inner_pout(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_pout_type arg)
  {
    msg_.inner_pout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_iout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_last_error
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_last_error(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_pout outer_last_error(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_last_error_type arg)
  {
    msg_.outer_last_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_pout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_error_sum
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_error_sum(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_last_error outer_error_sum(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_error_sum_type arg)
  {
    msg_.outer_error_sum = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_last_error(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_error
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_error(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_error_sum outer_error(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_error_type arg)
  {
    msg_.outer_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_error_sum(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_feedback
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_feedback(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_error outer_feedback(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_feedback_type arg)
  {
    msg_.outer_feedback = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_error(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_set
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_set(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_feedback outer_set(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_set_type arg)
  {
    msg_.outer_set = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_feedback(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_last_error
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_last_error(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_set inner_last_error(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_last_error_type arg)
  {
    msg_.inner_last_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_set(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_error_sum
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_error_sum(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_last_error inner_error_sum(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_error_sum_type arg)
  {
    msg_.inner_error_sum = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_last_error(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_error
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_error(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_error_sum inner_error(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_error_type arg)
  {
    msg_.inner_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_error_sum(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_feedback
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_feedback(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_error inner_feedback(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_feedback_type arg)
  {
    msg_.inner_feedback = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_error(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_set
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_set(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_feedback inner_set(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_set_type arg)
  {
    msg_.inner_set = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_feedback(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_max_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_max_iout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_set outer_max_iout(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_max_iout_type arg)
  {
    msg_.outer_max_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_set(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_max_out
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_max_out(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_max_iout outer_max_out(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_max_out_type arg)
  {
    msg_.outer_max_out = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_max_iout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_max_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_max_iout(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_max_out inner_max_iout(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_max_iout_type arg)
  {
    msg_.inner_max_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_max_out(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_max_out
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_max_out(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_max_iout inner_max_out(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_max_out_type arg)
  {
    msg_.inner_max_out = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_max_iout(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_d_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_d_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_max_out outer_d_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_d_filter_coefficient_type arg)
  {
    msg_.outer_d_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_max_out(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_p_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_p_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_d_filter_coefficient outer_p_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_p_filter_coefficient_type arg)
  {
    msg_.outer_p_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_d_filter_coefficient(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_kd
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_kd(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_p_filter_coefficient outer_kd(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_kd_type arg)
  {
    msg_.outer_kd = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_p_filter_coefficient(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_ki
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_ki(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_kd outer_ki(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_ki_type arg)
  {
    msg_.outer_ki = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_kd(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_kp
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_kp(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_ki outer_kp(::gary_msgs::msg::DualLoopPIDWithFilter::_outer_kp_type arg)
  {
    msg_.outer_kp = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_ki(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_d_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_d_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_kp inner_d_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_d_filter_coefficient_type arg)
  {
    msg_.inner_d_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_kp(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_p_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_p_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_d_filter_coefficient inner_p_filter_coefficient(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_p_filter_coefficient_type arg)
  {
    msg_.inner_p_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_d_filter_coefficient(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_kd
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_kd(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_p_filter_coefficient inner_kd(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_kd_type arg)
  {
    msg_.inner_kd = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_p_filter_coefficient(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_ki
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_ki(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_kd inner_ki(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_ki_type arg)
  {
    msg_.inner_ki = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_kd(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_kp
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_kp(::gary_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_ki inner_kp(::gary_msgs::msg::DualLoopPIDWithFilter::_inner_kp_type arg)
  {
    msg_.inner_kp = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_ki(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_header
{
public:
  Init_DualLoopPIDWithFilter_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DualLoopPIDWithFilter_inner_kp header(::gary_msgs::msg::DualLoopPIDWithFilter::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_kp(msg_);
  }

private:
  ::gary_msgs::msg::DualLoopPIDWithFilter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::DualLoopPIDWithFilter>()
{
  return gary_msgs::msg::builder::Init_DualLoopPIDWithFilter_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__BUILDER_HPP_
