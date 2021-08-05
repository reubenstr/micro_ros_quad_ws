// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__TRAITS_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__TRAITS_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'array_data'
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_typesupport_microxrcedds_test_msg::msg::Compound>()
{
  return "rosidl_typesupport_microxrcedds_test_msg::msg::Compound";
}

template<>
inline const char * name<rosidl_typesupport_microxrcedds_test_msg::msg::Compound>()
{
  return "rosidl_typesupport_microxrcedds_test_msg/msg/Compound";
}

template<>
struct has_fixed_size<rosidl_typesupport_microxrcedds_test_msg::msg::Compound>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_typesupport_microxrcedds_test_msg::msg::Compound>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_typesupport_microxrcedds_test_msg::msg::Compound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__TRAITS_HPP_
