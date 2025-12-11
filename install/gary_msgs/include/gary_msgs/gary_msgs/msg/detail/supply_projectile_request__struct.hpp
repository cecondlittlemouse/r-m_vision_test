// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/SupplyProjectileRequest.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_REQUEST__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_REQUEST__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__SupplyProjectileRequest __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__SupplyProjectileRequest __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SupplyProjectileRequest_
{
  using Type = SupplyProjectileRequest_<ContainerAllocator>;

  explicit SupplyProjectileRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_projectile_id = 0;
      this->supply_robot_id = 0;
      this->supply_bullet_num = 0;
    }
  }

  explicit SupplyProjectileRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_projectile_id = 0;
      this->supply_robot_id = 0;
      this->supply_bullet_num = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _supply_projectile_id_type =
    uint8_t;
  _supply_projectile_id_type supply_projectile_id;
  using _supply_robot_id_type =
    uint8_t;
  _supply_robot_id_type supply_robot_id;
  using _supply_bullet_num_type =
    uint8_t;
  _supply_bullet_num_type supply_bullet_num;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__supply_projectile_id(
    const uint8_t & _arg)
  {
    this->supply_projectile_id = _arg;
    return *this;
  }
  Type & set__supply_robot_id(
    const uint8_t & _arg)
  {
    this->supply_robot_id = _arg;
    return *this;
  }
  Type & set__supply_bullet_num(
    const uint8_t & _arg)
  {
    this->supply_bullet_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__SupplyProjectileRequest
    std::shared_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__SupplyProjectileRequest
    std::shared_ptr<gary_msgs::msg::SupplyProjectileRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SupplyProjectileRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->supply_projectile_id != other.supply_projectile_id) {
      return false;
    }
    if (this->supply_robot_id != other.supply_robot_id) {
      return false;
    }
    if (this->supply_bullet_num != other.supply_bullet_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const SupplyProjectileRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SupplyProjectileRequest_

// alias to use template instance with default allocator
using SupplyProjectileRequest =
  gary_msgs::msg::SupplyProjectileRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_REQUEST__STRUCT_HPP_
