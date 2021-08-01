// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quad_interfaces:msg/AuxServos.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS__BUILDER_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS__BUILDER_HPP_

#include "quad_interfaces/msg/detail/aux_servos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace quad_interfaces
{

namespace msg
{

namespace builder
{

class Init_AuxServos_angle
{
public:
  explicit Init_AuxServos_angle(::quad_interfaces::msg::AuxServos & msg)
  : msg_(msg)
  {}
  ::quad_interfaces::msg::AuxServos angle(::quad_interfaces::msg::AuxServos::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quad_interfaces::msg::AuxServos msg_;
};

class Init_AuxServos_enable
{
public:
  Init_AuxServos_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuxServos_angle enable(::quad_interfaces::msg::AuxServos::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_AuxServos_angle(msg_);
  }

private:
  ::quad_interfaces::msg::AuxServos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quad_interfaces::msg::AuxServos>()
{
  return quad_interfaces::msg::builder::Init_AuxServos_enable();
}

}  // namespace quad_interfaces

#endif  // QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS__BUILDER_HPP_
