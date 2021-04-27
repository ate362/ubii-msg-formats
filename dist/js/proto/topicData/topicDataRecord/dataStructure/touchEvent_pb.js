// source: proto/topicData/topicDataRecord/dataStructure/touchEvent.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var proto_topicData_topicDataRecord_dataStructure_buttonEventType_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/buttonEventType_pb.js');
goog.object.extend(proto, proto_topicData_topicDataRecord_dataStructure_buttonEventType_pb);
var proto_topicData_topicDataRecord_dataStructure_vector2_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/vector2_pb.js');
goog.object.extend(proto, proto_topicData_topicDataRecord_dataStructure_vector2_pb);
goog.exportSymbol('proto.ubii.dataStructure.TouchEvent', null, global);
goog.exportSymbol('proto.ubii.dataStructure.TouchEventList', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.ubii.dataStructure.TouchEvent = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ubii.dataStructure.TouchEvent, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.dataStructure.TouchEvent.displayName = 'proto.ubii.dataStructure.TouchEvent';
}
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.ubii.dataStructure.TouchEventList = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.dataStructure.TouchEventList.repeatedFields_, null);
};
goog.inherits(proto.ubii.dataStructure.TouchEventList, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.dataStructure.TouchEventList.displayName = 'proto.ubii.dataStructure.TouchEventList';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.dataStructure.TouchEvent.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.dataStructure.TouchEvent.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.dataStructure.TouchEvent} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.TouchEvent.toObject = function(includeInstance, msg) {
  var f, obj = {
    type: jspb.Message.getFieldWithDefault(msg, 1, 0),
    position: (f = msg.getPosition()) && proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.ubii.dataStructure.TouchEvent}
 */
proto.ubii.dataStructure.TouchEvent.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.dataStructure.TouchEvent;
  return proto.ubii.dataStructure.TouchEvent.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.dataStructure.TouchEvent} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.dataStructure.TouchEvent}
 */
proto.ubii.dataStructure.TouchEvent.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.ubii.dataStructure.ButtonEventType} */ (reader.readEnum());
      msg.setType(value);
      break;
    case 2:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.deserializeBinaryFromReader);
      msg.setPosition(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.ubii.dataStructure.TouchEvent.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.dataStructure.TouchEvent.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.dataStructure.TouchEvent} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.TouchEvent.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getType();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getPosition();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.serializeBinaryToWriter
    );
  }
};


/**
 * optional ButtonEventType type = 1;
 * @return {!proto.ubii.dataStructure.ButtonEventType}
 */
proto.ubii.dataStructure.TouchEvent.prototype.getType = function() {
  return /** @type {!proto.ubii.dataStructure.ButtonEventType} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/**
 * @param {!proto.ubii.dataStructure.ButtonEventType} value
 * @return {!proto.ubii.dataStructure.TouchEvent} returns this
 */
proto.ubii.dataStructure.TouchEvent.prototype.setType = function(value) {
  return jspb.Message.setProto3EnumField(this, 1, value);
};


/**
 * optional Vector2 position = 2;
 * @return {?proto.ubii.dataStructure.Vector2}
 */
proto.ubii.dataStructure.TouchEvent.prototype.getPosition = function() {
  return /** @type{?proto.ubii.dataStructure.Vector2} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2, 2));
};


/**
 * @param {?proto.ubii.dataStructure.Vector2|undefined} value
 * @return {!proto.ubii.dataStructure.TouchEvent} returns this
*/
proto.ubii.dataStructure.TouchEvent.prototype.setPosition = function(value) {
  return jspb.Message.setWrapperField(this, 2, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.ubii.dataStructure.TouchEvent} returns this
 */
proto.ubii.dataStructure.TouchEvent.prototype.clearPosition = function() {
  return this.setPosition(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.ubii.dataStructure.TouchEvent.prototype.hasPosition = function() {
  return jspb.Message.getField(this, 2) != null;
};



/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.dataStructure.TouchEventList.repeatedFields_ = [1];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.dataStructure.TouchEventList.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.dataStructure.TouchEventList.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.dataStructure.TouchEventList} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.TouchEventList.toObject = function(includeInstance, msg) {
  var f, obj = {
    elementsList: jspb.Message.toObjectList(msg.getElementsList(),
    proto.ubii.dataStructure.TouchEvent.toObject, includeInstance)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.ubii.dataStructure.TouchEventList}
 */
proto.ubii.dataStructure.TouchEventList.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.dataStructure.TouchEventList;
  return proto.ubii.dataStructure.TouchEventList.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.dataStructure.TouchEventList} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.dataStructure.TouchEventList}
 */
proto.ubii.dataStructure.TouchEventList.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.ubii.dataStructure.TouchEvent;
      reader.readMessage(value,proto.ubii.dataStructure.TouchEvent.deserializeBinaryFromReader);
      msg.addElements(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.ubii.dataStructure.TouchEventList.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.dataStructure.TouchEventList.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.dataStructure.TouchEventList} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.TouchEventList.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getElementsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      1,
      f,
      proto.ubii.dataStructure.TouchEvent.serializeBinaryToWriter
    );
  }
};


/**
 * repeated TouchEvent elements = 1;
 * @return {!Array<!proto.ubii.dataStructure.TouchEvent>}
 */
proto.ubii.dataStructure.TouchEventList.prototype.getElementsList = function() {
  return /** @type{!Array<!proto.ubii.dataStructure.TouchEvent>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.ubii.dataStructure.TouchEvent, 1));
};


/**
 * @param {!Array<!proto.ubii.dataStructure.TouchEvent>} value
 * @return {!proto.ubii.dataStructure.TouchEventList} returns this
*/
proto.ubii.dataStructure.TouchEventList.prototype.setElementsList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 1, value);
};


/**
 * @param {!proto.ubii.dataStructure.TouchEvent=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.dataStructure.TouchEvent}
 */
proto.ubii.dataStructure.TouchEventList.prototype.addElements = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 1, opt_value, proto.ubii.dataStructure.TouchEvent, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.dataStructure.TouchEventList} returns this
 */
proto.ubii.dataStructure.TouchEventList.prototype.clearElementsList = function() {
  return this.setElementsList([]);
};


goog.object.extend(exports, proto.ubii.dataStructure);
