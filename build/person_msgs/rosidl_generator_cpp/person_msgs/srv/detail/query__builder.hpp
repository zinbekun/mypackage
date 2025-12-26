// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "person_msgs/srv/query.hpp"


#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "person_msgs/srv/detail/query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query_Request_name
{
public:
  Init_Query_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::person_msgs::srv::Query_Request name(::person_msgs::srv::Query_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query_Request>()
{
  return person_msgs::srv::builder::Init_Query_Request_name();
}

}  // namespace person_msgs


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query_Response_age
{
public:
  Init_Query_Response_age()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::person_msgs::srv::Query_Response age(::person_msgs::srv::Query_Response::_age_type arg)
  {
    msg_.age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query_Response>()
{
  return person_msgs::srv::builder::Init_Query_Response_age();
}

}  // namespace person_msgs


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query_Event_response
{
public:
  explicit Init_Query_Event_response(::person_msgs::srv::Query_Event & msg)
  : msg_(msg)
  {}
  ::person_msgs::srv::Query_Event response(::person_msgs::srv::Query_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query_Event msg_;
};

class Init_Query_Event_request
{
public:
  explicit Init_Query_Event_request(::person_msgs::srv::Query_Event & msg)
  : msg_(msg)
  {}
  Init_Query_Event_response request(::person_msgs::srv::Query_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Query_Event_response(msg_);
  }

private:
  ::person_msgs::srv::Query_Event msg_;
};

class Init_Query_Event_info
{
public:
  Init_Query_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Query_Event_request info(::person_msgs::srv::Query_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Query_Event_request(msg_);
  }

private:
  ::person_msgs::srv::Query_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query_Event>()
{
  return person_msgs::srv::builder::Init_Query_Event_info();
}

}  // namespace person_msgs

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_
