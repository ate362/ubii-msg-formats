# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/topicDataRecord.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.topicData.topicDataRecord import timestamp_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_timestamp__pb2
from proto.topicData.topicDataRecord.dataStructure import lists_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2
from proto.topicData.topicDataRecord.dataStructure import vector2_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2
from proto.topicData.topicDataRecord.dataStructure import vector3_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2
from proto.topicData.topicDataRecord.dataStructure import vector4_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector4__pb2
from proto.topicData.topicDataRecord.dataStructure import quaternion_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2
from proto.topicData.topicDataRecord.dataStructure import matrix3x2_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix3x2__pb2
from proto.topicData.topicDataRecord.dataStructure import matrix4x4_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix4x4__pb2
from proto.topicData.topicDataRecord.dataStructure import color_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_color__pb2
from proto.topicData.topicDataRecord.dataStructure import touchEvent_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_touchEvent__pb2
from proto.topicData.topicDataRecord.dataStructure import keyEvent_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_keyEvent__pb2
from proto.topicData.topicDataRecord.dataStructure import mouseEvent_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_mouseEvent__pb2
from proto.topicData.topicDataRecord.dataStructure import myoEvent_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_myoEvent__pb2
from proto.topicData.topicDataRecord.dataStructure import pose2d_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose2d__pb2
from proto.topicData.topicDataRecord.dataStructure import pose3d_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose3d__pb2
from proto.topicData.topicDataRecord.dataStructure import object2d_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object2d__pb2
from proto.topicData.topicDataRecord.dataStructure import object3d_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object3d__pb2
from proto.topicData.topicDataRecord.dataStructure import image_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_image__pb2
from proto.sessions import session_pb2 as proto_dot_sessions_dot_session__pb2
from proto.processing import processingModule_pb2 as proto_dot_processing_dot_processingModule__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/topicDataRecord.proto',
  package='ubii.topicData',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=b'\n5proto/topicData/topicDataRecord/topicDataRecord.proto\x12\x0eubii.topicData\x1a/proto/topicData/topicDataRecord/timestamp.proto\x1a\x39proto/topicData/topicDataRecord/dataStructure/lists.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector2.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector3.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector4.proto\x1a>proto/topicData/topicDataRecord/dataStructure/quaternion.proto\x1a=proto/topicData/topicDataRecord/dataStructure/matrix3x2.proto\x1a=proto/topicData/topicDataRecord/dataStructure/matrix4x4.proto\x1a\x39proto/topicData/topicDataRecord/dataStructure/color.proto\x1a>proto/topicData/topicDataRecord/dataStructure/touchEvent.proto\x1a<proto/topicData/topicDataRecord/dataStructure/keyEvent.proto\x1a>proto/topicData/topicDataRecord/dataStructure/mouseEvent.proto\x1a<proto/topicData/topicDataRecord/dataStructure/myoEvent.proto\x1a:proto/topicData/topicDataRecord/dataStructure/pose2d.proto\x1a:proto/topicData/topicDataRecord/dataStructure/pose3d.proto\x1a<proto/topicData/topicDataRecord/dataStructure/object2d.proto\x1a<proto/topicData/topicDataRecord/dataStructure/object3d.proto\x1a\x39proto/topicData/topicDataRecord/dataStructure/image.proto\x1a\x1cproto/sessions/session.proto\x1a\'proto/processing/processingModule.proto\"\xf8\x0b\n\x0fTopicDataRecord\x12\r\n\x05topic\x18\x01 \x01(\t\x12,\n\ttimestamp\x18\x02 \x01(\x0b\x32\x19.ubii.topicData.Timestamp\x12\x10\n\x06\x64ouble\x18\x03 \x01(\x01H\x00\x12\x0e\n\x04\x62ool\x18\x04 \x01(\x08H\x00\x12\x10\n\x06string\x18\x05 \x01(\tH\x00\x12.\n\x07vector2\x18\x06 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector2H\x00\x12.\n\x07vector3\x18\x07 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector3H\x00\x12.\n\x07vector4\x18\x08 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector4H\x00\x12\x34\n\nquaternion\x18\t \x01(\x0b\x32\x1e.ubii.dataStructure.QuaternionH\x00\x12\x32\n\tmatrix3x2\x18\n \x01(\x0b\x32\x1d.ubii.dataStructure.Matrix3x2H\x00\x12\x32\n\tmatrix4x4\x18\x0b \x01(\x0b\x32\x1d.ubii.dataStructure.Matrix4x4H\x00\x12*\n\x05\x63olor\x18\x0c \x01(\x0b\x32\x19.ubii.dataStructure.ColorH\x00\x12\x35\n\x0btouch_event\x18\r \x01(\x0b\x32\x1e.ubii.dataStructure.TouchEventH\x00\x12\x31\n\tkey_event\x18\x0e \x01(\x0b\x32\x1c.ubii.dataStructure.KeyEventH\x00\x12\x35\n\x0bmouse_event\x18\x0f \x01(\x0b\x32\x1e.ubii.dataStructure.MouseEventH\x00\x12\x31\n\tmyo_event\x18\x10 \x01(\x0b\x32\x1c.ubii.dataStructure.MyoEventH\x00\x12,\n\x06pose2D\x18\x11 \x01(\x0b\x32\x1a.ubii.dataStructure.Pose2DH\x00\x12,\n\x06pose3D\x18\x12 \x01(\x0b\x32\x1a.ubii.dataStructure.Pose3DH\x00\x12\x30\n\x08object2D\x18\x13 \x01(\x0b\x32\x1c.ubii.dataStructure.Object2DH\x00\x12\x30\n\x08object3D\x18\x14 \x01(\x0b\x32\x1c.ubii.dataStructure.Object3DH\x00\x12\x39\n\robject2D_list\x18\x15 \x01(\x0b\x32 .ubii.dataStructure.Object2DListH\x00\x12\x39\n\robject3D_list\x18\x16 \x01(\x0b\x32 .ubii.dataStructure.Object3DListH\x00\x12\x0f\n\x05int32\x18\x17 \x01(\x05H\x00\x12\x0f\n\x05\x66loat\x18\x18 \x01(\x02H\x00\x12\x33\n\nint32_list\x18\x19 \x01(\x0b\x32\x1d.ubii.dataStructure.Int32ListH\x00\x12\x33\n\nfloat_list\x18\x1a \x01(\x0b\x32\x1d.ubii.dataStructure.FloatListH\x00\x12\x35\n\x0b\x64ouble_list\x18\x1b \x01(\x0b\x32\x1e.ubii.dataStructure.DoubleListH\x00\x12\x35\n\x0bstring_list\x18\x1c \x01(\x0b\x32\x1e.ubii.dataStructure.StringListH\x00\x12\x31\n\tbool_list\x18\x1d \x01(\x0b\x32\x1c.ubii.dataStructure.BoolListH\x00\x12.\n\x07image2D\x18\x1e \x01(\x0b\x32\x1b.ubii.dataStructure.Image2DH\x00\x12\x37\n\x0cimage2D_list\x18\x1f \x01(\x0b\x32\x1f.ubii.dataStructure.Image2DListH\x00\x12)\n\x07session\x18  \x01(\x0b\x32\x16.ubii.sessions.SessionH\x00\x12G\n\x16processing_module_list\x18! \x01(\x0b\x32%.ubii.processing.ProcessingModuleListH\x00\x42\x06\n\x04type\"H\n\x13TopicDataRecordList\x12\x31\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x1f.ubii.topicData.TopicDataRecordb\x06proto3'
  ,
  dependencies=[proto_dot_topicData_dot_topicDataRecord_dot_timestamp__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector4__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix3x2__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix4x4__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_color__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_touchEvent__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_keyEvent__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_mouseEvent__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_myoEvent__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose2d__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose3d__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object2d__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object3d__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_image__pb2.DESCRIPTOR,proto_dot_sessions_dot_session__pb2.DESCRIPTOR,proto_dot_processing_dot_processingModule__pb2.DESCRIPTOR,])




