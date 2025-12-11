// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__DartClientCmd __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__DartClientCmd __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DartClientCmd_
{
  using Type = DartClientCmd_<ContainerAllocator>;

  explicit DartClientCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->launch_status = 0;
      this->attack_target = 0;
      this->target_change_time = 0;
      this->operate_launch_cmd_time = 0;
    }
  }

  explicit DartClientCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->launch_status = 0;
      this->attack_target = 0;
      this->target_change_time = 0;
      this->operate_launch_cmd_time = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _launch_status_type =
    uint8_t;
  _launch_status_type launch_status;
  using _attack_target_type =
    uint8_t;
  _attack_target_type attack_target;
  using _target_change_time_type =
    uint16_t;
  _target_change_time_type target_change_time;
  using _operate_launch_cmd_time_type =
    uint16_t;
  _operate_launch_cmd_time_type operate_launch_cmd_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__launch_status(
    const uint8_t & _arg)
  {
    this->launch_status = _arg;
    return *this;
  }
  Type & set__attack_target(
    const uint8_t & _arg)
  {
    this->attack_target = _arg;
    return *this;
  }
  Type & set__target_change_time(
    const uint16_t & _arg)
  {
    this->target_change_time = _arg;
    return *this;
  }
  Type & set__operate_launch_cmd_time(
    const uint16_t & _arg)
  {
    this->operate_launch_cmd_time = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LAUNCH_STATUS_OPENED =
    0u;
  static constexpr uint8_t LAUNCH_STATUS_CLOSED =
    1u;
  static constexpr uint8_t LAUNCH_STATUS_IN_ACTION =
    2u;
  static constexpr uint8_t ATTACK_TARGET_OUTPOST =
    0u;
  static constexpr uint8_t ATTACK_TARGET_BASE =
    1u;

  // pointer types
  using RawPtr =
    gary_msgs::msg::DartClientCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::DartClientCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::DartClientCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::DartClientCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__DartClientCmd
    std::shared_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__DartClientCmd
    std::shared_ptr<gary_msgs::msg::DartClientCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DartClientCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->launch_status != other.launch_status) {
      return false;
    }
    if (this->attack_target != other.attack_target) {
      return false;
    }
    if (this->target_change_time != other.target_change_time) {
      return false;
    }
    if (this->operate_launch_cmd_time != other.operate_launch_cmd_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DartClientCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DartClientCmd_

// alias to use template instance with default allocator
using DartClientCmd =
  gary_msgs::msg::DartClientCmd_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DartClientCmd_<ContainerAllocator>::LAUNCH_STATUS_OPENED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DartClientCmd_<ContainerAllocator>::LAUNCH_STATUS_CLOSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DartClientCmd_<ContainerAllocator>::LAUNCH_STATUS_IN_ACTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DartClientCmd_<ContainerAllocator>::ATTACK_TARGET_OUTPOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DartClientCmd_<ContainerAllocator>::ATTACK_TARGET_BASE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_HPP_
