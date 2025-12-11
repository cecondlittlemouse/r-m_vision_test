// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gary_msgs:msg/CustomController.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__STRUCT_HPP_
#define GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__STRUCT_HPP_

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
# define DEPRECATED__gary_msgs__msg__CustomController __attribute__((deprecated))
#else
# define DEPRECATED__gary_msgs__msg__CustomController __declspec(deprecated)
#endif

namespace gary_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomController_
{
  using Type = CustomController_<ContainerAllocator>;

  explicit CustomController_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_length = 0;
    }
  }

  explicit CustomController_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_length = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
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

  // pointer types
  using RawPtr =
    gary_msgs::msg::CustomController_<ContainerAllocator> *;
  using ConstRawPtr =
    const gary_msgs::msg::CustomController_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gary_msgs::msg::CustomController_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gary_msgs::msg::CustomController_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::CustomController_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::CustomController_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gary_msgs::msg::CustomController_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gary_msgs::msg::CustomController_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gary_msgs::msg::CustomController_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gary_msgs::msg::CustomController_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gary_msgs__msg__CustomController
    std::shared_ptr<gary_msgs::msg::CustomController_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gary_msgs__msg__CustomController
    std::shared_ptr<gary_msgs::msg::CustomController_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomController_ & other) const
  {
    if (this->header != other.header) {
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
  bool operator!=(const CustomController_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomController_

// alias to use template instance with default allocator
using CustomController =
  gary_msgs::msg::CustomController_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gary_msgs

#endif  // GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__STRUCT_HPP_
