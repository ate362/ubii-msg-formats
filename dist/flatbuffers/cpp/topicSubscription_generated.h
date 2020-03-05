// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TOPICSUBSCRIPTION_UBII_SERVICES_REQUESTS_H_
#define FLATBUFFERS_GENERATED_TOPICSUBSCRIPTION_UBII_SERVICES_REQUESTS_H_

#include "flatbuffers/flatbuffers.h"

namespace ubii {
namespace services {
namespace requests {

struct TopicSubscription;

struct TopicSubscription FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CLIENT_ID = 4,
    VT_SUBSCRIBE_TOPICS = 6,
    VT_UNSUBSCRIBE_TOPICS = 8,
    VT_SUBSCRIBE_TOPIC_REGEXP = 10,
    VT_UNSUBSCRIBE_TOPIC_REGEXP = 12
  };
  const flatbuffers::String *client_id() const {
    return GetPointer<const flatbuffers::String *>(VT_CLIENT_ID);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *subscribe_topics() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_SUBSCRIBE_TOPICS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *unsubscribe_topics() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_UNSUBSCRIBE_TOPICS);
  }
  const flatbuffers::String *subscribe_topic_regexp() const {
    return GetPointer<const flatbuffers::String *>(VT_SUBSCRIBE_TOPIC_REGEXP);
  }
  const flatbuffers::String *unsubscribe_topic_regexp() const {
    return GetPointer<const flatbuffers::String *>(VT_UNSUBSCRIBE_TOPIC_REGEXP);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CLIENT_ID) &&
           verifier.VerifyString(client_id()) &&
           VerifyOffset(verifier, VT_SUBSCRIBE_TOPICS) &&
           verifier.VerifyVector(subscribe_topics()) &&
           verifier.VerifyVectorOfStrings(subscribe_topics()) &&
           VerifyOffset(verifier, VT_UNSUBSCRIBE_TOPICS) &&
           verifier.VerifyVector(unsubscribe_topics()) &&
           verifier.VerifyVectorOfStrings(unsubscribe_topics()) &&
           VerifyOffset(verifier, VT_SUBSCRIBE_TOPIC_REGEXP) &&
           verifier.VerifyString(subscribe_topic_regexp()) &&
           VerifyOffset(verifier, VT_UNSUBSCRIBE_TOPIC_REGEXP) &&
           verifier.VerifyString(unsubscribe_topic_regexp()) &&
           verifier.EndTable();
  }
};

struct TopicSubscriptionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_client_id(flatbuffers::Offset<flatbuffers::String> client_id) {
    fbb_.AddOffset(TopicSubscription::VT_CLIENT_ID, client_id);
  }
  void add_subscribe_topics(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> subscribe_topics) {
    fbb_.AddOffset(TopicSubscription::VT_SUBSCRIBE_TOPICS, subscribe_topics);
  }
  void add_unsubscribe_topics(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> unsubscribe_topics) {
    fbb_.AddOffset(TopicSubscription::VT_UNSUBSCRIBE_TOPICS, unsubscribe_topics);
  }
  void add_subscribe_topic_regexp(flatbuffers::Offset<flatbuffers::String> subscribe_topic_regexp) {
    fbb_.AddOffset(TopicSubscription::VT_SUBSCRIBE_TOPIC_REGEXP, subscribe_topic_regexp);
  }
  void add_unsubscribe_topic_regexp(flatbuffers::Offset<flatbuffers::String> unsubscribe_topic_regexp) {
    fbb_.AddOffset(TopicSubscription::VT_UNSUBSCRIBE_TOPIC_REGEXP, unsubscribe_topic_regexp);
  }
  explicit TopicSubscriptionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TopicSubscriptionBuilder &operator=(const TopicSubscriptionBuilder &);
  flatbuffers::Offset<TopicSubscription> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TopicSubscription>(end);
    return o;
  }
};

inline flatbuffers::Offset<TopicSubscription> CreateTopicSubscription(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> client_id = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> subscribe_topics = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> unsubscribe_topics = 0,
    flatbuffers::Offset<flatbuffers::String> subscribe_topic_regexp = 0,
    flatbuffers::Offset<flatbuffers::String> unsubscribe_topic_regexp = 0) {
  TopicSubscriptionBuilder builder_(_fbb);
  builder_.add_unsubscribe_topic_regexp(unsubscribe_topic_regexp);
  builder_.add_subscribe_topic_regexp(subscribe_topic_regexp);
  builder_.add_unsubscribe_topics(unsubscribe_topics);
  builder_.add_subscribe_topics(subscribe_topics);
  builder_.add_client_id(client_id);
  return builder_.Finish();
}

inline flatbuffers::Offset<TopicSubscription> CreateTopicSubscriptionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *client_id = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *subscribe_topics = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *unsubscribe_topics = nullptr,
    const char *subscribe_topic_regexp = nullptr,
    const char *unsubscribe_topic_regexp = nullptr) {
  auto client_id__ = client_id ? _fbb.CreateString(client_id) : 0;
  auto subscribe_topics__ = subscribe_topics ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*subscribe_topics) : 0;
  auto unsubscribe_topics__ = unsubscribe_topics ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*unsubscribe_topics) : 0;
  auto subscribe_topic_regexp__ = subscribe_topic_regexp ? _fbb.CreateString(subscribe_topic_regexp) : 0;
  auto unsubscribe_topic_regexp__ = unsubscribe_topic_regexp ? _fbb.CreateString(unsubscribe_topic_regexp) : 0;
  return ubii::services::requests::CreateTopicSubscription(
      _fbb,
      client_id__,
      subscribe_topics__,
      unsubscribe_topics__,
      subscribe_topic_regexp__,
      unsubscribe_topic_regexp__);
}

inline const ubii::services::requests::TopicSubscription *GetTopicSubscription(const void *buf) {
  return flatbuffers::GetRoot<ubii::services::requests::TopicSubscription>(buf);
}

inline const ubii::services::requests::TopicSubscription *GetSizePrefixedTopicSubscription(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::services::requests::TopicSubscription>(buf);
}

inline bool VerifyTopicSubscriptionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::services::requests::TopicSubscription>(nullptr);
}

inline bool VerifySizePrefixedTopicSubscriptionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::services::requests::TopicSubscription>(nullptr);
}

inline void FinishTopicSubscriptionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::services::requests::TopicSubscription> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTopicSubscriptionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::services::requests::TopicSubscription> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace requests
}  // namespace services
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_TOPICSUBSCRIPTION_UBII_SERVICES_REQUESTS_H_
