// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.services.requests
{

using global::System;
using global::FlatBuffers;

public struct TopicSubscription : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static TopicSubscription GetRootAsTopicSubscription(ByteBuffer _bb) { return GetRootAsTopicSubscription(_bb, new TopicSubscription()); }
  public static TopicSubscription GetRootAsTopicSubscription(ByteBuffer _bb, TopicSubscription obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p.bb_pos = _i; __p.bb = _bb; }
  public TopicSubscription __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public string ClientId { get { int o = __p.__offset(4); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetClientIdBytes() { return __p.__vector_as_span(4); }
#else
  public ArraySegment<byte>? GetClientIdBytes() { return __p.__vector_as_arraysegment(4); }
#endif
  public byte[] GetClientIdArray() { return __p.__vector_as_array<byte>(4); }
  public string SubscribeTopics(int j) { int o = __p.__offset(6); return o != 0 ? __p.__string(__p.__vector(o) + j * 4) : null; }
  public int SubscribeTopicsLength { get { int o = __p.__offset(6); return o != 0 ? __p.__vector_len(o) : 0; } }
  public string UnsubscribeTopics(int j) { int o = __p.__offset(8); return o != 0 ? __p.__string(__p.__vector(o) + j * 4) : null; }
  public int UnsubscribeTopicsLength { get { int o = __p.__offset(8); return o != 0 ? __p.__vector_len(o) : 0; } }
  public string SubscribeTopicRegexp { get { int o = __p.__offset(10); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetSubscribeTopicRegexpBytes() { return __p.__vector_as_span(10); }
#else
  public ArraySegment<byte>? GetSubscribeTopicRegexpBytes() { return __p.__vector_as_arraysegment(10); }
#endif
  public byte[] GetSubscribeTopicRegexpArray() { return __p.__vector_as_array<byte>(10); }
  public string UnsubscribeTopicRegexp { get { int o = __p.__offset(12); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetUnsubscribeTopicRegexpBytes() { return __p.__vector_as_span(12); }
#else
  public ArraySegment<byte>? GetUnsubscribeTopicRegexpBytes() { return __p.__vector_as_arraysegment(12); }
#endif
  public byte[] GetUnsubscribeTopicRegexpArray() { return __p.__vector_as_array<byte>(12); }

  public static Offset<TopicSubscription> CreateTopicSubscription(FlatBufferBuilder builder,
      StringOffset client_idOffset = default(StringOffset),
      VectorOffset subscribe_topicsOffset = default(VectorOffset),
      VectorOffset unsubscribe_topicsOffset = default(VectorOffset),
      StringOffset subscribe_topic_regexpOffset = default(StringOffset),
      StringOffset unsubscribe_topic_regexpOffset = default(StringOffset)) {
    builder.StartObject(5);
    TopicSubscription.AddUnsubscribeTopicRegexp(builder, unsubscribe_topic_regexpOffset);
    TopicSubscription.AddSubscribeTopicRegexp(builder, subscribe_topic_regexpOffset);
    TopicSubscription.AddUnsubscribeTopics(builder, unsubscribe_topicsOffset);
    TopicSubscription.AddSubscribeTopics(builder, subscribe_topicsOffset);
    TopicSubscription.AddClientId(builder, client_idOffset);
    return TopicSubscription.EndTopicSubscription(builder);
  }

  public static void StartTopicSubscription(FlatBufferBuilder builder) { builder.StartObject(5); }
  public static void AddClientId(FlatBufferBuilder builder, StringOffset clientIdOffset) { builder.AddOffset(0, clientIdOffset.Value, 0); }
  public static void AddSubscribeTopics(FlatBufferBuilder builder, VectorOffset subscribeTopicsOffset) { builder.AddOffset(1, subscribeTopicsOffset.Value, 0); }
  public static VectorOffset CreateSubscribeTopicsVector(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateSubscribeTopicsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartSubscribeTopicsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddUnsubscribeTopics(FlatBufferBuilder builder, VectorOffset unsubscribeTopicsOffset) { builder.AddOffset(2, unsubscribeTopicsOffset.Value, 0); }
  public static VectorOffset CreateUnsubscribeTopicsVector(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateUnsubscribeTopicsVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartUnsubscribeTopicsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddSubscribeTopicRegexp(FlatBufferBuilder builder, StringOffset subscribeTopicRegexpOffset) { builder.AddOffset(3, subscribeTopicRegexpOffset.Value, 0); }
  public static void AddUnsubscribeTopicRegexp(FlatBufferBuilder builder, StringOffset unsubscribeTopicRegexpOffset) { builder.AddOffset(4, unsubscribeTopicRegexpOffset.Value, 0); }
  public static Offset<TopicSubscription> EndTopicSubscription(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<TopicSubscription>(o);
  }
  public static void FinishTopicSubscriptionBuffer(FlatBufferBuilder builder, Offset<TopicSubscription> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedTopicSubscriptionBuffer(FlatBufferBuilder builder, Offset<TopicSubscription> offset) { builder.FinishSizePrefixed(offset.Value); }
};


}
