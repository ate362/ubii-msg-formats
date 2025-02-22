// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/devices/device.proto

#include "proto/devices/device.pb.h"

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

namespace protobuf_proto_2fdevices_2fcomponent_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdevices_2fcomponent_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Component;
}  // namespace protobuf_proto_2fdevices_2fcomponent_2eproto
namespace protobuf_proto_2fdevices_2fdevice_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_2fdevices_2fdevice_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Device;
}  // namespace protobuf_proto_2fdevices_2fdevice_2eproto
namespace ubii {
namespace devices {
class DeviceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Device>
      _instance;
} _Device_default_instance_;
class DeviceListDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DeviceList>
      _instance;
} _DeviceList_default_instance_;
}  // namespace devices
}  // namespace ubii
namespace protobuf_proto_2fdevices_2fdevice_2eproto {
static void InitDefaultsDevice() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::devices::_Device_default_instance_;
    new (ptr) ::ubii::devices::Device();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::devices::Device::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Device =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsDevice}, {
      &protobuf_proto_2fdevices_2fcomponent_2eproto::scc_info_Component.base,}};

static void InitDefaultsDeviceList() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ubii::devices::_DeviceList_default_instance_;
    new (ptr) ::ubii::devices::DeviceList();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ubii::devices::DeviceList::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_DeviceList =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsDeviceList}, {
      &protobuf_proto_2fdevices_2fdevice_2eproto::scc_info_Device.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Device.base);
  ::google::protobuf::internal::InitSCC(&scc_info_DeviceList.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, device_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, components_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, client_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, tags_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::Device, description_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::DeviceList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ubii::devices::DeviceList, elements_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ubii::devices::Device)},
  { 12, -1, sizeof(::ubii::devices::DeviceList)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::devices::_Device_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ubii::devices::_DeviceList_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto/devices/device.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n\032proto/devices/device.proto\022\014ubii.devic"
      "es\032\035proto/devices/component.proto\"\347\001\n\006De"
      "vice\022\n\n\002id\030\001 \001(\t\022\014\n\004name\030\002 \001(\t\0224\n\013device"
      "_type\030\003 \001(\0162\037.ubii.devices.Device.Device"
      "Type\022+\n\ncomponents\030\004 \003(\0132\027.ubii.devices."
      "Component\022\021\n\tclient_id\030\005 \001(\t\022\014\n\004tags\030\006 \003"
      "(\t\022\023\n\013description\030\007 \001(\t\"*\n\nDeviceType\022\017\n"
      "\013PARTICIPANT\020\000\022\013\n\007WATCHER\020\001\"4\n\nDeviceLis"
      "t\022&\n\010elements\030\001 \003(\0132\024.ubii.devices.Devic"
      "eb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 369);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/devices/device.proto", &protobuf_RegisterTypes);
  ::protobuf_proto_2fdevices_2fcomponent_2eproto::AddDescriptors();
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
}  // namespace protobuf_proto_2fdevices_2fdevice_2eproto
namespace ubii {
namespace devices {
const ::google::protobuf::EnumDescriptor* Device_DeviceType_descriptor() {
  protobuf_proto_2fdevices_2fdevice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fdevices_2fdevice_2eproto::file_level_enum_descriptors[0];
}
bool Device_DeviceType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Device_DeviceType Device::PARTICIPANT;
const Device_DeviceType Device::WATCHER;
const Device_DeviceType Device::DeviceType_MIN;
const Device_DeviceType Device::DeviceType_MAX;
const int Device::DeviceType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Device::InitAsDefaultInstance() {
}
void Device::clear_components() {
  components_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Device::kIdFieldNumber;
const int Device::kNameFieldNumber;
const int Device::kDeviceTypeFieldNumber;
const int Device::kComponentsFieldNumber;
const int Device::kClientIdFieldNumber;
const int Device::kTagsFieldNumber;
const int Device::kDescriptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Device::Device()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2fdevices_2fdevice_2eproto::scc_info_Device.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.devices.Device)
}
Device::Device(const Device& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      components_(from.components_),
      tags_(from.tags_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  client_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.client_id().size() > 0) {
    client_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.client_id_);
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  device_type_ = from.device_type_;
  // @@protoc_insertion_point(copy_constructor:ubii.devices.Device)
}

void Device::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  client_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_type_ = 0;
}

Device::~Device() {
  // @@protoc_insertion_point(destructor:ubii.devices.Device)
  SharedDtor();
}

void Device::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  client_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Device::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Device::descriptor() {
  ::protobuf_proto_2fdevices_2fdevice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2fdevice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Device& Device::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2fdevices_2fdevice_2eproto::scc_info_Device.base);
  return *internal_default_instance();
}


void Device::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.devices.Device)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  components_.Clear();
  tags_.Clear();
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  client_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_type_ = 0;
  _internal_metadata_.Clear();
}

