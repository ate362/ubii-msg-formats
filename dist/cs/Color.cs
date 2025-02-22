// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/topicData/topicDataRecord/dataStructure/color.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.DataStructure {

  /// <summary>Holder for reflection information generated from proto/topicData/topicDataRecord/dataStructure/color.proto</summary>
  public static partial class ColorReflection {

    #region Descriptor
    /// <summary>File descriptor for proto/topicData/topicDataRecord/dataStructure/color.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ColorReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cjlwcm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL2RhdGFTdHJ1Y3R1",
            "cmUvY29sb3IucHJvdG8SEnViaWkuZGF0YVN0cnVjdHVyZSIzCgVDb2xvchIJ",
            "CgFyGAEgASgBEgkKAWcYAiABKAESCQoBYhgDIAEoARIJCgFhGAQgASgBYgZw",
            "cm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.DataStructure.Color), global::Ubii.DataStructure.Color.Parser, new[]{ "R", "G", "B", "A" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Color : pb::IMessage<Color> {
    private static readonly pb::MessageParser<Color> _parser = new pb::MessageParser<Color>(() => new Color());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Color> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.DataStructure.ColorReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Color() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Color(Color other) : this() {
      r_ = other.r_;
      g_ = other.g_;
      b_ = other.b_;
      a_ = other.a_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Color Clone() {
      return new Color(this);
    }

    /// <summary>Field number for the "r" field.</summary>
    public const int RFieldNumber = 1;
    private double r_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double R {
      get { return r_; }
      set {
        r_ = value;
      }
    }

    /// <summary>Field number for the "g" field.</summary>
    public const int GFieldNumber = 2;
    private double g_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double G {
      get { return g_; }
      set {
        g_ = value;
      }
    }

    /// <summary>Field number for the "b" field.</summary>
    public const int BFieldNumber = 3;
    private double b_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double B {
      get { return b_; }
      set {
        b_ = value;
      }
    }

    /// <summary>Field number for the "a" field.</summary>
    public const int AFieldNumber = 4;
    private double a_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double A {
      get { return a_; }
      set {
        a_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Color);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Color other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(R, other.R)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(G, other.G)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(B, other.B)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(A, other.A)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (R != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(R);
      if (G != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(G);
      if (B != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(B);
      if (A != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(A);
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (R != 0D) {
        output.WriteRawTag(9);
        output.WriteDouble(R);
      }
      if (G != 0D) {
        output.WriteRawTag(17);
        output.WriteDouble(G);
      }
      if (B != 0D) {
        output.WriteRawTag(25);
        output.WriteDouble(B);
      }
      if (A != 0D) {
        output.WriteRawTag(33);
        output.WriteDouble(A);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (R != 0D) {
        size += 1 + 8;
      }
      if (G != 0D) {
        size += 1 + 8;
      }
      if (B != 0D) {
        size += 1 + 8;
      }
      if (A != 0D) {
        size += 1 + 8;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Color other) {
      if (other == null) {
        return;
      }
      if (other.R != 0D) {
        R = other.R;
      }
      if (other.G != 0D) {
        G = other.G;
      }
      if (other.B != 0D) {
        B = other.B;
      }
      if (other.A != 0D) {
        A = other.A;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 9: {
            R = input.ReadDouble();
            break;
          }
          case 17: {
            G = input.ReadDouble();
            break;
          }
          case 25: {
            B = input.ReadDouble();
            break;
          }
          case 33: {
            A = input.ReadDouble();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
