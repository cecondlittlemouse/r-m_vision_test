// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/AutoAimDebug.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__AutoAimDebug __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__AutoAimDebug __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoAimDebug_
{
  using Type = AutoAimDebug_<ContainerAllocator>;

  explicit AutoAimDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_yaw = 0.0f;
      this->plan_pitch = 0.0f;
      this->yaw_diff = 0.0f;
      this->yaw_limit_1 = 0.0f;
      this->yaw_limit_2 = 0.0f;
    }
  }

  explicit AutoAimDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_yaw = 0.0f;
      this->plan_pitch = 0.0f;
      this->yaw_diff = 0.0f;
      this->yaw_limit_1 = 0.0f;
      this->yaw_limit_2 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _plan_yaw_type =
    float;
  _plan_yaw_type plan_yaw;
  using _plan_pitch_type =
    float;
  _plan_pitch_type plan_pitch;
  using _yaw_diff_type =
    float;
  _yaw_diff_type yaw_diff;
  using _yaw_limit_1_type =
    float;
  _yaw_limit_1_type yaw_limit_1;
  using _yaw_limit_2_type =
    float;
  _yaw_limit_2_type yaw_limit_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__plan_yaw(
    const float & _arg)
  {
    this->plan_yaw = _arg;
    return *this;
  }
  Type & set__plan_pitch(
    const float & _arg)
  {
    this->plan_pitch = _arg;
    return *this;
  }
  Type & set__yaw_diff(
    const float & _arg)
  {
    this->yaw_diff = _arg;
    return *this;
  }
  Type & set__yaw_limit_1(
    const float & _arg)
  {
    this->yaw_limit_1 = _arg;
    return *this;
  }
  Type & set__yaw_limit_2(
    const float & _arg)
  {
    this->yaw_limit_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gary_msgs::msg::AutoAimDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::AutoAimDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::AutoAimDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::AutoAimDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__AutoAimDebug
    std::shared_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__AutoAimDebug
    std::shared_ptr<gary_msgs::msg::AutoAimDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoAimDebug_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->plan_yaw != other.plan_yaw) {
      return false;
    }
    if (this->plan_pitch != other.plan_pitch) {
      return false;
    }
    if (this->yaw_diff != other.yaw_diff) {
      return false;
    }
    if (this->yaw_limit_1 != other.yaw_limit_1) {
      return false;
    }
    if (this->yaw_limit_2 != other.yaw_limit_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoAimDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoAimDebug_

// alias to use template instance with default allocator
using AutoAimDebug =
  gary_msgs::msg::AutoAimDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__AUTO_AIM_DEBUG__STRUCT_HPP_
