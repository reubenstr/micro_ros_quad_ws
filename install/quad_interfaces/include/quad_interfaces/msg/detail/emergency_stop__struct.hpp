// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quad_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__quad_interfaces__msg__EmergencyStop __attribute__((deprecated))
#else
# define DEPRECATED__quad_interfaces__msg__EmergencyStop __declspec(deprecated)
#endif

namespace quad_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyStop_
{
  using Type = EmergencyStop_<ContainerAllocator>;

  explicit EmergencyStop_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_stop = false;
    }
  }

  explicit EmergencyStop_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_stop = false;
    }
  }

  // field types and members
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;

  // setters for named parameter idiom
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quad_interfaces::msg::EmergencyStop_<ContainerAllocator> *;
  using ConstRawPtr =
    const quad_interfaces::msg::EmergencyStop_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quad_interfaces::msg::EmergencyStop_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quad_interfaces::msg::EmergencyStop_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quad_interfaces__msg__EmergencyStop
    std::shared_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quad_interfaces__msg__EmergencyStop
    std::shared_ptr<quad_interfaces::msg::EmergencyStop_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStop_ & other) const
  {
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyStop_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStop_

// alias to use template instance with default allocator
using EmergencyStop =
  quad_interfaces::msg::EmergencyStop_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quad_interfaces

#endif  // QUAD_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
