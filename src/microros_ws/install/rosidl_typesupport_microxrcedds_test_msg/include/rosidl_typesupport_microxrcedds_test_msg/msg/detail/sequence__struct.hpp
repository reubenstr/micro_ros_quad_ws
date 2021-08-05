// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__STRUCT_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Sequence __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Sequence __declspec(deprecated)
#endif

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sequence_
{
  using Type = Sequence_<ContainerAllocator>;

  explicit Sequence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Sequence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _sequence_string_test_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _sequence_string_test_type sequence_string_test;

  // setters for named parameter idiom
  Type & set__sequence_string_test(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->sequence_string_test = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Sequence
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Sequence
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sequence_ & other) const
  {
    if (this->sequence_string_test != other.sequence_string_test) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sequence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sequence_

// alias to use template instance with default allocator
using Sequence =
  rosidl_typesupport_microxrcedds_test_msg::msg::Sequence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__STRUCT_HPP_
