// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_base_msgs:msg/TRVCommand.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BASE_MSGS__MSG__DETAIL__TRV_COMMAND__TRAITS_HPP_
#define DRIVE_BASE_MSGS__MSG__DETAIL__TRV_COMMAND__TRAITS_HPP_

#include "drive_base_msgs/msg/detail/trv_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "drive_base_msgs/msg/detail/command_header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drive_base_msgs::msg::TRVCommand>()
{
  return "drive_base_msgs::msg::TRVCommand";
}

template<>
inline const char * name<drive_base_msgs::msg::TRVCommand>()
{
  return "drive_base_msgs/msg/TRVCommand";
}

template<>
struct has_fixed_size<drive_base_msgs::msg::TRVCommand>
  : std::integral_constant<bool, has_fixed_size<drive_base_msgs::msg::CommandHeader>::value> {};

template<>
struct has_bounded_size<drive_base_msgs::msg::TRVCommand>
  : std::integral_constant<bool, has_bounded_size<drive_base_msgs::msg::CommandHeader>::value> {};

template<>
struct is_message<drive_base_msgs::msg::TRVCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_BASE_MSGS__MSG__DETAIL__TRV_COMMAND__TRAITS_HPP_
