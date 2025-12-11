// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/PIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gary_msgs__msg__PIDWithFilter __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__PIDWithFilter __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PIDWithFilter_
{
  using Type = PIDWithFilter_<ContainerAllocator>;

  explicit PIDWithFilter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0;
      this->ki = 0.0;
      this->kd = 0.0;
      this->p_filter_coefficient = 0.0;
      this->d_filter_coefficient = 0.0;
      this->max_out = 0.0;
      this->max_iout = 0.0;
      this->set = 0.0;
      this->feedback = 0.0;
      this->error = 0.0;
      this->error_sum = 0.0;
      this->last_error = 0.0;
      this->pout = 0.0;
      this->iout = 0.0;
      this->dout = 0.0;
      this->out = 0.0;
    }
  }

  explicit PIDWithFilter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0;
      this->ki = 0.0;
      this->kd = 0.0;
      this->p_filter_coefficient = 0.0;
      this->d_filter_coefficient = 0.0;
      this->max_out = 0.0;
      this->max_iout = 0.0;
      this->set = 0.0;
      this->feedback = 0.0;
      this->error = 0.0;
      this->error_sum = 0.0;
      this->last_error = 0.0;
      this->pout = 0.0;
      this->iout = 0.0;
      this->dout = 0.0;
      this->out = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _kp_type =
    double;
  _kp_type kp;
  using _ki_type =
    double;
  _ki_type ki;
  using _kd_type =
    double;
  _kd_type kd;
  using _p_filter_coefficient_type =
    double;
  _p_filter_coefficient_type p_filter_coefficient;
  using _d_filter_coefficient_type =
    double;
  _d_filter_coefficient_type d_filter_coefficient;
  using _max_out_type =
    double;
  _max_out_type max_out;
  using _max_iout_type =
    double;
  _max_iout_type max_iout;
  using _set_type =
    double;
  _set_type set;
  using _feedback_type =
    double;
  _feedback_type feedback;
  using _error_type =
    double;
  _error_type error;
  using _error_sum_type =
    double;
  _error_sum_type error_sum;
  using _last_error_type =
    double;
  _last_error_type last_error;
  using _pout_type =
    double;
  _pout_type pout;
  using _iout_type =
    double;
  _iout_type iout;
  using _dout_type =
    double;
  _dout_type dout;
  using _out_type =
    double;
  _out_type out;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__kp(
    const double & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__ki(
    const double & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const double & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__p_filter_coefficient(
    const double & _arg)
  {
    this->p_filter_coefficient = _arg;
    return *this;
  }
  Type & set__d_filter_coefficient(
    const double & _arg)
  {
    this->d_filter_coefficient = _arg;
    return *this;
  }
  Type & set__max_out(
    const double & _arg)
  {
    this->max_out = _arg;
    return *this;
  }
  Type & set__max_iout(
    const double & _arg)
  {
    this->max_iout = _arg;
    return *this;
  }
  Type & set__set(
    const double & _arg)
  {
    this->set = _arg;
    return *this;
  }
  Type & set__feedback(
    const double & _arg)
  {
    this->feedback = _arg;
    return *this;
  }
  Type & set__error(
    const double & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__error_sum(
    const double & _arg)
  {
    this->error_sum = _arg;
    return *this;
  }
  Type & set__last_error(
    const double & _arg)
  {
    this->last_error = _arg;
    return *this;
  }
  Type & set__pout(
    const double & _arg)
  {
    this->pout = _arg;
    return *this;
  }
  Type & set__iout(
    const double & _arg)
  {
    this->iout = _arg;
    return *this;
  }
  Type & set__dout(
    const double & _arg)
  {
    this->dout = _arg;
    return *this;
  }
  Type & set__out(
    const double & _arg)
  {
    this->out = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gary_msgs::msg::PIDWithFilter_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::PIDWithFilter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::PIDWithFilter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::PIDWithFilter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__PIDWithFilter
    std::shared_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__PIDWithFilter
    std::shared_ptr<gary_msgs::msg::PIDWithFilter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PIDWithFilter_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->p_filter_coefficient != other.p_filter_coefficient) {
      return false;
    }
    if (this->d_filter_coefficient != other.d_filter_coefficient) {
      return false;
    }
    if (this->max_out != other.max_out) {
      return false;
    }
    if (this->max_iout != other.max_iout) {
      return false;
    }
    if (this->set != other.set) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->error_sum != other.error_sum) {
      return false;
    }
    if (this->last_error != other.last_error) {
      return false;
    }
    if (this->pout != other.pout) {
      return false;
    }
    if (this->iout != other.iout) {
      return false;
    }
    if (this->dout != other.dout) {
      return false;
    }
    if (this->out != other.out) {
      return false;
    }
    return true;
  }
  bool operator!=(const PIDWithFilter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PIDWithFilter_

// alias to use template instance with default allocator
using PIDWithFilter =
  gary_msgs::msg::PIDWithFilter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__PID_WITH_FILTER__STRUCT_HPP_
