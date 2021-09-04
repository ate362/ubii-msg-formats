// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/devices/topicDemux.proto

#ifndef PROTOBUF_INCLUDED_proto_2fdevices_2ftopicDemux_2eproto
#define PROTOBUF_INCLUDED_proto_2fdevices_2ftopicDemux_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdevices_2ftopicDemux_2eproto 

namespace protobuf_proto_2fdevices_2ftopicDemux_2eproto {
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
}  // namespace protobuf_proto_2fdevices_2ftopicDemux_2eproto
namespace ubii {
namespace devices {
class TopicDemux;
class TopicDemuxDefaultTypeInternal;
extern TopicDemuxDefaultTypeInternal _TopicDemux_default_instance_;
class TopicDemuxList;
class TopicDemuxListDefaultTypeInternal;
extern TopicDemuxListDefaultTypeInternal _TopicDemuxList_default_instance_;
}  // namespace devices
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::devices::TopicDemux* Arena::CreateMaybeMessage<::ubii::devices::TopicDemux>(Arena*);
template<> ::ubii::devices::TopicDemuxList* Arena::CreateMaybeMessage<::ubii::devices::TopicDemuxList>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace devices {

// ===================================================================

class TopicDemux : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.devices.TopicDemux) */ {
 public:
  TopicDemux();
  virtual ~TopicDemux();

  TopicDemux(const TopicDemux& from);

  inline TopicDemux& operator=(const TopicDemux& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TopicDemux(TopicDemux&& from) noexcept
    : TopicDemux() {
    *this = ::std::move(from);
  }

  inline TopicDemux& operator=(TopicDemux&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TopicDemux& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TopicDemux* internal_default_instance() {
    return reinterpret_cast<const TopicDemux*>(
               &_TopicDemux_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TopicDemux* other);
  friend void swap(TopicDemux& a, TopicDemux& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TopicDemux* New() const final {
    return CreateMaybeMessage<TopicDemux>(NULL);
  }

  TopicDemux* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TopicDemux>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TopicDemux& from);
  void MergeFrom(const TopicDemux& from);
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
  void InternalSwap(TopicDemux* other);
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

  // string data_type = 3;
  void clear_data_type();
  static const int kDataTypeFieldNumber = 3;
  const ::std::string& data_type() const;
  void set_data_type(const ::std::string& value);
  #if LANG_CXX11
  void set_data_type(::std::string&& value);
  #endif
  void set_data_type(const char* value);
  void set_data_type(const char* value, size_t size);
  ::std::string* mutable_data_type();
  ::std::string* release_data_type();
  void set_allocated_data_type(::std::string* data_type);

  // string output_topic_format = 4;
  void clear_output_topic_format();
  static const int kOutputTopicFormatFieldNumber = 4;
  const ::std::string& output_topic_format() const;
  void set_output_topic_format(const ::std::string& value);
  #if LANG_CXX11
  void set_output_topic_format(::std::string&& value);
  #endif
  void set_output_topic_format(const char* value);
  void set_output_topic_format(const char* value, size_t size);
  ::std::string* mutable_output_topic_format();
  ::std::string* release_output_topic_format();
  void set_allocated_output_topic_format(::std::string* output_topic_format);

  // @@protoc_insertion_point(class_scope:ubii.devices.TopicDemux)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr data_type_;
  ::google::protobuf::internal::ArenaStringPtr output_topic_format_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TopicDemuxList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.devices.TopicDemuxList) */ {
 public:
  TopicDemuxList();
  virtual ~TopicDemuxList();

  TopicDemuxList(const TopicDemuxList& from);

  inline TopicDemuxList& operator=(const TopicDemuxList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TopicDemuxList(TopicDemuxList&& from) noexcept
    : TopicDemuxList() {
    *this = ::std::move(from);
  }

  inline TopicDemuxList& operator=(TopicDemuxList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TopicDemuxList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TopicDemuxList* internal_default_instance() {
    return reinterpret_cast<const TopicDemuxList*>(
               &_TopicDemuxList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(TopicDemuxList* other);
  friend void swap(TopicDemuxList& a, TopicDemuxList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TopicDemuxList* New() const final {
    return CreateMaybeMessage<TopicDemuxList>(NULL);
  }

  TopicDemuxList* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TopicDemuxList>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TopicDemuxList& from);
  void MergeFrom(const TopicDemuxList& from);
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
  void InternalSwap(TopicDemuxList* other);
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

  // repeated .ubii.devices.TopicDemux elements = 1;
  int elements_size() const;
  void clear_elements();
  static const int kElementsFieldNumber = 1;
  ::ubii::devices::TopicDemux* mutable_elements(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::devices::TopicDemux >*
      mutable_elements();
  const ::ubii::devices::TopicDemux& elements(int index) const;
  ::ubii::devices::TopicDemux* add_elements();
  const ::google::protobuf::RepeatedPtrField< ::ubii::devices::TopicDemux >&
      elements() const;

  // @@protoc_insertion_point(class_scope:ubii.devices.TopicDemuxList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::devices::TopicDemux > elements_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fdevices_2ftopicDemux_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TopicDemux

// string id = 1;
inline void TopicDemux::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TopicDemux::id() const {
  // @@protoc_insertion_point(field_get:ubii.devices.TopicDemux.id)
  return id_.GetNoArena();
}
inline void TopicDemux::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.devices.TopicDemux.id)
}
#if LANG_CXX11
inline void TopicDemux::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.devices.TopicDemux.id)
}
#endif
inline void TopicDemux::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.devices.TopicDemux.id)
}
inline void TopicDemux::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.devices.TopicDemux.id)
}
inline ::std::string* TopicDemux::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:ubii.devices.TopicDemux.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TopicDemux::release_id() {
  // @@protoc_insertion_point(field_release:ubii.devices.TopicDemux.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TopicDemux::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:ubii.devices.TopicDemux.id)
}

// string name = 2;
inline void TopicDemux::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TopicDemux::name() const {
  // @@protoc_insertion_point(field_get:ubii.devices.TopicDemux.name)
  return name_.GetNoArena();
}
inline void TopicDemux::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.devices.TopicDemux.name)
}
#if LANG_CXX11
inline void TopicDemux::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.devices.TopicDemux.name)
}
#endif
inline void TopicDemux::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.devices.TopicDemux.name)
}
inline void TopicDemux::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.devices.TopicDemux.name)
}
inline ::std::string* TopicDemux::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ubii.devices.TopicDemux.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TopicDemux::release_name() {
  // @@protoc_insertion_point(field_release:ubii.devices.TopicDemux.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TopicDemux::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ubii.devices.TopicDemux.name)
}

