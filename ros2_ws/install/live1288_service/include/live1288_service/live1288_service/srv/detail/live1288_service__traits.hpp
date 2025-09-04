// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from live1288_service:srv/Live1288Service.idl
// generated code does not contain a copyright notice

#ifndef LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__TRAITS_HPP_
#define LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "live1288_service/srv/detail/live1288_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace live1288_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const Live1288Service_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Live1288Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Live1288Service_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace live1288_service

namespace rosidl_generator_traits
{

[[deprecated("use live1288_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const live1288_service::srv::Live1288Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  live1288_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live1288_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const live1288_service::srv::Live1288Service_Request & msg)
{
  return live1288_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<live1288_service::srv::Live1288Service_Request>()
{
  return "live1288_service::srv::Live1288Service_Request";
}

template<>
inline const char * name<live1288_service::srv::Live1288Service_Request>()
{
  return "live1288_service/srv/Live1288Service_Request";
}

template<>
struct has_fixed_size<live1288_service::srv::Live1288Service_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live1288_service::srv::Live1288Service_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live1288_service::srv::Live1288Service_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace live1288_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const Live1288Service_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: output
  {
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << ", ";
  }

  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Live1288Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << "\n";
  }

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Live1288Service_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace live1288_service

namespace rosidl_generator_traits
{

[[deprecated("use live1288_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const live1288_service::srv::Live1288Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  live1288_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use live1288_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const live1288_service::srv::Live1288Service_Response & msg)
{
  return live1288_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<live1288_service::srv::Live1288Service_Response>()
{
  return "live1288_service::srv::Live1288Service_Response";
}

template<>
inline const char * name<live1288_service::srv::Live1288Service_Response>()
{
  return "live1288_service/srv/Live1288Service_Response";
}

template<>
struct has_fixed_size<live1288_service::srv::Live1288Service_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<live1288_service::srv::Live1288Service_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<live1288_service::srv::Live1288Service_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<live1288_service::srv::Live1288Service>()
{
  return "live1288_service::srv::Live1288Service";
}

template<>
inline const char * name<live1288_service::srv::Live1288Service>()
{
  return "live1288_service/srv/Live1288Service";
}

template<>
struct has_fixed_size<live1288_service::srv::Live1288Service>
  : std::integral_constant<
    bool,
    has_fixed_size<live1288_service::srv::Live1288Service_Request>::value &&
    has_fixed_size<live1288_service::srv::Live1288Service_Response>::value
  >
{
};

template<>
struct has_bounded_size<live1288_service::srv::Live1288Service>
  : std::integral_constant<
    bool,
    has_bounded_size<live1288_service::srv::Live1288Service_Request>::value &&
    has_bounded_size<live1288_service::srv::Live1288Service_Response>::value
  >
{
};

template<>
struct is_service<live1288_service::srv::Live1288Service>
  : std::true_type
{
};

template<>
struct is_service_request<live1288_service::srv::Live1288Service_Request>
  : std::true_type
{
};

template<>
struct is_service_response<live1288_service::srv::Live1288Service_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__TRAITS_HPP_
