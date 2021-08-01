// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quad_interfaces:msg/MotionServosParameters.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS_PARAMETERS__STRUCT_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS_PARAMETERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__quad_interfaces__msg__MotionServosParameters __attribute__((deprecated))
#else
# define DEPRECATED__quad_interfaces__msg__MotionServosParameters __declspec(deprecated)
#endif

namespace quad_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionServosParameters_
{
  using Type = MotionServosParameters_<ContainerAllocator>;

  explicit MotionServosParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pin.begin(), this->pin.end(), 0l);
      std::fill<typename std::array<float, 12>::iterator, float>(this->min_angle.begin(), this->min_angle.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->max_angle.begin(), this->max_angle.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->calibration_angle_offset.begin(), this->calibration_angle_offset.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->ms_per_degree.begin(), this->ms_per_degree.end(), 0.0f);
    }
  }

  explicit MotionServosParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pin(_alloc),
    min_angle(_alloc),
    max_angle(_alloc),
    calibration_angle_offset(_alloc),
    ms_per_degree(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->pin.begin(), this->pin.end(), 0l);
      std::fill<typename std::array<float, 12>::iterator, float>(this->min_angle.begin(), this->min_angle.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->max_angle.begin(), this->max_angle.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->calibration_angle_offset.begin(), this->calibration_angle_offset.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->ms_per_degree.begin(), this->ms_per_degree.end(), 0.0f);
    }
  }

  // field types and members
  using _pin_type =
    std::array<int32_t, 12>;
  _pin_type pin;
  using _min_angle_type =
    std::array<float, 12>;
  _min_angle_type min_angle;
  using _max_angle_type =
    std::array<float, 12>;
  _max_angle_type max_angle;
  using _calibration_angle_offset_type =
    std::array<float, 12>;
  _calibration_angle_offset_type calibration_angle_offset;
  using _ms_per_degree_type =
    std::array<float, 12>;
  _ms_per_degree_type ms_per_degree;

  // setters for named parameter idiom
  Type & set__pin(
    const std::array<int32_t, 12> & _arg)
  {
    this->pin = _arg;
    return *this;
  }
  Type & set__min_angle(
    const std::array<float, 12> & _arg)
  {
    this->min_angle = _arg;
    return *this;
  }
  Type & set__max_angle(
    const std::array<float, 12> & _arg)
  {
    this->max_angle = _arg;
    return *this;
  }
  Type & set__calibration_angle_offset(
    const std::array<float, 12> & _arg)
  {
    this->calibration_angle_offset = _arg;
    return *this;
  }
  Type & set__ms_per_degree(
    const std::array<float, 12> & _arg)
  {
    this->ms_per_degree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quad_interfaces::msg::MotionServosParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const quad_interfaces::msg::MotionServosParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quad_interfaces::msg::MotionServosParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quad_interfaces::msg::MotionServosParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quad_interfaces__msg__MotionServosParameters
    std::shared_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quad_interfaces__msg__MotionServosParameters
    std::shared_ptr<quad_interfaces::msg::MotionServosParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionServosParameters_ & other) const
  {
    if (this->pin != other.pin) {
      return false;
    }
    if (this->min_angle != other.min_angle) {
      return false;
    }
    if (this->max_angle != other.max_angle) {
      return false;
    }
    if (this->calibration_angle_offset != other.calibration_angle_offset) {
      return false;
    }
    if (this->ms_per_degree != other.ms_per_degree) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionServosParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionServosParameters_

// alias to use template instance with default allocator
using MotionServosParameters =
  quad_interfaces::msg::MotionServosParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quad_interfaces

#endif  // QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS_PARAMETERS__STRUCT_HPP_
