// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/image.proto

#include "proto/topicData/topicDataRecord/dataStructure/image.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto;
namespace ubii {
namespace dataStructure {
class Image2DDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Image2D> _instance;
} _Image2D_default_instance_;
class Image2DListDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Image2DList> _instance;
} _Image2DList_default_instance_;
}  // namespace dataStructure
}  // namespace ubii
static void InitDefaultsscc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Image2D_default_instance_;
    new (ptr) ::ubii::dataStructure::Image2D();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Image2D::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto}, {}};

static void InitDefaultsscc_info_Image2DList_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::dataStructure::_Image2DList_default_instance_;
    new (ptr) ::ubii::dataStructure::Image2DList();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::dataStructure::Image2DList::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Image2DList_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Image2DList_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto}, {
      &scc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ubii::dataStructure::Image2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ubii::dataStructure::Image2D, width_),
  PROTOBUF_FIELD_OFFSET(::ubii::dataStructure::Image2D, height_),
  PROTOBUF_FIELD_OFFSET(::ubii::dataStructure::Image2D, data_format_),
  PROTOBUF_FIELD_OFFSET(::ubii::dataStructure::Image2D, data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ubii::dataStructure::Image2DList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ubii::dataStructure::Image2DList, elements_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::dataStructure::Image2D)},
  { 9, -1, sizeof(::ubii::dataStructure::Image2DList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ubii::dataStructure::_Image2D_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ubii::dataStructure::_Image2DList_default_instance_),
};

const char descriptor_table_protodef_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n9proto/topicData/topicDataRecord/dataSt"
  "ructure/image.proto\022\022ubii.dataStructure\""
  "\241\001\n\007Image2D\022\r\n\005width\030\001 \001(\005\022\016\n\006height\030\002 \001"
  "(\005\022;\n\013data_format\030\003 \001(\0162&.ubii.dataStruc"
  "ture.Image2D.DataFormat\022\014\n\004data\030\004 \001(\014\",\n"
  "\nDataFormat\022\t\n\005GRAY8\020\000\022\010\n\004RGB8\020\001\022\t\n\005RGBA"
  "8\020\002\"<\n\013Image2DList\022-\n\010elements\030\001 \003(\0132\033.u"
  "bii.dataStructure.Image2Db\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_sccs[2] = {
  &scc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto.base,
  &scc_info_Image2DList_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_once;
static bool descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto = {
  &descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_initialized, descriptor_table_protodef_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto, "proto/topicData/topicDataRecord/dataStructure/image.proto", 313,
  &descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_once, descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_sccs, descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto::offsets,
  file_level_metadata_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto, 2, file_level_enum_descriptors_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto, file_level_service_descriptors_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto), true);
namespace ubii {
namespace dataStructure {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Image2D_DataFormat_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto);
  return file_level_enum_descriptors_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto[0];
}
bool Image2D_DataFormat_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Image2D_DataFormat Image2D::GRAY8;
constexpr Image2D_DataFormat Image2D::RGB8;
constexpr Image2D_DataFormat Image2D::RGBA8;
constexpr Image2D_DataFormat Image2D::DataFormat_MIN;
constexpr Image2D_DataFormat Image2D::DataFormat_MAX;
constexpr int Image2D::DataFormat_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Image2D::InitAsDefaultInstance() {
}
class Image2D::_Internal {
 public:
};

Image2D::Image2D()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Image2D)
}
Image2D::Image2D(const Image2D& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  ::memcpy(&width_, &from.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&data_format_) -
    reinterpret_cast<char*>(&width_)) + sizeof(data_format_));
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Image2D)
}

void Image2D::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&data_format_) -
      reinterpret_cast<char*>(&width_)) + sizeof(data_format_));
}

Image2D::~Image2D() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Image2D)
  SharedDtor();
}

void Image2D::SharedDtor() {
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Image2D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Image2D& Image2D::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Image2D_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto.base);
  return *internal_default_instance();
}


void Image2D::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Image2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&data_format_) -
      reinterpret_cast<char*>(&width_)) + sizeof(data_format_));
  _internal_metadata_.Clear();
}

