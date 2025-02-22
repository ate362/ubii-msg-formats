// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/vector3.proto

#include "proto/topicData/topicDataRecord/dataStructure/vector3.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto
namespace ubii {
namespace dataStructure {
class Vector3DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vector3>
      _instance;
} _Vector3_default_instance_;
class Vector3ListDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vector3List>
      _instance;
} _Vector3List_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto {
static void InitDefaultsVector3() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Vector3_default_instance_;
    new (ptr) ::ubii::dataStructure::Vector3();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Vector3::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Vector3 =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVector3}, {}};

static void InitDefaultsVector3List() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Vector3List_default_instance_;
    new (ptr) ::ubii::dataStructure::Vector3List();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Vector3List::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Vector3List =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsVector3List}, {
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::scc_info_Vector3.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Vector3.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Vector3List.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector3, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector3, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector3, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector3, z_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector3List, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector3List, elements_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::dataStructure::Vector3)},
  { 8, -1, sizeof(::ubii::dataStructure::Vector3List)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Vector3_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Vector3List_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/topicData/topicDataRecord/dataStructure/vector3.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n;proto/topicData/topicDataRecord/dataSt"
      "ructure/vector3.proto\022\022ubii.dataStructur"
      "e\"*\n\007Vector3\022\t\n\001x\030\001 \001(\001\022\t\n\001y\030\002 \001(\001\022\t\n\001z\030"
      "\003 \001(\001\"<\n\013Vector3List\022-\n\010elements\030\001 \003(\0132\033"
      ".ubii.dataStructure.Vector3b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/topicData/topicDataRecord/dataStructure/vector3.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto
namespace ubii {
namespace dataStructure {

// ===================================================================

void Vector3::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector3::kXFieldNumber;
const int Vector3::kYFieldNumber;
const int Vector3::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector3::Vector3()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::scc_info_Vector3.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Vector3)
}
Vector3::Vector3(const Vector3& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Vector3)
}

void Vector3::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
}

Vector3::~Vector3() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Vector3)
  SharedDtor();
}

void Vector3::SharedDtor() {
}

void Vector3::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vector3::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vector3& Vector3::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::scc_info_Vector3.base);
  return *internal_default_instance();
}


void Vector3::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Vector3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
  _internal_metadata_.Clear();
}

bool Vector3::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Vector3)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Vector3)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Vector3)
  return false;
#undef DO_
}

void Vector3::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Vector3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // double z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Vector3)
}

::google::protobuf::uint8* Vector3::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Vector3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // double z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Vector3)
  return target;
}

size_t Vector3::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Vector3)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double x = 1;
  if (this->x() != 0) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (this->y() != 0) {
    total_size += 1 + 8;
  }

  // double z = 3;
  if (this->z() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vector3::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Vector3)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector3* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector3>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Vector3)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Vector3)
    MergeFrom(*source);
  }
}

void Vector3::MergeFrom(const Vector3& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Vector3)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Vector3::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Vector3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3::CopyFrom(const Vector3& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Vector3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3::IsInitialized() const {
  return true;
}

void Vector3::Swap(Vector3* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector3::InternalSwap(Vector3* other) {
  using std::swap;
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vector3::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Vector3List::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector3List::kElementsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector3List::Vector3List()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::scc_info_Vector3List.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Vector3List)
}
Vector3List::Vector3List(const Vector3List& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      elements_(from.elements_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Vector3List)
}

void Vector3List::SharedCtor() {
}

Vector3List::~Vector3List() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Vector3List)
  SharedDtor();
}

void Vector3List::SharedDtor() {
}

void Vector3List::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vector3List::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vector3List& Vector3List::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::scc_info_Vector3List.base);
  return *internal_default_instance();
}


void Vector3List::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Vector3List)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  elements_.Clear();
  _internal_metadata_.Clear();
}

bool Vector3List::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Vector3List)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ubii.dataStructure.Vector3 elements = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_elements()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Vector3List)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Vector3List)
  return false;
#undef DO_
}

void Vector3List::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Vector3List)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Vector3 elements = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->elements_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->elements(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Vector3List)
}

::google::protobuf::uint8* Vector3List::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Vector3List)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Vector3 elements = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->elements_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->elements(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Vector3List)
  return target;
}

size_t Vector3List::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Vector3List)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ubii.dataStructure.Vector3 elements = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->elements_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->elements(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vector3List::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Vector3List)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector3List* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector3List>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Vector3List)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Vector3List)
    MergeFrom(*source);
  }
}

void Vector3List::MergeFrom(const Vector3List& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Vector3List)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  elements_.MergeFrom(from.elements_);
}

void Vector3List::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Vector3List)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3List::CopyFrom(const Vector3List& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Vector3List)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3List::IsInitialized() const {
  return true;
}

void Vector3List::Swap(Vector3List* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector3List::InternalSwap(Vector3List* other) {
  using std::swap;
  CastToBase(&elements_)->InternalSwap(CastToBase(&other->elements_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vector3List::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector3_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Vector3* Arena::CreateMaybeMessage< ::ubii::dataStructure::Vector3 >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Vector3 >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Vector3List* Arena::CreateMaybeMessage< ::ubii::dataStructure::Vector3List >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Vector3List >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
