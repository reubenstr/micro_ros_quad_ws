// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__TRAITS_HPP_
#define COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__TRAITS_HPP_

#include "complex_msgs/msg/detail/nested_msg_test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'data14'
#include "complex_msgs/msg/detail/multi_string_test__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<complex_msgs::msg::NestedMsgTest>()
{
  return "complex_msgs::msg::NestedMsgTest";
}

template<>
inline const char * name<complex_msgs::msg::NestedMsgTest>()
{
  return "complex_msgs/msg/NestedMsgTest";
}

template<>
struct has_fixed_size<complex_msgs::msg::NestedMsgTest>
  : std::integral_constant<bool, has_fixed_size<complex_msgs::msg::MultiStringTest>::value> {};

template<>
struct has_bounded_size<complex_msgs::msg::NestedMsgTest>
  : std::integral_constant<bool, has_bounded_size<complex_msgs::msg::MultiStringTest>::value> {};

template<>
struct is_message<complex_msgs::msg::NestedMsgTest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMPLEX_MSGS__MSG__DETAIL__NESTED_MSG_TEST__TRAITS_HPP_
