// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_DEVICE_UBII_DEVICES_H_
#define FLATBUFFERS_GENERATED_DEVICE_UBII_DEVICES_H_

#include "flatbuffers/flatbuffers.h"

#include "component_generated.h"

namespace ubii {
namespace devices {

struct Device;

enum DeviceType {
  DeviceType_PARTICIPANT = 0,
  DeviceType_WATCHER = 1,
  DeviceType_MIN = DeviceType_PARTICIPANT,
  DeviceType_MAX = DeviceType_WATCHER
};

inline const DeviceType (&EnumValuesDeviceType())[2] {
  static const DeviceType values[] = {
    DeviceType_PARTICIPANT,
    DeviceType_WATCHER
  };
  return values;
}

inline const char * const *EnumNamesDeviceType() {
  static const char * const names[] = {
    "PARTICIPANT",
    "WATCHER",
    nullptr
  };
  return names;
}

inline const char *EnumNameDeviceType(DeviceType e) {
  if (e < DeviceType_PARTICIPANT || e > DeviceType_WATCHER) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesDeviceType()[index];
}

struct Device FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_TAGS = 8,
    VT_DESCRIPTION = 10,
    VT_CLIENT_ID = 12,
    VT_DEVICE_TYPE = 14,
    VT_COMPONENTS = 16
  };
  const flatbuffers::String *id() const {
    return GetPointer<const flatbuffers::String *>(VT_ID);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *tags() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_TAGS);
  }
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  const flatbuffers::String *client_id() const {
    return GetPointer<const flatbuffers::String *>(VT_CLIENT_ID);
  }
  DeviceType device_type() const {
    return static_cast<DeviceType>(GetField<int8_t>(VT_DEVICE_TYPE, 0));
  }
  const flatbuffers::Vector<flatbuffers::Offset<Component>> *components() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Component>> *>(VT_COMPONENTS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ID) &&
           verifier.VerifyString(id()) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_TAGS) &&
           verifier.VerifyVector(tags()) &&
           verifier.VerifyVectorOfStrings(tags()) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           VerifyOffset(verifier, VT_CLIENT_ID) &&
           verifier.VerifyString(client_id()) &&
           VerifyField<int8_t>(verifier, VT_DEVICE_TYPE) &&
           VerifyOffset(verifier, VT_COMPONENTS) &&
           verifier.VerifyVector(components()) &&
           verifier.VerifyVectorOfTables(components()) &&
           verifier.EndTable();
  }
};

struct DeviceBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(flatbuffers::Offset<flatbuffers::String> id) {
    fbb_.AddOffset(Device::VT_ID, id);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Device::VT_NAME, name);
  }
  void add_tags(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> tags) {
    fbb_.AddOffset(Device::VT_TAGS, tags);
  }
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(Device::VT_DESCRIPTION, description);
  }
  void add_client_id(flatbuffers::Offset<flatbuffers::String> client_id) {
    fbb_.AddOffset(Device::VT_CLIENT_ID, client_id);
  }
  void add_device_type(DeviceType device_type) {
    fbb_.AddElement<int8_t>(Device::VT_DEVICE_TYPE, static_cast<int8_t>(device_type), 0);
  }
  void add_components(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Component>>> components) {
    fbb_.AddOffset(Device::VT_COMPONENTS, components);
  }
  explicit DeviceBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DeviceBuilder &operator=(const DeviceBuilder &);
  flatbuffers::Offset<Device> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Device>(end);
    return o;
  }
};

inline flatbuffers::Offset<Device> CreateDevice(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> tags = 0,
    flatbuffers::Offset<flatbuffers::String> description = 0,
    flatbuffers::Offset<flatbuffers::String> client_id = 0,
    DeviceType device_type = DeviceType_PARTICIPANT,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Component>>> components = 0) {
  DeviceBuilder builder_(_fbb);
  builder_.add_components(components);
  builder_.add_client_id(client_id);
  builder_.add_description(description);
  builder_.add_tags(tags);
  builder_.add_name(name);
  builder_.add_id(id);
  builder_.add_device_type(device_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<Device> CreateDeviceDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *id = nullptr,
    const char *name = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *tags = nullptr,
    const char *description = nullptr,
    const char *client_id = nullptr,
    DeviceType device_type = DeviceType_PARTICIPANT,
    const std::vector<flatbuffers::Offset<Component>> *components = nullptr) {
  auto id__ = id ? _fbb.CreateString(id) : 0;
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto tags__ = tags ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*tags) : 0;
  auto description__ = description ? _fbb.CreateString(description) : 0;
  auto client_id__ = client_id ? _fbb.CreateString(client_id) : 0;
  auto components__ = components ? _fbb.CreateVector<flatbuffers::Offset<Component>>(*components) : 0;
  return ubii::devices::CreateDevice(
      _fbb,
      id__,
      name__,
      tags__,
      description__,
      client_id__,
      device_type,
      components__);
}

inline const ubii::devices::Device *GetDevice(const void *buf) {
  return flatbuffers::GetRoot<ubii::devices::Device>(buf);
}

inline const ubii::devices::Device *GetSizePrefixedDevice(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::devices::Device>(buf);
}

inline bool VerifyDeviceBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::devices::Device>(nullptr);
}

inline bool VerifySizePrefixedDeviceBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::devices::Device>(nullptr);
}

inline void FinishDeviceBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::devices::Device> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedDeviceBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::devices::Device> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace devices
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_DEVICE_UBII_DEVICES_H_
