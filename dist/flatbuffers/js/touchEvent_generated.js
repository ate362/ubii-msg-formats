// automatically generated by the FlatBuffers compiler, do not modify

/**
 * @const
 * @namespace
 */
var ubii = ubii || {};

/**
 * @const
 * @namespace
 */
ubii.dataStructures = ubii.dataStructures || {};

/**
 * @constructor
 */
ubii.dataStructures.TouchEvent = function() {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  this.bb = null;

  /**
   * @type {number}
   */
  this.bb_pos = 0;
};

/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {ubii.dataStructures.TouchEvent}
 */
ubii.dataStructures.TouchEvent.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.TouchEvent=} obj
 * @returns {ubii.dataStructures.TouchEvent}
 */
ubii.dataStructures.TouchEvent.getRootAsTouchEvent = function(bb, obj) {
  return (obj || new ubii.dataStructures.TouchEvent).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @returns {ubii.dataStructures.ButtonEventType}
 */
ubii.dataStructures.TouchEvent.prototype.type = function() {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? /** @type {ubii.dataStructures.ButtonEventType} */ (this.bb.readInt8(this.bb_pos + offset)) : ubii.dataStructures.ButtonEventType.UP;
};

/**
 * @param {ubii.dataStructures.Vector2=} obj
 * @returns {ubii.dataStructures.Vector2|null}
 */
ubii.dataStructures.TouchEvent.prototype.position = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? (obj || new ubii.dataStructures.Vector2).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.dataStructures.TouchEvent.startTouchEvent = function(builder) {
  builder.startObject(2);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {ubii.dataStructures.ButtonEventType} type
 */
ubii.dataStructures.TouchEvent.addType = function(builder, type) {
  builder.addFieldInt8(0, type, ubii.dataStructures.ButtonEventType.UP);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} positionOffset
 */
ubii.dataStructures.TouchEvent.addPosition = function(builder, positionOffset) {
  builder.addFieldStruct(1, positionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.TouchEvent.endTouchEvent = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.dataStructures.TouchEvent.finishTouchEventBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {NS2182680046439287787.ubii.dataStructures.ButtonEventType} type
 * @param {flatbuffers.Offset} positionOffset
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.TouchEvent.createTouchEvent = function(builder, type, positionOffset) {
  ubii.dataStructures.TouchEvent.startTouchEvent(builder);
  ubii.dataStructures.TouchEvent.addType(builder, type);
  ubii.dataStructures.TouchEvent.addPosition(builder, positionOffset);
  return ubii.dataStructures.TouchEvent.endTouchEvent(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;
