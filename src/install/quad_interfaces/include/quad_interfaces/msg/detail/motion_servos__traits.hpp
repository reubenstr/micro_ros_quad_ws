// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__TRAITS_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__TRAITS_HPP_

#include "quad_interfaces/msg/detail/motion_servos__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<quad_interfaces::msg::MotionServos>()
{
  return "quad_interfaces::msg::MotionServos";
}

template<>
inline const char * name<quad_interfaces::msg::MotionServos>()
{
  return "quad_interfaces/msg/MotionServos";
}

template<>
struct has_fixed_size<quad_interfaces::msg::MotionServos>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quad_interfaces::msg::MotionServos>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quad_interfaces::msg::MotionServos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__TRAITS_HPP_
