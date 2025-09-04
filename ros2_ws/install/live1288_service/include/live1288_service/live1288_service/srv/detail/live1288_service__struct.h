// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from live1288_service:srv/Live1288Service.idl
// generated code does not contain a copyright notice

#ifndef LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__STRUCT_H_
#define LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Live1288Service in the package live1288_service.
typedef struct live1288_service__srv__Live1288Service_Request
{
  rosidl_runtime_c__String input;
} live1288_service__srv__Live1288Service_Request;

// Struct for a sequence of live1288_service__srv__Live1288Service_Request.
typedef struct live1288_service__srv__Live1288Service_Request__Sequence
{
  live1288_service__srv__Live1288Service_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live1288_service__srv__Live1288Service_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Live1288Service in the package live1288_service.
typedef struct live1288_service__srv__Live1288Service_Response
{
  rosidl_runtime_c__String output;
  double number;
} live1288_service__srv__Live1288Service_Response;

// Struct for a sequence of live1288_service__srv__Live1288Service_Response.
typedef struct live1288_service__srv__Live1288Service_Response__Sequence
{
  live1288_service__srv__Live1288Service_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} live1288_service__srv__Live1288Service_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIVE1288_SERVICE__SRV__DETAIL__LIVE1288_SERVICE__STRUCT_H_
