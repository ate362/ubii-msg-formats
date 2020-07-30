let constants = { DEFAULT_TOPICS: 
   { SERVICES: 
      { SERVER_CONFIG: '/services/server_configuration',
        CLIENT_REGISTRATION: '/services/client/registration',
        CLIENT_DEREGISTRATION: '/services/client/deregistration',
        CLIENT_GET_LIST: '/services/client/get_list',
        DEVICE_REGISTRATION: '/services/device/registration',
        DEVICE_DEREGISTRATION: '/services/device/deregistration',
        DEVICE_GET_LIST: '/services/device/get_list',
        INTERACTION_DATABASE_SAVE: '/services/interaction/database/save',
        INTERACTION_DATABASE_DELETE: '/services/interaction/database/delete',
        INTERACTION_DATABASE_GET: '/services/interaction/database/get',
        INTERACTION_DATABASE_GET_LIST: '/services/interaction/database/get_list',
        INTERACTION_DATABASE_ONLINE_GET_LIST: '/services/interaction/database/online/get_list',
        INTERACTION_DATABASE_LOCAL_GET_LIST: '/services/interaction/database/local/get_list',
        INTERACTION_RUNTIME_ADD: '/services/interaction/runtime/add',
        INTERACTION_RUNTIME_REMOVE: '/services/interaction/runtime/remove',
        INTERACTION_RUNTIME_GET: '/services/interaction/runtime/get',
        INTERACTION_RUNTIME_GET_LIST: '/services/interaction/runtime/get_list',
        SESSION_DATABASE_SAVE: '/services/session/database/save',
        SESSION_DATABASE_DELETE: '/services/session/database/delete',
        SESSION_DATABASE_GET: '/services/session/database/get',
        SESSION_DATABASE_GET_LIST: '/services/session/database/get_list',
        SESSION_DATABASE_ONLINE_GET_LIST: '/services/session/database/online/get_list',
        SESSION_DATABASE_LOCAL_GET_LIST: '/services/session/database/local/get_list',
        SESSION_RUNTIME_ADD: '/services/session/runtime/add',
        SESSION_RUNTIME_REMOVE: '/services/session/runtime/remove',
        SESSION_RUNTIME_GET: '/services/session/runtime/get',
        SESSION_RUNTIME_GET_LIST: '/services/session/runtime/get_list',
        SESSION_RUNTIME_START: '/services/session/runtime/start',
        SESSION_RUNTIME_STOP: '/services/session/runtime/stop',
        TOPIC_DEMUX_DATABASE_ADD: '/services/device/topic_demux/database/add',
        TOPIC_DEMUX_DATABASE_DELETE: '/services/device/topic_demux/database/delete',
        TOPIC_DEMUX_DATABASE_GET: '/services/device/topic_demux/database/get',
        TOPIC_DEMUX_DATABASE_GET_LIST: '/services/device/topic_demux/database/get_list',
        TOPIC_DEMUX_DATABASE_REPLACE: '/services/device/topic_demux/database/replace',
        TOPIC_DEMUX_RUNTIME_GET: '/services/device/topic_demux/runtime/get',
        TOPIC_DEMUX_RUNTIME_GET_LIST: '/services/device/topic_demux/runtime/get_list',
        TOPIC_DEMUX_RUNTIME_START: '/services/device/topic_demux/runtime/start',
        TOPIC_DEMUX_RUNTIME_STOP: '/services/device/topic_demux/runtime/stop',
        TOPIC_MUX_DATABASE_ADD: '/services/device/topic_mux/database/add',
        TOPIC_MUX_DATABASE_DELETE: '/services/device/topic_mux/database/delete',
        TOPIC_MUX_DATABASE_GET: '/services/device/topic_mux/database/get',
        TOPIC_MUX_DATABASE_GET_LIST: '/services/device/topic_mux/database/get_list',
        TOPIC_MUX_DATABASE_REPLACE: '/services/device/topic_mux/database/replace',
        TOPIC_MUX_RUNTIME_GET: '/services/device/topic_mux/runtime/get',
        TOPIC_MUX_RUNTIME_GET_LIST: '/services/device/topic_mux/runtime/get_list',
        TOPIC_MUX_RUNTIME_START: '/services/device/topic_mux/runtime/start',
        TOPIC_MUX_RUNTIME_STOP: '/services/device/topic_mux/runtime/stop',
        SERVICE_LIST: '/services/service_list',
        TOPIC_LIST: '/services/topic_list',
        TOPIC_SUBSCRIPTION: '/services/topic_subscription' },
     INFO_TOPICS: 
      { REGEX_ALL_INFOS: '/info/*',
        REGEX_INTERACTION_INFOS: '/info/interaction/*',
        NEW_INTERACTION: '/info/interaction/new',
        DELETE_INTERACTION: '/info/interaction/delete',
        CHANGE_INTERACTION: '/info/interaction/change',
        PROCESSED_INTERACTION: '/info/interaction/processed',
        REGEX_SESSION_INFOS: '/info/session/*',
        NEW_SESSION: '/info/session/new',
        DELETE_SESSION: '/info/session/delete',
        CHANGE_SESSION: '/info/session/change',
        START_SESSION: '/info/session/start',
        STOP_SESSION: '/info/session/stop' } },
  MSG_TYPES: 
   { ERROR: 'ubii.general.Error',
     SUCCESS: 'ubii.general.Success',
     SERVER: 'ubii.servers.Server',
     CLIENT: 'ubii.clients.Client',
     CLIENT_LIST: 'ubii.clients.ClientList',
     DEVICE: 'ubii.devices.Device',
     DEVICE_LIST: 'ubii.devices.DeviceList',
     COMPONENT: 'ubii.devices.Component',
     COMPONENT_LIST: 'ubii.devices.ComponentList',
     TOPIC_MUX: 'ubii.devices.TopicMux',
     TOPIC_MUX_LIST: 'ubii.devices.TopicMuxList',
     TOPIC_DEMUX: 'ubii.devices.TopicDemux',
     TOPIC_DEMUX_LIST: 'ubii.devices.TopicDemuxList',
     SERVICE_REQUEST: 'ubii.services.ServiceRequest',
     SERVICE_REPLY: 'ubii.services.ServiceReply',
     SERVICE_REUEST_TOPIC_SUBSCRIPTION: 'ubii.services.request.TopicSubscription',
     SESSION: 'ubii.sessions.Session',
     SESSION_LIST: 'ubii.sessions.SessionList',
     SESSION_IO_MAPPING: 'ubii.sessions.IOMapping',
     INTERACTION: 'ubii.interactions.Interaction',
     INTERACTION_LIST: 'ubii.interactions.InteractionList',
     INTERACTION_IO_FORMAT: 'ubii.interactions.IOFormat',
     TOPIC_DATA: 'ubii.topicData.TopicData',
     TOPIC_DATA_RECORD: 'ubii.topicData.TopicDataRecord',
     TOPIC_DATA_RECORD_LIST: 'ubii.topicData.TopicDataRecordList',
     TOPIC_DATA_TIMESTAMP: 'ubii.topicData.Timestamp',
     DATASTRUCTURE_BOOL_LIST: 'ubii.dataStructure.BoolList',
     DATASTRUCTURE_INT32_LIST: 'ubii.dataStructure.Int32List',
     DATASTRUCTURE_STRING_LIST: 'ubii.dataStructure.StringList',
     DATASTRUCTURE_FLOAT_LIST: 'ubii.dataStructure.FloatList',
     DATASTRUCTURE_DOUBLE_LIST: 'ubii.dataStructure.DoubleList',
     DATASTRUCTURE_COLOR: 'ubii.dataStructure.Color',
     DATASTRUCTURE_IMAGE: 'ubii.dataStructure.Image2D',
     DATASTRUCTURE_IMAGE_LIST: 'ubii.dataStructure.Image2DList',
     DATASTRUCTURE_KEY_EVENT: 'ubii.dataStructure.KeyEvent',
     DATASTRUCTURE_MATRIX_3X2: 'ubii.dataStructure.Matrix3x2',
     DATASTRUCTURE_MATRIX_4X4: 'ubii.dataStructure.Matrix4x4',
     DATASTRUCTURE_MOUSE_EVENT: 'ubii.dataStructure.MouseEvent',
     DATASTRUCTURE_OBJECT2D: 'ubii.dataStructure.Object2D',
     DATASTRUCTURE_OBJECT2D_LIST: 'ubii.dataStructure.Object2DList',
     DATASTRUCTURE_OBJECT3D: 'ubii.dataStructure.Object3D',
     DATASTRUCTURE_OBJECT3D_LIST: 'ubii.dataStructure.Object3DList',
     DATASTRUCTURE_POSE2D: 'ubii.dataStructure.Pose2D',
     DATASTRUCTURE_POSE3D: 'ubii.dataStructure.Pose3D',
     DATASTRUCTURE_QUATERNION: 'ubii.dataStructure.Quaternion',
     DATASTRUCTURE_TOUCH_EVENT: 'ubii.dataStructure.TouchEvent',
     DATASTRUCTURE_VECTOR2: 'ubii.dataStructure.Vector2',
     DATASTRUCTURE_VECTOR3: 'ubii.dataStructure.Vector3',
     DATASTRUCTURE_VECTOR4: 'ubii.dataStructure.Vector4',
     DATASTRUCTURE_VECTOR8: 'ubii.dataStructure.Vector8' } }

module.exports = constants;