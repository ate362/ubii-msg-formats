// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.dataStructures
{

using global::System;
using global::FlatBuffers;

public struct DataStructure : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static DataStructure GetRootAsDataStructure(ByteBuffer _bb) { return GetRootAsDataStructure(_bb, new DataStructure()); }
  public static DataStructure GetRootAsDataStructure(ByteBuffer _bb, DataStructure obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p.bb_pos = _i; __p.bb = _bb; }
  public DataStructure __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public bool Bool { get { int o = __p.__offset(4); return o != 0 ? 0!=__p.bb.Get(o + __p.bb_pos) : (bool)false; } }
  public bool BoolList(int j) { int o = __p.__offset(6); return o != 0 ? 0!=__p.bb.Get(__p.__vector(o) + j * 1) : false; }
  public int BoolListLength { get { int o = __p.__offset(6); return o != 0 ? __p.__vector_len(o) : 0; } }
#if ENABLE_SPAN_T
  public Span<byte> GetBoolListBytes() { return __p.__vector_as_span(6); }
#else
  public ArraySegment<byte>? GetBoolListBytes() { return __p.__vector_as_arraysegment(6); }
#endif
  public bool[] GetBoolListArray() { return __p.__vector_as_array<bool>(6); }
  public string String { get { int o = __p.__offset(8); return o != 0 ? __p.__string(o + __p.bb_pos) : null; } }
#if ENABLE_SPAN_T
  public Span<byte> GetStringBytes() { return __p.__vector_as_span(8); }
#else
  public ArraySegment<byte>? GetStringBytes() { return __p.__vector_as_arraysegment(8); }
#endif
  public byte[] GetStringArray() { return __p.__vector_as_array<byte>(8); }
  public string StringList(int j) { int o = __p.__offset(10); return o != 0 ? __p.__string(__p.__vector(o) + j * 4) : null; }
  public int StringListLength { get { int o = __p.__offset(10); return o != 0 ? __p.__vector_len(o) : 0; } }
  public sbyte Byte { get { int o = __p.__offset(12); return o != 0 ? __p.bb.GetSbyte(o + __p.bb_pos) : (sbyte)0; } }
  public int Int32 { get { int o = __p.__offset(14); return o != 0 ? __p.bb.GetInt(o + __p.bb_pos) : (int)0; } }
  public int Int32List(int j) { int o = __p.__offset(16); return o != 0 ? __p.bb.GetInt(__p.__vector(o) + j * 4) : (int)0; }
  public int Int32ListLength { get { int o = __p.__offset(16); return o != 0 ? __p.__vector_len(o) : 0; } }
#if ENABLE_SPAN_T
  public Span<byte> GetInt32ListBytes() { return __p.__vector_as_span(16); }
#else
  public ArraySegment<byte>? GetInt32ListBytes() { return __p.__vector_as_arraysegment(16); }
#endif
  public int[] GetInt32ListArray() { return __p.__vector_as_array<int>(16); }
  public float Float { get { int o = __p.__offset(18); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public float FloatList(int j) { int o = __p.__offset(20); return o != 0 ? __p.bb.GetFloat(__p.__vector(o) + j * 4) : (float)0; }
  public int FloatListLength { get { int o = __p.__offset(20); return o != 0 ? __p.__vector_len(o) : 0; } }
#if ENABLE_SPAN_T
  public Span<byte> GetFloatListBytes() { return __p.__vector_as_span(20); }
#else
  public ArraySegment<byte>? GetFloatListBytes() { return __p.__vector_as_arraysegment(20); }
#endif
  public float[] GetFloatListArray() { return __p.__vector_as_array<float>(20); }
  public double Double { get { int o = __p.__offset(22); return o != 0 ? __p.bb.GetDouble(o + __p.bb_pos) : (double)0.0; } }
  public double DoubleList(int j) { int o = __p.__offset(24); return o != 0 ? __p.bb.GetDouble(__p.__vector(o) + j * 8) : (double)0; }
  public int DoubleListLength { get { int o = __p.__offset(24); return o != 0 ? __p.__vector_len(o) : 0; } }
#if ENABLE_SPAN_T
  public Span<byte> GetDoubleListBytes() { return __p.__vector_as_span(24); }
#else
  public ArraySegment<byte>? GetDoubleListBytes() { return __p.__vector_as_arraysegment(24); }
#endif
  public double[] GetDoubleListArray() { return __p.__vector_as_array<double>(24); }
  public Vector2? Vector2 { get { int o = __p.__offset(26); return o != 0 ? (Vector2?)(new Vector2()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public Vector3? Vector3 { get { int o = __p.__offset(28); return o != 0 ? (Vector3?)(new Vector3()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public Vector4? Vector4 { get { int o = __p.__offset(30); return o != 0 ? (Vector4?)(new Vector4()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public Quaternion? Quaternion { get { int o = __p.__offset(32); return o != 0 ? (Quaternion?)(new Quaternion()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public Matrix3x2? Matrix3x2 { get { int o = __p.__offset(34); return o != 0 ? (Matrix3x2?)(new Matrix3x2()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public Matrix4x4? Matrix4x4 { get { int o = __p.__offset(36); return o != 0 ? (Matrix4x4?)(new Matrix4x4()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public Color? Color { get { int o = __p.__offset(38); return o != 0 ? (Color?)(new Color()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public TouchEvent? TouchEvent { get { int o = __p.__offset(40); return o != 0 ? (TouchEvent?)(new TouchEvent()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public KeyEvent? KeyEvent { get { int o = __p.__offset(42); return o != 0 ? (KeyEvent?)(new KeyEvent()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public MouseEvent? MouseEvent { get { int o = __p.__offset(44); return o != 0 ? (MouseEvent?)(new MouseEvent()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public MyoEvent? MyoEvent { get { int o = __p.__offset(46); return o != 0 ? (MyoEvent?)(new MyoEvent()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Pose2D? Pose2D { get { int o = __p.__offset(48); return o != 0 ? (Pose2D?)(new Pose2D()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Pose3D? Pose3D { get { int o = __p.__offset(50); return o != 0 ? (Pose3D?)(new Pose3D()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Object2D? Object2D { get { int o = __p.__offset(52); return o != 0 ? (Object2D?)(new Object2D()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Object3D? Object3D { get { int o = __p.__offset(54); return o != 0 ? (Object3D?)(new Object3D()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Object2D? Object2DList(int j) { int o = __p.__offset(56); return o != 0 ? (Object2D?)(new Object2D()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int Object2DListLength { get { int o = __p.__offset(56); return o != 0 ? __p.__vector_len(o) : 0; } }
  public Object3D? Object3DList(int j) { int o = __p.__offset(58); return o != 0 ? (Object3D?)(new Object3D()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int Object3DListLength { get { int o = __p.__offset(58); return o != 0 ? __p.__vector_len(o) : 0; } }
  public Image2D? Image2D { get { int o = __p.__offset(60); return o != 0 ? (Image2D?)(new Image2D()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Image2D? Image2DList(int j) { int o = __p.__offset(62); return o != 0 ? (Image2D?)(new Image2D()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int Image2DListLength { get { int o = __p.__offset(62); return o != 0 ? __p.__vector_len(o) : 0; } }
  public ubii.sessions.Session? Session { get { int o = __p.__offset(64); return o != 0 ? (ubii.sessions.Session?)(new ubii.sessions.Session()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public ubii.interactions.Interaction? Interaction { get { int o = __p.__offset(66); return o != 0 ? (ubii.interactions.Interaction?)(new ubii.interactions.Interaction()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }

  public static void StartDataStructure(FlatBufferBuilder builder) { builder.StartObject(32); }
  public static void AddBool(FlatBufferBuilder builder, bool bool) { builder.AddBool(0, bool, false); }
  public static void AddBoolList(FlatBufferBuilder builder, VectorOffset boolListOffset) { builder.AddOffset(1, boolListOffset.Value, 0); }
  public static VectorOffset CreateBoolListVector(FlatBufferBuilder builder, bool[] data) { builder.StartVector(1, data.Length, 1); for (int i = data.Length - 1; i >= 0; i--) builder.AddBool(data[i]); return builder.EndVector(); }
  public static VectorOffset CreateBoolListVectorBlock(FlatBufferBuilder builder, bool[] data) { builder.StartVector(1, data.Length, 1); builder.Add(data); return builder.EndVector(); }
  public static void StartBoolListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(1, numElems, 1); }
  public static void AddString(FlatBufferBuilder builder, StringOffset stringOffset) { builder.AddOffset(2, stringOffset.Value, 0); }
  public static void AddStringList(FlatBufferBuilder builder, VectorOffset stringListOffset) { builder.AddOffset(3, stringListOffset.Value, 0); }
  public static VectorOffset CreateStringListVector(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateStringListVectorBlock(FlatBufferBuilder builder, StringOffset[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartStringListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddByte(FlatBufferBuilder builder, sbyte byte) { builder.AddSbyte(4, byte, 0); }
  public static void AddInt32(FlatBufferBuilder builder, int int32) { builder.AddInt(5, int32, 0); }
  public static void AddInt32List(FlatBufferBuilder builder, VectorOffset int32ListOffset) { builder.AddOffset(6, int32ListOffset.Value, 0); }
  public static VectorOffset CreateInt32ListVector(FlatBufferBuilder builder, int[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddInt(data[i]); return builder.EndVector(); }
  public static VectorOffset CreateInt32ListVectorBlock(FlatBufferBuilder builder, int[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartInt32ListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddFloat(FlatBufferBuilder builder, float float) { builder.AddFloat(7, float, 0.0f); }
  public static void AddFloatList(FlatBufferBuilder builder, VectorOffset floatListOffset) { builder.AddOffset(8, floatListOffset.Value, 0); }
  public static VectorOffset CreateFloatListVector(FlatBufferBuilder builder, float[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddFloat(data[i]); return builder.EndVector(); }
  public static VectorOffset CreateFloatListVectorBlock(FlatBufferBuilder builder, float[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartFloatListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddDouble(FlatBufferBuilder builder, double double) { builder.AddDouble(9, double, 0.0); }
  public static void AddDoubleList(FlatBufferBuilder builder, VectorOffset doubleListOffset) { builder.AddOffset(10, doubleListOffset.Value, 0); }
  public static VectorOffset CreateDoubleListVector(FlatBufferBuilder builder, double[] data) { builder.StartVector(8, data.Length, 8); for (int i = data.Length - 1; i >= 0; i--) builder.AddDouble(data[i]); return builder.EndVector(); }
  public static VectorOffset CreateDoubleListVectorBlock(FlatBufferBuilder builder, double[] data) { builder.StartVector(8, data.Length, 8); builder.Add(data); return builder.EndVector(); }
  public static void StartDoubleListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(8, numElems, 8); }
  public static void AddVector2(FlatBufferBuilder builder, Offset<Vector2> vector2Offset) { builder.AddStruct(11, vector2Offset.Value, 0); }
  public static void AddVector3(FlatBufferBuilder builder, Offset<Vector3> vector3Offset) { builder.AddStruct(12, vector3Offset.Value, 0); }
  public static void AddVector4(FlatBufferBuilder builder, Offset<Vector4> vector4Offset) { builder.AddStruct(13, vector4Offset.Value, 0); }
  public static void AddQuaternion(FlatBufferBuilder builder, Offset<Quaternion> quaternionOffset) { builder.AddStruct(14, quaternionOffset.Value, 0); }
  public static void AddMatrix3x2(FlatBufferBuilder builder, Offset<Matrix3x2> matrix3x2Offset) { builder.AddStruct(15, matrix3x2Offset.Value, 0); }
  public static void AddMatrix4x4(FlatBufferBuilder builder, Offset<Matrix4x4> matrix4x4Offset) { builder.AddStruct(16, matrix4x4Offset.Value, 0); }
  public static void AddColor(FlatBufferBuilder builder, Offset<Color> colorOffset) { builder.AddStruct(17, colorOffset.Value, 0); }
  public static void AddTouchEvent(FlatBufferBuilder builder, Offset<TouchEvent> touchEventOffset) { builder.AddOffset(18, touchEventOffset.Value, 0); }
  public static void AddKeyEvent(FlatBufferBuilder builder, Offset<KeyEvent> keyEventOffset) { builder.AddOffset(19, keyEventOffset.Value, 0); }
  public static void AddMouseEvent(FlatBufferBuilder builder, Offset<MouseEvent> mouseEventOffset) { builder.AddOffset(20, mouseEventOffset.Value, 0); }
  public static void AddMyoEvent(FlatBufferBuilder builder, Offset<MyoEvent> myoEventOffset) { builder.AddOffset(21, myoEventOffset.Value, 0); }
  public static void AddPose2D(FlatBufferBuilder builder, Offset<Pose2D> pose2DOffset) { builder.AddOffset(22, pose2DOffset.Value, 0); }
  public static void AddPose3D(FlatBufferBuilder builder, Offset<Pose3D> pose3DOffset) { builder.AddOffset(23, pose3DOffset.Value, 0); }
  public static void AddObject2D(FlatBufferBuilder builder, Offset<Object2D> object2DOffset) { builder.AddOffset(24, object2DOffset.Value, 0); }
  public static void AddObject3D(FlatBufferBuilder builder, Offset<Object3D> object3DOffset) { builder.AddOffset(25, object3DOffset.Value, 0); }
  public static void AddObject2DList(FlatBufferBuilder builder, VectorOffset object2DListOffset) { builder.AddOffset(26, object2DListOffset.Value, 0); }
  public static VectorOffset CreateObject2DListVector(FlatBufferBuilder builder, Offset<Object2D>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateObject2DListVectorBlock(FlatBufferBuilder builder, Offset<Object2D>[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartObject2DListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddObject3DList(FlatBufferBuilder builder, VectorOffset object3DListOffset) { builder.AddOffset(27, object3DListOffset.Value, 0); }
  public static VectorOffset CreateObject3DListVector(FlatBufferBuilder builder, Offset<Object3D>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateObject3DListVectorBlock(FlatBufferBuilder builder, Offset<Object3D>[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartObject3DListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddImage2D(FlatBufferBuilder builder, Offset<Image2D> image2DOffset) { builder.AddOffset(28, image2DOffset.Value, 0); }
  public static void AddImage2DList(FlatBufferBuilder builder, VectorOffset image2DListOffset) { builder.AddOffset(29, image2DListOffset.Value, 0); }
  public static VectorOffset CreateImage2DListVector(FlatBufferBuilder builder, Offset<Image2D>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static VectorOffset CreateImage2DListVectorBlock(FlatBufferBuilder builder, Offset<Image2D>[] data) { builder.StartVector(4, data.Length, 4); builder.Add(data); return builder.EndVector(); }
  public static void StartImage2DListVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static void AddSession(FlatBufferBuilder builder, Offset<ubii.sessions.Session> sessionOffset) { builder.AddOffset(30, sessionOffset.Value, 0); }
  public static void AddInteraction(FlatBufferBuilder builder, Offset<ubii.interactions.Interaction> interactionOffset) { builder.AddOffset(31, interactionOffset.Value, 0); }
  public static Offset<DataStructure> EndDataStructure(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<DataStructure>(o);
  }
};


}
