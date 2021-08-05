// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__BUILDER_HPP_

#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace builder
{

class Init_Primitive_nested_test
{
public:
  explicit Init_Primitive_nested_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive nested_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_nested_test_type arg)
  {
    msg_.nested_test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint64_array_test
{
public:
  explicit Init_Primitive_uint64_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_nested_test uint64_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint64_array_test_type arg)
  {
    msg_.uint64_array_test = std::move(arg);
    return Init_Primitive_nested_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint64_test
{
public:
  explicit Init_Primitive_uint64_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint64_array_test uint64_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint64_test_type arg)
  {
    msg_.uint64_test = std::move(arg);
    return Init_Primitive_uint64_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int64_array_test
{
public:
  explicit Init_Primitive_int64_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint64_test int64_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int64_array_test_type arg)
  {
    msg_.int64_array_test = std::move(arg);
    return Init_Primitive_uint64_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int64_test
{
public:
  explicit Init_Primitive_int64_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int64_array_test int64_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int64_test_type arg)
  {
    msg_.int64_test = std::move(arg);
    return Init_Primitive_int64_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint32_array_test
{
public:
  explicit Init_Primitive_uint32_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int64_test uint32_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint32_array_test_type arg)
  {
    msg_.uint32_array_test = std::move(arg);
    return Init_Primitive_int64_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint32_test
{
public:
  explicit Init_Primitive_uint32_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint32_array_test uint32_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint32_test_type arg)
  {
    msg_.uint32_test = std::move(arg);
    return Init_Primitive_uint32_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int32_array_test
{
public:
  explicit Init_Primitive_int32_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint32_test int32_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int32_array_test_type arg)
  {
    msg_.int32_array_test = std::move(arg);
    return Init_Primitive_uint32_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int32_test
{
public:
  explicit Init_Primitive_int32_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int32_array_test int32_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int32_test_type arg)
  {
    msg_.int32_test = std::move(arg);
    return Init_Primitive_int32_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint16_array_test
{
public:
  explicit Init_Primitive_uint16_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int32_test uint16_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint16_array_test_type arg)
  {
    msg_.uint16_array_test = std::move(arg);
    return Init_Primitive_int32_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint16_test
{
public:
  explicit Init_Primitive_uint16_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint16_array_test uint16_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint16_test_type arg)
  {
    msg_.uint16_test = std::move(arg);
    return Init_Primitive_uint16_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int16_array_test
{
public:
  explicit Init_Primitive_int16_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint16_test int16_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int16_array_test_type arg)
  {
    msg_.int16_array_test = std::move(arg);
    return Init_Primitive_uint16_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int16_test
{
public:
  explicit Init_Primitive_int16_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int16_array_test int16_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int16_test_type arg)
  {
    msg_.int16_test = std::move(arg);
    return Init_Primitive_int16_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint8_array_test
{
public:
  explicit Init_Primitive_uint8_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int16_test uint8_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint8_array_test_type arg)
  {
    msg_.uint8_array_test = std::move(arg);
    return Init_Primitive_int16_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_uint8_test
{
public:
  explicit Init_Primitive_uint8_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint8_array_test uint8_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_uint8_test_type arg)
  {
    msg_.uint8_test = std::move(arg);
    return Init_Primitive_uint8_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int8_array_test
{
public:
  explicit Init_Primitive_int8_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_uint8_test int8_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int8_array_test_type arg)
  {
    msg_.int8_array_test = std::move(arg);
    return Init_Primitive_uint8_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_int8_test
{
public:
  explicit Init_Primitive_int8_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int8_array_test int8_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_int8_test_type arg)
  {
    msg_.int8_test = std::move(arg);
    return Init_Primitive_int8_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_float64_array_test
{
public:
  explicit Init_Primitive_float64_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_int8_test float64_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_float64_array_test_type arg)
  {
    msg_.float64_array_test = std::move(arg);
    return Init_Primitive_int8_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_double_test
{
public:
  explicit Init_Primitive_double_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_float64_array_test double_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_double_test_type arg)
  {
    msg_.double_test = std::move(arg);
    return Init_Primitive_float64_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_float32_array_test
{
public:
  explicit Init_Primitive_float32_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_double_test float32_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_float32_array_test_type arg)
  {
    msg_.float32_array_test = std::move(arg);
    return Init_Primitive_double_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_float32_test
{
public:
  explicit Init_Primitive_float32_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_float32_array_test float32_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_float32_test_type arg)
  {
    msg_.float32_test = std::move(arg);
    return Init_Primitive_float32_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_char_array_test
{
public:
  explicit Init_Primitive_char_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_float32_test char_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_char_array_test_type arg)
  {
    msg_.char_array_test = std::move(arg);
    return Init_Primitive_float32_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_char_test
{
public:
  explicit Init_Primitive_char_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_char_array_test char_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_char_test_type arg)
  {
    msg_.char_test = std::move(arg);
    return Init_Primitive_char_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_byte_array_test
{
public:
  explicit Init_Primitive_byte_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_char_test byte_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_byte_array_test_type arg)
  {
    msg_.byte_array_test = std::move(arg);
    return Init_Primitive_char_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_byte_test
{
public:
  explicit Init_Primitive_byte_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_byte_array_test byte_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_byte_test_type arg)
  {
    msg_.byte_test = std::move(arg);
    return Init_Primitive_byte_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_bool_array_test
{
public:
  explicit Init_Primitive_bool_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive & msg)
  : msg_(msg)
  {}
  Init_Primitive_byte_test bool_array_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_bool_array_test_type arg)
  {
    msg_.bool_array_test = std::move(arg);
    return Init_Primitive_byte_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

class Init_Primitive_bool_test
{
public:
  Init_Primitive_bool_test()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Primitive_bool_array_test bool_test(::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive::_bool_test_type arg)
  {
    msg_.bool_test = std::move(arg);
    return Init_Primitive_bool_array_test(msg_);
  }

private:
  ::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_microxrcedds_test_msg::msg::Primitive>()
{
  return rosidl_typesupport_microxrcedds_test_msg::msg::builder::Init_Primitive_bool_test();
}

}  // namespace rosidl_typesupport_microxrcedds_test_msg

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__BUILDER_HPP_
