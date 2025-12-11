// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/PowerHeat.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__POWER_HEAT__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__POWER_HEAT__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__PowerHeat __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__PowerHeat __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerHeat_
{
  using Type = PowerHeat_<ContainerAllocator>;

  explicit PowerHeat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_volt = 0.0f;
      this->chassis_current = 0.0f;
      this->chassis_power = 0.0f;
      this->chassis_power_buffer = 0;
      this->shooter_17mm_id1_heat = 0;
      this->shooter_17mm_id2_heat = 0;
      this->shooter_42mm_id1_heat = 0;
    }
  }

  explicit PowerHeat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_volt = 0.0f;
      this->chassis_current = 0.0f;
      this->chassis_power = 0.0f;
      this->chassis_power_buffer = 0;
      this->shooter_17mm_id1_heat = 0;
      this->shooter_17mm_id2_heat = 0;
      this->shooter_42mm_id1_heat = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _chassis_volt_type =
    float;
  _chassis_volt_type chassis_volt;
  using _chassis_current_type =
    float;
  _chassis_current_type chassis_current;
  using _chassis_power_type =
    float;
  _chassis_power_type chassis_power;
  using _chassis_power_buffer_type =
    uint16_t;
  _chassis_power_buffer_type chassis_power_buffer;
  using _shooter_17mm_id1_heat_type =
    uint16_t;
  _shooter_17mm_id1_heat_type shooter_17mm_id1_heat;
  using _shooter_17mm_id2_heat_type =
    uint16_t;
  _shooter_17mm_id2_heat_type shooter_17mm_id2_heat;
  using _shooter_42mm_id1_heat_type =
    uint16_t;
  _shooter_42mm_id1_heat_type shooter_42mm_id1_heat;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__chassis_volt(
    const float & _arg)
  {
    this->chassis_volt = _arg;
    return *this;
  }
  Type & set__chassis_current(
    const float & _arg)
  {
    this->chassis_current = _arg;
    return *this;
  }
  Type & set__chassis_power(
    const float & _arg)
  {
    this->chassis_power = _arg;
    return *this;
  }
  Type & set__chassis_power_buffer(
    const uint16_t & _arg)
  {
    this->chassis_power_buffer = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id1_heat(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id1_heat = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id2_heat(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id2_heat = _arg;
    return *this;
  }
  Type & set__shooter_42mm_id1_heat(
    const uint16_t & _arg)
  {
    this->shooter_42mm_id1_heat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gary_msgs::msg::PowerHeat_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::PowerHeat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::PowerHeat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::PowerHeat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__PowerHeat
    std::shared_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__PowerHeat
    std::shared_ptr<gary_msgs::msg::PowerHeat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerHeat_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->chassis_volt != other.chassis_volt) {
      return false;
    }
    if (this->chassis_current != other.chassis_current) {
      return false;
    }
    if (this->chassis_power != other.chassis_power) {
      return false;
    }
    if (this->chassis_power_buffer != other.chassis_power_buffer) {
      return false;
    }
    if (this->shooter_17mm_id1_heat != other.shooter_17mm_id1_heat) {
      return false;
    }
    if (this->shooter_17mm_id2_heat != other.shooter_17mm_id2_heat) {
      return false;
    }
    if (this->shooter_42mm_id1_heat != other.shooter_42mm_id1_heat) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerHeat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerHeat_

// alias to use template instance with default allocator
using PowerHeat =
  gary_msgs::msg::PowerHeat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__POWER_HEAT__STRUCT_HPP_
