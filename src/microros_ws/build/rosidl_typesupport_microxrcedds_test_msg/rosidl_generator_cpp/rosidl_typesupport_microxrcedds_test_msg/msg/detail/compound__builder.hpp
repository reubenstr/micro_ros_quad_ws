// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__BUILDER_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace builder
{

class Init_Compound_array_data
{
public:
  explicit Init_Compound_array_data(::rosidl_typesupport_microxrcedds_test_msg::msg::Compound & msg)
  : msg_(msg)
  {}
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Compound array_data(::rosidl_typesupport_microxrcedds_test_msg::msg::Compound::_array_data_type arg)
  {
    msg_.array_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Compound msg_;
};

class Init_Compound_sequence_data
{
public:
  explicit Init_Compound_sequence_data(::rosidl_typesupport_microxrcedds_test_msg::msg::Compound & msg)
  : msg_(msg)
  {}
  Init_Compound_array_data sequence_data(::rosidl_typesupport_microxrcedds_test_msg::msg::Compound::_sequence_data_type arg)
  {
    msg_.sequence_data = std::move(arg);
    return Init_Compound_array_data(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Compound msg_;
};

class Init_Compound_string_data
{
public:
  Init_Compound_string_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Compound_sequence_data string_data(::rosidl_typesupport_microxrcedds_test_msg::msg::Compound::_string_data_type arg)
  {
    msg_.string_data = std::move(arg);
    return Init_Compound_sequence_data(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Compound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_microxrcedds_test_msg::msg::Compound>()
{
  return rosidl_typesupport_microxrcedds_test_msg::msg::builder::Init_Compound_string_data();
}

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__BUILDER_HPP_
