// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quad_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__BUILDER_HPP_

#include "quad_interfaces/msg/detail/emergency_stop__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace quad_interfaces
{

namespace msg
{

namespace builder
{

class Init_EmergencyStop_emergency_stop
{
public:
  Init_EmergencyStop_emergency_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::quad_interfaces::msg::EmergencyStop emergency_stop(::quad_interfaces::msg::EmergencyStop::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quad_interfaces::msg::EmergencyStop msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quad_interfaces::msg::EmergencyStop>()
{
  return quad_interfaces::msg::builder::Init_EmergencyStop_emergency_stop();
}

}  // namespace quad_interfaces

#endif  // QUAD_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
