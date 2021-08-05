// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__STRUCT_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'sequence_data'
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.hpp"
// Member 'array_data'
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Compound __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Compound __declspec(deprecated)
#endif

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Compound_
{
  using Type = Compound_<ContainerAllocator>;

  explicit Compound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->string_data = "";
      this->array_data.fill(rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive_<ContainerAllocator>{_init});
    }
  }

  explicit Compound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string_data(_alloc),
    array_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->string_data = "";
      this->array_data.fill(rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _string_data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_data_type string_data;
  using _sequence_data_type =
    std::vector<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>>::other>;
  _sequence_data_type sequence_data;
  using _array_data_type =
    std::array<rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive_<ContainerAllocator>, 3>;
  _array_data_type array_data;

  // setters for named parameter idiom
  Type & set__string_data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_data = _arg;
    return *this;
  }
  Type & set__sequence_data(
    const std::vector<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>>::other> & _arg)
  {
    this->sequence_data = _arg;
    return *this;
  }
  Type & set__array_data(
    const std::array<rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive_<ContainerAllocator>, 3> & _arg)
  {
    this->array_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Compound
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Compound
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Compound_ & other) const
  {
    if (this->string_data != other.string_data) {
      return false;
    }
    if (this->sequence_data != other.sequence_data) {
      return false;
    }
    if (this->array_data != other.array_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Compound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Compound_

// alias to use template instance with default allocator
using Compound =
  rosidl_typesupport_microxrcedds_test_msg::msg::Compound_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__STRUCT_HPP_
