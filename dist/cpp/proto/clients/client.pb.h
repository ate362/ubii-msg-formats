// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/clients/client.proto

#ifndef PROTOBUF_INCLUDED_proto_2fclients_2fclient_2eproto
#define PROTOBUF_INCLUDED_proto_2fclients_2fclient_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/devices/device.pb.h"
#include "proto/processing/processingModule.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fclients_2fclient_2eproto 

namespace protobuf_proto_2fclients_2fclient_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_proto_2fclients_2fclient_2eproto
namespace ubii {
namespace clients {
class Client;
class ClientDefaultTypeInternal;
extern ClientDefaultTypeInternal _Client_default_instance_;
class ClientList;
class ClientListDefaultTypeInternal;
extern ClientListDefaultTypeInternal _ClientList_default_instance_;
}  // namespace clients
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::clients::Client* Arena::CreateMaybeMessage<::ubii::clients::Client>(Arena*);
template<> ::ubii::clients::ClientList* Arena::CreateMaybeMessage<::ubii::clients::ClientList>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace clients {

enum Client_State {
  Client_State_ACTIVE = 0,
  Client_State_INACTIVE = 1,
  Client_State_UNAVAILABLE = 2,
  Client_State_Client_State_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Client_State_Client_State_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Client_State_IsValid(int value);
const Client_State Client_State_State_MIN = Client_State_ACTIVE;
const Client_State Client_State_State_MAX = Client_State_UNAVAILABLE;
const int Client_State_State_ARRAYSIZE = Client_State_State_MAX + 1;

const ::google::protobuf::EnumDescriptor* Client_State_descriptor();
inline const ::std::string& Client_State_Name(Client_State value) {
  return ::google::protobuf::internal::NameOfEnum(
    Client_State_descriptor(), value);
}
inline bool Client_State_Parse(
    const ::std::string& name, Client_State* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Client_State>(
    Client_State_descriptor(), name, value);
}
// ===================================================================

class Client : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.clients.Client) */ {
 public:
  Client();
  virtual ~Client();

  Client(const Client& from);

  inline Client& operator=(const Client& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Client(Client&& from) noexcept
    : Client() {
    *this = ::std::move(from);
  }

  inline Client& operator=(Client&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Client& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Client* internal_default_instance() {
    return reinterpret_cast<const Client*>(
               &_Client_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Client* other);
  friend void swap(Client& a, Client& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Client* New() const final {
    return CreateMaybeMessage<Client>(NULL);
  }

  Client* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Client>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Client& from);
  void MergeFrom(const Client& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Client* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Client_State State;
  static const State ACTIVE =
    Client_State_ACTIVE;
  static const State INACTIVE =
    Client_State_INACTIVE;
  static const State UNAVAILABLE =
    Client_State_UNAVAILABLE;
  static inline bool State_IsValid(int value) {
    return Client_State_IsValid(value);
  }
  static const State State_MIN =
    Client_State_State_MIN;
  static const State State_MAX =
    Client_State_State_MAX;
  static const int State_ARRAYSIZE =
    Client_State_State_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  State_descriptor() {
    return Client_State_descriptor();
  }
  static inline const ::std::string& State_Name(State value) {
    return Client_State_Name(value);
  }
  static inline bool State_Parse(const ::std::string& name,
      State* value) {
    return Client_State_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .ubii.devices.Device devices = 3;
  int devices_size() const;
  void clear_devices();
  static const int kDevicesFieldNumber = 3;
  ::ubii::devices::Device* mutable_devices(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::devices::Device >*
      mutable_devices();
  const ::ubii::devices::Device& devices(int index) const;
  ::ubii::devices::Device* add_devices();
  const ::google::protobuf::RepeatedPtrField< ::ubii::devices::Device >&
      devices() const;

  // repeated string tags = 4;
  int tags_size() const;
  void clear_tags();
  static const int kTagsFieldNumber = 4;
  const ::std::string& tags(int index) const;
  ::std::string* mutable_tags(int index);
  void set_tags(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_tags(int index, ::std::string&& value);
  #endif
  void set_tags(int index, const char* value);
  void set_tags(int index, const char* value, size_t size);
  ::std::string* add_tags();
  void add_tags(const ::std::string& value);
  #if LANG_CXX11
  void add_tags(::std::string&& value);
  #endif
  void add_tags(const char* value);
  void add_tags(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& tags() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_tags();

  // repeated .ubii.processing.ProcessingModule processing_modules = 6;
  int processing_modules_size() const;
  void clear_processing_modules();
  static const int kProcessingModulesFieldNumber = 6;
  ::ubii::processing::ProcessingModule* mutable_processing_modules(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >*
      mutable_processing_modules();
  const ::ubii::processing::ProcessingModule& processing_modules(int index) const;
  ::ubii::processing::ProcessingModule* add_processing_modules();
  const ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >&
      processing_modules() const;

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string description = 5;
  void clear_description();
  static const int kDescriptionFieldNumber = 5;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // string host_ip = 8;
  void clear_host_ip();
  static const int kHostIpFieldNumber = 8;
  const ::std::string& host_ip() const;
  void set_host_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_host_ip(::std::string&& value);
  #endif
  void set_host_ip(const char* value);
  void set_host_ip(const char* value, size_t size);
  ::std::string* mutable_host_ip();
  ::std::string* release_host_ip();
  void set_allocated_host_ip(::std::string* host_ip);

  // string metadata_json = 9;
  void clear_metadata_json();
  static const int kMetadataJsonFieldNumber = 9;
  const ::std::string& metadata_json() const;
  void set_metadata_json(const ::std::string& value);
  #if LANG_CXX11
  void set_metadata_json(::std::string&& value);
  #endif
  void set_metadata_json(const char* value);
  void set_metadata_json(const char* value, size_t size);
  ::std::string* mutable_metadata_json();
  ::std::string* release_metadata_json();
  void set_allocated_metadata_json(::std::string* metadata_json);

  // bool is_dedicated_processing_node = 7;
  void clear_is_dedicated_processing_node();
  static const int kIsDedicatedProcessingNodeFieldNumber = 7;
  bool is_dedicated_processing_node() const;
  void set_is_dedicated_processing_node(bool value);

  // .ubii.clients.Client.State state = 10;
  void clear_state();
  static const int kStateFieldNumber = 10;
  ::ubii::clients::Client_State state() const;
  void set_state(::ubii::clients::Client_State value);

  // @@protoc_insertion_point(class_scope:ubii.clients.Client)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::devices::Device > devices_;
  ::google::protobuf::RepeatedPtrField< ::std::string> tags_;
  ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule > processing_modules_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr host_ip_;
  ::google::protobuf::internal::ArenaStringPtr metadata_json_;
  bool is_dedicated_processing_node_;
  int state_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fclients_2fclient_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ClientList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.clients.ClientList) */ {
 public:
  ClientList();
  virtual ~ClientList();

  ClientList(const ClientList& from);

  inline ClientList& operator=(const ClientList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ClientList(ClientList&& from) noexcept
    : ClientList() {
    *this = ::std::move(from);
  }

  inline ClientList& operator=(ClientList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClientList* internal_default_instance() {
    return reinterpret_cast<const ClientList*>(
               &_ClientList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ClientList* other);
  friend void swap(ClientList& a, ClientList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClientList* New() const final {
    return CreateMaybeMessage<ClientList>(NULL);
  }

  ClientList* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ClientList>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ClientList& from);
  void MergeFrom(const ClientList& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ClientList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ubii.clients.Client elements = 1;
  int elements_size() const;
  void clear_elements();
  static const int kElementsFieldNumber = 1;
  ::ubii::clients::Client* mutable_elements(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::clients::Client >*
      mutable_elements();
  const ::ubii::clients::Client& elements(int index) const;
  ::ubii::clients::Client* add_elements();
  const ::google::protobuf::RepeatedPtrField< ::ubii::clients::Client >&
      elements() const;

  // @@protoc_insertion_point(class_scope:ubii.clients.ClientList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::clients::Client > elements_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fclients_2fclient_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Client

// string id = 1;
inline void Client::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Client::id() const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.id)
  return id_.GetNoArena();
}
inline void Client::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.clients.Client.id)
}
#if LANG_CXX11
inline void Client::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.clients.Client.id)
}
#endif
inline void Client::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.clients.Client.id)
}
inline void Client::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.clients.Client.id)
}
inline ::std::string* Client::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Client::release_id() {
  // @@protoc_insertion_point(field_release:ubii.clients.Client.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:ubii.clients.Client.id)
}

// string name = 2;
inline void Client::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Client::name() const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.name)
  return name_.GetNoArena();
}
inline void Client::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.clients.Client.name)
}
#if LANG_CXX11
inline void Client::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.clients.Client.name)
}
#endif
inline void Client::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.clients.Client.name)
}
inline void Client::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.clients.Client.name)
}
inline ::std::string* Client::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Client::release_name() {
  // @@protoc_insertion_point(field_release:ubii.clients.Client.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ubii.clients.Client.name)
}

