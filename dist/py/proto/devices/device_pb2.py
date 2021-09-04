# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/devices/device.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.devices import component_pb2 as proto_dot_devices_dot_component__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/devices/device.proto',
  package='ubii.devices',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x1aproto/devices/device.proto\x12\x0cubii.devices\x1a\x1dproto/devices/component.proto\"\xe7\x01\n\x06\x44\x65vice\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x34\n\x0b\x64\x65vice_type\x18\x03 \x01(\x0e\x32\x1f.ubii.devices.Device.DeviceType\x12+\n\ncomponents\x18\x04 \x03(\x0b\x32\x17.ubii.devices.Component\x12\x11\n\tclient_id\x18\x05 \x01(\t\x12\x0c\n\x04tags\x18\x06 \x03(\t\x12\x13\n\x0b\x64\x65scription\x18\x07 \x01(\t\"*\n\nDeviceType\x12\x0f\n\x0bPARTICIPANT\x10\x00\x12\x0b\n\x07WATCHER\x10\x01\"4\n\nDeviceList\x12&\n\x08\x65lements\x18\x01 \x03(\x0b\x32\x14.ubii.devices.Deviceb\x06proto3')
  ,
  dependencies=[proto_dot_devices_dot_component__pb2.DESCRIPTOR,])



_DEVICE_DEVICETYPE = _descriptor.EnumDescriptor(
  name='DeviceType',
  full_name='ubii.devices.Device.DeviceType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PARTICIPANT', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='WATCHER', index=1, number=1,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=265,
  serialized_end=307,
)
_sym_db.RegisterEnumDescriptor(_DEVICE_DEVICETYPE)


_DEVICE = _descriptor.Descriptor(
  name='Device',
  full_name='ubii.devices.Device',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ubii.devices.Device.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='ubii.devices.Device.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='device_type', full_name='ubii.devices.Device.device_type', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='components', full_name='ubii.devices.Device.components', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='client_id', full_name='ubii.devices.Device.client_id', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='tags', full_name='ubii.devices.Device.tags', index=5,
      number=6, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='description', full_name='ubii.devices.Device.description', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _DEVICE_DEVICETYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=76,
  serialized_end=307,
)


_DEVICELIST = _descriptor.Descriptor(
  name='DeviceList',
  full_name='ubii.devices.DeviceList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='elements', full_name='ubii.devices.DeviceList.elements', index=0,
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
  serialized_start=309,
  serialized_end=361,
)

_DEVICE.fields_by_name['device_type'].enum_type = _DEVICE_DEVICETYPE
_DEVICE.fields_by_name['components'].message_type = proto_dot_devices_dot_component__pb2._COMPONENT
_DEVICE_DEVICETYPE.containing_type = _DEVICE
_DEVICELIST.fields_by_name['elements'].message_type = _DEVICE
DESCRIPTOR.message_types_by_name['Device'] = _DEVICE
DESCRIPTOR.message_types_by_name['DeviceList'] = _DEVICELIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Device = _reflection.GeneratedProtocolMessageType('Device', (_message.Message,), dict(
  DESCRIPTOR = _DEVICE,
  __module__ = 'proto.devices.device_pb2'
  # @@protoc_insertion_point(class_scope:ubii.devices.Device)
  ))
_sym_db.RegisterMessage(Device)

DeviceList = _reflection.GeneratedProtocolMessageType('DeviceList', (_message.Message,), dict(
  DESCRIPTOR = _DEVICELIST,
  __module__ = 'proto.devices.device_pb2'
  # @@protoc_insertion_point(class_scope:ubii.devices.DeviceList)
  ))
_sym_db.RegisterMessage(DeviceList)


# @@protoc_insertion_point(module_scope)
