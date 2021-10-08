// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/color.proto

package ubii.dataStructure;

public final class ColorOuterClass {
  private ColorOuterClass() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface ColorOrBuilder extends
      // @@protoc_insertion_point(interface_extends:ubii.dataStructure.Color)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>double r = 1;</code>
     */
    double getR();

    /**
     * <code>double g = 2;</code>
     */
    double getG();

    /**
     * <code>double b = 3;</code>
     */
    double getB();

    /**
     * <code>double a = 4;</code>
     */
    double getA();
  }
  /**
   * Protobuf type {@code ubii.dataStructure.Color}
   */
  public  static final class Color extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:ubii.dataStructure.Color)
      ColorOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Color.newBuilder() to construct.
    private Color(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Color() {
      r_ = 0D;
      g_ = 0D;
      b_ = 0D;
      a_ = 0D;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Color(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            case 9: {

              r_ = input.readDouble();
              break;
            }
            case 17: {

              g_ = input.readDouble();
              break;
            }
            case 25: {

              b_ = input.readDouble();
              break;
            }
            case 33: {

              a_ = input.readDouble();
              break;
            }
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return ubii.dataStructure.ColorOuterClass.internal_static_ubii_dataStructure_Color_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return ubii.dataStructure.ColorOuterClass.internal_static_ubii_dataStructure_Color_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              ubii.dataStructure.ColorOuterClass.Color.class, ubii.dataStructure.ColorOuterClass.Color.Builder.class);
    }

    public static final int R_FIELD_NUMBER = 1;
    private double r_;
    /**
     * <code>double r = 1;</code>
     */
    public double getR() {
      return r_;
    }

    public static final int G_FIELD_NUMBER = 2;
    private double g_;
    /**
     * <code>double g = 2;</code>
     */
    public double getG() {
      return g_;
    }

    public static final int B_FIELD_NUMBER = 3;
    private double b_;
    /**
     * <code>double b = 3;</code>
     */
    public double getB() {
      return b_;
    }

    public static final int A_FIELD_NUMBER = 4;
    private double a_;
    /**
     * <code>double a = 4;</code>
     */
    public double getA() {
      return a_;
    }

    private byte memoizedIsInitialized = -1;
    @java.lang.Override
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (r_ != 0D) {
        output.writeDouble(1, r_);
      }
      if (g_ != 0D) {
        output.writeDouble(2, g_);
      }
      if (b_ != 0D) {
        output.writeDouble(3, b_);
      }
      if (a_ != 0D) {
        output.writeDouble(4, a_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (r_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(1, r_);
      }
      if (g_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(2, g_);
      }
      if (b_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(3, b_);
      }
      if (a_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(4, a_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof ubii.dataStructure.ColorOuterClass.Color)) {
        return super.equals(obj);
      }
      ubii.dataStructure.ColorOuterClass.Color other = (ubii.dataStructure.ColorOuterClass.Color) obj;

      boolean result = true;
      result = result && (
          java.lang.Double.doubleToLongBits(getR())
          == java.lang.Double.doubleToLongBits(
              other.getR()));
      result = result && (
          java.lang.Double.doubleToLongBits(getG())
          == java.lang.Double.doubleToLongBits(
              other.getG()));
      result = result && (
          java.lang.Double.doubleToLongBits(getB())
          == java.lang.Double.doubleToLongBits(
              other.getB()));
      result = result && (
          java.lang.Double.doubleToLongBits(getA())
          == java.lang.Double.doubleToLongBits(
              other.getA()));
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + R_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getR()));
      hash = (37 * hash) + G_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getG()));
      hash = (37 * hash) + B_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getB()));
      hash = (37 * hash) + A_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getA()));
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static ubii.dataStructure.ColorOuterClass.Color parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(ubii.dataStructure.ColorOuterClass.Color prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    @java.lang.Override
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code ubii.dataStructure.Color}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:ubii.dataStructure.Color)
        ubii.dataStructure.ColorOuterClass.ColorOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return ubii.dataStructure.ColorOuterClass.internal_static_ubii_dataStructure_Color_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return ubii.dataStructure.ColorOuterClass.internal_static_ubii_dataStructure_Color_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                ubii.dataStructure.ColorOuterClass.Color.class, ubii.dataStructure.ColorOuterClass.Color.Builder.class);
      }

      // Construct using ubii.dataStructure.ColorOuterClass.Color.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      @java.lang.Override
      public Builder clear() {
        super.clear();
        r_ = 0D;

        g_ = 0D;

        b_ = 0D;

        a_ = 0D;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return ubii.dataStructure.ColorOuterClass.internal_static_ubii_dataStructure_Color_descriptor;
      }

      @java.lang.Override
      public ubii.dataStructure.ColorOuterClass.Color getDefaultInstanceForType() {
        return ubii.dataStructure.ColorOuterClass.Color.getDefaultInstance();
      }

      @java.lang.Override
      public ubii.dataStructure.ColorOuterClass.Color build() {
        ubii.dataStructure.ColorOuterClass.Color result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public ubii.dataStructure.ColorOuterClass.Color buildPartial() {
        ubii.dataStructure.ColorOuterClass.Color result = new ubii.dataStructure.ColorOuterClass.Color(this);
        result.r_ = r_;
        result.g_ = g_;
        result.b_ = b_;
        result.a_ = a_;
        onBuilt();
        return result;
      }

      @java.lang.Override
      public Builder clone() {
        return (Builder) super.clone();
      }
      @java.lang.Override
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      @java.lang.Override
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      @java.lang.Override
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      @java.lang.Override
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      @java.lang.Override
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      @java.lang.Override
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof ubii.dataStructure.ColorOuterClass.Color) {
          return mergeFrom((ubii.dataStructure.ColorOuterClass.Color)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(ubii.dataStructure.ColorOuterClass.Color other) {
        if (other == ubii.dataStructure.ColorOuterClass.Color.getDefaultInstance()) return this;
        if (other.getR() != 0D) {
          setR(other.getR());
        }
        if (other.getG() != 0D) {
          setG(other.getG());
        }
        if (other.getB() != 0D) {
          setB(other.getB());
        }
        if (other.getA() != 0D) {
          setA(other.getA());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      @java.lang.Override
      public final boolean isInitialized() {
        return true;
      }

      @java.lang.Override
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        ubii.dataStructure.ColorOuterClass.Color parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (ubii.dataStructure.ColorOuterClass.Color) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private double r_ ;
      /**
       * <code>double r = 1;</code>
       */
      public double getR() {
        return r_;
      }
      /**
       * <code>double r = 1;</code>
       */
      public Builder setR(double value) {
        
        r_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double r = 1;</code>
       */
      public Builder clearR() {
        
        r_ = 0D;
        onChanged();
        return this;
      }

      private double g_ ;
      /**
       * <code>double g = 2;</code>
       */
      public double getG() {
        return g_;
      }
      /**
       * <code>double g = 2;</code>
       */
      public Builder setG(double value) {
        
        g_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double g = 2;</code>
       */
      public Builder clearG() {
        
        g_ = 0D;
        onChanged();
        return this;
      }

      private double b_ ;
      /**
       * <code>double b = 3;</code>
       */
      public double getB() {
        return b_;
      }
      /**
       * <code>double b = 3;</code>
       */
      public Builder setB(double value) {
        
        b_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double b = 3;</code>
       */
      public Builder clearB() {
        
        b_ = 0D;
        onChanged();
        return this;
      }

      private double a_ ;
      /**
       * <code>double a = 4;</code>
       */
      public double getA() {
        return a_;
      }
      /**
       * <code>double a = 4;</code>
       */
      public Builder setA(double value) {
        
        a_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double a = 4;</code>
       */
      public Builder clearA() {
        
        a_ = 0D;
        onChanged();
        return this;
      }
      @java.lang.Override
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      @java.lang.Override
      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:ubii.dataStructure.Color)
    }

    // @@protoc_insertion_point(class_scope:ubii.dataStructure.Color)
    private static final ubii.dataStructure.ColorOuterClass.Color DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new ubii.dataStructure.ColorOuterClass.Color();
    }

    public static ubii.dataStructure.ColorOuterClass.Color getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Color>
        PARSER = new com.google.protobuf.AbstractParser<Color>() {
      @java.lang.Override
      public Color parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Color(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Color> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Color> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public ubii.dataStructure.ColorOuterClass.Color getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_ubii_dataStructure_Color_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_ubii_dataStructure_Color_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n9proto/topicData/topicDataRecord/dataSt" +
      "ructure/color.proto\022\022ubii.dataStructure\"" +
      "3\n\005Color\022\t\n\001r\030\001 \001(\001\022\t\n\001g\030\002 \001(\001\022\t\n\001b\030\003 \001(" +
      "\001\022\t\n\001a\030\004 \001(\001b\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
    internal_static_ubii_dataStructure_Color_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_ubii_dataStructure_Color_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_ubii_dataStructure_Color_descriptor,
        new java.lang.String[] { "R", "G", "B", "A", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
