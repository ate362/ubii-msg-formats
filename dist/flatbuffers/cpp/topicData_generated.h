// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TOPICDATA_UBII_TOPICDATA_H_
#define FLATBUFFERS_GENERATED_TOPICDATA_UBII_TOPICDATA_H_

#include "flatbuffers/flatbuffers.h"

#include "topicDemux_generated.h"
#include "topicMux_generated.h"
#include "error_generated.h"
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
#include "topicDataRecord_generated.h"

namespace ubii {
namespace topicData {

struct TopicData;

enum TopicDataContent {
  TopicDataContent_NONE = 0,
  TopicDataContent_topic_data_record = 1,
  TopicDataContent_topic_data_record_list = 2,
  TopicDataContent_error = 3,
  TopicDataContent_MIN = TopicDataContent_NONE,
  TopicDataContent_MAX = TopicDataContent_error
};

inline const TopicDataContent (&EnumValuesTopicDataContent())[4] {
  static const TopicDataContent values[] = {
    TopicDataContent_NONE,
    TopicDataContent_topic_data_record,
    TopicDataContent_topic_data_record_list,
    TopicDataContent_error
  };
  return values;
}

inline const char * const *EnumNamesTopicDataContent() {
  static const char * const names[] = {
    "NONE",
    "topic_data_record",
    "topic_data_record_list",
    "error",
    nullptr
  };
  return names;
}

inline const char *EnumNameTopicDataContent(TopicDataContent e) {
  if (e < TopicDataContent_NONE || e > TopicDataContent_error) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesTopicDataContent()[index];
}

template<typename T> struct TopicDataContentTraits {
  static const TopicDataContent enum_value = TopicDataContent_NONE;
};

template<> struct TopicDataContentTraits<TopicDataRecord> {
  static const TopicDataContent enum_value = TopicDataContent_topic_data_record;
};

template<> struct TopicDataContentTraits<TopicDataRecordList> {
  static const TopicDataContent enum_value = TopicDataContent_topic_data_record_list;
};

template<> struct TopicDataContentTraits<ubii::general::Error> {
  static const TopicDataContent enum_value = TopicDataContent_error;
};

bool VerifyTopicDataContent(flatbuffers::Verifier &verifier, const void *obj, TopicDataContent type);
bool VerifyTopicDataContentVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct TopicData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CONTENT_TYPE = 4,
    VT_CONTENT = 6
  };
  TopicDataContent content_type() const {
    return static_cast<TopicDataContent>(GetField<uint8_t>(VT_CONTENT_TYPE, 0));
  }
  const void *content() const {
    return GetPointer<const void *>(VT_CONTENT);
  }
  template<typename T> const T *content_as() const;
  const TopicDataRecord *content_as_topic_data_record() const {
    return content_type() == TopicDataContent_topic_data_record ? static_cast<const TopicDataRecord *>(content()) : nullptr;
  }
  const TopicDataRecordList *content_as_topic_data_record_list() const {
    return content_type() == TopicDataContent_topic_data_record_list ? static_cast<const TopicDataRecordList *>(content()) : nullptr;
  }
  const ubii::general::Error *content_as_error() const {
    return content_type() == TopicDataContent_error ? static_cast<const ubii::general::Error *>(content()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_CONTENT_TYPE) &&
           VerifyOffset(verifier, VT_CONTENT) &&
           VerifyTopicDataContent(verifier, content(), content_type()) &&
           verifier.EndTable();
  }
};

template<> inline const TopicDataRecord *TopicData::content_as<TopicDataRecord>() const {
  return content_as_topic_data_record();
}

template<> inline const TopicDataRecordList *TopicData::content_as<TopicDataRecordList>() const {
  return content_as_topic_data_record_list();
}

template<> inline const ubii::general::Error *TopicData::content_as<ubii::general::Error>() const {
  return content_as_error();
}

struct TopicDataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_content_type(TopicDataContent content_type) {
    fbb_.AddElement<uint8_t>(TopicData::VT_CONTENT_TYPE, static_cast<uint8_t>(content_type), 0);
  }
  void add_content(flatbuffers::Offset<void> content) {
    fbb_.AddOffset(TopicData::VT_CONTENT, content);
  }
  explicit TopicDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TopicDataBuilder &operator=(const TopicDataBuilder &);
  flatbuffers::Offset<TopicData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TopicData>(end);
    return o;
  }
};

inline flatbuffers::Offset<TopicData> CreateTopicData(
    flatbuffers::FlatBufferBuilder &_fbb,
    TopicDataContent content_type = TopicDataContent_NONE,
    flatbuffers::Offset<void> content = 0) {
  TopicDataBuilder builder_(_fbb);
  builder_.add_content(content);
  builder_.add_content_type(content_type);
  return builder_.Finish();
}

inline bool VerifyTopicDataContent(flatbuffers::Verifier &verifier, const void *obj, TopicDataContent type) {
  switch (type) {
    case TopicDataContent_NONE: {
      return true;
    }
    case TopicDataContent_topic_data_record: {
      auto ptr = reinterpret_cast<const TopicDataRecord *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case TopicDataContent_topic_data_record_list: {
      auto ptr = reinterpret_cast<const TopicDataRecordList *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case TopicDataContent_error: {
      auto ptr = reinterpret_cast<const ubii::general::Error *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return false;
  }
}

inline bool VerifyTopicDataContentVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyTopicDataContent(
        verifier,  values->Get(i), types->GetEnum<TopicDataContent>(i))) {
      return false;
    }
  }
  return true;
}

inline const ubii::topicData::TopicData *GetTopicData(const void *buf) {
  return flatbuffers::GetRoot<ubii::topicData::TopicData>(buf);
}

inline const ubii::topicData::TopicData *GetSizePrefixedTopicData(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::topicData::TopicData>(buf);
}

inline bool VerifyTopicDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::topicData::TopicData>(nullptr);
}

inline bool VerifySizePrefixedTopicDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::topicData::TopicData>(nullptr);
}

inline void FinishTopicDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::topicData::TopicData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTopicDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::topicData::TopicData> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace topicData
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_TOPICDATA_UBII_TOPICDATA_H_
