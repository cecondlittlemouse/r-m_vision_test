// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__SupplyProjectileAction __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__SupplyProjectileAction __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SupplyProjectileAction_
{
  using Type = SupplyProjectileAction_<ContainerAllocator>;

  explicit SupplyProjectileAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_projectile_id = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_step = 0;
      this->supply_bullet_num = 0;
    }
  }

  explicit SupplyProjectileAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_projectile_id = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_step = 0;
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
  using _supply_projectile_step_type =
    uint8_t;
  _supply_projectile_step_type supply_projectile_step;
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
  Type & set__supply_projectile_step(
    const uint8_t & _arg)
  {
    this->supply_projectile_step = _arg;
    return *this;
  }
  Type & set__supply_bullet_num(
    const uint8_t & _arg)
  {
    this->supply_bullet_num = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUPPLY_ROBOT_NONE =
    0u;
  static constexpr uint8_t SUPPLY_ROBOT_RED1 =
    1u;
  static constexpr uint8_t SUPPLY_ROBOT_RED2 =
    2u;
  static constexpr uint8_t SUPPLY_ROBOT_RED3 =
    3u;
  static constexpr uint8_t SUPPLY_ROBOT_RED4 =
    4u;
  static constexpr uint8_t SUPPLY_ROBOT_RED5 =
    5u;
  static constexpr uint8_t SUPPLY_ROBOT_BLUE1 =
    101u;
  static constexpr uint8_t SUPPLY_ROBOT_BLUE2 =
    102u;
  static constexpr uint8_t SUPPLY_ROBOT_BLUE3 =
    103u;
  static constexpr uint8_t SUPPLY_ROBOT_BLUE4 =
    104u;
  static constexpr uint8_t SUPPLY_ROBOT_BLUE5 =
    105u;
  static constexpr uint8_t SUPPLY_PROJECTILE_STEP_CLOSE =
    0u;
  static constexpr uint8_t SUPPLY_PROJECTILE_STEP_PREPARE =
    1u;
  static constexpr uint8_t SUPPLY_PROJECTILE_STEP_FALLING =
    2u;

  // pointer types
  using RawPtr =
    gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__SupplyProjectileAction
    std::shared_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__SupplyProjectileAction
    std::shared_ptr<gary_msgs::msg::SupplyProjectileAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SupplyProjectileAction_ & other) const
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
    if (this->supply_projectile_step != other.supply_projectile_step) {
      return false;
    }
    if (this->supply_bullet_num != other.supply_bullet_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const SupplyProjectileAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SupplyProjectileAction_

// alias to use template instance with default allocator
using SupplyProjectileAction =
  gary_msgs::msg::SupplyProjectileAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_RED1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_RED2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_RED3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_RED4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_RED5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_BLUE1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_BLUE2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_BLUE3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_BLUE4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_ROBOT_BLUE5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_PROJECTILE_STEP_CLOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_PROJECTILE_STEP_PREPARE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SupplyProjectileAction_<ContainerAllocator>::SUPPLY_PROJECTILE_STEP_FALLING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_HPP_
