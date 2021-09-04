// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/vector2.proto

#ifndef PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto
#define PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto 

namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto {
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
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto
namespace ubii {
namespace dataStructure {
class Vector2;
class Vector2DefaultTypeInternal;
extern Vector2DefaultTypeInternal _Vector2_default_instance_;
class Vector2List;
class Vector2ListDefaultTypeInternal;
extern Vector2ListDefaultTypeInternal _Vector2List_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> ::ubii::dataStructure::Vector2* Arena::CreateMaybeMessage<::ubii::dataStructure::Vector2>(Arena*);
template<> ::ubii::dataStructure::Vector2List* Arena::CreateMaybeMessage<::ubii::dataStructure::Vector2List>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ubii {
namespace dataStructure {

// ===================================================================

class Vector2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.dataStructure.Vector2) */ {
 public:
  Vector2();
  virtual ~Vector2();

  Vector2(const Vector2& from);

  inline Vector2& operator=(const Vector2& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Vector2(Vector2&& from) noexcept
    : Vector2() {
    *this = ::std::move(from);
  }

  inline Vector2& operator=(Vector2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector2* internal_default_instance() {
    return reinterpret_cast<const Vector2*>(
               &_Vector2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Vector2* other);
  friend void swap(Vector2& a, Vector2& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Vector2* New() const final {
    return CreateMaybeMessage<Vector2>(NULL);
  }

  Vector2* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Vector2>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Vector2& from);
  void MergeFrom(const Vector2& from);
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
  void InternalSwap(Vector2* other);
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

  // double x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // double y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // @@protoc_insertion_point(class_scope:ubii.dataStructure.Vector2)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Vector2List : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ubii.dataStructure.Vector2List) */ {
 public:
  Vector2List();
  virtual ~Vector2List();

  Vector2List(const Vector2List& from);

  inline Vector2List& operator=(const Vector2List& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Vector2List(Vector2List&& from) noexcept
    : Vector2List() {
    *this = ::std::move(from);
  }

  inline Vector2List& operator=(Vector2List&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector2List& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector2List* internal_default_instance() {
    return reinterpret_cast<const Vector2List*>(
               &_Vector2List_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Vector2List* other);
  friend void swap(Vector2List& a, Vector2List& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Vector2List* New() const final {
    return CreateMaybeMessage<Vector2List>(NULL);
  }

  Vector2List* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Vector2List>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Vector2List& from);
  void MergeFrom(const Vector2List& from);
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
  void InternalSwap(Vector2List* other);
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

  // repeated .ubii.dataStructure.Vector2 elements = 1;
  int elements_size() const;
  void clear_elements();
  static const int kElementsFieldNumber = 1;
  ::ubii::dataStructure::Vector2* mutable_elements(int index);
  ::google::protobuf::RepeatedPtrField< ::ubii::dataStructure::Vector2 >*
      mutable_elements();
  const ::ubii::dataStructure::Vector2& elements(int index) const;
  ::ubii::dataStructure::Vector2* add_elements();
  const ::google::protobuf::RepeatedPtrField< ::ubii::dataStructure::Vector2 >&
      elements() const;

  // @@protoc_insertion_point(class_scope:ubii.dataStructure.Vector2List)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ubii::dataStructure::Vector2 > elements_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector2

// double x = 1;
inline void Vector2::clear_x() {
  x_ = 0;
}
inline double Vector2::x() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector2.x)
  return x_;
}
inline void Vector2::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector2.x)
}

// double y = 2;
inline void Vector2::clear_y() {
  y_ = 0;
}
inline double Vector2::y() const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector2.y)
  return y_;
}
inline void Vector2::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:ubii.dataStructure.Vector2.y)
}

// -------------------------------------------------------------------

// Vector2List

// repeated .ubii.dataStructure.Vector2 elements = 1;
inline int Vector2List::elements_size() const {
  return elements_.size();
}
inline void Vector2List::clear_elements() {
  elements_.Clear();
}
inline ::ubii::dataStructure::Vector2* Vector2List::mutable_elements(int index) {
  // @@protoc_insertion_point(field_mutable:ubii.dataStructure.Vector2List.elements)
  return elements_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ubii::dataStructure::Vector2 >*
Vector2List::mutable_elements() {
  // @@protoc_insertion_point(field_mutable_list:ubii.dataStructure.Vector2List.elements)
  return &elements_;
}
inline const ::ubii::dataStructure::Vector2& Vector2List::elements(int index) const {
  // @@protoc_insertion_point(field_get:ubii.dataStructure.Vector2List.elements)
  return elements_.Get(index);
}
inline ::ubii::dataStructure::Vector2* Vector2List::add_elements() {
  // @@protoc_insertion_point(field_add:ubii.dataStructure.Vector2List.elements)
  return elements_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ubii::dataStructure::Vector2 >&
Vector2List::elements() const {
  // @@protoc_insertion_point(field_list:ubii.dataStructure.Vector2List.elements)
  return elements_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dataStructure
}  // namespace ubii

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector2_2eproto
