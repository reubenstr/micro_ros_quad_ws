// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__STRUCT_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'nested_test'
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Primitive __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Primitive __declspec(deprecated)
#endif

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Primitive_
{
  using Type = Primitive_<ContainerAllocator>;

  explicit Primitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nested_test(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_test = false;
      std::fill<typename std::array<bool, 11>::iterator, bool>(this->bool_array_test.begin(), this->bool_array_test.end(), false);
      this->byte_test = 0;
      std::fill<typename std::array<unsigned char, 11>::iterator, unsigned char>(this->byte_array_test.begin(), this->byte_array_test.end(), 0);
      this->char_test = 0;
      std::fill<typename std::array<uint8_t, 11>::iterator, uint8_t>(this->char_array_test.begin(), this->char_array_test.end(), 0);
      this->float32_test = 0.0f;
      std::fill<typename std::array<float, 11>::iterator, float>(this->float32_array_test.begin(), this->float32_array_test.end(), 0.0f);
      this->double_test = 0.0;
      std::fill<typename std::array<double, 11>::iterator, double>(this->float64_array_test.begin(), this->float64_array_test.end(), 0.0);
      this->int8_test = 0;
      std::fill<typename std::array<int8_t, 11>::iterator, int8_t>(this->int8_array_test.begin(), this->int8_array_test.end(), 0);
      this->uint8_test = 0;
      std::fill<typename std::array<uint8_t, 11>::iterator, uint8_t>(this->uint8_array_test.begin(), this->uint8_array_test.end(), 0);
      this->int16_test = 0;
      std::fill<typename std::array<int16_t, 11>::iterator, int16_t>(this->int16_array_test.begin(), this->int16_array_test.end(), 0);
      this->uint16_test = 0;
      std::fill<typename std::array<uint16_t, 11>::iterator, uint16_t>(this->uint16_array_test.begin(), this->uint16_array_test.end(), 0);
      this->int32_test = 0l;
      std::fill<typename std::array<int32_t, 11>::iterator, int32_t>(this->int32_array_test.begin(), this->int32_array_test.end(), 0l);
      this->uint32_test = 0ul;
      std::fill<typename std::array<uint32_t, 11>::iterator, uint32_t>(this->uint32_array_test.begin(), this->uint32_array_test.end(), 0ul);
      this->int64_test = 0ll;
      std::fill<typename std::array<int64_t, 11>::iterator, int64_t>(this->int64_array_test.begin(), this->int64_array_test.end(), 0ll);
      this->uint64_test = 0ull;
      std::fill<typename std::array<uint64_t, 11>::iterator, uint64_t>(this->uint64_array_test.begin(), this->uint64_array_test.end(), 0ull);
    }
  }

  explicit Primitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bool_array_test(_alloc),
    byte_array_test(_alloc),
    char_array_test(_alloc),
    float32_array_test(_alloc),
    float64_array_test(_alloc),
    int8_array_test(_alloc),
    uint8_array_test(_alloc),
    int16_array_test(_alloc),
    uint16_array_test(_alloc),
    int32_array_test(_alloc),
    uint32_array_test(_alloc),
    int64_array_test(_alloc),
    uint64_array_test(_alloc),
    nested_test(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_test = false;
      std::fill<typename std::array<bool, 11>::iterator, bool>(this->bool_array_test.begin(), this->bool_array_test.end(), false);
      this->byte_test = 0;
      std::fill<typename std::array<unsigned char, 11>::iterator, unsigned char>(this->byte_array_test.begin(), this->byte_array_test.end(), 0);
      this->char_test = 0;
      std::fill<typename std::array<uint8_t, 11>::iterator, uint8_t>(this->char_array_test.begin(), this->char_array_test.end(), 0);
      this->float32_test = 0.0f;
      std::fill<typename std::array<float, 11>::iterator, float>(this->float32_array_test.begin(), this->float32_array_test.end(), 0.0f);
      this->double_test = 0.0;
      std::fill<typename std::array<double, 11>::iterator, double>(this->float64_array_test.begin(), this->float64_array_test.end(), 0.0);
      this->int8_test = 0;
      std::fill<typename std::array<int8_t, 11>::iterator, int8_t>(this->int8_array_test.begin(), this->int8_array_test.end(), 0);
      this->uint8_test = 0;
      std::fill<typename std::array<uint8_t, 11>::iterator, uint8_t>(this->uint8_array_test.begin(), this->uint8_array_test.end(), 0);
      this->int16_test = 0;
      std::fill<typename std::array<int16_t, 11>::iterator, int16_t>(this->int16_array_test.begin(), this->int16_array_test.end(), 0);
      this->uint16_test = 0;
      std::fill<typename std::array<uint16_t, 11>::iterator, uint16_t>(this->uint16_array_test.begin(), this->uint16_array_test.end(), 0);
      this->int32_test = 0l;
      std::fill<typename std::array<int32_t, 11>::iterator, int32_t>(this->int32_array_test.begin(), this->int32_array_test.end(), 0l);
      this->uint32_test = 0ul;
      std::fill<typename std::array<uint32_t, 11>::iterator, uint32_t>(this->uint32_array_test.begin(), this->uint32_array_test.end(), 0ul);
      this->int64_test = 0ll;
      std::fill<typename std::array<int64_t, 11>::iterator, int64_t>(this->int64_array_test.begin(), this->int64_array_test.end(), 0ll);
      this->uint64_test = 0ull;
      std::fill<typename std::array<uint64_t, 11>::iterator, uint64_t>(this->uint64_array_test.begin(), this->uint64_array_test.end(), 0ull);
    }
  }

  // field types and members
  using _bool_test_type =
    bool;
  _bool_test_type bool_test;
  using _bool_array_test_type =
    std::array<bool, 11>;
  _bool_array_test_type bool_array_test;
  using _byte_test_type =
    unsigned char;
  _byte_test_type byte_test;
  using _byte_array_test_type =
    std::array<unsigned char, 11>;
  _byte_array_test_type byte_array_test;
  using _char_test_type =
    uint8_t;
  _char_test_type char_test;
  using _char_array_test_type =
    std::array<uint8_t, 11>;
  _char_array_test_type char_array_test;
  using _float32_test_type =
    float;
  _float32_test_type float32_test;
  using _float32_array_test_type =
    std::array<float, 11>;
  _float32_array_test_type float32_array_test;
  using _double_test_type =
    double;
  _double_test_type double_test;
  using _float64_array_test_type =
    std::array<double, 11>;
  _float64_array_test_type float64_array_test;
  using _int8_test_type =
    int8_t;
  _int8_test_type int8_test;
  using _int8_array_test_type =
    std::array<int8_t, 11>;
  _int8_array_test_type int8_array_test;
  using _uint8_test_type =
    uint8_t;
  _uint8_test_type uint8_test;
  using _uint8_array_test_type =
    std::array<uint8_t, 11>;
  _uint8_array_test_type uint8_array_test;
  using _int16_test_type =
    int16_t;
  _int16_test_type int16_test;
  using _int16_array_test_type =
    std::array<int16_t, 11>;
  _int16_array_test_type int16_array_test;
  using _uint16_test_type =
    uint16_t;
  _uint16_test_type uint16_test;
  using _uint16_array_test_type =
    std::array<uint16_t, 11>;
  _uint16_array_test_type uint16_array_test;
  using _int32_test_type =
    int32_t;
  _int32_test_type int32_test;
  using _int32_array_test_type =
    std::array<int32_t, 11>;
  _int32_array_test_type int32_array_test;
  using _uint32_test_type =
    uint32_t;
  _uint32_test_type uint32_test;
  using _uint32_array_test_type =
    std::array<uint32_t, 11>;
  _uint32_array_test_type uint32_array_test;
  using _int64_test_type =
    int64_t;
  _int64_test_type int64_test;
  using _int64_array_test_type =
    std::array<int64_t, 11>;
  _int64_array_test_type int64_array_test;
  using _uint64_test_type =
    uint64_t;
  _uint64_test_type uint64_test;
  using _uint64_array_test_type =
    std::array<uint64_t, 11>;
  _uint64_array_test_type uint64_array_test;
  using _nested_test_type =
    rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator>;
  _nested_test_type nested_test;

  // setters for named parameter idiom
  Type & set__bool_test(
    const bool & _arg)
  {
    this->bool_test = _arg;
    return *this;
  }
  Type & set__bool_array_test(
    const std::array<bool, 11> & _arg)
  {
    this->bool_array_test = _arg;
    return *this;
  }
  Type & set__byte_test(
    const unsigned char & _arg)
  {
    this->byte_test = _arg;
    return *this;
  }
  Type & set__byte_array_test(
    const std::array<unsigned char, 11> & _arg)
  {
    this->byte_array_test = _arg;
    return *this;
  }
  Type & set__char_test(
    const uint8_t & _arg)
  {
    this->char_test = _arg;
    return *this;
  }
  Type & set__char_array_test(
    const std::array<uint8_t, 11> & _arg)
  {
    this->char_array_test = _arg;
    return *this;
  }
  Type & set__float32_test(
    const float & _arg)
  {
    this->float32_test = _arg;
    return *this;
  }
  Type & set__float32_array_test(
    const std::array<float, 11> & _arg)
  {
    this->float32_array_test = _arg;
    return *this;
  }
  Type & set__double_test(
    const double & _arg)
  {
    this->double_test = _arg;
    return *this;
  }
  Type & set__float64_array_test(
    const std::array<double, 11> & _arg)
  {
    this->float64_array_test = _arg;
    return *this;
  }
  Type & set__int8_test(
    const int8_t & _arg)
  {
    this->int8_test = _arg;
    return *this;
  }
  Type & set__int8_array_test(
    const std::array<int8_t, 11> & _arg)
  {
    this->int8_array_test = _arg;
    return *this;
  }
  Type & set__uint8_test(
    const uint8_t & _arg)
  {
    this->uint8_test = _arg;
    return *this;
  }
  Type & set__uint8_array_test(
    const std::array<uint8_t, 11> & _arg)
  {
    this->uint8_array_test = _arg;
    return *this;
  }
  Type & set__int16_test(
    const int16_t & _arg)
  {
    this->int16_test = _arg;
    return *this;
  }
  Type & set__int16_array_test(
    const std::array<int16_t, 11> & _arg)
  {
    this->int16_array_test = _arg;
    return *this;
  }
  Type & set__uint16_test(
    const uint16_t & _arg)
  {
    this->uint16_test = _arg;
    return *this;
  }
  Type & set__uint16_array_test(
    const std::array<uint16_t, 11> & _arg)
  {
    this->uint16_array_test = _arg;
    return *this;
  }
  Type & set__int32_test(
    const int32_t & _arg)
  {
    this->int32_test = _arg;
    return *this;
  }
  Type & set__int32_array_test(
    const std::array<int32_t, 11> & _arg)
  {
    this->int32_array_test = _arg;
    return *this;
  }
  Type & set__uint32_test(
    const uint32_t & _arg)
  {
    this->uint32_test = _arg;
    return *this;
  }
  Type & set__uint32_array_test(
    const std::array<uint32_t, 11> & _arg)
  {
    this->uint32_array_test = _arg;
    return *this;
  }
  Type & set__int64_test(
    const int64_t & _arg)
  {
    this->int64_test = _arg;
    return *this;
  }
  Type & set__int64_array_test(
    const std::array<int64_t, 11> & _arg)
  {
    this->int64_array_test = _arg;
    return *this;
  }
  Type & set__uint64_test(
    const uint64_t & _arg)
  {
    this->uint64_test = _arg;
    return *this;
  }
  Type & set__uint64_array_test(
    const std::array<uint64_t, 11> & _arg)
  {
    this->uint64_array_test = _arg;
    return *this;
  }
  Type & set__nested_test(
    const rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString_<ContainerAllocator> & _arg)
  {
    this->nested_test = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Primitive
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_typesupport_microxrcedds_test_msg__msg__Primitive
    std::shared_ptr<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Primitive_ & other) const
  {
    if (this->bool_test != other.bool_test) {
      return false;
    }
    if (this->bool_array_test != other.bool_array_test) {
      return false;
    }
    if (this->byte_test != other.byte_test) {
      return false;
    }
    if (this->byte_array_test != other.byte_array_test) {
      return false;
    }
    if (this->char_test != other.char_test) {
      return false;
    }
    if (this->char_array_test != other.char_array_test) {
      return false;
    }
    if (this->float32_test != other.float32_test) {
      return false;
    }
    if (this->float32_array_test != other.float32_array_test) {
      return false;
    }
    if (this->double_test != other.double_test) {
      return false;
    }
    if (this->float64_array_test != other.float64_array_test) {
      return false;
    }
    if (this->int8_test != other.int8_test) {
      return false;
    }
    if (this->int8_array_test != other.int8_array_test) {
      return false;
    }
    if (this->uint8_test != other.uint8_test) {
      return false;
    }
    if (this->uint8_array_test != other.uint8_array_test) {
      return false;
    }
    if (this->int16_test != other.int16_test) {
      return false;
    }
    if (this->int16_array_test != other.int16_array_test) {
      return false;
    }
    if (this->uint16_test != other.uint16_test) {
      return false;
    }
    if (this->uint16_array_test != other.uint16_array_test) {
      return false;
    }
    if (this->int32_test != other.int32_test) {
      return false;
    }
    if (this->int32_array_test != other.int32_array_test) {
      return false;
    }
    if (this->uint32_test != other.uint32_test) {
      return false;
    }
    if (this->uint32_array_test != other.uint32_array_test) {
      return false;
    }
    if (this->int64_test != other.int64_test) {
      return false;
    }
    if (this->int64_array_test != other.int64_array_test) {
      return false;
    }
    if (this->uint64_test != other.uint64_test) {
      return false;
    }
    if (this->uint64_array_test != other.uint64_array_test) {
      return false;
    }
    if (this->nested_test != other.nested_test) {
      return false;
    }
    return true;
  }
  bool operator!=(const Primitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Primitive_

// alias to use template instance with default allocator
using Primitive =
  rosidl_typesupport_microxrcedds_test_msg::msg::Primitive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__STRUCT_HPP_
