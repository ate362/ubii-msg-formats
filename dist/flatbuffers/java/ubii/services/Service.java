// automatically generated by the FlatBuffers compiler, do not modify

package ubii.services;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Service extends Table {
  public static Service getRootAsService(ByteBuffer _bb) { return getRootAsService(_bb, new Service()); }
  public static Service getRootAsService(ByteBuffer _bb, Service obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; vtable_start = bb_pos - bb.getInt(bb_pos); vtable_size = bb.getShort(vtable_start); }
  public Service __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public String id() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer idAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public ByteBuffer idInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 4, 1); }
  public String name() { int o = __offset(6); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer nameAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }
  public ByteBuffer nameInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 6, 1); }
  public String tags(int j) { int o = __offset(8); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int tagsLength() { int o = __offset(8); return o != 0 ? __vector_len(o) : 0; }
  public String description() { int o = __offset(10); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer descriptionAsByteBuffer() { return __vector_as_bytebuffer(10, 1); }
  public ByteBuffer descriptionInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 10, 1); }
  public String topic() { int o = __offset(12); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer topicAsByteBuffer() { return __vector_as_bytebuffer(12, 1); }
  public ByteBuffer topicInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 12, 1); }
  public String requestMessageFormat() { int o = __offset(14); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer requestMessageFormatAsByteBuffer() { return __vector_as_bytebuffer(14, 1); }
  public ByteBuffer requestMessageFormatInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 14, 1); }
  public String responseMessageFormat() { int o = __offset(16); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer responseMessageFormatAsByteBuffer() { return __vector_as_bytebuffer(16, 1); }
  public ByteBuffer responseMessageFormatInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 16, 1); }

  public static int createService(FlatBufferBuilder builder,
      int idOffset,
      int nameOffset,
      int tagsOffset,
      int descriptionOffset,
      int topicOffset,
      int request_message_formatOffset,
      int response_message_formatOffset) {
    builder.startObject(7);
    Service.addResponseMessageFormat(builder, response_message_formatOffset);
    Service.addRequestMessageFormat(builder, request_message_formatOffset);
    Service.addTopic(builder, topicOffset);
    Service.addDescription(builder, descriptionOffset);
    Service.addTags(builder, tagsOffset);
    Service.addName(builder, nameOffset);
    Service.addId(builder, idOffset);
    return Service.endService(builder);
  }

  public static void startService(FlatBufferBuilder builder) { builder.startObject(7); }
  public static void addId(FlatBufferBuilder builder, int idOffset) { builder.addOffset(0, idOffset, 0); }
  public static void addName(FlatBufferBuilder builder, int nameOffset) { builder.addOffset(1, nameOffset, 0); }
  public static void addTags(FlatBufferBuilder builder, int tagsOffset) { builder.addOffset(2, tagsOffset, 0); }
  public static int createTagsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startTagsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addDescription(FlatBufferBuilder builder, int descriptionOffset) { builder.addOffset(3, descriptionOffset, 0); }
  public static void addTopic(FlatBufferBuilder builder, int topicOffset) { builder.addOffset(4, topicOffset, 0); }
  public static void addRequestMessageFormat(FlatBufferBuilder builder, int requestMessageFormatOffset) { builder.addOffset(5, requestMessageFormatOffset, 0); }
  public static void addResponseMessageFormat(FlatBufferBuilder builder, int responseMessageFormatOffset) { builder.addOffset(6, responseMessageFormatOffset, 0); }
  public static int endService(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
  public static void finishServiceBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedServiceBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }
}

