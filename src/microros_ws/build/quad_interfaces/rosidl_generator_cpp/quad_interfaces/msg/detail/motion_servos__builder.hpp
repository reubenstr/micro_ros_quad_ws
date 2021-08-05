// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__BUILDER_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__BUILDER_HPP_

#include "quad_interfaces/msg/detail/motion_servos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace quad_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotionServos_angle
{
public:
  explicit Init_MotionServos_angle(::quad_interfaces::msg::MotionServos & msg)
  : msg_(msg)
  {}
  ::quad_interfaces::msg::MotionServos angle(::quad_interfaces::msg::MotionServos::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quad_interfaces::msg::MotionServos msg_;
};

class Init_MotionServos_enable
{
public:
  Init_MotionServos_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionServos_angle enable(::quad_interfaces::msg::MotionServos::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_MotionServos_angle(msg_);
  }

private:
  ::quad_interfaces::msg::MotionServos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quad_interfaces::msg::MotionServos>()
{
  return quad_interfaces::msg::builder::Init_MotionServos_enable();
}

}  // namespace quad_interfaces

#endif  // QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS__BUILDER_HPP_