_TOPICDATARECORD = _descriptor.Descriptor(
  name='TopicDataRecord',
  full_name='ubii.topicData.TopicDataRecord',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='topic', full_name='ubii.topicData.TopicDataRecord.topic', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='ubii.topicData.TopicDataRecord.timestamp', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='double', full_name='ubii.topicData.TopicDataRecord.double', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='bool', full_name='ubii.topicData.TopicDataRecord.bool', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='string', full_name='ubii.topicData.TopicDataRecord.string', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vector2', full_name='ubii.topicData.TopicDataRecord.vector2', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vector3', full_name='ubii.topicData.TopicDataRecord.vector3', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vector4', full_name='ubii.topicData.TopicDataRecord.vector4', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='quaternion', full_name='ubii.topicData.TopicDataRecord.quaternion', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='matrix3x2', full_name='ubii.topicData.TopicDataRecord.matrix3x2', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='matrix4x4', full_name='ubii.topicData.TopicDataRecord.matrix4x4', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='color', full_name='ubii.topicData.TopicDataRecord.color', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='touch_event', full_name='ubii.topicData.TopicDataRecord.touch_event', index=12,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='key_event', full_name='ubii.topicData.TopicDataRecord.key_event', index=13,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='mouse_event', full_name='ubii.topicData.TopicDataRecord.mouse_event', index=14,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='myo_event', full_name='ubii.topicData.TopicDataRecord.myo_event', index=15,
      number=16, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pose2D', full_name='ubii.topicData.TopicDataRecord.pose2D', index=16,
      number=17, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pose3D', full_name='ubii.topicData.TopicDataRecord.pose3D', index=17,
      number=18, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='object2D', full_name='ubii.topicData.TopicDataRecord.object2D', index=18,
      number=19, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='object3D', full_name='ubii.topicData.TopicDataRecord.object3D', index=19,
      number=20, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='object2D_list', full_name='ubii.topicData.TopicDataRecord.object2D_list', index=20,
      number=21, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='object3D_list', full_name='ubii.topicData.TopicDataRecord.object3D_list', index=21,
      number=22, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='int32', full_name='ubii.topicData.TopicDataRecord.int32', index=22,
      number=23, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='float', full_name='ubii.topicData.TopicDataRecord.float', index=23,
      number=24, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='int32_list', full_name='ubii.topicData.TopicDataRecord.int32_list', index=24,
      number=25, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='float_list', full_name='ubii.topicData.TopicDataRecord.float_list', index=25,
      number=26, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='double_list', full_name='ubii.topicData.TopicDataRecord.double_list', index=26,
      number=27, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='string_list', full_name='ubii.topicData.TopicDataRecord.string_list', index=27,
      number=28, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='bool_list', full_name='ubii.topicData.TopicDataRecord.bool_list', index=28,
      number=29, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='image2D', full_name='ubii.topicData.TopicDataRecord.image2D', index=29,
      number=30, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='image2D_list', full_name='ubii.topicData.TopicDataRecord.image2D_list', index=30,
      number=31, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='session', full_name='ubii.topicData.TopicDataRecord.session', index=31,
      number=32, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='processing_module_list', full_name='ubii.topicData.TopicDataRecord.processing_module_list', index=32,
      number=33, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='type', full_name='ubii.topicData.TopicDataRecord.type',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=1240,
  serialized_end=2768,
)