// repeated .ubii.devices.Device devices = 3;
inline int Client::devices_size() const {
  return devices_.size();
}
inline ::ubii::devices::Device* Client::mutable_devices(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.devices)
  return devices_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::devices::Device >*
Client::mutable_devices() {
  // @@protoc_insertion_point(field_mutable_list:ubii.clients.Client.devices)
  return &devices_;
}
inline const ::ubii::devices::Device& Client::devices(int index) const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.devices)
  return devices_.Get(index);
}
inline ::ubii::devices::Device* Client::add_devices() {
  // @@protoc_insertion_point(field_add:ubii.clients.Client.devices)
  return devices_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::devices::Device >&
Client::devices() const {
  // @@protoc_insertion_point(field_list:ubii.clients.Client.devices)
  return devices_;
}

// repeated string tags = 4;
inline int Client::tags_size() const {
  return tags_.size();
}
inline void Client::clear_tags() {
  tags_.Clear();
}
inline const ::std::string& Client::tags(int index) const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.tags)
  return tags_.Get(index);
}
inline ::std::string* Client::mutable_tags(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.tags)
  return tags_.Mutable(index);
}
inline void Client::set_tags(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ubii.clients.Client.tags)
  tags_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Client::set_tags(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:ubii.clients.Client.tags)
  tags_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Client::set_tags(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ubii.clients.Client.tags)
}
inline void Client::set_tags(int index, const char* value, size_t size) {
  tags_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ubii.clients.Client.tags)
}
inline ::std::string* Client::add_tags() {
  // @@protoc_insertion_point(field_add_mutable:ubii.clients.Client.tags)
  return tags_.Add();
}
inline void Client::add_tags(const ::std::string& value) {
  tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ubii.clients.Client.tags)
}
#if LANG_CXX11
inline void Client::add_tags(::std::string&& value) {
  tags_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ubii.clients.Client.tags)
}
#endif
inline void Client::add_tags(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ubii.clients.Client.tags)
}
inline void Client::add_tags(const char* value, size_t size) {
  tags_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ubii.clients.Client.tags)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Client::tags() const {
  // @@protoc_insertion_point(field_list:ubii.clients.Client.tags)
  return tags_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Client::mutable_tags() {
  // @@protoc_insertion_point(field_mutable_list:ubii.clients.Client.tags)
  return &tags_;
}

// string description = 5;
inline void Client::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Client::description() const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.description)
  return description_.GetNoArena();
}
inline void Client::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.clients.Client.description)
}
#if LANG_CXX11
inline void Client::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.clients.Client.description)
}
#endif
inline void Client::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.clients.Client.description)
}
inline void Client::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.clients.Client.description)
}
inline ::std::string* Client::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Client::release_description() {
  // @@protoc_insertion_point(field_release:ubii.clients.Client.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:ubii.clients.Client.description)
}

