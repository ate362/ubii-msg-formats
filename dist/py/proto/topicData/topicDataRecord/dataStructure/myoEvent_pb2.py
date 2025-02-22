# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/topicData/topicDataRecord/dataStructure/myoEvent.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.topicData.topicDataRecord.dataStructure import vector8_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector8__pb2
from proto.topicData.topicDataRecord.dataStructure import vector3_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2
from proto.topicData.topicDataRecord.dataStructure import quaternion_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2
from proto.topicData.topicDataRecord.dataStructure import handGestureType_pb2 as proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_handGestureType__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/topicData/topicDataRecord/dataStructure/myoEvent.proto',
  package='ubii.dataStructure',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n<proto/topicData/topicDataRecord/dataStructure/myoEvent.proto\x12\x12ubii.dataStructure\x1a;proto/topicData/topicDataRecord/dataStructure/vector8.proto\x1a;proto/topicData/topicDataRecord/dataStructure/vector3.proto\x1a>proto/topicData/topicDataRecord/dataStructure/quaternion.proto\x1a\x43proto/topicData/topicDataRecord/dataStructure/handGestureType.proto\"\x83\x02\n\x08MyoEvent\x12(\n\x03\x65mg\x18\x01 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector8\x12\x33\n\x0borientation\x18\x02 \x01(\x0b\x32\x1e.ubii.dataStructure.Quaternion\x12.\n\tgyroscope\x18\x03 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector3\x12\x32\n\raccelerometer\x18\x04 \x01(\x0b\x32\x1b.ubii.dataStructure.Vector3\x12\x34\n\x07gesture\x18\x05 \x01(\x0e\x32#.ubii.dataStructure.HandGestureTypeb\x06proto3')
  ,
  dependencies=[proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector8__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2.DESCRIPTOR,proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_handGestureType__pb2.DESCRIPTOR,])




_MYOEVENT = _descriptor.Descriptor(
  name='MyoEvent',
  full_name='ubii.dataStructure.MyoEvent',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='emg', full_name='ubii.dataStructure.MyoEvent.emg', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='orientation', full_name='ubii.dataStructure.MyoEvent.orientation', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='gyroscope', full_name='ubii.dataStructure.MyoEvent.gyroscope', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='accelerometer', full_name='ubii.dataStructure.MyoEvent.accelerometer', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='gesture', full_name='ubii.dataStructure.MyoEvent.gesture', index=4,
      number=5, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=340,
  serialized_end=599,
)

_MYOEVENT.fields_by_name['emg'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector8__pb2._VECTOR8
_MYOEVENT.fields_by_name['orientation'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_quaternion__pb2._QUATERNION
_MYOEVENT.fields_by_name['gyroscope'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2._VECTOR3
_MYOEVENT.fields_by_name['accelerometer'].message_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_vector3__pb2._VECTOR3
_MYOEVENT.fields_by_name['gesture'].enum_type = proto_dot_topicData_dot_topicDataRecord_dot_dataStructure_dot_handGestureType__pb2._HANDGESTURETYPE
DESCRIPTOR.message_types_by_name['MyoEvent'] = _MYOEVENT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

MyoEvent = _reflection.GeneratedProtocolMessageType('MyoEvent', (_message.Message,), dict(
  DESCRIPTOR = _MYOEVENT,
  __module__ = 'proto.topicData.topicDataRecord.dataStructure.myoEvent_pb2'
  # @@protoc_insertion_point(class_scope:ubii.dataStructure.MyoEvent)
  ))
_sym_db.RegisterMessage(MyoEvent)


# @@protoc_insertion_point(module_scope)
