// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/AerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__AerialRobotEnergy __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__AerialRobotEnergy __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AerialRobotEnergy_
{
  using Type = AerialRobotEnergy_<ContainerAllocator>;

  explicit AerialRobotEnergy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attack_time = 0;
    }
  }

  explicit AerialRobotEnergy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attack_time = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _attack_time_type =
    uint8_t;
  _attack_time_type attack_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__attack_time(
    const uint8_t & _arg)
  {
    this->attack_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__AerialRobotEnergy
    std::shared_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__AerialRobotEnergy
    std::shared_ptr<gary_msgs::msg::AerialRobotEnergy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AerialRobotEnergy_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->attack_time != other.attack_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const AerialRobotEnergy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AerialRobotEnergy_

// alias to use template instance with default allocator
using AerialRobotEnergy =
  gary_msgs::msg::AerialRobotEnergy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_HPP_
