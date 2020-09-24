// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/processing/lockstepProcessing.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.Processing {

  /// <summary>Holder for reflection information generated from proto/processing/lockstepProcessing.proto</summary>
  public static partial class LockstepProcessingReflection {

    #region Descriptor
    /// <summary>File descriptor for proto/processing/lockstepProcessing.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static LockstepProcessingReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cilwcm90by9wcm9jZXNzaW5nL2xvY2tzdGVwUHJvY2Vzc2luZy5wcm90bxIP",
            "dWJpaS5wcm9jZXNzaW5nGjVwcm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVj",
            "b3JkL3RvcGljRGF0YVJlY29yZC5wcm90byJkChlMb2Nrc3RlcFByb2Nlc3Np",
            "bmdSZXF1ZXN0EjAKB3JlY29yZHMYASADKAsyHy51YmlpLnRvcGljRGF0YS5U",
            "b3BpY0RhdGFSZWNvcmQSFQoNZGVsdGFfdGltZV9tcxgCIAEoAiJLChdMb2Nr",
            "c3RlcFByb2Nlc3NpbmdSZXBseRIwCgdyZWNvcmRzGAEgAygLMh8udWJpaS50",
            "b3BpY0RhdGEuVG9waWNEYXRhUmVjb3JkYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Ubii.TopicData.TopicDataRecordReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.Processing.LockstepProcessingRequest), global::Ubii.Processing.LockstepProcessingRequest.Parser, new[]{ "Records", "DeltaTimeMs" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.Processing.LockstepProcessingReply), global::Ubii.Processing.LockstepProcessingReply.Parser, new[]{ "Records" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class LockstepProcessingRequest : pb::IMessage<LockstepProcessingRequest> {
    private static readonly pb::MessageParser<LockstepProcessingRequest> _parser = new pb::MessageParser<LockstepProcessingRequest>(() => new LockstepProcessingRequest());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<LockstepProcessingRequest> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.Processing.LockstepProcessingReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public LockstepProcessingRequest() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public LockstepProcessingRequest(LockstepProcessingRequest other) : this() {
      records_ = other.records_.Clone();
      deltaTimeMs_ = other.deltaTimeMs_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public LockstepProcessingRequest Clone() {
      return new LockstepProcessingRequest(this);
    }

    /// <summary>Field number for the "records" field.</summary>
    public const int RecordsFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Ubii.TopicData.TopicDataRecord> _repeated_records_codec
        = pb::FieldCodec.ForMessage(10, global::Ubii.TopicData.TopicDataRecord.Parser);
    private readonly pbc::RepeatedField<global::Ubii.TopicData.TopicDataRecord> records_ = new pbc::RepeatedField<global::Ubii.TopicData.TopicDataRecord>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Ubii.TopicData.TopicDataRecord> Records {
      get { return records_; }
    }

    /// <summary>Field number for the "delta_time_ms" field.</summary>
    public const int DeltaTimeMsFieldNumber = 2;
    private float deltaTimeMs_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public float DeltaTimeMs {
      get { return deltaTimeMs_; }
      set {
        deltaTimeMs_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as LockstepProcessingRequest);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(LockstepProcessingRequest other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!records_.Equals(other.records_)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(DeltaTimeMs, other.DeltaTimeMs)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= records_.GetHashCode();
      if (DeltaTimeMs != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(DeltaTimeMs);
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
      records_.WriteTo(output, _repeated_records_codec);
      if (DeltaTimeMs != 0F) {
        output.WriteRawTag(21);
        output.WriteFloat(DeltaTimeMs);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += records_.CalculateSize(_repeated_records_codec);
      if (DeltaTimeMs != 0F) {
        size += 1 + 4;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(LockstepProcessingRequest other) {
      if (other == null) {
        return;
      }
      records_.Add(other.records_);
      if (other.DeltaTimeMs != 0F) {
        DeltaTimeMs = other.DeltaTimeMs;
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
          case 10: {
            records_.AddEntriesFrom(input, _repeated_records_codec);
            break;
          }
          case 21: {
            DeltaTimeMs = input.ReadFloat();
            break;
          }
        }
      }
    }

  }

  public sealed partial class LockstepProcessingReply : pb::IMessage<LockstepProcessingReply> {
    private static readonly pb::MessageParser<LockstepProcessingReply> _parser = new pb::MessageParser<LockstepProcessingReply>(() => new LockstepProcessingReply());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<LockstepProcessingReply> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.Processing.LockstepProcessingReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public LockstepProcessingReply() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public LockstepProcessingReply(LockstepProcessingReply other) : this() {
      records_ = other.records_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public LockstepProcessingReply Clone() {
      return new LockstepProcessingReply(this);
    }

    /// <summary>Field number for the "records" field.</summary>
    public const int RecordsFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Ubii.TopicData.TopicDataRecord> _repeated_records_codec
        = pb::FieldCodec.ForMessage(10, global::Ubii.TopicData.TopicDataRecord.Parser);
    private readonly pbc::RepeatedField<global::Ubii.TopicData.TopicDataRecord> records_ = new pbc::RepeatedField<global::Ubii.TopicData.TopicDataRecord>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Ubii.TopicData.TopicDataRecord> Records {
      get { return records_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as LockstepProcessingReply);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(LockstepProcessingReply other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!records_.Equals(other.records_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= records_.GetHashCode();
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
      records_.WriteTo(output, _repeated_records_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += records_.CalculateSize(_repeated_records_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(LockstepProcessingReply other) {
      if (other == null) {
        return;
      }
      records_.Add(other.records_);
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
          case 10: {
            records_.AddEntriesFrom(input, _repeated_records_codec);
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
