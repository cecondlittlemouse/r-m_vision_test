// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__RefereeWarning __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__RefereeWarning __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RefereeWarning_
{
  using Type = RefereeWarning_<ContainerAllocator>;

  explicit RefereeWarning_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->foul_robot_id = 0;
    }
  }

  explicit RefereeWarning_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->foul_robot_id = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _level_type =
    uint8_t;
  _level_type level;
  using _foul_robot_id_type =
    uint8_t;
  _foul_robot_id_type foul_robot_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__level(
    const uint8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__foul_robot_id(
    const uint8_t & _arg)
  {
    this->foul_robot_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LEVEL_YELLOW =
    0u;
  static constexpr uint8_t LEVEL_RED =
    0u;
  static constexpr uint8_t LEVEL_LOSE_GAME =
    0u;
  static constexpr uint8_t FOUL_ROBOT_ID_ALL =
    0u;
  static constexpr uint8_t FOUL_ROBOT_ID_RED1_HERO =
    1u;
  static constexpr uint8_t FOUL_ROBOT_ID_RED2_ENGINEER =
    2u;
  static constexpr uint8_t FOUL_ROBOT_ID_RED3_INFANTRY =
    3u;
  static constexpr uint8_t FOUL_ROBOT_ID_RED4_INFANTRY =
    4u;
  static constexpr uint8_t FOUL_ROBOT_ID_RED5_INFANTRY =
    5u;
  static constexpr uint8_t FOUL_ROBOT_ID_RED6_AERIAL =
    6u;
  static constexpr uint8_t FOUL_ROBOT_ID_RED7_SENTRY =
    7u;
  static constexpr uint8_t FOUL_ROBOT_ID_BLUE1_HERO =
    101u;
  static constexpr uint8_t FOUL_ROBOT_ID_BLUE2_ENGINEER =
    102u;
  static constexpr uint8_t FOUL_ROBOT_ID_BLUE3_INFANTRY =
    103u;
  static constexpr uint8_t FOUL_ROBOT_ID_BLUE4_INFANTRY =
    104u;
  static constexpr uint8_t FOUL_ROBOT_ID_BLUE5_INFANTRY =
    105u;
  static constexpr uint8_t FOUL_ROBOT_ID_BLUE6_AERIAL =
    106u;
  static constexpr uint8_t FOUL_ROBOT_ID_BLUE7_SENTRY =
    107u;

  // pointer types
  using RawPtr =
    gary_msgs::msg::RefereeWarning_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::RefereeWarning_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::RefereeWarning_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::RefereeWarning_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__RefereeWarning
    std::shared_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__RefereeWarning
    std::shared_ptr<gary_msgs::msg::RefereeWarning_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RefereeWarning_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->foul_robot_id != other.foul_robot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RefereeWarning_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RefereeWarning_

// alias to use template instance with default allocator
using RefereeWarning =
  gary_msgs::msg::RefereeWarning_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::LEVEL_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::LEVEL_RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::LEVEL_LOSE_GAME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_RED1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_RED2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_RED3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_RED4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_RED5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_RED6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_RED7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_BLUE1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_BLUE2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_BLUE3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_BLUE4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_BLUE5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_BLUE6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RefereeWarning_<ContainerAllocator>::FOUL_ROBOT_ID_BLUE7_SENTRY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_HPP_
