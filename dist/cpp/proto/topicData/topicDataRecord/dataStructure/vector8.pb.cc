// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/vector8.proto

#include "proto/topicData/topicDataRecord/dataStructure/vector8.pb.h"

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

namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector8;
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto
namespace ubii {
namespace dataStructure {
class Vector8DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vector8>
      _instance;
} _Vector8_default_instance_;
class Vector8ListDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vector8List>
      _instance;
} _Vector8List_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto {
static void InitDefaultsVector8() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Vector8_default_instance_;
    new (ptr) ::ubii::dataStructure::Vector8();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Vector8::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Vector8 =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVector8}, {}};

static void InitDefaultsVector8List() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Vector8List_default_instance_;
    new (ptr) ::ubii::dataStructure::Vector8List();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Vector8List::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Vector8List =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsVector8List}, {
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::scc_info_Vector8.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Vector8.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Vector8List.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v0_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v3_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v4_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v5_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v6_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8, v7_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8List, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::dataStructure::Vector8List, elements_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::dataStructure::Vector8)},
  { 13, -1, sizeof(::ubii::dataStructure::Vector8List)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Vector8_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::dataStructure::_Vector8List_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/topicData/topicDataRecord/dataStructure/vector8.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "ructure/vector8.proto\022\022ubii.dataStructur"
      "e\"i\n\007Vector8\022\n\n\002v0\030\001 \001(\001\022\n\n\002v1\030\002 \001(\001\022\n\n\002"
      "v2\030\003 \001(\001\022\n\n\002v3\030\004 \001(\001\022\n\n\002v4\030\005 \001(\001\022\n\n\002v5\030\006"
      " \001(\001\022\n\n\002v6\030\007 \001(\001\022\n\n\002v7\030\010 \001(\001\"<\n\013Vector8L"
      "ist\022-\n\010elements\030\001 \003(\0132\033.ubii.dataStructu"
      "re.Vector8b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 258);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/topicData/topicDataRecord/dataStructure/vector8.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto
namespace ubii {
namespace dataStructure {

// ===================================================================

void Vector8::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector8::kV0FieldNumber;
const int Vector8::kV1FieldNumber;
const int Vector8::kV2FieldNumber;
const int Vector8::kV3FieldNumber;
const int Vector8::kV4FieldNumber;
const int Vector8::kV5FieldNumber;
const int Vector8::kV6FieldNumber;
const int Vector8::kV7FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector8::Vector8()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::scc_info_Vector8.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Vector8)
}
Vector8::Vector8(const Vector8& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&v0_, &from.v0_,
    static_cast<size_t>(reinterpret_cast<char*>(&v7_) -
    reinterpret_cast<char*>(&v0_)) + sizeof(v7_));
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Vector8)
}

void Vector8::SharedCtor() {
  ::memset(&v0_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&v7_) -
      reinterpret_cast<char*>(&v0_)) + sizeof(v7_));
}

Vector8::~Vector8() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Vector8)
  SharedDtor();
}

void Vector8::SharedDtor() {
}

void Vector8::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vector8::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vector8& Vector8::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::scc_info_Vector8.base);
  return *internal_default_instance();
}


void Vector8::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Vector8)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&v0_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&v7_) -
      reinterpret_cast<char*>(&v0_)) + sizeof(v7_));
  _internal_metadata_.Clear();
}

bool Vector8::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Vector8)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double v0 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v0_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double v1 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double v2 = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double v3 = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v3_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double v4 = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v4_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double v5 = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v5_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double v6 = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v6_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double v7 = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &v7_)));
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
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Vector8)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Vector8)
  return false;
#undef DO_
}

void Vector8::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Vector8)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double v0 = 1;
  if (this->v0() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->v0(), output);
  }

  // double v1 = 2;
  if (this->v1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->v1(), output);
  }

  // double v2 = 3;
  if (this->v2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->v2(), output);
  }

  // double v3 = 4;
  if (this->v3() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->v3(), output);
  }

  // double v4 = 5;
  if (this->v4() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->v4(), output);
  }

  // double v5 = 6;
  if (this->v5() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->v5(), output);
  }

  // double v6 = 7;
  if (this->v6() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->v6(), output);
  }

  // double v7 = 8;
  if (this->v7() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->v7(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Vector8)
}

::google::protobuf::uint8* Vector8::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Vector8)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double v0 = 1;
  if (this->v0() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->v0(), target);
  }

  // double v1 = 2;
  if (this->v1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->v1(), target);
  }

  // double v2 = 3;
  if (this->v2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->v2(), target);
  }

  // double v3 = 4;
  if (this->v3() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->v3(), target);
  }

  // double v4 = 5;
  if (this->v4() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->v4(), target);
  }

  // double v5 = 6;
  if (this->v5() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->v5(), target);
  }

  // double v6 = 7;
  if (this->v6() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->v6(), target);
  }

  // double v7 = 8;
  if (this->v7() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->v7(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Vector8)
  return target;
}

