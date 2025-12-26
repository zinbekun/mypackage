// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "person_msgs/srv/query.hpp"


#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__TRAITS_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "person_msgs/srv/detail/query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace person_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Request & msg, bool use_flow_style = false)
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

}  // namespace person_msgs

namespace rosidl_generator_traits
{

[[deprecated("use person_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const person_msgs::srv::Query_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  person_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use person_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const person_msgs::srv::Query_Request & msg)
{
  return person_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<person_msgs::srv::Query_Request>()
{
  return "person_msgs::srv::Query_Request";
}

template<>
inline const char * name<person_msgs::srv::Query_Request>()
{
  return "person_msgs/srv/Query_Request";
}

template<>
struct has_fixed_size<person_msgs::srv::Query_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msgs::srv::Query_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<person_msgs::srv::Query_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace person_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: now
  {
    out << "now: ";
    rosidl_generator_traits::value_to_yaml(msg.now, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: now
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "now: ";
    rosidl_generator_traits::value_to_yaml(msg.now, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Response & msg, bool use_flow_style = false)
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

}  // namespace person_msgs

namespace rosidl_generator_traits
{

[[deprecated("use person_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const person_msgs::srv::Query_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  person_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use person_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const person_msgs::srv::Query_Response & msg)
{
  return person_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<person_msgs::srv::Query_Response>()
{
  return "person_msgs::srv::Query_Response";
}

template<>
inline const char * name<person_msgs::srv::Query_Response>()
{
  return "person_msgs/srv/Query_Response";
}

template<>
struct has_fixed_size<person_msgs::srv::Query_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msgs::srv::Query_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<person_msgs::srv::Query_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace person_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Query_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Query_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Query_Event & msg, bool use_flow_style = false)
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

}  // namespace person_msgs

namespace rosidl_generator_traits
{

[[deprecated("use person_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const person_msgs::srv::Query_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  person_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use person_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const person_msgs::srv::Query_Event & msg)
{
  return person_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<person_msgs::srv::Query_Event>()
{
  return "person_msgs::srv::Query_Event";
}

template<>
inline const char * name<person_msgs::srv::Query_Event>()
{
  return "person_msgs/srv/Query_Event";
}

template<>
struct has_fixed_size<person_msgs::srv::Query_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msgs::srv::Query_Event>
  : std::integral_constant<bool, has_bounded_size<person_msgs::srv::Query_Request>::value && has_bounded_size<person_msgs::srv::Query_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<person_msgs::srv::Query_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query>()
{
  return "person_msgs::srv::Query";
}

template<>
inline const char * name<person_msgs::srv::Query>()
{
  return "person_msgs/srv/Query";
}

template<>
struct has_fixed_size<person_msgs::srv::Query>
  : std::integral_constant<
    bool,
    has_fixed_size<person_msgs::srv::Query_Request>::value &&
    has_fixed_size<person_msgs::srv::Query_Response>::value
  >
{
};

template<>
struct has_bounded_size<person_msgs::srv::Query>
  : std::integral_constant<
    bool,
    has_bounded_size<person_msgs::srv::Query_Request>::value &&
    has_bounded_size<person_msgs::srv::Query_Response>::value
  >
{
};

template<>
struct is_service<person_msgs::srv::Query>
  : std::true_type
{
};

template<>
struct is_service_request<person_msgs::srv::Query_Request>
  : std::true_type
{
};

template<>
struct is_service_response<person_msgs::srv::Query_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__TRAITS_HPP_
