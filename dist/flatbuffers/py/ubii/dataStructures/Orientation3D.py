# automatically generated by the FlatBuffers compiler, do not modify

# namespace: dataStructures

import flatbuffers

class Orientation3D(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsOrientation3D(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Orientation3D()
        x.Init(buf, n + offset)
        return x

    # Orientation3D
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Orientation3D
    def Quaternion(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            x = o + self._tab.Pos
            from .Quaternion import Quaternion
            obj = Quaternion()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # Orientation3D
    def Euler(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = o + self._tab.Pos
            from .Vector3 import Vector3
            obj = Vector3()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

def Orientation3DStart(builder): builder.StartObject(2)
def Orientation3DAddQuaternion(builder, quaternion): builder.PrependStructSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(quaternion), 0)
def Orientation3DAddEuler(builder, euler): builder.PrependStructSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(euler), 0)
def Orientation3DEnd(builder): return builder.EndObject()
