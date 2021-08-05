// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#ifndef COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__TRAITS_HPP_
#define COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__TRAITS_HPP_

#include "complex_msgs/msg/detail/multi_string_test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<complex_msgs::msg::MultiStringTest>()
{
  return "complex_msgs::msg::MultiStringTest";
}

template<>
inline const char * name<complex_msgs::msg::MultiStringTest>()
{
  return "complex_msgs/msg/MultiStringTest";
}

template<>
struct has_fixed_size<complex_msgs::msg::MultiStringTest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<complex_msgs::msg::MultiStringTest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<complex_msgs::msg::MultiStringTest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMPLEX_MSGS__MSG__DETAIL__MULTI_STRING_TEST__TRAITS_HPP_
