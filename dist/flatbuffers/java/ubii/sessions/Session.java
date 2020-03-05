// automatically generated by the FlatBuffers compiler, do not modify

package ubii.sessions;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Session extends Table {
  public static Session getRootAsSession(ByteBuffer _bb) { return getRootAsSession(_bb, new Session()); }
  public static Session getRootAsSession(ByteBuffer _bb, Session obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; vtable_start = bb_pos - bb.getInt(bb_pos); vtable_size = bb.getShort(vtable_start); }
  public Session __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public String id() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer idAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public ByteBuffer idInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 4, 1); }
  public String name() { int o = __offset(6); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer nameAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }
  public ByteBuffer nameInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 6, 1); }
  public String authors(int j) { int o = __offset(8); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int authorsLength() { int o = __offset(8); return o != 0 ? __vector_len(o) : 0; }
  public String tags(int j) { int o = __offset(10); return o != 0 ? __string(__vector(o) + j * 4) : null; }
  public int tagsLength() { int o = __offset(10); return o != 0 ? __vector_len(o) : 0; }
  public String description() { int o = __offset(12); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer descriptionAsByteBuffer() { return __vector_as_bytebuffer(12, 1); }
  public ByteBuffer descriptionInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 12, 1); }
  public byte processMode() { int o = __offset(14); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public byte status() { int o = __offset(16); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public ubii.interactions.Interaction interactions(int j) { return interactions(new ubii.interactions.Interaction(), j); }
  public ubii.interactions.Interaction interactions(ubii.interactions.Interaction obj, int j) { int o = __offset(18); return o != 0 ? obj.__assign(__indirect(__vector(o) + j * 4), bb) : null; }
  public int interactionsLength() { int o = __offset(18); return o != 0 ? __vector_len(o) : 0; }
  public IOMapping ioMappings(int j) { return ioMappings(new IOMapping(), j); }
  public IOMapping ioMappings(IOMapping obj, int j) { int o = __offset(20); return o != 0 ? obj.__assign(__indirect(__vector(o) + j * 4), bb) : null; }
  public int ioMappingsLength() { int o = __offset(20); return o != 0 ? __vector_len(o) : 0; }

  public static int createSession(FlatBufferBuilder builder,
      int idOffset,
      int nameOffset,
      int authorsOffset,
      int tagsOffset,
      int descriptionOffset,
      byte process_mode,
      byte status,
      int interactionsOffset,
      int io_mappingsOffset) {
    builder.startObject(9);
    Session.addIoMappings(builder, io_mappingsOffset);
    Session.addInteractions(builder, interactionsOffset);
    Session.addDescription(builder, descriptionOffset);
    Session.addTags(builder, tagsOffset);
    Session.addAuthors(builder, authorsOffset);
    Session.addName(builder, nameOffset);
    Session.addId(builder, idOffset);
    Session.addStatus(builder, status);
    Session.addProcessMode(builder, process_mode);
    return Session.endSession(builder);
  }

  public static void startSession(FlatBufferBuilder builder) { builder.startObject(9); }
  public static void addId(FlatBufferBuilder builder, int idOffset) { builder.addOffset(0, idOffset, 0); }
  public static void addName(FlatBufferBuilder builder, int nameOffset) { builder.addOffset(1, nameOffset, 0); }
  public static void addAuthors(FlatBufferBuilder builder, int authorsOffset) { builder.addOffset(2, authorsOffset, 0); }
  public static int createAuthorsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startAuthorsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addTags(FlatBufferBuilder builder, int tagsOffset) { builder.addOffset(3, tagsOffset, 0); }
  public static int createTagsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startTagsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addDescription(FlatBufferBuilder builder, int descriptionOffset) { builder.addOffset(4, descriptionOffset, 0); }
  public static void addProcessMode(FlatBufferBuilder builder, byte processMode) { builder.addByte(5, processMode, 0); }
  public static void addStatus(FlatBufferBuilder builder, byte status) { builder.addByte(6, status, 0); }
  public static void addInteractions(FlatBufferBuilder builder, int interactionsOffset) { builder.addOffset(7, interactionsOffset, 0); }
  public static int createInteractionsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startInteractionsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static void addIoMappings(FlatBufferBuilder builder, int ioMappingsOffset) { builder.addOffset(8, ioMappingsOffset, 0); }
  public static int createIoMappingsVector(FlatBufferBuilder builder, int[] data) { builder.startVector(4, data.length, 4); for (int i = data.length - 1; i >= 0; i--) builder.addOffset(data[i]); return builder.endVector(); }
  public static void startIoMappingsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(4, numElems, 4); }
  public static int endSession(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
  public static void finishSessionBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedSessionBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }
}

