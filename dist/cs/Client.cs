// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/clients/client.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.Clients {

  /// <summary>Holder for reflection information generated from proto/clients/client.proto</summary>
  public static partial class ClientReflection {

    #region Descriptor
    /// <summary>File descriptor for proto/clients/client.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClientReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Chpwcm90by9jbGllbnRzL2NsaWVudC5wcm90bxIMdWJpaS5jbGllbnRzGhpw",
            "cm90by9kZXZpY2VzL2RldmljZS5wcm90bxoncHJvdG8vcHJvY2Vzc2luZy9w",
            "cm9jZXNzaW5nTW9kdWxlLnByb3RvItgCCgZDbGllbnQSCgoCaWQYASABKAkS",
            "DAoEbmFtZRgCIAEoCRIlCgdkZXZpY2VzGAMgAygLMhQudWJpaS5kZXZpY2Vz",
            "LkRldmljZRIMCgR0YWdzGAQgAygJEhMKC2Rlc2NyaXB0aW9uGAUgASgJEj0K",
            "EnByb2Nlc3NpbmdfbW9kdWxlcxgGIAMoCzIhLnViaWkucHJvY2Vzc2luZy5Q",
            "cm9jZXNzaW5nTW9kdWxlEiQKHGlzX2RlZGljYXRlZF9wcm9jZXNzaW5nX25v",
            "ZGUYByABKAgSDwoHaG9zdF9pcBgIIAEoCRIVCg1tZXRhZGF0YV9qc29uGAkg",
            "ASgJEikKBXN0YXRlGAogASgOMhoudWJpaS5jbGllbnRzLkNsaWVudC5TdGF0",
            "ZSIyCgVTdGF0ZRIKCgZBQ1RJVkUQABIMCghJTkFDVElWRRABEg8KC1VOQVZB",
            "SUxBQkxFEAIiNAoKQ2xpZW50TGlzdBImCghlbGVtZW50cxgBIAMoCzIULnVi",
            "aWkuY2xpZW50cy5DbGllbnRiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Ubii.Devices.DeviceReflection.Descriptor, global::Ubii.Processing.ProcessingModuleReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.Clients.Client), global::Ubii.Clients.Client.Parser, new[]{ "Id", "Name", "Devices", "Tags", "Description", "ProcessingModules", "IsDedicatedProcessingNode", "HostIp", "MetadataJson", "State" }, null, new[]{ typeof(global::Ubii.Clients.Client.Types.State) }, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.Clients.ClientList), global::Ubii.Clients.ClientList.Parser, new[]{ "Elements" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Client : pb::IMessage<Client> {
    private static readonly pb::MessageParser<Client> _parser = new pb::MessageParser<Client>(() => new Client());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Client> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.Clients.ClientReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Client() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Client(Client other) : this() {
      id_ = other.id_;
      name_ = other.name_;
      devices_ = other.devices_.Clone();
      tags_ = other.tags_.Clone();
      description_ = other.description_;
      processingModules_ = other.processingModules_.Clone();
      isDedicatedProcessingNode_ = other.isDedicatedProcessingNode_;
      hostIp_ = other.hostIp_;
      metadataJson_ = other.metadataJson_;
      state_ = other.state_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Client Clone() {
      return new Client(this);
    }

    /// <summary>Field number for the "id" field.</summary>
    public const int IdFieldNumber = 1;
    private string id_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Id {
      get { return id_; }
      set {
        id_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 2;
    private string name_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "devices" field.</summary>
    public const int DevicesFieldNumber = 3;
    private static readonly pb::FieldCodec<global::Ubii.Devices.Device> _repeated_devices_codec
        = pb::FieldCodec.ForMessage(26, global::Ubii.Devices.Device.Parser);
    private readonly pbc::RepeatedField<global::Ubii.Devices.Device> devices_ = new pbc::RepeatedField<global::Ubii.Devices.Device>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Ubii.Devices.Device> Devices {
      get { return devices_; }
    }

    /// <summary>Field number for the "tags" field.</summary>
    public const int TagsFieldNumber = 4;
    private static readonly pb::FieldCodec<string> _repeated_tags_codec
        = pb::FieldCodec.ForString(34);
    private readonly pbc::RepeatedField<string> tags_ = new pbc::RepeatedField<string>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<string> Tags {
      get { return tags_; }
    }

    /// <summary>Field number for the "description" field.</summary>
    public const int DescriptionFieldNumber = 5;
    private string description_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Description {
      get { return description_; }
      set {
        description_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "processing_modules" field.</summary>
    public const int ProcessingModulesFieldNumber = 6;
    private static readonly pb::FieldCodec<global::Ubii.Processing.ProcessingModule> _repeated_processingModules_codec
        = pb::FieldCodec.ForMessage(50, global::Ubii.Processing.ProcessingModule.Parser);
    private readonly pbc::RepeatedField<global::Ubii.Processing.ProcessingModule> processingModules_ = new pbc::RepeatedField<global::Ubii.Processing.ProcessingModule>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Ubii.Processing.ProcessingModule> ProcessingModules {
      get { return processingModules_; }
    }

    /// <summary>Field number for the "is_dedicated_processing_node" field.</summary>
    public const int IsDedicatedProcessingNodeFieldNumber = 7;
    private bool isDedicatedProcessingNode_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool IsDedicatedProcessingNode {
      get { return isDedicatedProcessingNode_; }
      set {
        isDedicatedProcessingNode_ = value;
      }
    }

    /// <summary>Field number for the "host_ip" field.</summary>
    public const int HostIpFieldNumber = 8;
    private string hostIp_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string HostIp {
      get { return hostIp_; }
      set {
        hostIp_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "metadata_json" field.</summary>
    public const int MetadataJsonFieldNumber = 9;
    private string metadataJson_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string MetadataJson {
      get { return metadataJson_; }
      set {
        metadataJson_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "state" field.</summary>
    public const int StateFieldNumber = 10;
    private global::Ubii.Clients.Client.Types.State state_ = 0;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.Clients.Client.Types.State State {
      get { return state_; }
      set {
        state_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Client);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Client other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (Name != other.Name) return false;
      if(!devices_.Equals(other.devices_)) return false;
      if(!tags_.Equals(other.tags_)) return false;
      if (Description != other.Description) return false;
      if(!processingModules_.Equals(other.processingModules_)) return false;
      if (IsDedicatedProcessingNode != other.IsDedicatedProcessingNode) return false;
      if (HostIp != other.HostIp) return false;
      if (MetadataJson != other.MetadataJson) return false;
      if (State != other.State) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Id.Length != 0) hash ^= Id.GetHashCode();
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      hash ^= devices_.GetHashCode();
      hash ^= tags_.GetHashCode();
      if (Description.Length != 0) hash ^= Description.GetHashCode();
      hash ^= processingModules_.GetHashCode();
      if (IsDedicatedProcessingNode != false) hash ^= IsDedicatedProcessingNode.GetHashCode();
      if (HostIp.Length != 0) hash ^= HostIp.GetHashCode();
      if (MetadataJson.Length != 0) hash ^= MetadataJson.GetHashCode();
      if (State != 0) hash ^= State.GetHashCode();
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
      if (Id.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Id);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Name);
      }
      devices_.WriteTo(output, _repeated_devices_codec);
      tags_.WriteTo(output, _repeated_tags_codec);
      if (Description.Length != 0) {
        output.WriteRawTag(42);
        output.WriteString(Description);
      }
      processingModules_.WriteTo(output, _repeated_processingModules_codec);
      if (IsDedicatedProcessingNode != false) {
        output.WriteRawTag(56);
        output.WriteBool(IsDedicatedProcessingNode);
      }
      if (HostIp.Length != 0) {
        output.WriteRawTag(66);
        output.WriteString(HostIp);
      }
      if (MetadataJson.Length != 0) {
        output.WriteRawTag(74);
        output.WriteString(MetadataJson);
      }
      if (State != 0) {
        output.WriteRawTag(80);
        output.WriteEnum((int) State);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Id.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Id);
      }
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      size += devices_.CalculateSize(_repeated_devices_codec);
      size += tags_.CalculateSize(_repeated_tags_codec);
      if (Description.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Description);
      }
      size += processingModules_.CalculateSize(_repeated_processingModules_codec);
      if (IsDedicatedProcessingNode != false) {
        size += 1 + 1;
      }
      if (HostIp.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(HostIp);
      }
      if (MetadataJson.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(MetadataJson);
      }
      if (State != 0) {
        size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) State);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Client other) {
      if (other == null) {
        return;
      }
      if (other.Id.Length != 0) {
        Id = other.Id;
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      devices_.Add(other.devices_);
      tags_.Add(other.tags_);
      if (other.Description.Length != 0) {
        Description = other.Description;
      }
      processingModules_.Add(other.processingModules_);
      if (other.IsDedicatedProcessingNode != false) {
        IsDedicatedProcessingNode = other.IsDedicatedProcessingNode;
      }
      if (other.HostIp.Length != 0) {
        HostIp = other.HostIp;
      }
      if (other.MetadataJson.Length != 0) {
        MetadataJson = other.MetadataJson;
      }
      if (other.State != 0) {
        State = other.State;
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
            Id = input.ReadString();
            break;
          }
          case 18: {
            Name = input.ReadString();
            break;
          }
          case 26: {
            devices_.AddEntriesFrom(input, _repeated_devices_codec);
            break;
          }
          case 34: {
            tags_.AddEntriesFrom(input, _repeated_tags_codec);
            break;
          }
          case 42: {
            Description = input.ReadString();
            break;
          }
          case 50: {
            processingModules_.AddEntriesFrom(input, _repeated_processingModules_codec);
            break;
          }
          case 56: {
            IsDedicatedProcessingNode = input.ReadBool();
            break;
          }
          case 66: {
            HostIp = input.ReadString();
            break;
          }
          case 74: {
            MetadataJson = input.ReadString();
            break;
          }
          case 80: {
            state_ = (global::Ubii.Clients.Client.Types.State) input.ReadEnum();
            break;
          }
        }
      }
    }

    #region Nested types
    /// <summary>Container for nested types declared in the Client message type.</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static partial class Types {
      public enum State {
        [pbr::OriginalName("ACTIVE")] Active = 0,
        [pbr::OriginalName("INACTIVE")] Inactive = 1,
        [pbr::OriginalName("UNAVAILABLE")] Unavailable = 2,
      }

    }
    #endregion

  }

  public sealed partial class ClientList : pb::IMessage<ClientList> {
    private static readonly pb::MessageParser<ClientList> _parser = new pb::MessageParser<ClientList>(() => new ClientList());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<ClientList> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.Clients.ClientReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ClientList() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ClientList(ClientList other) : this() {
      elements_ = other.elements_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public ClientList Clone() {
      return new ClientList(this);
    }

    /// <summary>Field number for the "elements" field.</summary>
    public const int ElementsFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Ubii.Clients.Client> _repeated_elements_codec
        = pb::FieldCodec.ForMessage(10, global::Ubii.Clients.Client.Parser);
    private readonly pbc::RepeatedField<global::Ubii.Clients.Client> elements_ = new pbc::RepeatedField<global::Ubii.Clients.Client>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Ubii.Clients.Client> Elements {
      get { return elements_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as ClientList);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(ClientList other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!elements_.Equals(other.elements_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= elements_.GetHashCode();
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
      elements_.WriteTo(output, _repeated_elements_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += elements_.CalculateSize(_repeated_elements_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(ClientList other) {
      if (other == null) {
        return;
      }
      elements_.Add(other.elements_);
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
            elements_.AddEntriesFrom(input, _repeated_elements_codec);
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
