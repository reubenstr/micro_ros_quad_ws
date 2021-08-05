// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/BasicPrimitive.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__BASIC_PRIMITIVE__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__BASIC_PRIMITIVE__BUILDER_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace builder
{

class Init_BasicPrimitive_c
{
public:
  explicit Init_BasicPrimitive_c(::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive & msg)
  : msg_(msg)
  {}
  ::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive c(::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive msg_;
};

class Init_BasicPrimitive_b
{
public:
  explicit Init_BasicPrimitive_b(::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive & msg)
  : msg_(msg)
  {}
  Init_BasicPrimitive_c b(::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_BasicPrimitive_c(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive msg_;
};

class Init_BasicPrimitive_a
{
public:
  Init_BasicPrimitive_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasicPrimitive_b a(::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_BasicPrimitive_b(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive>()
{
  return rosidl_typesupport_microxrcedds_test_msg::msg::builder::Init_BasicPrimitive_a();
}

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__BASIC_PRIMITIVE__BUILDER_HPP_