const char* Image2D::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 width = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 height = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .ubii.dataStructure.Image2D.DataFormat data_format = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_data_format(static_cast<::ubii::dataStructure::Image2D_DataFormat>(val));
        } else goto handle_unusual;
        continue;
      // bytes data = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Image2D::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Image2D)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 width = 1;
  if (this->width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_width(), target);
  }

  // int32 height = 2;
  if (this->height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_height(), target);
  }

  // .ubii.dataStructure.Image2D.DataFormat data_format = 3;
  if (this->data_format() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_data_format(), target);
  }

  // bytes data = 4;
  if (this->data().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Image2D)
  return target;
}

size_t Image2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Image2D)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 4;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // int32 width = 1;
  if (this->width() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_width());
  }

  // int32 height = 2;
  if (this->height() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_height());
  }

  // .ubii.dataStructure.Image2D.DataFormat data_format = 3;
  if (this->data_format() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_data_format());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Image2D::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Image2D)
  GOOGLE_DCHECK_NE(&from, this);
  const Image2D* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Image2D>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Image2D)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Image2D)
    MergeFrom(*source);
  }
}

void Image2D::MergeFrom(const Image2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Image2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from.width() != 0) {
    _internal_set_width(from._internal_width());
  }
  if (from.height() != 0) {
    _internal_set_height(from._internal_height());
  }
  if (from.data_format() != 0) {
    _internal_set_data_format(from._internal_data_format());
  }
}

void Image2D::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Image2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Image2D::CopyFrom(const Image2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Image2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Image2D::IsInitialized() const {
  return true;
}

void Image2D::InternalSwap(Image2D* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(width_, other->width_);
  swap(height_, other->height_);
  swap(data_format_, other->data_format_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Image2D::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Image2DList::InitAsDefaultInstance() {
}
class Image2DList::_Internal {
 public:
};

Image2DList::Image2DList()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.dataStructure.Image2DList)
}
Image2DList::Image2DList(const Image2DList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      elements_(from.elements_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ubii.dataStructure.Image2DList)
}

void Image2DList::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Image2DList_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto.base);
}

Image2DList::~Image2DList() {
  // @@protoc_insertion_point(destructor:ubii.dataStructure.Image2DList)
  SharedDtor();
}

void Image2DList::SharedDtor() {
}

void Image2DList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Image2DList& Image2DList::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Image2DList_proto_2ftopicData_2ftopicDataRecord_2fdataStructure_2fimage_2eproto.base);
  return *internal_default_instance();
}


void Image2DList::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.dataStructure.Image2DList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  elements_.Clear();
  _internal_metadata_.Clear();
}

const char* Image2DList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .ubii.dataStructure.Image2D elements = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_elements(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Image2DList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ubii.dataStructure.Image2DList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Image2D elements = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_elements_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_elements(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.dataStructure.Image2DList)
  return target;
}

size_t Image2DList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.dataStructure.Image2DList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .ubii.dataStructure.Image2D elements = 1;
  total_size += 1UL * this->_internal_elements_size();
  for (const auto& msg : this->elements_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Image2DList::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.dataStructure.Image2DList)
  GOOGLE_DCHECK_NE(&from, this);
  const Image2DList* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Image2DList>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.dataStructure.Image2DList)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.dataStructure.Image2DList)
    MergeFrom(*source);
  }
}

void Image2DList::MergeFrom(const Image2DList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.dataStructure.Image2DList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  elements_.MergeFrom(from.elements_);
}

void Image2DList::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.dataStructure.Image2DList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Image2DList::CopyFrom(const Image2DList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.dataStructure.Image2DList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Image2DList::IsInitialized() const {
  return true;
}

void Image2DList::InternalSwap(Image2DList* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  elements_.InternalSwap(&other->elements_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Image2DList::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dataStructure
}  // namespace ubii
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ubii::dataStructure::Image2D* Arena::CreateMaybeMessage< ::ubii::dataStructure::Image2D >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Image2D >(arena);
}
template<> PROTOBUF_NOINLINE ::ubii::dataStructure::Image2DList* Arena::CreateMaybeMessage< ::ubii::dataStructure::Image2DList >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::dataStructure::Image2DList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
