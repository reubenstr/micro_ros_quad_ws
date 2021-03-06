// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__STRUCT_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__quad_interfaces__msg__MotionServos __attribute__((deprecated))
#else
# define DEPRECATED__quad_interfaces__msg__MotionServos __declspec(deprecated)
#endif

namespace quad_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionServos_
{
  using Type = MotionServos_<ContainerAllocator>;

  explicit MotionServos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 12>::iterator, bool>(this->enable.begin(), this->enable.end(), false);
      std::fill<typename std::array<float, 12>::iterator, float>(this->angle.begin(), this->angle.end(), 0.0f);
    }
  }

  explicit MotionServos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : enable(_alloc),
    angle(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 12>::iterator, bool>(this->enable.begin(), this->enable.end(), false);
      std::fill<typename std::array<float, 12>::iterator, float>(this->angle.begin(), this->angle.end(), 0.0f);
    }
  }

  // field types and members
  using _enable_type =
    std::array<bool, 12>;
  _enable_type enable;
  using _angle_type =
    std::array<float, 12>;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__enable(
    const std::array<bool, 12> & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__angle(
    const std::array<float, 12> & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quad_interfaces::msg::MotionServos_<ContainerAllocator> *;
  using ConstRawPtr =
    const quad_interfaces::msg::MotionServos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quad_interfaces::msg::MotionServos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quad_interfaces::msg::MotionServos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quad_interfaces__msg__MotionServos
    std::shared_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quad_interfaces__msg__MotionServos
    std::shared_ptr<quad_interfaces::msg::MotionServos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionServos_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionServos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionServos_

// alias to use template instance with default allocator
using MotionServos =
  quad_interfaces::msg::MotionServos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quad_interfaces

#endif  // QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__STRUCT_HPP_
