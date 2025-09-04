// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from live1288_service:srv/Live1288Service.idl
// generated code does not contain a copyright notice

#ifndef LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__BUILDER_HPP_
#define LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "live1288_service/srv/detail/live1288_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace live1288_service
{

namespace srv
{

namespace builder
{

class Init_Live1288Service_Request_input
{
public:
  Init_Live1288Service_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::live1288_service::srv::Live1288Service_Request input(::live1288_service::srv::Live1288Service_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live1288_service::srv::Live1288Service_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::live1288_service::srv::Live1288Service_Request>()
{
  return live1288_service::srv::builder::Init_Live1288Service_Request_input();
}

}  // namespace live1288_service


namespace live1288_service
{

namespace srv
{

namespace builder
{

class Init_Live1288Service_Response_number
{
public:
  explicit Init_Live1288Service_Response_number(::live1288_service::srv::Live1288Service_Response & msg)
  : msg_(msg)
  {}
  ::live1288_service::srv::Live1288Service_Response number(::live1288_service::srv::Live1288Service_Response::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::live1288_service::srv::Live1288Service_Response msg_;
};

class Init_Live1288Service_Response_output
{
public:
  Init_Live1288Service_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Live1288Service_Response_number output(::live1288_service::srv::Live1288Service_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return Init_Live1288Service_Response_number(msg_);
  }

private:
  ::live1288_service::srv::Live1288Service_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::live1288_service::srv::Live1288Service_Response>()
{
  return live1288_service::srv::builder::Init_Live1288Service_Response_output();
}

}  // namespace live1288_service

#endif  // LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__BUILDER_HPP_
