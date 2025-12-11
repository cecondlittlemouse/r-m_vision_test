// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/InteractiveDataRecv.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__InteractiveDataRecv __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__InteractiveDataRecv __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InteractiveDataRecv_
{
  using Type = InteractiveDataRecv_<ContainerAllocator>;

  explicit InteractiveDataRecv_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->sender_id = 0;
      this->receiver_id = 0;
      this->data_length = 0;
    }
  }

  explicit InteractiveDataRecv_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->sender_id = 0;
      this->receiver_id = 0;
      this->data_length = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_cmd_id_type =
    uint16_t;
  _data_cmd_id_type data_cmd_id;
  using _sender_id_type =
    uint16_t;
  _sender_id_type sender_id;
  using _receiver_id_type =
    uint16_t;
  _receiver_id_type receiver_id;
  using _data_length_type =
    uint8_t;
  _data_length_type data_length;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data_cmd_id(
    const uint16_t & _arg)
  {
    this->data_cmd_id = _arg;
    return *this;
  }
  Type & set__sender_id(
    const uint16_t & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__receiver_id(
    const uint16_t & _arg)
  {
    this->receiver_id = _arg;
    return *this;
  }
  Type & set__data_length(
    const uint8_t & _arg)
  {
    this->data_length = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN =
    512u;
  static constexpr uint16_t DATA_CMD_ID_ROBOT_INTERACTIVE_END =
    767u;
  static constexpr uint16_t DATA_CMD_ID_CLIENT_DELETE_GRAPHICS =
    256u;
  static constexpr uint16_t DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1 =
    257u;
  static constexpr uint16_t DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3 =
    258u;
  static constexpr uint16_t DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5 =
    259u;
  static constexpr uint16_t DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7 =
    260u;
  static constexpr uint16_t DATA_CMD_ID_CLIENT_DRAW_CHARACTER =
    272u;
  static constexpr uint16_t ROBOT_ID_RED1_HERO =
    1u;
  static constexpr uint16_t ROBOT_ID_RED2_ENGINEER =
    2u;
  static constexpr uint16_t ROBOT_ID_RED3_INFANTRY =
    3u;
  static constexpr uint16_t ROBOT_ID_RED4_INFANTRY =
    4u;
  static constexpr uint16_t ROBOT_ID_RED5_INFANTRY =
    5u;
  static constexpr uint16_t ROBOT_ID_RED6_AERIAL =
    6u;
  static constexpr uint16_t ROBOT_ID_RED7_SENTRY =
    7u;
  static constexpr uint16_t ROBOT_ID_RED9_RADAR =
    9u;
  static constexpr uint16_t ROBOT_ID_BLUE1_HERO =
    101u;
  static constexpr uint16_t ROBOT_ID_BLUE2_ENGINEER =
    102u;
  static constexpr uint16_t ROBOT_ID_BLUE3_INFANTRY =
    103u;
  static constexpr uint16_t ROBOT_ID_BLUE4_INFANTRY =
    104u;
  static constexpr uint16_t ROBOT_ID_BLUE5_INFANTRY =
    105u;
  static constexpr uint16_t ROBOT_ID_BLUE6_AERIAL =
    106u;
  static constexpr uint16_t ROBOT_ID_BLUE7_SENTRY =
    107u;
  static constexpr uint16_t ROBOT_ID_BLUE9_RADAR =
    109u;
  static constexpr uint16_t CLIENT_ID_RED1_HERO =
    257u;
  static constexpr uint16_t CLIENT_ID_RED2_ENGINEER =
    258u;
  static constexpr uint16_t CLIENT_ID_RED3_INFANTRY =
    259u;
  static constexpr uint16_t CLIENT_ID_RED4_INFANTRY =
    260u;
  static constexpr uint16_t CLIENT_ID_RED5_INFANTRY =
    261u;
  static constexpr uint16_t CLIENT_ID_RED6_AERIAL =
    262u;
  static constexpr uint16_t CLIENT_ID_BLUE1_HERO =
    357u;
  static constexpr uint16_t CLIENT_ID_BLUE2_ENGINEER =
    358u;
  static constexpr uint16_t CLIENT_ID_BLUE3_INFANTRY =
    359u;
  static constexpr uint16_t CLIENT_ID_BLUE4_INFANTRY =
    360u;
  static constexpr uint16_t CLIENT_ID_BLUE5_INFANTRY =
    361u;
  static constexpr uint16_t CLIENT_ID_BLUE6_AERIAL =
    362u;

  // pointer types
  using RawPtr =
    gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__InteractiveDataRecv
    std::shared_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__InteractiveDataRecv
    std::shared_ptr<gary_msgs::msg::InteractiveDataRecv_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InteractiveDataRecv_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data_cmd_id != other.data_cmd_id) {
      return false;
    }
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
    if (this->data_length != other.data_length) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const InteractiveDataRecv_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InteractiveDataRecv_

// alias to use template instance with default allocator
using InteractiveDataRecv =
  gary_msgs::msg::InteractiveDataRecv_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_ROBOT_INTERACTIVE_BEGIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_ROBOT_INTERACTIVE_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_CLIENT_DELETE_GRAPHICS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_CLIENT_DRAW_GRAPHICS_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::DATA_CMD_ID_CLIENT_DRAW_CHARACTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_RED9_RADAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::ROBOT_ID_BLUE9_RADAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_RED1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_RED2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_RED3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_RED4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_RED5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_RED6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_BLUE1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_BLUE2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_BLUE3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_BLUE4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_BLUE5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t InteractiveDataRecv_<ContainerAllocator>::CLIENT_ID_BLUE6_AERIAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__INTERACTIVE_DATA_RECV__STRUCT_HPP_
