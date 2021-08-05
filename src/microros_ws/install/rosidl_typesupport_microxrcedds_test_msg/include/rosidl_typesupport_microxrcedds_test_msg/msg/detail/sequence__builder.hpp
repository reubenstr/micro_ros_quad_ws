// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__BUILDER_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace builder
{

class Init_Sequence_sequence_string_test
{
public:
  Init_Sequence_sequence_string_test()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Sequence sequence_string_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Sequence::_sequence_string_test_type arg)
  {
    msg_.sequence_string_test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Sequence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_microxrcedds_test_msg::msg::Sequence>()
{
  return rosidl_typesupport_microxrcedds_test_msg::msg::builder::Init_Sequence_sequence_string_test();
}

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__BUILDER_HPP_
