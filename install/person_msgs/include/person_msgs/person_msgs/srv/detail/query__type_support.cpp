// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "person_msgs/srv/detail/query__functions.h"
#include "person_msgs/srv/detail/query__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace person_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Query_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) person_msgs::srv::Query_Request(_init);
}

void Query_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<person_msgs::srv::Query_Request *>(message_memory);
  typed_message->~Query_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Query_Request_message_member_array[1] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(person_msgs::srv::Query_Request, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Query_Request_message_members = {
  "person_msgs::srv",  // message namespace
  "Query_Request",  // message name
  1,  // number of fields
  sizeof(person_msgs::srv::Query_Request),
  false,  // has_any_key_member_
  Query_Request_message_member_array,  // message members
  Query_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Query_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Query_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Query_Request_message_members,
  get_message_typesupport_handle_function,
  &person_msgs__srv__Query_Request__get_type_hash,
  &person_msgs__srv__Query_Request__get_type_description,
  &person_msgs__srv__Query_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace person_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<person_msgs::srv::Query_Request>()
{
  return &::person_msgs::srv::rosidl_typesupport_introspection_cpp::Query_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, person_msgs, srv, Query_Request)() {
  return &::person_msgs::srv::rosidl_typesupport_introspection_cpp::Query_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "person_msgs/srv/detail/query__functions.h"
// already included above
// #include "person_msgs/srv/detail/query__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace person_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Query_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) person_msgs::srv::Query_Response(_init);
}

void Query_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<person_msgs::srv::Query_Response *>(message_memory);
  typed_message->~Query_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Query_Response_message_member_array[1] = {
  {
    "now",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(person_msgs::srv::Query_Response, now),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Query_Response_message_members = {
  "person_msgs::srv",  // message namespace
  "Query_Response",  // message name
  1,  // number of fields
  sizeof(person_msgs::srv::Query_Response),
  false,  // has_any_key_member_
  Query_Response_message_member_array,  // message members
  Query_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Query_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Query_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Query_Response_message_members,
  get_message_typesupport_handle_function,
  &person_msgs__srv__Query_Response__get_type_hash,
  &person_msgs__srv__Query_Response__get_type_description,
  &person_msgs__srv__Query_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace person_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<person_msgs::srv::Query_Response>()
{
  return &::person_msgs::srv::rosidl_typesupport_introspection_cpp::Query_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, person_msgs, srv, Query_Response)() {
  return &::person_msgs::srv::rosidl_typesupport_introspection_cpp::Query_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "person_msgs/srv/detail/query__functions.h"
// already included above
// #include "person_msgs/srv/detail/query__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace person_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Query_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) person_msgs::srv::Query_Event(_init);
}

void Query_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<person_msgs::srv::Query_Event *>(message_memory);
  typed_message->~Query_Event();
}

size_t size_function__Query_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<person_msgs::srv::Query_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Query_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<person_msgs::srv::Query_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__Query_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<person_msgs::srv::Query_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__Query_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const person_msgs::srv::Query_Request *>(
    get_const_function__Query_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<person_msgs::srv::Query_Request *>(untyped_value);
  value = item;
}

void assign_function__Query_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<person_msgs::srv::Query_Request *>(
    get_function__Query_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const person_msgs::srv::Query_Request *>(untyped_value);
  item = value;
}

void resize_function__Query_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<person_msgs::srv::Query_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Query_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<person_msgs::srv::Query_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Query_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<person_msgs::srv::Query_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__Query_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<person_msgs::srv::Query_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__Query_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const person_msgs::srv::Query_Response *>(
    get_const_function__Query_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<person_msgs::srv::Query_Response *>(untyped_value);
  value = item;
}

void assign_function__Query_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<person_msgs::srv::Query_Response *>(
    get_function__Query_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const person_msgs::srv::Query_Response *>(untyped_value);
  item = value;
}

void resize_function__Query_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<person_msgs::srv::Query_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Query_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(person_msgs::srv::Query_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<person_msgs::srv::Query_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(person_msgs::srv::Query_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__Query_Event__request,  // size() function pointer
    get_const_function__Query_Event__request,  // get_const(index) function pointer
    get_function__Query_Event__request,  // get(index) function pointer
    fetch_function__Query_Event__request,  // fetch(index, &value) function pointer
    assign_function__Query_Event__request,  // assign(index, value) function pointer
    resize_function__Query_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<person_msgs::srv::Query_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(person_msgs::srv::Query_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__Query_Event__response,  // size() function pointer
    get_const_function__Query_Event__response,  // get_const(index) function pointer
    get_function__Query_Event__response,  // get(index) function pointer
    fetch_function__Query_Event__response,  // fetch(index, &value) function pointer
    assign_function__Query_Event__response,  // assign(index, value) function pointer
    resize_function__Query_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Query_Event_message_members = {
  "person_msgs::srv",  // message namespace
  "Query_Event",  // message name
  3,  // number of fields
  sizeof(person_msgs::srv::Query_Event),
  false,  // has_any_key_member_
  Query_Event_message_member_array,  // message members
  Query_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  Query_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Query_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Query_Event_message_members,
  get_message_typesupport_handle_function,
  &person_msgs__srv__Query_Event__get_type_hash,
  &person_msgs__srv__Query_Event__get_type_description,
  &person_msgs__srv__Query_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace person_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<person_msgs::srv::Query_Event>()
{
  return &::person_msgs::srv::rosidl_typesupport_introspection_cpp::Query_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, person_msgs, srv, Query_Event)() {
  return &::person_msgs::srv::rosidl_typesupport_introspection_cpp::Query_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "person_msgs/srv/detail/query__functions.h"
// already included above
// #include "person_msgs/srv/detail/query__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace person_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Query_service_members = {
  "person_msgs::srv",  // service namespace
  "Query",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<person_msgs::srv::Query>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t Query_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Query_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<person_msgs::srv::Query_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<person_msgs::srv::Query_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<person_msgs::srv::Query_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<person_msgs::srv::Query>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<person_msgs::srv::Query>,
  &person_msgs__srv__Query__get_type_hash,
  &person_msgs__srv__Query__get_type_description,
  &person_msgs__srv__Query__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace person_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<person_msgs::srv::Query>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::person_msgs::srv::rosidl_typesupport_introspection_cpp::Query_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::person_msgs::srv::Query_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::person_msgs::srv::Query_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::person_msgs::srv::Query_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, person_msgs, srv, Query)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<person_msgs::srv::Query>();
}

#ifdef __cplusplus
}
#endif
