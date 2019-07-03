// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/sessions/ioMapping.proto

#ifndef PROTOBUF_INCLUDED_proto_2fsessions_2fioMapping_2eproto
#define PROTOBUF_INCLUDED_proto_2fsessions_2fioMapping_2eproto

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
#include "proto/sessions/interactionInputMapping.pb.h"
#include "proto/sessions/interactionOutputMapping.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fsessions_2fioMapping_2eproto 

namespace protobuf_proto_2fsessions_2fioMapping_2eproto {
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
}  // namespace protobuf_proto_2fsessions_2fioMapping_2eproto
namespace ubii {
namespace sessions {
class IOMapping;
class IOMappingDefaultTypeInternal;
extern IOMappingDefaultTypeInternal _IOMapping_default_instance_;
class IOMappingList;
class IOMappingListDefaultTypeInternal;
extern IOMappingListDefaultTypeInternal _IOMappingList_default_instance_;
}  // namespace sessions
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::sessions::IOMapping* Arena::CreateMaybeMessage<::ubii::sessions::IOMapping>(Arena*);
template<> ::ubii::sessions::IOMappingList* Arena::CreateMaybeMessage<::ubii::sessions::IOMappingList>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace sessions {

// ===================================================================

class IOMapping : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.sessions.IOMapping) */ {
 public:
  IOMapping();
  virtual ~IOMapping();

  IOMapping(const IOMapping& from);

