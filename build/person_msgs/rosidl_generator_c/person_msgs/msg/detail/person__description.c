// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from person_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#include "person_msgs/msg/detail/person__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_person_msgs
const rosidl_type_hash_t *
person_msgs__msg__Person__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x11, 0x03, 0xb4, 0x90, 0x6d, 0xc3, 0x94,
      0x19, 0xe4, 0xce, 0x98, 0x22, 0xdf, 0xac, 0xdc,
      0x81, 0x67, 0x8c, 0xf6, 0x45, 0x2f, 0xba, 0xb6,
      0x58, 0xdd, 0x57, 0xea, 0x83, 0x3a, 0x49, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char person_msgs__msg__Person__TYPE_NAME[] = "person_msgs/msg/Person";

// Define type names, field names, and default values
static char person_msgs__msg__Person__FIELD_NAME__name[] = "name";
static char person_msgs__msg__Person__FIELD_NAME__age[] = "age";

static rosidl_runtime_c__type_description__Field person_msgs__msg__Person__FIELDS[] = {
  {
    {person_msgs__msg__Person__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {person_msgs__msg__Person__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
person_msgs__msg__Person__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {person_msgs__msg__Person__TYPE_NAME, 22, 22},
      {person_msgs__msg__Person__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "uint8 age";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
person_msgs__msg__Person__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {person_msgs__msg__Person__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 22, 22},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
person_msgs__msg__Person__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *person_msgs__msg__Person__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
