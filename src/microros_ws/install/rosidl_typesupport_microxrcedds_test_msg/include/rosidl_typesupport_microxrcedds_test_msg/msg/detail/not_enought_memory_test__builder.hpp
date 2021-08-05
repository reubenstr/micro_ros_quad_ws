// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__BUILDER_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace builder
{

class Init_NotEnoughtMemoryTest_end_byte
{
public:
  explicit Init_NotEnoughtMemoryTest_end_byte(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & msg)
  : msg_(msg)
  {}
  ::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest end_byte(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest::_end_byte_type arg)
  {
    msg_.end_byte = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest msg_;
};

class Init_NotEnoughtMemoryTest_int16_array
{
public:
  explicit Init_NotEnoughtMemoryTest_int16_array(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & msg)
  : msg_(msg)
  {}
  Init_NotEnoughtMemoryTest_end_byte int16_array(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest::_int16_array_type arg)
  {
    msg_.int16_array = std::move(arg);
    return Init_NotEnoughtMemoryTest_end_byte(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest msg_;
};

class Init_NotEnoughtMemoryTest_int64_sequence
{
public:
  explicit Init_NotEnoughtMemoryTest_int64_sequence(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & msg)
  : msg_(msg)
  {}
  Init_NotEnoughtMemoryTest_int16_array int64_sequence(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest::_int64_sequence_type arg)
  {
    msg_.int64_sequence = std::move(arg);
    return Init_NotEnoughtMemoryTest_int16_array(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest msg_;
};

class Init_NotEnoughtMemoryTest_string
{
public:
  explicit Init_NotEnoughtMemoryTest_string(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest & msg)
  : msg_(msg)
  {}
  Init_NotEnoughtMemoryTest_int64_sequence string(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest::_string_type arg)
  {
    msg_.string = std::move(arg);
    return Init_NotEnoughtMemoryTest_int64_sequence(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest msg_;
};

class Init_NotEnoughtMemoryTest_initial_byte
{
public:
  Init_NotEnoughtMemoryTest_initial_byte()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NotEnoughtMemoryTest_string initial_byte(::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest::_initial_byte_type arg)
  {
    msg_.initial_byte = std::move(arg);
    return Init_NotEnoughtMemoryTest_string(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest>()
{
  return rosidl_typesupport_microxrcedds_test_msg::msg::builder::Init_NotEnoughtMemoryTest_initial_byte();
}

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__BUILDER_HPP_