size_t Vector8::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Vector8)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double v0 = 1;
  if (this->v0() != 0) {
    total_size += 1 + 8;
  }

  // double v1 = 2;
  if (this->v1() != 0) {
    total_size += 1 + 8;
  }

  // double v2 = 3;
  if (this->v2() != 0) {
    total_size += 1 + 8;
  }

  // double v3 = 4;
  if (this->v3() != 0) {
    total_size += 1 + 8;
  }

  // double v4 = 5;
  if (this->v4() != 0) {
    total_size += 1 + 8;
  }

  // double v5 = 6;
  if (this->v5() != 0) {
    total_size += 1 + 8;
  }

  // double v6 = 7;
  if (this->v6() != 0) {
    total_size += 1 + 8;
  }

  // double v7 = 8;
  if (this->v7() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vector8::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Vector8)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector8* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector8>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Vector8)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Vector8)
    MergeFrom(*source);
  }
}

void Vector8::MergeFrom(const Vector8& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Vector8)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.v0() != 0) {
    set_v0(from.v0());
  }
  if (from.v1() != 0) {
    set_v1(from.v1());
  }
  if (from.v2() != 0) {
    set_v2(from.v2());
  }
  if (from.v3() != 0) {
    set_v3(from.v3());
  }
  if (from.v4() != 0) {
    set_v4(from.v4());
  }
  if (from.v5() != 0) {
    set_v5(from.v5());
  }
  if (from.v6() != 0) {
    set_v6(from.v6());
  }
  if (from.v7() != 0) {
    set_v7(from.v7());
  }
}

void Vector8::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Vector8)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector8::CopyFrom(const Vector8& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Vector8)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector8::IsInitialized() const {
  return true;
}

void Vector8::Swap(Vector8* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector8::InternalSwap(Vector8* other) {
  using std::swap;
  swap(v0_, other->v0_);
  swap(v1_, other->v1_);
  swap(v2_, other->v2_);
  swap(v3_, other->v3_);
  swap(v4_, other->v4_);
  swap(v5_, other->v5_);
  swap(v6_, other->v6_);
  swap(v7_, other->v7_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vector8::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Vector8List::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector8List::kElementsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector8List::Vector8List()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::scc_info_Vector8List.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Vector8List)
}
Vector8List::Vector8List(const Vector8List& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      elements_(from.elements_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Vector8List)
}

void Vector8List::SharedCtor() {
}

Vector8List::~Vector8List() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Vector8List)
  SharedDtor();
}

void Vector8List::SharedDtor() {
}

void Vector8List::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vector8List::descriptor() {
  ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vector8List& Vector8List::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::scc_info_Vector8List.base);
  return *internal_default_instance();
}


void Vector8List::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Vector8List)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  elements_.Clear();
  _internal_metadata_.Clear();
}

bool Vector8List::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.dataStructure.Vector8List)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ubii.dataStructure.Vector8 elements = 1;
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
  // @@protoc_insertion_point(parse_success:ubii.dataStructure.Vector8List)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.dataStructure.Vector8List)
  return false;
#undef DO_
}

void Vector8List::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.dataStructure.Vector8List)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Vector8 elements = 1;
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
  // @@protoc_insertion_point(serialize_end:ubii.dataStructure.Vector8List)
}

::google::protobuf::uint8* Vector8List::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Vector8List)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Vector8 elements = 1;
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
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Vector8List)
  return target;
}

size_t Vector8List::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Vector8List)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ubii.dataStructure.Vector8 elements = 1;
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

void Vector8List::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Vector8List)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector8List* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector8List>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Vector8List)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Vector8List)
    MergeFrom(*source);
  }
}

void Vector8List::MergeFrom(const Vector8List& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Vector8List)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  elements_.MergeFrom(from.elements_);
}

void Vector8List::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Vector8List)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector8List::CopyFrom(const Vector8List& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Vector8List)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector8List::IsInitialized() const {
  return true;
}

void Vector8List::Swap(Vector8List* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector8List::InternalSwap(Vector8List* other) {
  using std::swap;
  CastToBase(&elements_)->InternalSwap(CastToBase(&other->elements_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vector8List::GetMetadata() const {
  protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fvector8_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dataStructure
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Vector8* Arena::CreateMaybeMessage< ::ubii::dataStructure::Vector8 >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Vector8 >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::dataStructure::Vector8List* Arena::CreateMaybeMessage< ::ubii::dataStructure::Vector8List >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Vector8List >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
