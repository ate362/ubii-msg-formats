// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TOPICDATARECORD_UBII_TOPICDATA_H_
#define FLATBUFFERS_GENERATED_TOPICDATARECORD_UBII_TOPICDATA_H_

#include "flatbuffers/flatbuffers.h"

#include "topicDemux_generated.h"
#include "topicMux_generated.h"
#include "interaction_generated.h"
#include "ioFormat_generated.h"
#include "interactionInputMapping_generated.h"
#include "interactionOutputMapping_generated.h"
#include "ioMapping_generated.h"
#include "session_generated.h"
#include "buttonEventType_generated.h"
#include "color_generated.h"
#include "handGestureType_generated.h"
#include "image_generated.h"
#include "keyEvent_generated.h"
#include "matrix3x2_generated.h"
#include "matrix4x4_generated.h"
#include "mouseEvent_generated.h"
#include "myoEvent_generated.h"
#include "object2d_generated.h"
#include "object3d_generated.h"
#include "pose2d_generated.h"
#include "pose3d_generated.h"
#include "quaternion_generated.h"
#include "timestamp_generated.h"
#include "touchEvent_generated.h"
#include "vector2_generated.h"
#include "vector3_generated.h"
#include "vector4_generated.h"
#include "vector8_generated.h"

namespace ubii {
namespace dataStructures {

struct DataStructure;

}  // namespace dataStructures

namespace topicData {

struct TopicDataRecord;

struct TopicDataRecordList;

}  // namespace topicData

namespace dataStructures {

struct DataStructure FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BOOL_ = 4,
    VT_BOOL_LIST = 6,
    VT_STRING = 8,
    VT_STRING_LIST = 10,
    VT_BYTE = 12,
    VT_INT32 = 14,
    VT_INT32_LIST = 16,
    VT_FLOAT_ = 18,
    VT_FLOAT_LIST = 20,
    VT_DOUBLE_ = 22,
    VT_DOUBLE_LIST = 24,
    VT_VECTOR2 = 26,
    VT_VECTOR3 = 28,
    VT_VECTOR4 = 30,
    VT_QUATERNION = 32,
    VT_MATRIX3X2 = 34,
    VT_MATRIX4X4 = 36,
    VT_COLOR = 38,
    VT_TOUCH_EVENT = 40,
    VT_KEY_EVENT = 42,
    VT_MOUSE_EVENT = 44,
    VT_MYO_EVENT = 46,
    VT_POSE2D = 48,
    VT_POSE3D = 50,
    VT_OBJECT2D = 52,
    VT_OBJECT3D = 54,
    VT_OBJECT2D_LIST = 56,
    VT_OBJECT3D_LIST = 58,
    VT_IMAGE2D = 60,
    VT_IMAGE2D_LIST = 62,
    VT_SESSION = 64,
    VT_INTERACTION = 66
  };
  bool bool_() const {
    return GetField<uint8_t>(VT_BOOL_, 0) != 0;
  }
  const flatbuffers::Vector<uint8_t> *bool_list() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BOOL_LIST);
  }
  const flatbuffers::String *string() const {
    return GetPointer<const flatbuffers::String *>(VT_STRING);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *string_list() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_STRING_LIST);
  }
  int8_t byte() const {
    return GetField<int8_t>(VT_BYTE, 0);
  }
  int32_t int32() const {
    return GetField<int32_t>(VT_INT32, 0);
  }
  const flatbuffers::Vector<int32_t> *int32_list() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_INT32_LIST);
  }
  float float_() const {
    return GetField<float>(VT_FLOAT_, 0.0f);
  }
  const flatbuffers::Vector<float> *float_list() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_FLOAT_LIST);
  }
  double double_() const {
    return GetField<double>(VT_DOUBLE_, 0.0);
  }
  const flatbuffers::Vector<double> *double_list() const {
    return GetPointer<const flatbuffers::Vector<double> *>(VT_DOUBLE_LIST);
  }
  const Vector2 *vector2() const {
    return GetStruct<const Vector2 *>(VT_VECTOR2);
  }
  const Vector3 *vector3() const {
    return GetStruct<const Vector3 *>(VT_VECTOR3);
  }
  const Vector4 *vector4() const {
    return GetStruct<const Vector4 *>(VT_VECTOR4);
  }
  const Quaternion *quaternion() const {
    return GetStruct<const Quaternion *>(VT_QUATERNION);
  }
  const Matrix3x2 *matrix3x2() const {
    return GetStruct<const Matrix3x2 *>(VT_MATRIX3X2);
  }
  const Matrix4x4 *matrix4x4() const {
    return GetStruct<const Matrix4x4 *>(VT_MATRIX4X4);
  }
  const Color *color() const {
    return GetStruct<const Color *>(VT_COLOR);
  }
  const TouchEvent *touch_event() const {
    return GetPointer<const TouchEvent *>(VT_TOUCH_EVENT);
  }
  const KeyEvent *key_event() const {
    return GetPointer<const KeyEvent *>(VT_KEY_EVENT);
  }
  const MouseEvent *mouse_event() const {
    return GetPointer<const MouseEvent *>(VT_MOUSE_EVENT);
  }
  const MyoEvent *myo_event() const {
    return GetPointer<const MyoEvent *>(VT_MYO_EVENT);
  }
  const Pose2D *pose2D() const {
    return GetPointer<const Pose2D *>(VT_POSE2D);
  }
  const Pose3D *pose3D() const {
    return GetPointer<const Pose3D *>(VT_POSE3D);
  }
  const Object2D *object2D() const {
    return GetPointer<const Object2D *>(VT_OBJECT2D);
  }
  const Object3D *object3D() const {
    return GetPointer<const Object3D *>(VT_OBJECT3D);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Object2D>> *object2D_list() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Object2D>> *>(VT_OBJECT2D_LIST);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Object3D>> *object3D_list() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Object3D>> *>(VT_OBJECT3D_LIST);
  }
  const Image2D *image2D() const {
    return GetPointer<const Image2D *>(VT_IMAGE2D);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Image2D>> *image2D_list() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Image2D>> *>(VT_IMAGE2D_LIST);
  }
  const ubii::sessions::Session *session() const {
    return GetPointer<const ubii::sessions::Session *>(VT_SESSION);
  }
  const ubii::interactions::Interaction *interaction() const {
    return GetPointer<const ubii::interactions::Interaction *>(VT_INTERACTION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_BOOL_) &&
           VerifyOffset(verifier, VT_BOOL_LIST) &&
           verifier.VerifyVector(bool_list()) &&
           VerifyOffset(verifier, VT_STRING) &&
           verifier.VerifyString(string()) &&
           VerifyOffset(verifier, VT_STRING_LIST) &&
           verifier.VerifyVector(string_list()) &&
           verifier.VerifyVectorOfStrings(string_list()) &&
           VerifyField<int8_t>(verifier, VT_BYTE) &&
           VerifyField<int32_t>(verifier, VT_INT32) &&
           VerifyOffset(verifier, VT_INT32_LIST) &&
           verifier.VerifyVector(int32_list()) &&
           VerifyField<float>(verifier, VT_FLOAT_) &&
           VerifyOffset(verifier, VT_FLOAT_LIST) &&
           verifier.VerifyVector(float_list()) &&
           VerifyField<double>(verifier, VT_DOUBLE_) &&
           VerifyOffset(verifier, VT_DOUBLE_LIST) &&
           verifier.VerifyVector(double_list()) &&
           VerifyField<Vector2>(verifier, VT_VECTOR2) &&
           VerifyField<Vector3>(verifier, VT_VECTOR3) &&
           VerifyField<Vector4>(verifier, VT_VECTOR4) &&
           VerifyField<Quaternion>(verifier, VT_QUATERNION) &&
           VerifyField<Matrix3x2>(verifier, VT_MATRIX3X2) &&
           VerifyField<Matrix4x4>(verifier, VT_MATRIX4X4) &&
           VerifyField<Color>(verifier, VT_COLOR) &&
           VerifyOffset(verifier, VT_TOUCH_EVENT) &&
           verifier.VerifyTable(touch_event()) &&
           VerifyOffset(verifier, VT_KEY_EVENT) &&
           verifier.VerifyTable(key_event()) &&
           VerifyOffset(verifier, VT_MOUSE_EVENT) &&
           verifier.VerifyTable(mouse_event()) &&
           VerifyOffset(verifier, VT_MYO_EVENT) &&
           verifier.VerifyTable(myo_event()) &&
           VerifyOffset(verifier, VT_POSE2D) &&
           verifier.VerifyTable(pose2D()) &&
           VerifyOffset(verifier, VT_POSE3D) &&
           verifier.VerifyTable(pose3D()) &&
           VerifyOffset(verifier, VT_OBJECT2D) &&
           verifier.VerifyTable(object2D()) &&
           VerifyOffset(verifier, VT_OBJECT3D) &&
           verifier.VerifyTable(object3D()) &&
           VerifyOffset(verifier, VT_OBJECT2D_LIST) &&
           verifier.VerifyVector(object2D_list()) &&
           verifier.VerifyVectorOfTables(object2D_list()) &&
           VerifyOffset(verifier, VT_OBJECT3D_LIST) &&
           verifier.VerifyVector(object3D_list()) &&
           verifier.VerifyVectorOfTables(object3D_list()) &&
           VerifyOffset(verifier, VT_IMAGE2D) &&
           verifier.VerifyTable(image2D()) &&
           VerifyOffset(verifier, VT_IMAGE2D_LIST) &&
           verifier.VerifyVector(image2D_list()) &&
           verifier.VerifyVectorOfTables(image2D_list()) &&
           VerifyOffset(verifier, VT_SESSION) &&
           verifier.VerifyTable(session()) &&
           VerifyOffset(verifier, VT_INTERACTION) &&
           verifier.VerifyTable(interaction()) &&
           verifier.EndTable();
  }
};