_TOPICDATARECORDLIST = _descriptor.Descriptor(
  name='TopicDataRecordList',
  full_name='ubii.topicData.TopicDataRecordList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.topicData.TopicDataRecordList.elements', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=2770,
  serialized_end=2842,
)

_TOPICDATARECORD.fields_by_name['timestamp'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_timestamp__pb2._TIMESTAMP
_TOPICDATARECORD.fields_by_name['vector2'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector2__pb2._VECTOR2
_TOPICDATARECORD.fields_by_name['vector3'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2._VECTOR3
_TOPICDATARECORD.fields_by_name['vector4'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector4__pb2._VECTOR4
_TOPICDATARECORD.fields_by_name['quaternion'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2._QUATERNION
_TOPICDATARECORD.fields_by_name['matrix3x2'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix3x2__pb2._MATRIX3X2
_TOPICDATARECORD.fields_by_name['matrix4x4'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_matrix4x4__pb2._MATRIX4X4
_TOPICDATARECORD.fields_by_name['color'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_color__pb2._COLOR
_TOPICDATARECORD.fields_by_name['touch_event'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_touchEvent__pb2._TOUCHEVENT
_TOPICDATARECORD.fields_by_name['key_event'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_keyEvent__pb2._KEYEVENT
_TOPICDATARECORD.fields_by_name['mouse_event'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_mouseEvent__pb2._MOUSEEVENT
_TOPICDATARECORD.fields_by_name['myo_event'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_myoEvent__pb2._MYOEVENT
_TOPICDATARECORD.fields_by_name['pose2D'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose2d__pb2._POSE2D
_TOPICDATARECORD.fields_by_name['pose3D'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_pose3d__pb2._POSE3D
_TOPICDATARECORD.fields_by_name['object2D'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object2d__pb2._OBJECT2D
_TOPICDATARECORD.fields_by_name['object3D'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object3d__pb2._OBJECT3D
_TOPICDATARECORD.fields_by_name['object2D_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object2d__pb2._OBJECT2DLIST
_TOPICDATARECORD.fields_by_name['object3D_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_object3d__pb2._OBJECT3DLIST
_TOPICDATARECORD.fields_by_name['int32_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2._INT32LIST
_TOPICDATARECORD.fields_by_name['float_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2._FLOATLIST
_TOPICDATARECORD.fields_by_name['double_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2._DOUBLELIST
_TOPICDATARECORD.fields_by_name['string_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2._STRINGLIST
_TOPICDATARECORD.fields_by_name['bool_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_lists__pb2._BOOLLIST
_TOPICDATARECORD.fields_by_name['image2D'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_image__pb2._IMAGE2D
_TOPICDATARECORD.fields_by_name['image2D_list'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_image__pb2._IMAGE2DLIST
_TOPICDATARECORD.fields_by_name['session'].message_type = proto_dot_sessions_dot_session__pb2._SESSION
_TOPICDATARECORD.fields_by_name['processing_module_list'].message_type = proto_dot_processing_dot_processingModule__pb2._PROCESSINGMODULELIST
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['double'])
_TOPICDATARECORD.fields_by_name['double'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['bool'])
_TOPICDATARECORD.fields_by_name['bool'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['string'])
_TOPICDATARECORD.fields_by_name['string'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['vector2'])
_TOPICDATARECORD.fields_by_name['vector2'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['vector3'])
_TOPICDATARECORD.fields_by_name['vector3'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['vector4'])
_TOPICDATARECORD.fields_by_name['vector4'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['quaternion'])
_TOPICDATARECORD.fields_by_name['quaternion'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['matrix3x2'])
_TOPICDATARECORD.fields_by_name['matrix3x2'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['matrix4x4'])
_TOPICDATARECORD.fields_by_name['matrix4x4'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['color'])
_TOPICDATARECORD.fields_by_name['color'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['touch_event'])
_TOPICDATARECORD.fields_by_name['touch_event'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['key_event'])
_TOPICDATARECORD.fields_by_name['key_event'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['mouse_event'])
_TOPICDATARECORD.fields_by_name['mouse_event'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['myo_event'])
_TOPICDATARECORD.fields_by_name['myo_event'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['pose2D'])
_TOPICDATARECORD.fields_by_name['pose2D'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['pose3D'])
_TOPICDATARECORD.fields_by_name['pose3D'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['object2D'])
_TOPICDATARECORD.fields_by_name['object2D'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['object3D'])
_TOPICDATARECORD.fields_by_name['object3D'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['object2D_list'])
_TOPICDATARECORD.fields_by_name['object2D_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['object3D_list'])
_TOPICDATARECORD.fields_by_name['object3D_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['int32'])
_TOPICDATARECORD.fields_by_name['int32'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['float'])
_TOPICDATARECORD.fields_by_name['float'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['int32_list'])
_TOPICDATARECORD.fields_by_name['int32_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['float_list'])
_TOPICDATARECORD.fields_by_name['float_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['double_list'])
_TOPICDATARECORD.fields_by_name['double_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['string_list'])
_TOPICDATARECORD.fields_by_name['string_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['bool_list'])
_TOPICDATARECORD.fields_by_name['bool_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['image2D'])
_TOPICDATARECORD.fields_by_name['image2D'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['image2D_list'])
_TOPICDATARECORD.fields_by_name['image2D_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['session'])
_TOPICDATARECORD.fields_by_name['session'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORD.oneofs_by_name['type'].fields.append(
  _TOPICDATARECORD.fields_by_name['processing_module_list'])
_TOPICDATARECORD.fields_by_name['processing_module_list'].containing_oneof = _TOPICDATARECORD.oneofs_by_name['type']
_TOPICDATARECORDLIST.fields_by_name['elements'].message_type = _TOPICDATARECORD
DESCRIPTOR.message_types_by_name['TopicDataRecord'] = _TOPICDATARECORD
DESCRIPTOR.message_types_by_name['TopicDataRecordList'] = _TOPICDATARECORDLIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TopicDataRecord = _reflection.GeneratedProtocolMessageType('TopicDataRecord', (_message.Message,), {
  'DESCRIPTOR' : _TOPICDATARECORD,
  '__module__' : 'proto.topicData.topicDataRecord.topicDataRecord_pb2'
  # @@protoc_insertion_point(class_scope:ubii.topicData.TopicDataRecord)
  })
_sym_db.RegisterMessage(TopicDataRecord)

TopicDataRecordList = _reflection.GeneratedProtocolMessageType('TopicDataRecordList', (_message.Message,), {
  'DESCRIPTOR' : _TOPICDATARECORDLIST,
  '__module__' : 'proto.topicData.topicDataRecord.topicDataRecord_pb2'
  # @@protoc_insertion_point(class_scope:ubii.topicData.TopicDataRecordList)
  })
_sym_db.RegisterMessage(TopicDataRecordList)


# @@protoc_insertion_point(module_scope)
