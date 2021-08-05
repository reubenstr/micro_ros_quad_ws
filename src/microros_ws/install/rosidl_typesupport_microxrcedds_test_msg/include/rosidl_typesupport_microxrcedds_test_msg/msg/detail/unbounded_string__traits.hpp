// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__TRAITS_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__TRAITS_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>()
{
  return "rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString";
}

template<>
inline const char * name<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>()
{
  return "rosidl_typesupport_microxrcedds_test_msg/msg/UnboundedString";
}

template<>
struct has_fixed_size<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__TRAITS_HPP_