  inline IOMapping& operator=(const IOMapping& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  IOMapping(IOMapping&& from) noexcept
    : IOMapping() {
    *this = ::std::move(from);
  }

  inline IOMapping& operator=(IOMapping&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const IOMapping& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const IOMapping* internal_default_instance() {
    return reinterpret_cast<const IOMapping*>(
               &_IOMapping_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(IOMapping* other);
  friend void swap(IOMapping& a, IOMapping& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline IOMapping* New() const final {
    return CreateMaybeMessage<IOMapping>(NULL);
  }

  IOMapping* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<IOMapping>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const IOMapping& from);
  void MergeFrom(const IOMapping& from);
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
  void InternalSwap(IOMapping* other);
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

  // repeated .ubii.sessions.InteractionInputMapping input_mappings = 2;
  int input_mappings_size() const;
  void clear_input_mappings();
  static const int kInputMappingsFieldNumber = 2;
  ::ubii::sessions::InteractionInputMapping* mutable_input_mappings(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >*
      mutable_input_mappings();
  const ::ubii::sessions::InteractionInputMapping& input_mappings(int index) const;
  ::ubii::sessions::InteractionInputMapping* add_input_mappings();
  const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >&
      input_mappings() const;

  // repeated .ubii.sessions.InteractionOutputMapping output_mappings = 3;
  int output_mappings_size() const;
  void clear_output_mappings();
  static const int kOutputMappingsFieldNumber = 3;
  ::ubii::sessions::InteractionOutputMapping* mutable_output_mappings(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionOutputMapping >*
      mutable_output_mappings();
  const ::ubii::sessions::InteractionOutputMapping& output_mappings(int index) const;
  ::ubii::sessions::InteractionOutputMapping* add_output_mappings();
  const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionOutputMapping >&
      output_mappings() const;

  // string interaction_id = 1;
  void clear_interaction_id();
  static const int kInteractionIdFieldNumber = 1;
  const ::std::string& interaction_id() const;
  void set_interaction_id(const ::std::string& value);
  #if LANG_CXX11
  void set_interaction_id(::std::string&& value);
  #endif
  void set_interaction_id(const char* value);
  void set_interaction_id(const char* value, size_t size);
  ::std::string* mutable_interaction_id();
  ::std::string* release_interaction_id();
  void set_allocated_interaction_id(::std::string* interaction_id);

  // @@protoc_insertion_point(class_scope:ubii.sessions.IOMapping)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping > input_mappings_;
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionOutputMapping > output_mappings_;
  ::google::protobuf::internal::ArenaStringPtr interaction_id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fsessions_2fioMapping_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class IOMappingList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.sessions.IOMappingList) */ {
 public:
  IOMappingList();
  virtual ~IOMappingList();

  IOMappingList(const IOMappingList& from);

  inline IOMappingList& operator=(const IOMappingList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  IOMappingList(IOMappingList&& from) noexcept
    : IOMappingList() {
    *this = ::std::move(from);
  }

  inline IOMappingList& operator=(IOMappingList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const IOMappingList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const IOMappingList* internal_default_instance() {
    return reinterpret_cast<const IOMappingList*>(
               &_IOMappingList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(IOMappingList* other);
  friend void swap(IOMappingList& a, IOMappingList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline IOMappingList* New() const final {
    return CreateMaybeMessage<IOMappingList>(NULL);
  }

  IOMappingList* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<IOMappingList>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const IOMappingList& from);
  void MergeFrom(const IOMappingList& from);
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
  void InternalSwap(IOMappingList* other);
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

  // repeated .ubii.sessions.IOMapping elements = 1;
  int elements_size() const;
  void clear_elements();
  static const int kElementsFieldNumber = 1;
  ::ubii::sessions::IOMapping* mutable_elements(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >*
      mutable_elements();
  const ::ubii::sessions::IOMapping& elements(int index) const;
  ::ubii::sessions::IOMapping* add_elements();
  const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >&
      elements() const;

  // @@protoc_insertion_point(class_scope:ubii.sessions.IOMappingList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping > elements_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2fsessions_2fioMapping_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// IOMapping

// string interaction_id = 1;
inline void IOMapping::clear_interaction_id() {
  interaction_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& IOMapping::interaction_id() const {
  // @@protoc_insertion_point(field_get:ubii.sessions.IOMapping.interaction_id)
  return interaction_id_.GetNoArena();
}
inline void IOMapping::set_interaction_id(const ::std::string& value) {
  
  interaction_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ubii.sessions.IOMapping.interaction_id)
}
#if LANG_CXX11
inline void IOMapping::set_interaction_id(::std::string&& value) {
  
  interaction_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ubii.sessions.IOMapping.interaction_id)
}
#endif
inline void IOMapping::set_interaction_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  interaction_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ubii.sessions.IOMapping.interaction_id)
}
inline void IOMapping::set_interaction_id(const char* value, size_t size) {
  
  interaction_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ubii.sessions.IOMapping.interaction_id)
}
inline ::std::string* IOMapping::mutable_interaction_id() {
  
  // @@protoc_insertion_point(field_mutable:ubii.sessions.IOMapping.interaction_id)
  return interaction_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* IOMapping::release_interaction_id() {
  // @@protoc_insertion_point(field_release:ubii.sessions.IOMapping.interaction_id)
  
  return interaction_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void IOMapping::set_allocated_interaction_id(::std::string* interaction_id) {
  if (interaction_id != NULL) {
    
  } else {
    
  }
  interaction_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), interaction_id);
  // @@protoc_insertion_point(field_set_allocated:ubii.sessions.IOMapping.interaction_id)
}

// repeated .ubii.sessions.InteractionInputMapping input_mappings = 2;
inline int IOMapping::input_mappings_size() const {
  return input_mappings_.size();
}
inline ::ubii::sessions::InteractionInputMapping* IOMapping::mutable_input_mappings(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.IOMapping.input_mappings)
  return input_mappings_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >*
IOMapping::mutable_input_mappings() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.IOMapping.input_mappings)
  return &input_mappings_;
}
inline const ::ubii::sessions::InteractionInputMapping& IOMapping::input_mappings(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.IOMapping.input_mappings)
  return input_mappings_.Get(index);
}
inline ::ubii::sessions::InteractionInputMapping* IOMapping::add_input_mappings() {
  // @@protoc_insertion_point(field_add:ubii.sessions.IOMapping.input_mappings)
  return input_mappings_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionInputMapping >&
IOMapping::input_mappings() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.IOMapping.input_mappings)
  return input_mappings_;
}

// repeated .ubii.sessions.InteractionOutputMapping output_mappings = 3;
inline int IOMapping::output_mappings_size() const {
  return output_mappings_.size();
}
inline ::ubii::sessions::InteractionOutputMapping* IOMapping::mutable_output_mappings(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.IOMapping.output_mappings)
  return output_mappings_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionOutputMapping >*
IOMapping::mutable_output_mappings() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.IOMapping.output_mappings)
  return &output_mappings_;
}
inline const ::ubii::sessions::InteractionOutputMapping& IOMapping::output_mappings(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.IOMapping.output_mappings)
  return output_mappings_.Get(index);
}
inline ::ubii::sessions::InteractionOutputMapping* IOMapping::add_output_mappings() {
  // @@protoc_insertion_point(field_add:ubii.sessions.IOMapping.output_mappings)
  return output_mappings_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::InteractionOutputMapping >&
IOMapping::output_mappings() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.IOMapping.output_mappings)
  return output_mappings_;
}

// -------------------------------------------------------------------

// IOMappingList

// repeated .ubii.sessions.IOMapping elements = 1;
inline int IOMappingList::elements_size() const {
  return elements_.size();
}
inline void IOMappingList::clear_elements() {
  elements_.Clear();
}
inline ::ubii::sessions::IOMapping* IOMappingList::mutable_elements(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.sessions.IOMappingList.elements)
  return elements_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >*
IOMappingList::mutable_elements() {
  // @@protoc_insertion_point(field_mutable_list:ubii.sessions.IOMappingList.elements)
  return &elements_;
}
inline const ::ubii::sessions::IOMapping& IOMappingList::elements(int index) const {
  // @@protoc_insertion_point(field_get:ubii.sessions.IOMappingList.elements)
  return elements_.Get(index);
}
inline ::ubii::sessions::IOMapping* IOMappingList::add_elements() {
  // @@protoc_insertion_point(field_add:ubii.sessions.IOMappingList.elements)
  return elements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::sessions::IOMapping >&
IOMappingList::elements() const {
  // @@protoc_insertion_point(field_list:ubii.sessions.IOMappingList.elements)
  return elements_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sessions
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2fsessions_2fioMapping_2eproto
