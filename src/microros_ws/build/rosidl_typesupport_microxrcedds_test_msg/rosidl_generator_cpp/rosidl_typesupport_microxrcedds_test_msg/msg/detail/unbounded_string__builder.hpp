// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__BUILDER_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace builder
{

class Init_UnboundedString_unbounded_string4
{
public:
  explicit Init_UnboundedString_unbounded_string4(::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString & msg)
  : msg_(msg)
  {}
  ::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString unbounded_string4(::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString::_unbounded_string4_type arg)
  {
    msg_.unbounded_string4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString msg_;
};

class Init_UnboundedString_unbounded_string3
{
public:
  explicit Init_UnboundedString_unbounded_string3(::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString & msg)
  : msg_(msg)
  {}
  Init_UnboundedString_unbounded_string4 unbounded_string3(::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString::_unbounded_string3_type arg)
  {
    msg_.unbounded_string3 = std::move(arg);
    return Init_UnboundedString_unbounded_string4(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString msg_;
};

class Init_UnboundedString_unbounded_string2
{
public:
  explicit Init_UnboundedString_unbounded_string2(::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString & msg)
  : msg_(msg)
  {}
  Init_UnboundedString_unbounded_string3 unbounded_string2(::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString::_unbounded_string2_type arg)
  {
    msg_.unbounded_string2 = std::move(arg);
    return Init_UnboundedString_unbounded_string3(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString msg_;
};

class Init_UnboundedString_unbounded_string1
{
public:
  Init_UnboundedString_unbounded_string1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnboundedString_unbounded_string2 unbounded_string1(::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString::_unbounded_string1_type arg)
  {
    msg_.unbounded_string1 = std::move(arg);
    return Init_UnboundedString_unbounded_string2(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>()
{
  return rosidl_typesupport_microxrcedds_test_msg::msg::builder::Init_UnboundedString_unbounded_string1();
}

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__BUILDER_HPP_
