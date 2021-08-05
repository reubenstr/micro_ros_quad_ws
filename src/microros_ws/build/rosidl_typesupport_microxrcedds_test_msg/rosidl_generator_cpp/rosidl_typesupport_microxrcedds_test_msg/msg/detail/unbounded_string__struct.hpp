// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__STRUCT_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString __declspec(deprecated)
#endif

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnboundedString_
{
  using Type = UnboundedString_<ContainerAllocator>;

  explicit UnboundedString_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unbounded_string1 = "";
      this->unbounded_string2 = "";
      this->unbounded_string3 = "";
      this->unbounded_string4 = "";
    }
  }

  explicit UnboundedString_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unbounded_string1(_alloc),
    unbounded_string2(_alloc),
    unbounded_string3(_alloc),
    unbounded_string4(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unbounded_string1 = "";
      this->unbounded_string2 = "";
      this->unbounded_string3 = "";
      this->unbounded_string4 = "";
    }
  }

  // field types and members
  using _unbounded_string1_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _unbounded_string1_type unbounded_string1;
  using _unbounded_string2_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _unbounded_string2_type unbounded_string2;
  using _unbounded_string3_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _unbounded_string3_type unbounded_string3;
  using _unbounded_string4_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _unbounded_string4_type unbounded_string4;

  // setters for named parameter idiom
  Type & set__unbounded_string1(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->unbounded_string1 = _arg;
    return *this;
  }
  Type & set__unbounded_string2(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->unbounded_string2 = _arg;
    return *this;
  }
  Type & set__unbounded_string3(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->unbounded_string3 = _arg;
    return *this;
  }
  Type & set__unbounded_string4(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->unbounded_string4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnboundedString_ & other) const
  {
    if (this->unbounded_string1 != other.unbounded_string1) {
      return false;
    }
    if (this->unbounded_string2 != other.unbounded_string2) {
      return false;
    }
    if (this->unbounded_string3 != other.unbounded_string3) {
      return false;
    }
    if (this->unbounded_string4 != other.unbounded_string4) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnboundedString_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnboundedString_

// alias to use template instance with default allocator
using UnboundedString =
  rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__STRUCT_HPP_
