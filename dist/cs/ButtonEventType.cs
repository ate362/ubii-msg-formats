// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/topicData/topicDataRecord/dataStructure/buttonEventType.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.DataStructure {

  /// <summary>Holder for reflection information generated from proto/topicData/topicDataRecord/dataStructure/buttonEventType.proto</summary>
  public static partial class ButtonEventTypeReflection {

    #region Descriptor
    /// <summary>File descriptor for proto/topicData/topicDataRecord/dataStructure/buttonEventType.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ButtonEventTypeReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CkNwcm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL2RhdGFTdHJ1Y3R1",
            "cmUvYnV0dG9uRXZlbnRUeXBlLnByb3RvEhJ1YmlpLmRhdGFTdHJ1Y3R1cmUq",
            "IwoPQnV0dG9uRXZlbnRUeXBlEgYKAlVQEAASCAoERE9XThABYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::Ubii.DataStructure.ButtonEventType), }, null));
    }
    #endregion

  }
  #region Enums
  public enum ButtonEventType {
    [pbr::OriginalName("UP")] Up = 0,
    [pbr::OriginalName("DOWN")] Down = 1,
  }

  #endregion

}

#endregion Designer generated code
