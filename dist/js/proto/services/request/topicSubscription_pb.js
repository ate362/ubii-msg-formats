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

goog.exportSymbol('proto.ubii.services.request.TopicSubscription', null, global);

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
proto.ubii.services.request.TopicSubscription = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.services.request.TopicSubscription.repeatedFields_, null);
};
goog.inherits(proto.ubii.services.request.TopicSubscription, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.services.request.TopicSubscription.displayName = 'proto.ubii.services.request.TopicSubscription';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.services.request.TopicSubscription.repeatedFields_ = [2,3,4,5];



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
proto.ubii.services.request.TopicSubscription.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.services.request.TopicSubscription.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.services.request.TopicSubscription} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.services.request.TopicSubscription.toObject = function(includeInstance, msg) {
  var f, obj = {
    clientId: jspb.Message.getFieldWithDefault(msg, 1, ""),
    subscribeTopicsList: jspb.Message.getRepeatedField(msg, 2),
    unsubscribeTopicsList: jspb.Message.getRepeatedField(msg, 3),
    subscribeTopicRegexpList: jspb.Message.getRepeatedField(msg, 4),
    unsubscribeTopicRegexpList: jspb.Message.getRepeatedField(msg, 5)
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
 * @return {!proto.ubii.services.request.TopicSubscription}
 */
proto.ubii.services.request.TopicSubscription.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.services.request.TopicSubscription;
  return proto.ubii.services.request.TopicSubscription.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.services.request.TopicSubscription} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.services.request.TopicSubscription}
 */
proto.ubii.services.request.TopicSubscription.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setClientId(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.addSubscribeTopics(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.addUnsubscribeTopics(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.addSubscribeTopicRegexp(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.addUnsubscribeTopicRegexp(value);
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
proto.ubii.services.request.TopicSubscription.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.services.request.TopicSubscription.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.services.request.TopicSubscription} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.services.request.TopicSubscription.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getClientId();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getSubscribeTopicsList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      2,
      f
    );
  }
  f = message.getUnsubscribeTopicsList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      3,
      f
    );
  }
  f = message.getSubscribeTopicRegexpList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      4,
      f
    );
  }
  f = message.getUnsubscribeTopicRegexpList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      5,
      f
    );
  }
};


/**
 * optional string client_id = 1;
 * @return {string}
 */
proto.ubii.services.request.TopicSubscription.prototype.getClientId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.ubii.services.request.TopicSubscription.prototype.setClientId = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * repeated string subscribe_topics = 2;
 * @return {!Array<string>}
 */
proto.ubii.services.request.TopicSubscription.prototype.getSubscribeTopicsList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 2));
};


/** @param {!Array<string>} value */
proto.ubii.services.request.TopicSubscription.prototype.setSubscribeTopicsList = function(value) {
  jspb.Message.setField(this, 2, value || []);
};


/**
 * @param {!string} value
 * @param {number=} opt_index
 */
proto.ubii.services.request.TopicSubscription.prototype.addSubscribeTopics = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 2, value, opt_index);
};


proto.ubii.services.request.TopicSubscription.prototype.clearSubscribeTopicsList = function() {
  this.setSubscribeTopicsList([]);
};


/**
 * repeated string unsubscribe_topics = 3;
 * @return {!Array<string>}
 */
proto.ubii.services.request.TopicSubscription.prototype.getUnsubscribeTopicsList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 3));
};


/** @param {!Array<string>} value */
proto.ubii.services.request.TopicSubscription.prototype.setUnsubscribeTopicsList = function(value) {
  jspb.Message.setField(this, 3, value || []);
};


/**
 * @param {!string} value
 * @param {number=} opt_index
 */
proto.ubii.services.request.TopicSubscription.prototype.addUnsubscribeTopics = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 3, value, opt_index);
};


proto.ubii.services.request.TopicSubscription.prototype.clearUnsubscribeTopicsList = function() {
  this.setUnsubscribeTopicsList([]);
};


/**
 * repeated string subscribe_topic_regexp = 4;
 * @return {!Array<string>}
 */
proto.ubii.services.request.TopicSubscription.prototype.getSubscribeTopicRegexpList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 4));
};


/** @param {!Array<string>} value */
proto.ubii.services.request.TopicSubscription.prototype.setSubscribeTopicRegexpList = function(value) {
  jspb.Message.setField(this, 4, value || []);
};


/**
 * @param {!string} value
 * @param {number=} opt_index
 */
proto.ubii.services.request.TopicSubscription.prototype.addSubscribeTopicRegexp = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 4, value, opt_index);
};


proto.ubii.services.request.TopicSubscription.prototype.clearSubscribeTopicRegexpList = function() {
  this.setSubscribeTopicRegexpList([]);
};


/**
 * repeated string unsubscribe_topic_regexp = 5;
 * @return {!Array<string>}
 */
proto.ubii.services.request.TopicSubscription.prototype.getUnsubscribeTopicRegexpList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 5));
};


/** @param {!Array<string>} value */
proto.ubii.services.request.TopicSubscription.prototype.setUnsubscribeTopicRegexpList = function(value) {
  jspb.Message.setField(this, 5, value || []);
};


/**
 * @param {!string} value
 * @param {number=} opt_index
 */
proto.ubii.services.request.TopicSubscription.prototype.addUnsubscribeTopicRegexp = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 5, value, opt_index);
};


proto.ubii.services.request.TopicSubscription.prototype.clearUnsubscribeTopicRegexpList = function() {
  this.setUnsubscribeTopicRegexpList([]);
};


goog.object.extend(exports, proto.ubii.services.request);
