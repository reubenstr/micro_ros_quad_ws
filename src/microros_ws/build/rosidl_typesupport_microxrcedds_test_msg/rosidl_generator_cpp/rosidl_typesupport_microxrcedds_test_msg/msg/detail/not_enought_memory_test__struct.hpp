// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__STRUCT_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest __declspec(deprecated)
#endif

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NotEnoughtMemoryTest_
{
  using Type = NotEnoughtMemoryTest_<ContainerAllocator>;

  explicit NotEnoughtMemoryTest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initial_byte = 0;
      this->string = "";
      std::fill<typename std::array<int16_t, 10>::iterator, int16_t>(this->int16_array.begin(), this->int16_array.end(), 0);
      this->end_byte = 0;
    }
  }

  explicit NotEnoughtMemoryTest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string(_alloc),
    int16_array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initial_byte = 0;
      this->string = "";
      std::fill<typename std::array<int16_t, 10>::iterator, int16_t>(this->int16_array.begin(), this->int16_array.end(), 0);
      this->end_byte = 0;
    }
  }

  // field types and members
  using _initial_byte_type =
    int8_t;
  _initial_byte_type initial_byte;
  using _string_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_type string;
  using _int64_sequence_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _int64_sequence_type int64_sequence;
  using _int16_array_type =
    std::array<int16_t, 10>;
  _int16_array_type int16_array;
  using _end_byte_type =
    int8_t;
  _end_byte_type end_byte;

  // setters for named parameter idiom
  Type & set__initial_byte(
    const int8_t & _arg)
  {
    this->initial_byte = _arg;
    return *this;
  }
  Type & set__string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string = _arg;
    return *this;
  }
  Type & set__int64_sequence(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->int64_sequence = _arg;
    return *this;
  }
  Type & set__int16_array(
    const std::array<int16_t, 10> & _arg)
  {
    this->int16_array = _arg;
    return *this;
  }
  Type & set__end_byte(
    const int8_t & _arg)
  {
    this->end_byte = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NotEnoughtMemoryTest_ & other) const
  {
    if (this->initial_byte != other.initial_byte) {
      return false;
    }
    if (this->string != other.string) {
      return false;
    }
    if (this->int64_sequence != other.int64_sequence) {
      return false;
    }
    if (this->int16_array != other.int16_array) {
      return false;
    }
    if (this->end_byte != other.end_byte) {
      return false;
    }
    return true;
  }
  bool operator!=(const NotEnoughtMemoryTest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NotEnoughtMemoryTest_

// alias to use template instance with default allocator
using NotEnoughtMemoryTest =
  rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__STRUCT_HPP_