// repeated .ubii.processing.ProcessingModule processing_modules = 6;
inline int Client::processing_modules_size() const {
  return processing_modules_.size();
}
inline ::ubii::processing::ProcessingModule* Client::mutable_processing_modules(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.processing_modules)
  return processing_modules_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >*
Client::mutable_processing_modules() {
  // @@protoc_insertion_point(field_mutable_list:ubii.clients.Client.processing_modules)
  return &processing_modules_;
}
inline const ::ubii::processing::ProcessingModule& Client::processing_modules(int index) const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.processing_modules)
  return processing_modules_.Get(index);
}
inline ::ubii::processing::ProcessingModule* Client::add_processing_modules() {
  // @@protoc_insertion_point(field_add:ubii.clients.Client.processing_modules)
  return processing_modules_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::processing::ProcessingModule >&
Client::processing_modules() const {
  // @@protoc_insertion_point(field_list:ubii.clients.Client.processing_modules)
  return processing_modules_;
}

// bool is_dedicated_processing_node = 7;
inline void Client::clear_is_dedicated_processing_node() {
  is_dedicated_processing_node_ = false;
}
inline bool Client::is_dedicated_processing_node() const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.is_dedicated_processing_node)
  return is_dedicated_processing_node_;
}
inline void Client::set_is_dedicated_processing_node(bool value) {
  
  is_dedicated_processing_node_ = value;
  // @@protoc_insertion_point(field_set:ubii.clients.Client.is_dedicated_processing_node)
}