struct DataStructureBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_bool_(bool bool_) {
    fbb_.AddElement<uint8_t>(DataStructure::VT_BOOL_, static_cast<uint8_t>(bool_), 0);
  }
  void add_bool_list(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> bool_list) {
    fbb_.AddOffset(DataStructure::VT_BOOL_LIST, bool_list);
  }
  void add_string(flatbuffers::Offset<flatbuffers::String> string) {
    fbb_.AddOffset(DataStructure::VT_STRING, string);
  }
  void add_string_list(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> string_list) {
    fbb_.AddOffset(DataStructure::VT_STRING_LIST, string_list);
  }
  void add_byte(int8_t byte) {
    fbb_.AddElement<int8_t>(DataStructure::VT_BYTE, byte, 0);
  }
  void add_int32(int32_t int32) {
    fbb_.AddElement<int32_t>(DataStructure::VT_INT32, int32, 0);
  }
  void add_int32_list(flatbuffers::Offset<flatbuffers::Vector<int32_t>> int32_list) {
    fbb_.AddOffset(DataStructure::VT_INT32_LIST, int32_list);
  }
  void add_float_(float float_) {
    fbb_.AddElement<float>(DataStructure::VT_FLOAT_, float_, 0.0f);
  }
  void add_float_list(flatbuffers::Offset<flatbuffers::Vector<float>> float_list) {
    fbb_.AddOffset(DataStructure::VT_FLOAT_LIST, float_list);
  }
  void add_double_(double double_) {
    fbb_.AddElement<double>(DataStructure::VT_DOUBLE_, double_, 0.0);
  }
  void add_double_list(flatbuffers::Offset<flatbuffers::Vector<double>> double_list) {
    fbb_.AddOffset(DataStructure::VT_DOUBLE_LIST, double_list);
  }
  void add_vector2(const Vector2 *vector2) {
    fbb_.AddStruct(DataStructure::VT_VECTOR2, vector2);
  }
  void add_vector3(const Vector3 *vector3) {
    fbb_.AddStruct(DataStructure::VT_VECTOR3, vector3);
  }
  void add_vector4(const Vector4 *vector4) {
    fbb_.AddStruct(DataStructure::VT_VECTOR4, vector4);
  }
  void add_quaternion(const Quaternion *quaternion) {
    fbb_.AddStruct(DataStructure::VT_QUATERNION, quaternion);
  }
  void add_matrix3x2(const Matrix3x2 *matrix3x2) {
    fbb_.AddStruct(DataStructure::VT_MATRIX3X2, matrix3x2);
  }
  void add_matrix4x4(const Matrix4x4 *matrix4x4) {
    fbb_.AddStruct(DataStructure::VT_MATRIX4X4, matrix4x4);
  }
  void add_color(const Color *color) {
    fbb_.AddStruct(DataStructure::VT_COLOR, color);
  }
  void add_touch_event(flatbuffers::Offset<TouchEvent> touch_event) {
    fbb_.AddOffset(DataStructure::VT_TOUCH_EVENT, touch_event);
  }
  void add_key_event(flatbuffers::Offset<KeyEvent> key_event) {
    fbb_.AddOffset(DataStructure::VT_KEY_EVENT, key_event);
  }
  void add_mouse_event(flatbuffers::Offset<MouseEvent> mouse_event) {
    fbb_.AddOffset(DataStructure::VT_MOUSE_EVENT, mouse_event);
  }
  void add_myo_event(flatbuffers::Offset<MyoEvent> myo_event) {
    fbb_.AddOffset(DataStructure::VT_MYO_EVENT, myo_event);
  }
  void add_pose2D(flatbuffers::Offset<Pose2D> pose2D) {
    fbb_.AddOffset(DataStructure::VT_POSE2D, pose2D);
  }
  void add_pose3D(flatbuffers::Offset<Pose3D> pose3D) {
    fbb_.AddOffset(DataStructure::VT_POSE3D, pose3D);
  }
  void add_object2D(flatbuffers::Offset<Object2D> object2D) {
    fbb_.AddOffset(DataStructure::VT_OBJECT2D, object2D);
  }
  void add_object3D(flatbuffers::Offset<Object3D> object3D) {
    fbb_.AddOffset(DataStructure::VT_OBJECT3D, object3D);
  }
  void add_object2D_list(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Object2D>>> object2D_list) {
    fbb_.AddOffset(DataStructure::VT_OBJECT2D_LIST, object2D_list);
  }
  void add_object3D_list(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Object3D>>> object3D_list) {
    fbb_.AddOffset(DataStructure::VT_OBJECT3D_LIST, object3D_list);
  }
  void add_image2D(flatbuffers::Offset<Image2D> image2D) {
    fbb_.AddOffset(DataStructure::VT_IMAGE2D, image2D);
  }
  void add_image2D_list(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Image2D>>> image2D_list) {
    fbb_.AddOffset(DataStructure::VT_IMAGE2D_LIST, image2D_list);
  }
  void add_session(flatbuffers::Offset<ubii::sessions::Session> session) {
    fbb_.AddOffset(DataStructure::VT_SESSION, session);
  }
  void add_interaction(flatbuffers::Offset<ubii::interactions::Interaction> interaction) {
    fbb_.AddOffset(DataStructure::VT_INTERACTION, interaction);
  }
  explicit DataStructureBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DataStructureBuilder &operator=(const DataStructureBuilder &);
  flatbuffers::Offset<DataStructure> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DataStructure>(end);
    return o;
  }
};