bool Device::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.devices.Device)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.Device.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.Device.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ubii.devices.Device.DeviceType device_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_device_type(static_cast< ::ubii::devices::Device_DeviceType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .ubii.devices.Component components = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_components()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_id().data(), static_cast<int>(this->client_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.Device.client_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string tags = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_tags()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->tags(this->tags_size() - 1).data(),
            static_cast<int>(this->tags(this->tags_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.Device.tags"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string description = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ubii.devices.Device.description"));
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
  // @@protoc_insertion_point(parse_success:ubii.devices.Device)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.devices.Device)
  return false;
#undef DO_
}

void Device::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.devices.Device)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // .ubii.devices.Device.DeviceType device_type = 3;
  if (this->device_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->device_type(), output);
  }

  // repeated .ubii.devices.Component components = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->components_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->components(static_cast<int>(i)),
      output);
  }

  // string client_id = 5;
  if (this->client_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_id().data(), static_cast<int>(this->client_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.client_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->client_id(), output);
  }

  // repeated string tags = 6;
  for (int i = 0, n = this->tags_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tags(i).data(), static_cast<int>(this->tags(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.tags");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->tags(i), output);
  }

  // string description = 7;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->description(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ubii.devices.Device)
}

::google::protobuf::uint8* Device::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.devices.Device)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // .ubii.devices.Device.DeviceType device_type = 3;
  if (this->device_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->device_type(), target);
  }

  // repeated .ubii.devices.Component components = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->components_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->components(static_cast<int>(i)), deterministic, target);
  }

  // string client_id = 5;
  if (this->client_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_id().data(), static_cast<int>(this->client_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.client_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->client_id(), target);
  }

  // repeated string tags = 6;
  for (int i = 0, n = this->tags_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tags(i).data(), static_cast<int>(this->tags(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.tags");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(6, this->tags(i), target);
  }

  // string description = 7;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ubii.devices.Device.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->description(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ubii.devices.Device)
  return target;
}

size_t Device::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.devices.Device)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ubii.devices.Component components = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->components_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->components(static_cast<int>(i)));
    }
  }

  // repeated string tags = 6;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->tags_size());
  for (int i = 0, n = this->tags_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->tags(i));
  }

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string client_id = 5;
  if (this->client_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_id());
  }

  // string description = 7;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // .ubii.devices.Device.DeviceType device_type = 3;
  if (this->device_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->device_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Device::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.devices.Device)
  GOOGLE_DCHECK_NE(&from, this);
  const Device* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Device>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.devices.Device)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.devices.Device)
    MergeFrom(*source);
  }
}

void Device::MergeFrom(const Device& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.devices.Device)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  components_.MergeFrom(from.components_);
  tags_.MergeFrom(from.tags_);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.client_id().size() > 0) {

    client_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.client_id_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.device_type() != 0) {
    set_device_type(from.device_type());
  }
}

void Device::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.devices.Device)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Device::CopyFrom(const Device& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.devices.Device)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Device::IsInitialized() const {
  return true;
}

void Device::Swap(Device* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Device::InternalSwap(Device* other) {
  using std::swap;
  CastToBase(&components_)->InternalSwap(CastToBase(&other->components_));
  tags_.InternalSwap(CastToBase(&other->tags_));
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  client_id_.Swap(&other->client_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  description_.Swap(&other->description_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(device_type_, other->device_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Device::GetMetadata() const {
  protobuf_proto_2fdevices_2fdevice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2fdevice_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void DeviceList::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DeviceList::kElementsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DeviceList::DeviceList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_2fdevices_2fdevice_2eproto::scc_info_DeviceList.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ubii.devices.DeviceList)
}
DeviceList::DeviceList(const DeviceList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      elements_(from.elements_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ubii.devices.DeviceList)
}

void DeviceList::SharedCtor() {
}

DeviceList::~DeviceList() {
  // @@protoc_insertion_point(destructor:ubii.devices.DeviceList)
  SharedDtor();
}

void DeviceList::SharedDtor() {
}

void DeviceList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* DeviceList::descriptor() {
  ::protobuf_proto_2fdevices_2fdevice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2fdevice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DeviceList& DeviceList::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_2fdevices_2fdevice_2eproto::scc_info_DeviceList.base);
  return *internal_default_instance();
}


void DeviceList::Clear() {
// @@protoc_insertion_point(message_clear_start:ubii.devices.DeviceList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  elements_.Clear();
  _internal_metadata_.Clear();
}

bool DeviceList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ubii.devices.DeviceList)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ubii.devices.Device elements = 1;
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
  // @@protoc_insertion_point(parse_success:ubii.devices.DeviceList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ubii.devices.DeviceList)
  return false;
#undef DO_
}

void DeviceList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ubii.devices.DeviceList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.devices.Device elements = 1;
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
  // @@protoc_insertion_point(serialize_end:ubii.devices.DeviceList)
}

::google::protobuf::uint8* DeviceList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ubii.devices.DeviceList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ubii.devices.Device elements = 1;
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
  // @@protoc_insertion_point(serialize_to_array_end:ubii.devices.DeviceList)
  return target;
}

size_t DeviceList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ubii.devices.DeviceList)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ubii.devices.Device elements = 1;
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

void DeviceList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ubii.devices.DeviceList)
  GOOGLE_DCHECK_NE(&from, this);
  const DeviceList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DeviceList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ubii.devices.DeviceList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ubii.devices.DeviceList)
    MergeFrom(*source);
  }
}

void DeviceList::MergeFrom(const DeviceList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ubii.devices.DeviceList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  elements_.MergeFrom(from.elements_);
}

void DeviceList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ubii.devices.DeviceList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DeviceList::CopyFrom(const DeviceList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ubii.devices.DeviceList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DeviceList::IsInitialized() const {
  return true;
}

void DeviceList::Swap(DeviceList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DeviceList::InternalSwap(DeviceList* other) {
  using std::swap;
  CastToBase(&elements_)->InternalSwap(CastToBase(&other->elements_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata DeviceList::GetMetadata() const {
  protobuf_proto_2fdevices_2fdevice_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fdevices_2fdevice_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace devices
}  // namespace ubii
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::devices::Device* Arena::CreateMaybeMessage< ::ubii::devices::Device >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::devices::Device >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ubii::devices::DeviceList* Arena::CreateMaybeMessage< ::ubii::devices::DeviceList >(Arena* arena) {
  return Arena::CreateInternal< ::ubii::devices::DeviceList >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
