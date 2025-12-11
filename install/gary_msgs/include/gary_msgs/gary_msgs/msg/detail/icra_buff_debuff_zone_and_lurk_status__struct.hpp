// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/ICRABuffDebuffZoneAndLurkStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICRABuffDebuffZoneAndLurkStatus_
{
  using Type = ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator>;

  explicit ICRABuffDebuffZoneAndLurkStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1_zone_status = false;
      this->f1_zone_buff_debuff_status = 0;
      this->f2_zone_status = false;
      this->f2_zone_buff_debuff_status = 0;
      this->f3_zone_status = false;
      this->f3_zone_buff_debuff_status = 0;
      this->f4_zone_status = false;
      this->f4_zone_buff_debuff_status = 0;
      this->f5_zone_status = false;
      this->f5_zone_buff_debuff_status = 0;
      this->f6_zone_status = false;
      this->f6_zone_buff_debuff_status = 0;
      this->red1_bullet_left = 0;
      this->red2_bullet_left = 0;
      this->blue1_bullet_left = 0;
      this->blue2_bullet_left = 0;
      this->lurk_mode = 0;
    }
  }

  explicit ICRABuffDebuffZoneAndLurkStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1_zone_status = false;
      this->f1_zone_buff_debuff_status = 0;
      this->f2_zone_status = false;
      this->f2_zone_buff_debuff_status = 0;
      this->f3_zone_status = false;
      this->f3_zone_buff_debuff_status = 0;
      this->f4_zone_status = false;
      this->f4_zone_buff_debuff_status = 0;
      this->f5_zone_status = false;
      this->f5_zone_buff_debuff_status = 0;
      this->f6_zone_status = false;
      this->f6_zone_buff_debuff_status = 0;
      this->red1_bullet_left = 0;
      this->red2_bullet_left = 0;
      this->blue1_bullet_left = 0;
      this->blue2_bullet_left = 0;
      this->lurk_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _f1_zone_status_type =
    bool;
  _f1_zone_status_type f1_zone_status;
  using _f1_zone_buff_debuff_status_type =
    uint8_t;
  _f1_zone_buff_debuff_status_type f1_zone_buff_debuff_status;
  using _f2_zone_status_type =
    bool;
  _f2_zone_status_type f2_zone_status;
  using _f2_zone_buff_debuff_status_type =
    uint8_t;
  _f2_zone_buff_debuff_status_type f2_zone_buff_debuff_status;
  using _f3_zone_status_type =
    bool;
  _f3_zone_status_type f3_zone_status;
  using _f3_zone_buff_debuff_status_type =
    uint8_t;
  _f3_zone_buff_debuff_status_type f3_zone_buff_debuff_status;
  using _f4_zone_status_type =
    bool;
  _f4_zone_status_type f4_zone_status;
  using _f4_zone_buff_debuff_status_type =
    uint8_t;
  _f4_zone_buff_debuff_status_type f4_zone_buff_debuff_status;
  using _f5_zone_status_type =
    bool;
  _f5_zone_status_type f5_zone_status;
  using _f5_zone_buff_debuff_status_type =
    uint8_t;
  _f5_zone_buff_debuff_status_type f5_zone_buff_debuff_status;
  using _f6_zone_status_type =
    bool;
  _f6_zone_status_type f6_zone_status;
  using _f6_zone_buff_debuff_status_type =
    uint8_t;
  _f6_zone_buff_debuff_status_type f6_zone_buff_debuff_status;
  using _red1_bullet_left_type =
    uint16_t;
  _red1_bullet_left_type red1_bullet_left;
  using _red2_bullet_left_type =
    uint16_t;
  _red2_bullet_left_type red2_bullet_left;
  using _blue1_bullet_left_type =
    uint16_t;
  _blue1_bullet_left_type blue1_bullet_left;
  using _blue2_bullet_left_type =
    uint16_t;
  _blue2_bullet_left_type blue2_bullet_left;
  using _lurk_mode_type =
    uint8_t;
  _lurk_mode_type lurk_mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__f1_zone_status(
    const bool & _arg)
  {
    this->f1_zone_status = _arg;
    return *this;
  }
  Type & set__f1_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f1_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f2_zone_status(
    const bool & _arg)
  {
    this->f2_zone_status = _arg;
    return *this;
  }
  Type & set__f2_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f2_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f3_zone_status(
    const bool & _arg)
  {
    this->f3_zone_status = _arg;
    return *this;
  }
  Type & set__f3_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f3_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f4_zone_status(
    const bool & _arg)
  {
    this->f4_zone_status = _arg;
    return *this;
  }
  Type & set__f4_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f4_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f5_zone_status(
    const bool & _arg)
  {
    this->f5_zone_status = _arg;
    return *this;
  }
  Type & set__f5_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f5_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f6_zone_status(
    const bool & _arg)
  {
    this->f6_zone_status = _arg;
    return *this;
  }
  Type & set__f6_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f6_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__red1_bullet_left(
    const uint16_t & _arg)
  {
    this->red1_bullet_left = _arg;
    return *this;
  }
  Type & set__red2_bullet_left(
    const uint16_t & _arg)
  {
    this->red2_bullet_left = _arg;
    return *this;
  }
  Type & set__blue1_bullet_left(
    const uint16_t & _arg)
  {
    this->blue1_bullet_left = _arg;
    return *this;
  }
  Type & set__blue2_bullet_left(
    const uint16_t & _arg)
  {
    this->blue2_bullet_left = _arg;
    return *this;
  }
  Type & set__lurk_mode(
    const uint8_t & _arg)
  {
    this->lurk_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus
    std::shared_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus
    std::shared_ptr<gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICRABuffDebuffZoneAndLurkStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->f1_zone_status != other.f1_zone_status) {
      return false;
    }
    if (this->f1_zone_buff_debuff_status != other.f1_zone_buff_debuff_status) {
      return false;
    }
    if (this->f2_zone_status != other.f2_zone_status) {
      return false;
    }
    if (this->f2_zone_buff_debuff_status != other.f2_zone_buff_debuff_status) {
      return false;
    }
    if (this->f3_zone_status != other.f3_zone_status) {
      return false;
    }
    if (this->f3_zone_buff_debuff_status != other.f3_zone_buff_debuff_status) {
      return false;
    }
    if (this->f4_zone_status != other.f4_zone_status) {
      return false;
    }
    if (this->f4_zone_buff_debuff_status != other.f4_zone_buff_debuff_status) {
      return false;
    }
    if (this->f5_zone_status != other.f5_zone_status) {
      return false;
    }
    if (this->f5_zone_buff_debuff_status != other.f5_zone_buff_debuff_status) {
      return false;
    }
    if (this->f6_zone_status != other.f6_zone_status) {
      return false;
    }
    if (this->f6_zone_buff_debuff_status != other.f6_zone_buff_debuff_status) {
      return false;
    }
    if (this->red1_bullet_left != other.red1_bullet_left) {
      return false;
    }
    if (this->red2_bullet_left != other.red2_bullet_left) {
      return false;
    }
    if (this->blue1_bullet_left != other.blue1_bullet_left) {
      return false;
    }
    if (this->blue2_bullet_left != other.blue2_bullet_left) {
      return false;
    }
    if (this->lurk_mode != other.lurk_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICRABuffDebuffZoneAndLurkStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICRABuffDebuffZoneAndLurkStatus_

// alias to use template instance with default allocator
using ICRABuffDebuffZoneAndLurkStatus =
  gary_msgs::msg::ICRABuffDebuffZoneAndLurkStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__STRUCT_HPP_
