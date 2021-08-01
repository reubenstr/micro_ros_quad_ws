// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quad_interfaces:msg/AuxServosParameters.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_PARAMETERS__BUILDER_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_PARAMETERS__BUILDER_HPP_

#include "quad_interfaces/msg/detail/aux_servos_parameters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace quad_interfaces
{

namespace msg
{

namespace builder
{

class Init_AuxServosParameters_ms_per_degree
{
public:
  explicit Init_AuxServosParameters_ms_per_degree(::quad_interfaces::msg::AuxServosParameters & msg)
  : msg_(msg)
  {}
  ::quad_interfaces::msg::AuxServosParameters ms_per_degree(::quad_interfaces::msg::AuxServosParameters::_ms_per_degree_type arg)
  {
    msg_.ms_per_degree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quad_interfaces::msg::AuxServosParameters msg_;
};

class Init_AuxServosParameters_calibration_angle_offset
{
public:
  explicit Init_AuxServosParameters_calibration_angle_offset(::quad_interfaces::msg::AuxServosParameters & msg)
  : msg_(msg)
  {}
  Init_AuxServosParameters_ms_per_degree calibration_angle_offset(::quad_interfaces::msg::AuxServosParameters::_calibration_angle_offset_type arg)
  {
    msg_.calibration_angle_offset = std::move(arg);
    return Init_AuxServosParameters_ms_per_degree(msg_);
  }

private:
  ::quad_interfaces::msg::AuxServosParameters msg_;
};

class Init_AuxServosParameters_max_angle
{
public:
  explicit Init_AuxServosParameters_max_angle(::quad_interfaces::msg::AuxServosParameters & msg)
  : msg_(msg)
  {}
  Init_AuxServosParameters_calibration_angle_offset max_angle(::quad_interfaces::msg::AuxServosParameters::_max_angle_type arg)
  {
    msg_.max_angle = std::move(arg);
    return Init_AuxServosParameters_calibration_angle_offset(msg_);
  }

private:
  ::quad_interfaces::msg::AuxServosParameters msg_;
};

class Init_AuxServosParameters_min_angle
{
public:
  explicit Init_AuxServosParameters_min_angle(::quad_interfaces::msg::AuxServosParameters & msg)
  : msg_(msg)
  {}
  Init_AuxServosParameters_max_angle min_angle(::quad_interfaces::msg::AuxServosParameters::_min_angle_type arg)
  {
    msg_.min_angle = std::move(arg);
    return Init_AuxServosParameters_max_angle(msg_);
  }

private:
  ::quad_interfaces::msg::AuxServosParameters msg_;
};

class Init_AuxServosParameters_pin
{
public:
  Init_AuxServosParameters_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuxServosParameters_min_angle pin(::quad_interfaces::msg::AuxServosParameters::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_AuxServosParameters_min_angle(msg_);
  }

private:
  ::quad_interfaces::msg::AuxServosParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quad_interfaces::msg::AuxServosParameters>()
{
  return quad_interfaces::msg::builder::Init_AuxServosParameters_pin();
}

}  // namespace quad_interfaces

#endif  // QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_PARAMETERS__BUILDER_HPP_
