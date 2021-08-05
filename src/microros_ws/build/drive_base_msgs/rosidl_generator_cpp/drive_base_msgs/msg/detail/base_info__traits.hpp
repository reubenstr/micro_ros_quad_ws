// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_base_msgs:msg/BaseInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BASE_MSGS__MSG__DETAIL__BASE_INFO__TRAITS_HPP_
#define DRIVE_BASE_MSGS__MSG__DETAIL__BASE_INFO__TRAITS_HPP_

#include "drive_base_msgs/msg/detail/base_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drive_base_msgs::msg::BaseInfo>()
{
  return "drive_base_msgs::msg::BaseInfo";
}

template<>
inline const char * name<drive_base_msgs::msg::BaseInfo>()
{
  return "drive_base_msgs/msg/BaseInfo";
}

template<>
struct has_fixed_size<drive_base_msgs::msg::BaseInfo>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<drive_base_msgs::msg::BaseInfo>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<drive_base_msgs::msg::BaseInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_BASE_MSGS__MSG__DETAIL__BASE_INFO__TRAITS_HPP_