inline flatbuffers::Offset<DataStructure> CreateDataStructure(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool bool_ = false,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> bool_list = 0,
    flatbuffers::Offset<flatbuffers::String> string = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> string_list = 0,
    int8_t byte = 0,
    int32_t int32 = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> int32_list = 0,
    float float_ = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<float>> float_list = 0,
    double double_ = 0.0,
    flatbuffers::Offset<flatbuffers::Vector<double>> double_list = 0,
    const Vector2 *vector2 = 0,
    const Vector3 *vector3 = 0,
    const Vector4 *vector4 = 0,
    const Quaternion *quaternion = 0,
    const Matrix3x2 *matrix3x2 = 0,
    const Matrix4x4 *matrix4x4 = 0,
    const Color *color = 0,
    flatbuffers::Offset<TouchEvent> touch_event = 0,
    flatbuffers::Offset<KeyEvent> key_event = 0,
    flatbuffers::Offset<MouseEvent> mouse_event = 0,
    flatbuffers::Offset<MyoEvent> myo_event = 0,
    flatbuffers::Offset<Pose2D> pose2D = 0,
    flatbuffers::Offset<Pose3D> pose3D = 0,
    flatbuffers::Offset<Object2D> object2D = 0,
    flatbuffers::Offset<Object3D> object3D = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Object2D>>> object2D_list = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Object3D>>> object3D_list = 0,
    flatbuffers::Offset<Image2D> image2D = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Image2D>>> image2D_list = 0,
    flatbuffers::Offset<ubii::sessions::Session> session = 0,
    flatbuffers::Offset<ubii::interactions::Interaction> interaction = 0) {
  DataStructureBuilder builder_(_fbb);
  builder_.add_double_(double_);
  builder_.add_interaction(interaction);
  builder_.add_session(session);
  builder_.add_image2D_list(image2D_list);
  builder_.add_image2D(image2D);
  builder_.add_object3D_list(object3D_list);
  builder_.add_object2D_list(object2D_list);
  builder_.add_object3D(object3D);
  builder_.add_object2D(object2D);
  builder_.add_pose3D(pose3D);
  builder_.add_pose2D(pose2D);
  builder_.add_myo_event(myo_event);
  builder_.add_mouse_event(mouse_event);
  builder_.add_key_event(key_event);
  builder_.add_touch_event(touch_event);
  builder_.add_color(color);
  builder_.add_matrix4x4(matrix4x4);
  builder_.add_matrix3x2(matrix3x2);
  builder_.add_quaternion(quaternion);
  builder_.add_vector4(vector4);
  builder_.add_vector3(vector3);
  builder_.add_vector2(vector2);
  builder_.add_double_list(double_list);
  builder_.add_float_list(float_list);
  builder_.add_float_(float_);
  builder_.add_int32_list(int32_list);
  builder_.add_int32(int32);
  builder_.add_string_list(string_list);
  builder_.add_string(string);
  builder_.add_bool_list(bool_list);
  builder_.add_byte(byte);
  builder_.add_bool_(bool_);
  return builder_.Finish();
}

