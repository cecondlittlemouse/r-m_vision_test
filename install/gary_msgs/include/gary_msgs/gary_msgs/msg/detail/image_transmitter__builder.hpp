// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gary_msgs:msg/ImageTransmitter.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__IMAGE_TRANSMITTER__BUILDER_HPP_
#define GARY_MSGS__MSG__DETAIL__IMAGE_TRANSMITTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gary_msgs/msg/detail/image_transmitter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gary_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageTransmitter_key_b
{
public:
  explicit Init_ImageTransmitter_key_b(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  ::gary_msgs::msg::ImageTransmitter key_b(::gary_msgs::msg::ImageTransmitter::_key_b_type arg)
  {
    msg_.key_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_v
{
public:
  explicit Init_ImageTransmitter_key_v(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_b key_v(::gary_msgs::msg::ImageTransmitter::_key_v_type arg)
  {
    msg_.key_v = std::move(arg);
    return Init_ImageTransmitter_key_b(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_c
{
public:
  explicit Init_ImageTransmitter_key_c(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_v key_c(::gary_msgs::msg::ImageTransmitter::_key_c_type arg)
  {
    msg_.key_c = std::move(arg);
    return Init_ImageTransmitter_key_v(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_x
{
public:
  explicit Init_ImageTransmitter_key_x(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_c key_x(::gary_msgs::msg::ImageTransmitter::_key_x_type arg)
  {
    msg_.key_x = std::move(arg);
    return Init_ImageTransmitter_key_c(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_z
{
public:
  explicit Init_ImageTransmitter_key_z(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_x key_z(::gary_msgs::msg::ImageTransmitter::_key_z_type arg)
  {
    msg_.key_z = std::move(arg);
    return Init_ImageTransmitter_key_x(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_g
{
public:
  explicit Init_ImageTransmitter_key_g(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_z key_g(::gary_msgs::msg::ImageTransmitter::_key_g_type arg)
  {
    msg_.key_g = std::move(arg);
    return Init_ImageTransmitter_key_z(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_f
{
public:
  explicit Init_ImageTransmitter_key_f(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_g key_f(::gary_msgs::msg::ImageTransmitter::_key_f_type arg)
  {
    msg_.key_f = std::move(arg);
    return Init_ImageTransmitter_key_g(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_r
{
public:
  explicit Init_ImageTransmitter_key_r(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_f key_r(::gary_msgs::msg::ImageTransmitter::_key_r_type arg)
  {
    msg_.key_r = std::move(arg);
    return Init_ImageTransmitter_key_f(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_e
{
public:
  explicit Init_ImageTransmitter_key_e(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_r key_e(::gary_msgs::msg::ImageTransmitter::_key_e_type arg)
  {
    msg_.key_e = std::move(arg);
    return Init_ImageTransmitter_key_r(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_q
{
public:
  explicit Init_ImageTransmitter_key_q(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_e key_q(::gary_msgs::msg::ImageTransmitter::_key_q_type arg)
  {
    msg_.key_q = std::move(arg);
    return Init_ImageTransmitter_key_e(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_ctrl
{
public:
  explicit Init_ImageTransmitter_key_ctrl(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_q key_ctrl(::gary_msgs::msg::ImageTransmitter::_key_ctrl_type arg)
  {
    msg_.key_ctrl = std::move(arg);
    return Init_ImageTransmitter_key_q(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_shift
{
public:
  explicit Init_ImageTransmitter_key_shift(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_ctrl key_shift(::gary_msgs::msg::ImageTransmitter::_key_shift_type arg)
  {
    msg_.key_shift = std::move(arg);
    return Init_ImageTransmitter_key_ctrl(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_d
{
public:
  explicit Init_ImageTransmitter_key_d(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_shift key_d(::gary_msgs::msg::ImageTransmitter::_key_d_type arg)
  {
    msg_.key_d = std::move(arg);
    return Init_ImageTransmitter_key_shift(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_a
{
public:
  explicit Init_ImageTransmitter_key_a(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_d key_a(::gary_msgs::msg::ImageTransmitter::_key_a_type arg)
  {
    msg_.key_a = std::move(arg);
    return Init_ImageTransmitter_key_d(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_s
{
public:
  explicit Init_ImageTransmitter_key_s(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_a key_s(::gary_msgs::msg::ImageTransmitter::_key_s_type arg)
  {
    msg_.key_s = std::move(arg);
    return Init_ImageTransmitter_key_a(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_key_w
{
public:
  explicit Init_ImageTransmitter_key_w(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_s key_w(::gary_msgs::msg::ImageTransmitter::_key_w_type arg)
  {
    msg_.key_w = std::move(arg);
    return Init_ImageTransmitter_key_s(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_mouse_press_r
{
public:
  explicit Init_ImageTransmitter_mouse_press_r(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_key_w mouse_press_r(::gary_msgs::msg::ImageTransmitter::_mouse_press_r_type arg)
  {
    msg_.mouse_press_r = std::move(arg);
    return Init_ImageTransmitter_key_w(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_mouse_press_l
{
public:
  explicit Init_ImageTransmitter_mouse_press_l(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_mouse_press_r mouse_press_l(::gary_msgs::msg::ImageTransmitter::_mouse_press_l_type arg)
  {
    msg_.mouse_press_l = std::move(arg);
    return Init_ImageTransmitter_mouse_press_r(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_mouse_z
{
public:
  explicit Init_ImageTransmitter_mouse_z(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_mouse_press_l mouse_z(::gary_msgs::msg::ImageTransmitter::_mouse_z_type arg)
  {
    msg_.mouse_z = std::move(arg);
    return Init_ImageTransmitter_mouse_press_l(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_mouse_y
{
public:
  explicit Init_ImageTransmitter_mouse_y(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_mouse_z mouse_y(::gary_msgs::msg::ImageTransmitter::_mouse_y_type arg)
  {
    msg_.mouse_y = std::move(arg);
    return Init_ImageTransmitter_mouse_z(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_mouse_x
{
public:
  explicit Init_ImageTransmitter_mouse_x(::gary_msgs::msg::ImageTransmitter & msg)
  : msg_(msg)
  {}
  Init_ImageTransmitter_mouse_y mouse_x(::gary_msgs::msg::ImageTransmitter::_mouse_x_type arg)
  {
    msg_.mouse_x = std::move(arg);
    return Init_ImageTransmitter_mouse_y(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

class Init_ImageTransmitter_header
{
public:
  Init_ImageTransmitter_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageTransmitter_mouse_x header(::gary_msgs::msg::ImageTransmitter::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImageTransmitter_mouse_x(msg_);
  }

private:
  ::gary_msgs::msg::ImageTransmitter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gary_msgs::msg::ImageTransmitter>()
{
  return gary_msgs::msg::builder::Init_ImageTransmitter_header();
}

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__IMAGE_TRANSMITTER__BUILDER_HPP_