// string data_type = 3;
inline void TopicDemux::clear_data_type() {
  data_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TopicDemux::data_type() const {
  // @@protoc_insertion_point(field_get:ubii.devices.TopicDemux.data_type)
  return data_type_.GetNoArena();
}
inline void TopicDemux::set_data_type(const ::std::string& value) {
  
  data_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.devices.TopicDemux.data_type)
}
#if LANG_CXX11
inline void TopicDemux::set_data_type(::std::string&& value) {
  
  data_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.devices.TopicDemux.data_type)
}
#endif
inline void TopicDemux::set_data_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.devices.TopicDemux.data_type)
}
inline void TopicDemux::set_data_type(const char* value, size_t size) {
  
  data_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.devices.TopicDemux.data_type)
}
inline ::std::string* TopicDemux::mutable_data_type() {
  
  // @@protoc_insertion_point(field_mutable:ubii.devices.TopicDemux.data_type)
  return data_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TopicDemux::release_data_type() {
  // @@protoc_insertion_point(field_release:ubii.devices.TopicDemux.data_type)
  
  return data_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TopicDemux::set_allocated_data_type(::std::string* data_type) {
  if (data_type != NULL) {
    
  } else {
    
  }
  data_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data_type);
  // @@protoc_insertion_point(field_set_allocated:ubii.devices.TopicDemux.data_type)
}

// string output_topic_format = 4;
inline void TopicDemux::clear_output_topic_format() {
  output_topic_format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TopicDemux::output_topic_format() const {
  // @@protoc_insertion_point(field_get:ubii.devices.TopicDemux.output_topic_format)
  return output_topic_format_.GetNoArena();
}
inline void TopicDemux::set_output_topic_format(const ::std::string& value) {
  
  output_topic_format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.devices.TopicDemux.output_topic_format)
}
#if LANG_CXX11
inline void TopicDemux::set_output_topic_format(::std::string&& value) {
  
  output_topic_format_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.devices.TopicDemux.output_topic_format)
}
#endif
inline void TopicDemux::set_output_topic_format(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  output_topic_format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.devices.TopicDemux.output_topic_format)
}
inline void TopicDemux::set_output_topic_format(const char* value, size_t size) {
  
  output_topic_format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.devices.TopicDemux.output_topic_format)
}
inline ::std::string* TopicDemux::mutable_output_topic_format() {
  
  // @@protoc_insertion_point(field_mutable:ubii.devices.TopicDemux.output_topic_format)
  return output_topic_format_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TopicDemux::release_output_topic_format() {
  // @@protoc_insertion_point(field_release:ubii.devices.TopicDemux.output_topic_format)
  
  return output_topic_format_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TopicDemux::set_allocated_output_topic_format(::std::string* output_topic_format) {
  if (output_topic_format != NULL) {
    
  } else {
    
  }
  output_topic_format_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), output_topic_format);
  // @@protoc_insertion_point(field_set_allocated:ubii.devices.TopicDemux.output_topic_format)
}

// -------------------------------------------------------------------

// TopicDemuxList

// repeated .ubii.devices.TopicDemux elements = 1;
inline int TopicDemuxList::elements_size() const {
  return elements_.size();
}
inline void TopicDemuxList::clear_elements() {
  elements_.Clear();
}
inline ::ubii::devices::TopicDemux* TopicDemuxList::mutable_elements(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.devices.TopicDemuxList.elements)
  return elements_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::devices::TopicDemux >*
TopicDemuxList::mutable_elements() {
  // @@protoc_insertion_point(field_mutable_list:ubii.devices.TopicDemuxList.elements)
  return &elements_;
}
inline const ::ubii::devices::TopicDemux& TopicDemuxList::elements(int index) const {
  // @@protoc_insertion_point(field_get:ubii.devices.TopicDemuxList.elements)
  return elements_.Get(index);
}
inline ::ubii::devices::TopicDemux* TopicDemuxList::add_elements() {
  // @@protoc_insertion_point(field_add:ubii.devices.TopicDemuxList.elements)
  return elements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::devices::TopicDemux >&
TopicDemuxList::elements() const {
  // @@protoc_insertion_point(field_list:ubii.devices.TopicDemuxList.elements)
  return elements_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace devices
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fdevices_2ftopicDemux_2eproto