inline flatbuffers::Offset<DataStructure> CreateDataStructureDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool bool_ = false,
    const std::vector<uint8_t> *bool_list = nullptr,
    const char *string = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *string_list = nullptr,
    int8_t byte = 0,
    int32_t int32 = 0,
    const std::vector<int32_t> *int32_list = nullptr,
    float float_ = 0.0f,
    const std::vector<float> *float_list = nullptr,
    double double_ = 0.0,
    const std::vector<double> *double_list = nullptr,
    const Vector2 *vector2 = 0,
    const Vector3 *vector3 = 0,
    const Vector4 *vector4 = 0,
    const Quaternion *quaternion = 0,
    const Matrix3x2 *matrix3x2 = 0,
    const Matrix4x4 *matrix4x4 = 0,
    const Color *color = 0,
    flatbuffers::Offset<TouchEvent> touch_event = 0,
    flatbuffers::Offset<KeyEvent> key_event = 0,
    flatbuffers::Offset<MouseEvent> mouse_event = 0,
    flatbuffers::Offset<MyoEvent> myo_event = 0,
    flatbuffers::Offset<Pose2D> pose2D = 0,
    flatbuffers::Offset<Pose3D> pose3D = 0,
    flatbuffers::Offset<Object2D> object2D = 0,
    flatbuffers::Offset<Object3D> object3D = 0,
    const std::vector<flatbuffers::Offset<Object2D>> *object2D_list = nullptr,
    const std::vector<flatbuffers::Offset<Object3D>> *object3D_list = nullptr,
    flatbuffers::Offset<Image2D> image2D = 0,
    const std::vector<flatbuffers::Offset<Image2D>> *image2D_list = nullptr,
    flatbuffers::Offset<ubii::sessions::Session> session = 0,
    flatbuffers::Offset<ubii::interactions::Interaction> interaction = 0) {
  auto bool_list__ = bool_list ? _fbb.CreateVector<uint8_t>(*bool_list) : 0;
  auto string__ = string ? _fbb.CreateString(string) : 0;
  auto string_list__ = string_list ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*string_list) : 0;
  auto int32_list__ = int32_list ? _fbb.CreateVector<int32_t>(*int32_list) : 0;
  auto float_list__ = float_list ? _fbb.CreateVector<float>(*float_list) : 0;
  auto double_list__ = double_list ? _fbb.CreateVector<double>(*double_list) : 0;
  auto object2D_list__ = object2D_list ? _fbb.CreateVector<flatbuffers::Offset<Object2D>>(*object2D_list) : 0;
  auto object3D_list__ = object3D_list ? _fbb.CreateVector<flatbuffers::Offset<Object3D>>(*object3D_list) : 0;
  auto image2D_list__ = image2D_list ? _fbb.CreateVector<flatbuffers::Offset<Image2D>>(*image2D_list) : 0;
  return ubii::dataStructures::CreateDataStructure(
      _fbb,
      bool_,
      bool_list__,
      string__,
      string_list__,
      byte,
      int32,
      int32_list__,
      float_,
      float_list__,
      double_,
      double_list__,
      vector2,
      vector3,
      vector4,
      quaternion,
      matrix3x2,
      matrix4x4,
      color,
      touch_event,
      key_event,
      mouse_event,
      myo_event,
      pose2D,
      pose3D,
      object2D,
      object3D,
      object2D_list__,
      object3D_list__,
      image2D,
      image2D_list__,
      session,
      interaction);
}

}  // namespace dataStructures

