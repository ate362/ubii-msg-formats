# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/services/serviceRequest.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.clients import client_pb2 as proto_dot_clients_dot_client__pb2
from proto.devices import device_pb2 as proto_dot_devices_dot_device__pb2
from proto.devices import topicMux_pb2 as proto_dot_devices_dot_topicMux__pb2
from proto.devices import topicDemux_pb2 as proto_dot_devices_dot_topicDemux__pb2
from proto.sessions import session_pb2 as proto_dot_sessions_dot_session__pb2
from proto.services.request import topicSubscription_pb2 as proto_dot_services_dot_request_dot_topicSubscription__pb2
from proto.processing import processingModule_pb2 as proto_dot_processing_dot_processingModule__pb2
from proto.processing import lockstepProcessing_pb2 as proto_dot_processing_dot_lockstepProcessing__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/services/serviceRequest.proto',
  package='ubii.services',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=b'\n#proto/services/serviceRequest.proto\x12\rubii.services\x1a\x1aproto/clients/client.proto\x1a\x1aproto/devices/device.proto\x1a\x1cproto/devices/topicMux.proto\x1a\x1eproto/devices/topicDemux.proto\x1a\x1cproto/sessions/session.proto\x1a.proto/services/request/topicSubscription.proto\x1a\'proto/processing/processingModule.proto\x1a)proto/processing/lockstepProcessing.proto\"\xaa\x06\n\x0eServiceRequest\x12\r\n\x05topic\x18\x01 \x01(\t\x12&\n\x06\x63lient\x18\x02 \x01(\x0b\x32\x14.ubii.clients.ClientH\x00\x12&\n\x06\x64\x65vice\x18\x03 \x01(\x0b\x32\x14.ubii.devices.DeviceH\x00\x12\x46\n\x12topic_subscription\x18\x04 \x01(\x0b\x32(.ubii.services.request.TopicSubscriptionH\x00\x12)\n\x07session\x18\x05 \x01(\x0b\x32\x16.ubii.sessions.SessionH\x00\x12\x32\n\x0csession_list\x18\x06 \x01(\x0b\x32\x1a.ubii.sessions.SessionListH\x00\x12>\n\x11processing_module\x18\x07 \x01(\x0b\x32!.ubii.processing.ProcessingModuleH\x00\x12G\n\x16processing_module_list\x18\x08 \x01(\x0b\x32%.ubii.processing.ProcessingModuleListH\x00\x12+\n\ttopic_mux\x18\t \x01(\x0b\x32\x16.ubii.devices.TopicMuxH\x00\x12\x34\n\x0etopic_mux_list\x18\n \x01(\x0b\x32\x1a.ubii.devices.TopicMuxListH\x00\x12/\n\x0btopic_demux\x18\x0b \x01(\x0b\x32\x18.ubii.devices.TopicDemuxH\x00\x12\x38\n\x10topic_demux_list\x18\x0c \x01(\x0b\x32\x1c.ubii.devices.TopicDemuxListH\x00\x12/\n\x0b\x63lient_list\x18\r \x01(\x0b\x32\x18.ubii.clients.ClientListH\x00\x12/\n\x0b\x64\x65vice_list\x18\x0e \x01(\x0b\x32\x18.ubii.devices.DeviceListH\x00\x12Q\n\x1blockstep_processing_request\x18\x0f \x01(\x0b\x32*.ubii.processing.LockstepProcessingRequestH\x00\x42\x06\n\x04typeb\x06proto3'
  ,
  dependencies=[proto_dot_clients_dot_client__pb2.DESCRIPTOR,proto_dot_devices_dot_device__pb2.DESCRIPTOR,proto_dot_devices_dot_topicMux__pb2.DESCRIPTOR,proto_dot_devices_dot_topicDemux__pb2.DESCRIPTOR,proto_dot_sessions_dot_session__pb2.DESCRIPTOR,proto_dot_services_dot_request_dot_topicSubscription__pb2.DESCRIPTOR,proto_dot_processing_dot_processingModule__pb2.DESCRIPTOR,proto_dot_processing_dot_lockstepProcessing__pb2.DESCRIPTOR,])