// string host_ip = 8;
inline void Client::clear_host_ip() {
  host_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Client::host_ip() const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.host_ip)
  return host_ip_.GetNoArena();
}
inline void Client::set_host_ip(const ::std::string& value) {
  
  host_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.clients.Client.host_ip)
}
#if LANG_CXX11
inline void Client::set_host_ip(::std::string&& value) {
  
  host_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.clients.Client.host_ip)
}
#endif
inline void Client::set_host_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  host_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.clients.Client.host_ip)
}
inline void Client::set_host_ip(const char* value, size_t size) {
  
  host_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.clients.Client.host_ip)
}
inline ::std::string* Client::mutable_host_ip() {
  
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.host_ip)
  return host_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Client::release_host_ip() {
  // @@protoc_insertion_point(field_release:ubii.clients.Client.host_ip)
  
  return host_ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_host_ip(::std::string* host_ip) {
  if (host_ip != NULL) {
    
  } else {
    
  }
  host_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), host_ip);
  // @@protoc_insertion_point(field_set_allocated:ubii.clients.Client.host_ip)
}

// string metadata_json = 9;
inline void Client::clear_metadata_json() {
  metadata_json_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Client::metadata_json() const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.metadata_json)
  return metadata_json_.GetNoArena();
}
inline void Client::set_metadata_json(const ::std::string& value) {
  
  metadata_json_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.clients.Client.metadata_json)
}
#if LANG_CXX11
inline void Client::set_metadata_json(::std::string&& value) {
  
  metadata_json_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.clients.Client.metadata_json)
}
#endif
inline void Client::set_metadata_json(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  metadata_json_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.clients.Client.metadata_json)
}
inline void Client::set_metadata_json(const char* value, size_t size) {
  
  metadata_json_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.clients.Client.metadata_json)
}
inline ::std::string* Client::mutable_metadata_json() {
  
  // @@protoc_insertion_point(field_mutable:ubii.clients.Client.metadata_json)
  return metadata_json_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Client::release_metadata_json() {
  // @@protoc_insertion_point(field_release:ubii.clients.Client.metadata_json)
  
  return metadata_json_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Client::set_allocated_metadata_json(::std::string* metadata_json) {
  if (metadata_json != NULL) {
    
  } else {
    
  }
  metadata_json_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), metadata_json);
  // @@protoc_insertion_point(field_set_allocated:ubii.clients.Client.metadata_json)
}

// .ubii.clients.Client.State state = 10;
inline void Client::clear_state() {
  state_ = 0;
}
inline ::ubii::clients::Client_State Client::state() const {
  // @@protoc_insertion_point(field_get:ubii.clients.Client.state)
  return static_cast< ::ubii::clients::Client_State >(state_);
}
inline void Client::set_state(::ubii::clients::Client_State value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:ubii.clients.Client.state)
}

// -------------------------------------------------------------------

// ClientList

// repeated .ubii.clients.Client elements = 1;
inline int ClientList::elements_size() const {
  return elements_.size();
}
inline void ClientList::clear_elements() {
  elements_.Clear();
}
inline ::ubii::clients::Client* ClientList::mutable_elements(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.clients.ClientList.elements)
  return elements_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::clients::Client >*
ClientList::mutable_elements() {
  // @@protoc_insertion_point(field_mutable_list:ubii.clients.ClientList.elements)
  return &elements_;
}
inline const ::ubii::clients::Client& ClientList::elements(int index) const {
  // @@protoc_insertion_point(field_get:ubii.clients.ClientList.elements)
  return elements_.Get(index);
}
inline ::ubii::clients::Client* ClientList::add_elements() {
  // @@protoc_insertion_point(field_add:ubii.clients.ClientList.elements)
  return elements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::clients::Client >&
ClientList::elements() const {
  // @@protoc_insertion_point(field_list:ubii.clients.ClientList.elements)
  return elements_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace clients
}  // namespace ubii

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ubii::clients::Client_State> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ubii::clients::Client_State>() {
  return ::ubii::clients::Client_State_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fclients_2fclient_2eproto