namespace topicData {

struct TopicDataRecord FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOPIC = 4,
    VT_TIMESTAMP = 6,
    VT_DATA = 8
  };
  const flatbuffers::String *topic() const {
    return GetPointer<const flatbuffers::String *>(VT_TOPIC);
  }
  const ubii::dataStructures::Timestamp *timestamp() const {
    return GetStruct<const ubii::dataStructures::Timestamp *>(VT_TIMESTAMP);
  }
  const ubii::dataStructures::DataStructure *data() const {
    return GetPointer<const ubii::dataStructures::DataStructure *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TOPIC) &&
           verifier.VerifyString(topic()) &&
           VerifyField<ubii::dataStructures::Timestamp>(verifier, VT_TIMESTAMP) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.VerifyTable(data()) &&
           verifier.EndTable();
  }
};

struct TopicDataRecordBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_topic(flatbuffers::Offset<flatbuffers::String> topic) {
    fbb_.AddOffset(TopicDataRecord::VT_TOPIC, topic);
  }
  void add_timestamp(const ubii::dataStructures::Timestamp *timestamp) {
    fbb_.AddStruct(TopicDataRecord::VT_TIMESTAMP, timestamp);
  }
  void add_data(flatbuffers::Offset<ubii::dataStructures::DataStructure> data) {
    fbb_.AddOffset(TopicDataRecord::VT_DATA, data);
  }
  explicit TopicDataRecordBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TopicDataRecordBuilder &operator=(const TopicDataRecordBuilder &);
  flatbuffers::Offset<TopicDataRecord> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TopicDataRecord>(end);
    return o;
  }
};

