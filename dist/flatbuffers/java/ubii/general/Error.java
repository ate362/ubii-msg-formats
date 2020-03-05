// automatically generated by the FlatBuffers compiler, do not modify

package ubii.general;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Error extends Table {
  public static Error getRootAsError(ByteBuffer _bb) { return getRootAsError(_bb, new Error()); }
  public static Error getRootAsError(ByteBuffer _bb, Error obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; vtable_start = bb_pos - bb.getInt(bb_pos); vtable_size = bb.getShort(vtable_start); }
  public Error __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public String title() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer titleAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public ByteBuffer titleInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 4, 1); }
  public String message() { int o = __offset(6); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer messageAsByteBuffer() { return __vector_as_bytebuffer(6, 1); }
  public ByteBuffer messageInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 6, 1); }
  public String stack() { int o = __offset(8); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer stackAsByteBuffer() { return __vector_as_bytebuffer(8, 1); }
  public ByteBuffer stackInByteBuffer(ByteBuffer _bb) { return __vector_in_bytebuffer(_bb, 8, 1); }

  public static int createError(FlatBufferBuilder builder,
      int titleOffset,
      int messageOffset,
      int stackOffset) {
    builder.startObject(3);
    Error.addStack(builder, stackOffset);
    Error.addMessage(builder, messageOffset);
    Error.addTitle(builder, titleOffset);
    return Error.endError(builder);
  }

  public static void startError(FlatBufferBuilder builder) { builder.startObject(3); }
  public static void addTitle(FlatBufferBuilder builder, int titleOffset) { builder.addOffset(0, titleOffset, 0); }
  public static void addMessage(FlatBufferBuilder builder, int messageOffset) { builder.addOffset(1, messageOffset, 0); }
  public static void addStack(FlatBufferBuilder builder, int stackOffset) { builder.addOffset(2, stackOffset, 0); }
  public static int endError(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
  public static void finishErrorBuffer(FlatBufferBuilder builder, int offset) { builder.finish(offset); }
  public static void finishSizePrefixedErrorBuffer(FlatBufferBuilder builder, int offset) { builder.finishSizePrefixed(offset); }
}