_SERVICEREQUEST = _descriptor.Descriptor(
  name='ServiceRequest',
  full_name='ubii.services.ServiceRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='topic', full_name='ubii.services.ServiceRequest.topic', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='client', full_name='ubii.services.ServiceRequest.client', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='device', full_name='ubii.services.ServiceRequest.device', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_subscription', full_name='ubii.services.ServiceRequest.topic_subscription', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='session', full_name='ubii.services.ServiceRequest.session', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='session_list', full_name='ubii.services.ServiceRequest.session_list', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='processing_module', full_name='ubii.services.ServiceRequest.processing_module', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='processing_module_list', full_name='ubii.services.ServiceRequest.processing_module_list', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_mux', full_name='ubii.services.ServiceRequest.topic_mux', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_mux_list', full_name='ubii.services.ServiceRequest.topic_mux_list', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_demux', full_name='ubii.services.ServiceRequest.topic_demux', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic_demux_list', full_name='ubii.services.ServiceRequest.topic_demux_list', index=11,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='client_list', full_name='ubii.services.ServiceRequest.client_list', index=12,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='device_list', full_name='ubii.services.ServiceRequest.device_list', index=13,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='lockstep_processing_request', full_name='ubii.services.ServiceRequest.lockstep_processing_request', index=14,
      number=15, type=11, cpp_type=10, label=1,
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
      name='type', full_name='ubii.services.ServiceRequest.type',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=335,
  serialized_end=1145,
)

_SERVICEREQUEST.fields_by_name['client'].message_type = proto_dot_clients_dot_client__pb2._CLIENT
_SERVICEREQUEST.fields_by_name['device'].message_type = proto_dot_devices_dot_device__pb2._DEVICE
_SERVICEREQUEST.fields_by_name['topic_subscription'].message_type = proto_dot_services_dot_request_dot_topicSubscription__pb2._TOPICSUBSCRIPTION
_SERVICEREQUEST.fields_by_name['session'].message_type = proto_dot_sessions_dot_session__pb2._SESSION
_SERVICEREQUEST.fields_by_name['session_list'].message_type = proto_dot_sessions_dot_session__pb2._SESSIONLIST
_SERVICEREQUEST.fields_by_name['processing_module'].message_type = proto_dot_processing_dot_processingModule__pb2._PROCESSINGMODULE
_SERVICEREQUEST.fields_by_name['processing_module_list'].message_type = proto_dot_processing_dot_processingModule__pb2._PROCESSINGMODULELIST
_SERVICEREQUEST.fields_by_name['topic_mux'].message_type = proto_dot_devices_dot_topicMux__pb2._TOPICMUX
_SERVICEREQUEST.fields_by_name['topic_mux_list'].message_type = proto_dot_devices_dot_topicMux__pb2._TOPICMUXLIST
_SERVICEREQUEST.fields_by_name['topic_demux'].message_type = proto_dot_devices_dot_topicDemux__pb2._TOPICDEMUX
_SERVICEREQUEST.fields_by_name['topic_demux_list'].message_type = proto_dot_devices_dot_topicDemux__pb2._TOPICDEMUXLIST
_SERVICEREQUEST.fields_by_name['client_list'].message_type = proto_dot_clients_dot_client__pb2._CLIENTLIST
_SERVICEREQUEST.fields_by_name['device_list'].message_type = proto_dot_devices_dot_device__pb2._DEVICELIST
_SERVICEREQUEST.fields_by_name['lockstep_processing_request'].message_type = proto_dot_processing_dot_lockstepProcessing__pb2._LOCKSTEPPROCESSINGREQUEST
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['client'])
_SERVICEREQUEST.fields_by_name['client'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['device'])
_SERVICEREQUEST.fields_by_name['device'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_subscription'])
_SERVICEREQUEST.fields_by_name['topic_subscription'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['session'])
_SERVICEREQUEST.fields_by_name['session'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['session_list'])
_SERVICEREQUEST.fields_by_name['session_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['processing_module'])
_SERVICEREQUEST.fields_by_name['processing_module'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['processing_module_list'])
_SERVICEREQUEST.fields_by_name['processing_module_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_mux'])
_SERVICEREQUEST.fields_by_name['topic_mux'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_mux_list'])
_SERVICEREQUEST.fields_by_name['topic_mux_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_demux'])
_SERVICEREQUEST.fields_by_name['topic_demux'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['topic_demux_list'])
_SERVICEREQUEST.fields_by_name['topic_demux_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['client_list'])
_SERVICEREQUEST.fields_by_name['client_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['device_list'])
_SERVICEREQUEST.fields_by_name['device_list'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
_SERVICEREQUEST.oneofs_by_name['type'].fields.append(
  _SERVICEREQUEST.fields_by_name['lockstep_processing_request'])
_SERVICEREQUEST.fields_by_name['lockstep_processing_request'].containing_oneof = _SERVICEREQUEST.oneofs_by_name['type']
DESCRIPTOR.message_types_by_name['ServiceRequest'] = _SERVICEREQUEST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ServiceRequest = _reflection.GeneratedProtocolMessageType('ServiceRequest', (_message.Message,), {
  'DESCRIPTOR' : _SERVICEREQUEST,
  '__module__' : 'proto.services.serviceRequest_pb2'
  # @@protoc_insertion_point(class_scope:ubii.services.ServiceRequest)
  })
_sym_db.RegisterMessage(ServiceRequest)


# @@protoc_insertion_point(module_scope)