inline flatbuffers::Offset<TopicDataRecord> CreateTopicDataRecord(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> topic = 0,
    const ubii::dataStructures::Timestamp *timestamp = 0,
    flatbuffers::Offset<ubii::dataStructures::DataStructure> data = 0) {
  TopicDataRecordBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_timestamp(timestamp);
  builder_.add_topic(topic);
  return builder_.Finish();
}

inline flatbuffers::Offset<TopicDataRecord> CreateTopicDataRecordDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *topic = nullptr,
    const ubii::dataStructures::Timestamp *timestamp = 0,
    flatbuffers::Offset<ubii::dataStructures::DataStructure> data = 0) {
  auto topic__ = topic ? _fbb.CreateString(topic) : 0;
  return ubii::topicData::CreateTopicDataRecord(
      _fbb,
      topic__,
      timestamp,
      data);
}

struct TopicDataRecordList FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ELEMENTS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<TopicDataRecord>> *elements() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TopicDataRecord>> *>(VT_ELEMENTS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ELEMENTS) &&
           verifier.VerifyVector(elements()) &&
           verifier.VerifyVectorOfTables(elements()) &&
           verifier.EndTable();
  }
};

struct TopicDataRecordListBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_elements(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TopicDataRecord>>> elements) {
    fbb_.AddOffset(TopicDataRecordList::VT_ELEMENTS, elements);
  }
  explicit TopicDataRecordListBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TopicDataRecordListBuilder &operator=(const TopicDataRecordListBuilder &);
  flatbuffers::Offset<TopicDataRecordList> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TopicDataRecordList>(end);
    return o;
  }
};

inline flatbuffers::Offset<TopicDataRecordList> CreateTopicDataRecordList(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TopicDataRecord>>> elements = 0) {
  TopicDataRecordListBuilder builder_(_fbb);
  builder_.add_elements(elements);
  return builder_.Finish();
}

inline flatbuffers::Offset<TopicDataRecordList> CreateTopicDataRecordListDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<TopicDataRecord>> *elements = nullptr) {
  auto elements__ = elements ? _fbb.CreateVector<flatbuffers::Offset<TopicDataRecord>>(*elements) : 0;
  return ubii::topicData::CreateTopicDataRecordList(
      _fbb,
      elements__);
}

}  // namespace topicData

namespace dataStructures {

}  // namespace dataStructures

namespace topicData {

inline const ubii::topicData::TopicDataRecord *GetTopicDataRecord(const void *buf) {
  return flatbuffers::GetRoot<ubii::topicData::TopicDataRecord>(buf);
}

inline const ubii::topicData::TopicDataRecord *GetSizePrefixedTopicDataRecord(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::topicData::TopicDataRecord>(buf);
}

inline bool VerifyTopicDataRecordBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::topicData::TopicDataRecord>(nullptr);
}

inline bool VerifySizePrefixedTopicDataRecordBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::topicData::TopicDataRecord>(nullptr);
}

inline void FinishTopicDataRecordBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::topicData::TopicDataRecord> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTopicDataRecordBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::topicData::TopicDataRecord> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace topicData
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_TOPICDATARECORD_UBII_TOPICDATA_H_
