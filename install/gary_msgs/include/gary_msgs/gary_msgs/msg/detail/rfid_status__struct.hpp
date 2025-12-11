// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__RFIDStatus __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__RFIDStatus __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RFIDStatus_
{
  using Type = RFIDStatus_<ContainerAllocator>;

  explicit RFIDStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_buff_point = false;
      this->elevated_ground_buff_point = false;
      this->power_rune_buff_point = false;
      this->launch_ramp_buff_point = false;
      this->outpost_buff_point = false;
      this->hp_recovery_buff_point = false;
      this->engineer_robot_revival_card = false;
    }
  }

  explicit RFIDStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_buff_point = false;
      this->elevated_ground_buff_point = false;
      this->power_rune_buff_point = false;
      this->launch_ramp_buff_point = false;
      this->outpost_buff_point = false;
      this->hp_recovery_buff_point = false;
      this->engineer_robot_revival_card = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _base_buff_point_type =
    bool;
  _base_buff_point_type base_buff_point;
  using _elevated_ground_buff_point_type =
    bool;
  _elevated_ground_buff_point_type elevated_ground_buff_point;
  using _power_rune_buff_point_type =
    bool;
  _power_rune_buff_point_type power_rune_buff_point;
  using _launch_ramp_buff_point_type =
    bool;
  _launch_ramp_buff_point_type launch_ramp_buff_point;
  using _outpost_buff_point_type =
    bool;
  _outpost_buff_point_type outpost_buff_point;
  using _hp_recovery_buff_point_type =
    bool;
  _hp_recovery_buff_point_type hp_recovery_buff_point;
  using _engineer_robot_revival_card_type =
    bool;
  _engineer_robot_revival_card_type engineer_robot_revival_card;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__base_buff_point(
    const bool & _arg)
  {
    this->base_buff_point = _arg;
    return *this;
  }
  Type & set__elevated_ground_buff_point(
    const bool & _arg)
  {
    this->elevated_ground_buff_point = _arg;
    return *this;
  }
  Type & set__power_rune_buff_point(
    const bool & _arg)
  {
    this->power_rune_buff_point = _arg;
    return *this;
  }
  Type & set__launch_ramp_buff_point(
    const bool & _arg)
  {
    this->launch_ramp_buff_point = _arg;
    return *this;
  }
  Type & set__outpost_buff_point(
    const bool & _arg)
  {
    this->outpost_buff_point = _arg;
    return *this;
  }
  Type & set__hp_recovery_buff_point(
    const bool & _arg)
  {
    this->hp_recovery_buff_point = _arg;
    return *this;
  }
  Type & set__engineer_robot_revival_card(
    const bool & _arg)
  {
    this->engineer_robot_revival_card = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gary_msgs::msg::RFIDStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::RFIDStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::RFIDStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::RFIDStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__RFIDStatus
    std::shared_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__RFIDStatus
    std::shared_ptr<gary_msgs::msg::RFIDStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RFIDStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->base_buff_point != other.base_buff_point) {
      return false;
    }
    if (this->elevated_ground_buff_point != other.elevated_ground_buff_point) {
      return false;
    }
    if (this->power_rune_buff_point != other.power_rune_buff_point) {
      return false;
    }
    if (this->launch_ramp_buff_point != other.launch_ramp_buff_point) {
      return false;
    }
    if (this->outpost_buff_point != other.outpost_buff_point) {
      return false;
    }
    if (this->hp_recovery_buff_point != other.hp_recovery_buff_point) {
      return false;
    }
    if (this->engineer_robot_revival_card != other.engineer_robot_revival_card) {
      return false;
    }
    return true;
  }
  bool operator!=(const RFIDStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RFIDStatus_

// alias to use template instance with default allocator
using RFIDStatus =
  gary_msgs::msg::RFIDStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
