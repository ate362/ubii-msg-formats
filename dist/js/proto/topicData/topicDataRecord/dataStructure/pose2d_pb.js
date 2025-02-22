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

var proto_topicData_topicDataRecord_dataStructure_vector2_pb = require('../../../../proto/topicData/topicDataRecord/dataStructure/vector2_pb.js');
goog.exportSymbol('proto.ubii.dataStructure.Pose2D', null, global);

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
proto.ubii.dataStructure.Pose2D = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.ubii.dataStructure.Pose2D.oneofGroups_);
};
goog.inherits(proto.ubii.dataStructure.Pose2D, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.dataStructure.Pose2D.displayName = 'proto.ubii.dataStructure.Pose2D';
}
/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.ubii.dataStructure.Pose2D.oneofGroups_ = [[2,3]];

/**
 * @enum {number}
 */
proto.ubii.dataStructure.Pose2D.OrientationCase = {
  ORIENTATION_NOT_SET: 0,
  DIRECTION: 2,
  ANGLE: 3
};

/**
 * @return {proto.ubii.dataStructure.Pose2D.OrientationCase}
 */
proto.ubii.dataStructure.Pose2D.prototype.getOrientationCase = function() {
  return /** @type {proto.ubii.dataStructure.Pose2D.OrientationCase} */(jspb.Message.computeOneofCase(this, proto.ubii.dataStructure.Pose2D.oneofGroups_[0]));
};



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.dataStructure.Pose2D.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.dataStructure.Pose2D.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.dataStructure.Pose2D} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.Pose2D.toObject = function(includeInstance, msg) {
  var f, obj = {
    position: (f = msg.getPosition()) && proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.toObject(includeInstance, f),
    direction: (f = msg.getDirection()) && proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.toObject(includeInstance, f),
    angle: +jspb.Message.getFieldWithDefault(msg, 3, 0.0)
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
 * @return {!proto.ubii.dataStructure.Pose2D}
 */
proto.ubii.dataStructure.Pose2D.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.dataStructure.Pose2D;
  return proto.ubii.dataStructure.Pose2D.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.dataStructure.Pose2D} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.dataStructure.Pose2D}
 */
proto.ubii.dataStructure.Pose2D.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.deserializeBinaryFromReader);
      msg.setPosition(value);
      break;
    case 2:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.deserializeBinaryFromReader);
      msg.setDirection(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readFloat());
      msg.setAngle(value);
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
proto.ubii.dataStructure.Pose2D.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.dataStructure.Pose2D.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.dataStructure.Pose2D} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.dataStructure.Pose2D.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getPosition();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.serializeBinaryToWriter
    );
  }
  f = message.getDirection();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.serializeBinaryToWriter
    );
  }
  f = /** @type {number} */ (jspb.Message.getField(message, 3));
  if (f != null) {
    writer.writeFloat(
      3,
      f
    );
  }
};


/**
 * optional Vector2 position = 1;
 * @return {?proto.ubii.dataStructure.Vector2}
 */
proto.ubii.dataStructure.Pose2D.prototype.getPosition = function() {
  return /** @type{?proto.ubii.dataStructure.Vector2} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2, 1));
};


/** @param {?proto.ubii.dataStructure.Vector2|undefined} value */
proto.ubii.dataStructure.Pose2D.prototype.setPosition = function(value) {
  jspb.Message.setWrapperField(this, 1, value);
};


proto.ubii.dataStructure.Pose2D.prototype.clearPosition = function() {
  this.setPosition(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.dataStructure.Pose2D.prototype.hasPosition = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Vector2 direction = 2;
 * @return {?proto.ubii.dataStructure.Vector2}
 */
proto.ubii.dataStructure.Pose2D.prototype.getDirection = function() {
  return /** @type{?proto.ubii.dataStructure.Vector2} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2, 2));
};


/** @param {?proto.ubii.dataStructure.Vector2|undefined} value */
proto.ubii.dataStructure.Pose2D.prototype.setDirection = function(value) {
  jspb.Message.setOneofWrapperField(this, 2, proto.ubii.dataStructure.Pose2D.oneofGroups_[0], value);
};


proto.ubii.dataStructure.Pose2D.prototype.clearDirection = function() {
  this.setDirection(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.dataStructure.Pose2D.prototype.hasDirection = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional float angle = 3;
 * @return {number}
 */
proto.ubii.dataStructure.Pose2D.prototype.getAngle = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 3, 0.0));
};


/** @param {number} value */
proto.ubii.dataStructure.Pose2D.prototype.setAngle = function(value) {
  jspb.Message.setOneofField(this, 3, proto.ubii.dataStructure.Pose2D.oneofGroups_[0], value);
};


proto.ubii.dataStructure.Pose2D.prototype.clearAngle = function() {
  jspb.Message.setOneofField(this, 3, proto.ubii.dataStructure.Pose2D.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.dataStructure.Pose2D.prototype.hasAngle = function() {
  return jspb.Message.getField(this, 3) != null;
};


goog.object.extend(exports, proto.ubii.dataStructure);
