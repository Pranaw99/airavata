/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package org.apache.airavata.model.appcatalog.gatewayprofile;

import org.apache.thrift.scheme.IScheme;
import org.apache.thrift.scheme.SchemeFactory;
import org.apache.thrift.scheme.StandardScheme;

import org.apache.thrift.scheme.TupleScheme;
import org.apache.thrift.protocol.TTupleProtocol;
import org.apache.thrift.protocol.TProtocolException;
import org.apache.thrift.EncodingUtils;
import org.apache.thrift.TException;
import org.apache.thrift.async.AsyncMethodCallback;
import org.apache.thrift.server.AbstractNonblockingServer.*;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.EnumMap;
import java.util.Set;
import java.util.HashSet;
import java.util.EnumSet;
import java.util.Collections;
import java.util.BitSet;
import java.nio.ByteBuffer;
import java.util.Arrays;
import javax.annotation.Generated;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked"})
@Generated(value = "Autogenerated by Thrift Compiler (0.9.2)", date = "2015-11-4")
public class DataStoragePreference implements org.apache.thrift.TBase<DataStoragePreference, DataStoragePreference._Fields>, java.io.Serializable, Cloneable, Comparable<DataStoragePreference> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("DataStoragePreference");

  private static final org.apache.thrift.protocol.TField DATA_MOVEMEMT_RESOURCE_ID_FIELD_DESC = new org.apache.thrift.protocol.TField("dataMovememtResourceId", org.apache.thrift.protocol.TType.STRING, (short)1);
  private static final org.apache.thrift.protocol.TField LOGIN_USER_NAME_FIELD_DESC = new org.apache.thrift.protocol.TField("loginUserName", org.apache.thrift.protocol.TType.STRING, (short)2);
  private static final org.apache.thrift.protocol.TField FILE_SYSTEM_ROOT_LOCATION_FIELD_DESC = new org.apache.thrift.protocol.TField("fileSystemRootLocation", org.apache.thrift.protocol.TType.STRING, (short)3);
  private static final org.apache.thrift.protocol.TField RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN_FIELD_DESC = new org.apache.thrift.protocol.TField("resourceSpecificCredentialStoreToken", org.apache.thrift.protocol.TType.STRING, (short)4);

  private static final Map<Class<? extends IScheme>, SchemeFactory> schemes = new HashMap<Class<? extends IScheme>, SchemeFactory>();
  static {
    schemes.put(StandardScheme.class, new DataStoragePreferenceStandardSchemeFactory());
    schemes.put(TupleScheme.class, new DataStoragePreferenceTupleSchemeFactory());
  }

  private String dataMovememtResourceId; // required
  private String loginUserName; // optional
  private String fileSystemRootLocation; // optional
  private String resourceSpecificCredentialStoreToken; // optional

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    DATA_MOVEMEMT_RESOURCE_ID((short)1, "dataMovememtResourceId"),
    LOGIN_USER_NAME((short)2, "loginUserName"),
    FILE_SYSTEM_ROOT_LOCATION((short)3, "fileSystemRootLocation"),
    RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN((short)4, "resourceSpecificCredentialStoreToken");

    private static final Map<String, _Fields> byName = new HashMap<String, _Fields>();

    static {
      for (_Fields field : EnumSet.allOf(_Fields.class)) {
        byName.put(field.getFieldName(), field);
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, or null if its not found.
     */
    public static _Fields findByThriftId(int fieldId) {
      switch(fieldId) {
        case 1: // DATA_MOVEMEMT_RESOURCE_ID
          return DATA_MOVEMEMT_RESOURCE_ID;
        case 2: // LOGIN_USER_NAME
          return LOGIN_USER_NAME;
        case 3: // FILE_SYSTEM_ROOT_LOCATION
          return FILE_SYSTEM_ROOT_LOCATION;
        case 4: // RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN
          return RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN;
        default:
          return null;
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, throwing an exception
     * if it is not found.
     */
    public static _Fields findByThriftIdOrThrow(int fieldId) {
      _Fields fields = findByThriftId(fieldId);
      if (fields == null) throw new IllegalArgumentException("Field " + fieldId + " doesn't exist!");
      return fields;
    }

    /**
     * Find the _Fields constant that matches name, or null if its not found.
     */
    public static _Fields findByName(String name) {
      return byName.get(name);
    }

    private final short _thriftId;
    private final String _fieldName;

    _Fields(short thriftId, String fieldName) {
      _thriftId = thriftId;
      _fieldName = fieldName;
    }

    public short getThriftFieldId() {
      return _thriftId;
    }

    public String getFieldName() {
      return _fieldName;
    }
  }

  // isset id assignments
  private static final _Fields optionals[] = {_Fields.LOGIN_USER_NAME,_Fields.FILE_SYSTEM_ROOT_LOCATION,_Fields.RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN};
  public static final Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.DATA_MOVEMEMT_RESOURCE_ID, new org.apache.thrift.meta_data.FieldMetaData("dataMovememtResourceId", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.LOGIN_USER_NAME, new org.apache.thrift.meta_data.FieldMetaData("loginUserName", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.FILE_SYSTEM_ROOT_LOCATION, new org.apache.thrift.meta_data.FieldMetaData("fileSystemRootLocation", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN, new org.apache.thrift.meta_data.FieldMetaData("resourceSpecificCredentialStoreToken", org.apache.thrift.TFieldRequirementType.OPTIONAL, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(DataStoragePreference.class, metaDataMap);
  }

  public DataStoragePreference() {
  }

  public DataStoragePreference(
    String dataMovememtResourceId)
  {
    this();
    this.dataMovememtResourceId = dataMovememtResourceId;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public DataStoragePreference(DataStoragePreference other) {
    if (other.isSetDataMovememtResourceId()) {
      this.dataMovememtResourceId = other.dataMovememtResourceId;
    }
    if (other.isSetLoginUserName()) {
      this.loginUserName = other.loginUserName;
    }
    if (other.isSetFileSystemRootLocation()) {
      this.fileSystemRootLocation = other.fileSystemRootLocation;
    }
    if (other.isSetResourceSpecificCredentialStoreToken()) {
      this.resourceSpecificCredentialStoreToken = other.resourceSpecificCredentialStoreToken;
    }
  }

  public DataStoragePreference deepCopy() {
    return new DataStoragePreference(this);
  }

  @Override
  public void clear() {
    this.dataMovememtResourceId = null;
    this.loginUserName = null;
    this.fileSystemRootLocation = null;
    this.resourceSpecificCredentialStoreToken = null;
  }

  public String getDataMovememtResourceId() {
    return this.dataMovememtResourceId;
  }

  public void setDataMovememtResourceId(String dataMovememtResourceId) {
    this.dataMovememtResourceId = dataMovememtResourceId;
  }

  public void unsetDataMovememtResourceId() {
    this.dataMovememtResourceId = null;
  }

  /** Returns true if field dataMovememtResourceId is set (has been assigned a value) and false otherwise */
  public boolean isSetDataMovememtResourceId() {
    return this.dataMovememtResourceId != null;
  }

  public void setDataMovememtResourceIdIsSet(boolean value) {
    if (!value) {
      this.dataMovememtResourceId = null;
    }
  }

  public String getLoginUserName() {
    return this.loginUserName;
  }

  public void setLoginUserName(String loginUserName) {
    this.loginUserName = loginUserName;
  }

  public void unsetLoginUserName() {
    this.loginUserName = null;
  }

  /** Returns true if field loginUserName is set (has been assigned a value) and false otherwise */
  public boolean isSetLoginUserName() {
    return this.loginUserName != null;
  }

  public void setLoginUserNameIsSet(boolean value) {
    if (!value) {
      this.loginUserName = null;
    }
  }

  public String getFileSystemRootLocation() {
    return this.fileSystemRootLocation;
  }

  public void setFileSystemRootLocation(String fileSystemRootLocation) {
    this.fileSystemRootLocation = fileSystemRootLocation;
  }

  public void unsetFileSystemRootLocation() {
    this.fileSystemRootLocation = null;
  }

  /** Returns true if field fileSystemRootLocation is set (has been assigned a value) and false otherwise */
  public boolean isSetFileSystemRootLocation() {
    return this.fileSystemRootLocation != null;
  }

  public void setFileSystemRootLocationIsSet(boolean value) {
    if (!value) {
      this.fileSystemRootLocation = null;
    }
  }

  public String getResourceSpecificCredentialStoreToken() {
    return this.resourceSpecificCredentialStoreToken;
  }

  public void setResourceSpecificCredentialStoreToken(String resourceSpecificCredentialStoreToken) {
    this.resourceSpecificCredentialStoreToken = resourceSpecificCredentialStoreToken;
  }

  public void unsetResourceSpecificCredentialStoreToken() {
    this.resourceSpecificCredentialStoreToken = null;
  }

  /** Returns true if field resourceSpecificCredentialStoreToken is set (has been assigned a value) and false otherwise */
  public boolean isSetResourceSpecificCredentialStoreToken() {
    return this.resourceSpecificCredentialStoreToken != null;
  }

  public void setResourceSpecificCredentialStoreTokenIsSet(boolean value) {
    if (!value) {
      this.resourceSpecificCredentialStoreToken = null;
    }
  }

  public void setFieldValue(_Fields field, Object value) {
    switch (field) {
    case DATA_MOVEMEMT_RESOURCE_ID:
      if (value == null) {
        unsetDataMovememtResourceId();
      } else {
        setDataMovememtResourceId((String)value);
      }
      break;

    case LOGIN_USER_NAME:
      if (value == null) {
        unsetLoginUserName();
      } else {
        setLoginUserName((String)value);
      }
      break;

    case FILE_SYSTEM_ROOT_LOCATION:
      if (value == null) {
        unsetFileSystemRootLocation();
      } else {
        setFileSystemRootLocation((String)value);
      }
      break;

    case RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN:
      if (value == null) {
        unsetResourceSpecificCredentialStoreToken();
      } else {
        setResourceSpecificCredentialStoreToken((String)value);
      }
      break;

    }
  }

  public Object getFieldValue(_Fields field) {
    switch (field) {
    case DATA_MOVEMEMT_RESOURCE_ID:
      return getDataMovememtResourceId();

    case LOGIN_USER_NAME:
      return getLoginUserName();

    case FILE_SYSTEM_ROOT_LOCATION:
      return getFileSystemRootLocation();

    case RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN:
      return getResourceSpecificCredentialStoreToken();

    }
    throw new IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new IllegalArgumentException();
    }

    switch (field) {
    case DATA_MOVEMEMT_RESOURCE_ID:
      return isSetDataMovememtResourceId();
    case LOGIN_USER_NAME:
      return isSetLoginUserName();
    case FILE_SYSTEM_ROOT_LOCATION:
      return isSetFileSystemRootLocation();
    case RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN:
      return isSetResourceSpecificCredentialStoreToken();
    }
    throw new IllegalStateException();
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof DataStoragePreference)
      return this.equals((DataStoragePreference)that);
    return false;
  }

  public boolean equals(DataStoragePreference that) {
    if (that == null)
      return false;

    boolean this_present_dataMovememtResourceId = true && this.isSetDataMovememtResourceId();
    boolean that_present_dataMovememtResourceId = true && that.isSetDataMovememtResourceId();
    if (this_present_dataMovememtResourceId || that_present_dataMovememtResourceId) {
      if (!(this_present_dataMovememtResourceId && that_present_dataMovememtResourceId))
        return false;
      if (!this.dataMovememtResourceId.equals(that.dataMovememtResourceId))
        return false;
    }

    boolean this_present_loginUserName = true && this.isSetLoginUserName();
    boolean that_present_loginUserName = true && that.isSetLoginUserName();
    if (this_present_loginUserName || that_present_loginUserName) {
      if (!(this_present_loginUserName && that_present_loginUserName))
        return false;
      if (!this.loginUserName.equals(that.loginUserName))
        return false;
    }

    boolean this_present_fileSystemRootLocation = true && this.isSetFileSystemRootLocation();
    boolean that_present_fileSystemRootLocation = true && that.isSetFileSystemRootLocation();
    if (this_present_fileSystemRootLocation || that_present_fileSystemRootLocation) {
      if (!(this_present_fileSystemRootLocation && that_present_fileSystemRootLocation))
        return false;
      if (!this.fileSystemRootLocation.equals(that.fileSystemRootLocation))
        return false;
    }

    boolean this_present_resourceSpecificCredentialStoreToken = true && this.isSetResourceSpecificCredentialStoreToken();
    boolean that_present_resourceSpecificCredentialStoreToken = true && that.isSetResourceSpecificCredentialStoreToken();
    if (this_present_resourceSpecificCredentialStoreToken || that_present_resourceSpecificCredentialStoreToken) {
      if (!(this_present_resourceSpecificCredentialStoreToken && that_present_resourceSpecificCredentialStoreToken))
        return false;
      if (!this.resourceSpecificCredentialStoreToken.equals(that.resourceSpecificCredentialStoreToken))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    List<Object> list = new ArrayList<Object>();

    boolean present_dataMovememtResourceId = true && (isSetDataMovememtResourceId());
    list.add(present_dataMovememtResourceId);
    if (present_dataMovememtResourceId)
      list.add(dataMovememtResourceId);

    boolean present_loginUserName = true && (isSetLoginUserName());
    list.add(present_loginUserName);
    if (present_loginUserName)
      list.add(loginUserName);

    boolean present_fileSystemRootLocation = true && (isSetFileSystemRootLocation());
    list.add(present_fileSystemRootLocation);
    if (present_fileSystemRootLocation)
      list.add(fileSystemRootLocation);

    boolean present_resourceSpecificCredentialStoreToken = true && (isSetResourceSpecificCredentialStoreToken());
    list.add(present_resourceSpecificCredentialStoreToken);
    if (present_resourceSpecificCredentialStoreToken)
      list.add(resourceSpecificCredentialStoreToken);

    return list.hashCode();
  }

  @Override
  public int compareTo(DataStoragePreference other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetDataMovememtResourceId()).compareTo(other.isSetDataMovememtResourceId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetDataMovememtResourceId()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.dataMovememtResourceId, other.dataMovememtResourceId);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetLoginUserName()).compareTo(other.isSetLoginUserName());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetLoginUserName()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.loginUserName, other.loginUserName);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetFileSystemRootLocation()).compareTo(other.isSetFileSystemRootLocation());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetFileSystemRootLocation()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.fileSystemRootLocation, other.fileSystemRootLocation);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = Boolean.valueOf(isSetResourceSpecificCredentialStoreToken()).compareTo(other.isSetResourceSpecificCredentialStoreToken());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetResourceSpecificCredentialStoreToken()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.resourceSpecificCredentialStoreToken, other.resourceSpecificCredentialStoreToken);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    return 0;
  }

  public _Fields fieldForId(int fieldId) {
    return _Fields.findByThriftId(fieldId);
  }

  public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
    schemes.get(iprot.getScheme()).getScheme().read(iprot, this);
  }

  public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
    schemes.get(oprot.getScheme()).getScheme().write(oprot, this);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder("DataStoragePreference(");
    boolean first = true;

    sb.append("dataMovememtResourceId:");
    if (this.dataMovememtResourceId == null) {
      sb.append("null");
    } else {
      sb.append(this.dataMovememtResourceId);
    }
    first = false;
    if (isSetLoginUserName()) {
      if (!first) sb.append(", ");
      sb.append("loginUserName:");
      if (this.loginUserName == null) {
        sb.append("null");
      } else {
        sb.append(this.loginUserName);
      }
      first = false;
    }
    if (isSetFileSystemRootLocation()) {
      if (!first) sb.append(", ");
      sb.append("fileSystemRootLocation:");
      if (this.fileSystemRootLocation == null) {
        sb.append("null");
      } else {
        sb.append(this.fileSystemRootLocation);
      }
      first = false;
    }
    if (isSetResourceSpecificCredentialStoreToken()) {
      if (!first) sb.append(", ");
      sb.append("resourceSpecificCredentialStoreToken:");
      if (this.resourceSpecificCredentialStoreToken == null) {
        sb.append("null");
      } else {
        sb.append(this.resourceSpecificCredentialStoreToken);
      }
      first = false;
    }
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    if (!isSetDataMovememtResourceId()) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'dataMovememtResourceId' is unset! Struct:" + toString());
    }

    // check for sub-struct validity
  }

  private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
    try {
      write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, ClassNotFoundException {
    try {
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class DataStoragePreferenceStandardSchemeFactory implements SchemeFactory {
    public DataStoragePreferenceStandardScheme getScheme() {
      return new DataStoragePreferenceStandardScheme();
    }
  }

  private static class DataStoragePreferenceStandardScheme extends StandardScheme<DataStoragePreference> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, DataStoragePreference struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // DATA_MOVEMEMT_RESOURCE_ID
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.dataMovememtResourceId = iprot.readString();
              struct.setDataMovememtResourceIdIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // LOGIN_USER_NAME
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.loginUserName = iprot.readString();
              struct.setLoginUserNameIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // FILE_SYSTEM_ROOT_LOCATION
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.fileSystemRootLocation = iprot.readString();
              struct.setFileSystemRootLocationIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.resourceSpecificCredentialStoreToken = iprot.readString();
              struct.setResourceSpecificCredentialStoreTokenIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          default:
            org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, DataStoragePreference struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (struct.dataMovememtResourceId != null) {
        oprot.writeFieldBegin(DATA_MOVEMEMT_RESOURCE_ID_FIELD_DESC);
        oprot.writeString(struct.dataMovememtResourceId);
        oprot.writeFieldEnd();
      }
      if (struct.loginUserName != null) {
        if (struct.isSetLoginUserName()) {
          oprot.writeFieldBegin(LOGIN_USER_NAME_FIELD_DESC);
          oprot.writeString(struct.loginUserName);
          oprot.writeFieldEnd();
        }
      }
      if (struct.fileSystemRootLocation != null) {
        if (struct.isSetFileSystemRootLocation()) {
          oprot.writeFieldBegin(FILE_SYSTEM_ROOT_LOCATION_FIELD_DESC);
          oprot.writeString(struct.fileSystemRootLocation);
          oprot.writeFieldEnd();
        }
      }
      if (struct.resourceSpecificCredentialStoreToken != null) {
        if (struct.isSetResourceSpecificCredentialStoreToken()) {
          oprot.writeFieldBegin(RESOURCE_SPECIFIC_CREDENTIAL_STORE_TOKEN_FIELD_DESC);
          oprot.writeString(struct.resourceSpecificCredentialStoreToken);
          oprot.writeFieldEnd();
        }
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class DataStoragePreferenceTupleSchemeFactory implements SchemeFactory {
    public DataStoragePreferenceTupleScheme getScheme() {
      return new DataStoragePreferenceTupleScheme();
    }
  }

  private static class DataStoragePreferenceTupleScheme extends TupleScheme<DataStoragePreference> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, DataStoragePreference struct) throws org.apache.thrift.TException {
      TTupleProtocol oprot = (TTupleProtocol) prot;
      oprot.writeString(struct.dataMovememtResourceId);
      BitSet optionals = new BitSet();
      if (struct.isSetLoginUserName()) {
        optionals.set(0);
      }
      if (struct.isSetFileSystemRootLocation()) {
        optionals.set(1);
      }
      if (struct.isSetResourceSpecificCredentialStoreToken()) {
        optionals.set(2);
      }
      oprot.writeBitSet(optionals, 3);
      if (struct.isSetLoginUserName()) {
        oprot.writeString(struct.loginUserName);
      }
      if (struct.isSetFileSystemRootLocation()) {
        oprot.writeString(struct.fileSystemRootLocation);
      }
      if (struct.isSetResourceSpecificCredentialStoreToken()) {
        oprot.writeString(struct.resourceSpecificCredentialStoreToken);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, DataStoragePreference struct) throws org.apache.thrift.TException {
      TTupleProtocol iprot = (TTupleProtocol) prot;
      struct.dataMovememtResourceId = iprot.readString();
      struct.setDataMovememtResourceIdIsSet(true);
      BitSet incoming = iprot.readBitSet(3);
      if (incoming.get(0)) {
        struct.loginUserName = iprot.readString();
        struct.setLoginUserNameIsSet(true);
      }
      if (incoming.get(1)) {
        struct.fileSystemRootLocation = iprot.readString();
        struct.setFileSystemRootLocationIsSet(true);
      }
      if (incoming.get(2)) {
        struct.resourceSpecificCredentialStoreToken = iprot.readString();
        struct.setResourceSpecificCredentialStoreTokenIsSet(true);
      }
    }
  }

}

