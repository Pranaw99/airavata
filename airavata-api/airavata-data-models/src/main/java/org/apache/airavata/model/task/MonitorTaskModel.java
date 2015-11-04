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
package org.apache.airavata.model.task;

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
public class MonitorTaskModel implements org.apache.thrift.TBase<MonitorTaskModel, MonitorTaskModel._Fields>, java.io.Serializable, Cloneable, Comparable<MonitorTaskModel> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("MonitorTaskModel");

  private static final org.apache.thrift.protocol.TField MONITOR_MODE_FIELD_DESC = new org.apache.thrift.protocol.TField("monitorMode", org.apache.thrift.protocol.TType.I32, (short)1);

  private static final Map<Class<? extends IScheme>, SchemeFactory> schemes = new HashMap<Class<? extends IScheme>, SchemeFactory>();
  static {
    schemes.put(StandardScheme.class, new MonitorTaskModelStandardSchemeFactory());
    schemes.put(TupleScheme.class, new MonitorTaskModelTupleSchemeFactory());
  }

  private org.apache.airavata.model.appcatalog.computeresource.MonitorMode monitorMode; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    /**
     * 
     * @see org.apache.airavata.model.appcatalog.computeresource.MonitorMode
     */
    MONITOR_MODE((short)1, "monitorMode");

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
        case 1: // MONITOR_MODE
          return MONITOR_MODE;
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
  public static final Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.MONITOR_MODE, new org.apache.thrift.meta_data.FieldMetaData("monitorMode", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.EnumMetaData(org.apache.thrift.protocol.TType.ENUM, org.apache.airavata.model.appcatalog.computeresource.MonitorMode.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(MonitorTaskModel.class, metaDataMap);
  }

  public MonitorTaskModel() {
  }

  public MonitorTaskModel(
    org.apache.airavata.model.appcatalog.computeresource.MonitorMode monitorMode)
  {
    this();
    this.monitorMode = monitorMode;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MonitorTaskModel(MonitorTaskModel other) {
    if (other.isSetMonitorMode()) {
      this.monitorMode = other.monitorMode;
    }
  }

  public MonitorTaskModel deepCopy() {
    return new MonitorTaskModel(this);
  }

  @Override
  public void clear() {
    this.monitorMode = null;
  }

  /**
   * 
   * @see org.apache.airavata.model.appcatalog.computeresource.MonitorMode
   */
  public org.apache.airavata.model.appcatalog.computeresource.MonitorMode getMonitorMode() {
    return this.monitorMode;
  }

  /**
   * 
   * @see org.apache.airavata.model.appcatalog.computeresource.MonitorMode
   */
  public void setMonitorMode(org.apache.airavata.model.appcatalog.computeresource.MonitorMode monitorMode) {
    this.monitorMode = monitorMode;
  }

  public void unsetMonitorMode() {
    this.monitorMode = null;
  }

  /** Returns true if field monitorMode is set (has been assigned a value) and false otherwise */
  public boolean isSetMonitorMode() {
    return this.monitorMode != null;
  }

  public void setMonitorModeIsSet(boolean value) {
    if (!value) {
      this.monitorMode = null;
    }
  }

  public void setFieldValue(_Fields field, Object value) {
    switch (field) {
    case MONITOR_MODE:
      if (value == null) {
        unsetMonitorMode();
      } else {
        setMonitorMode((org.apache.airavata.model.appcatalog.computeresource.MonitorMode)value);
      }
      break;

    }
  }

  public Object getFieldValue(_Fields field) {
    switch (field) {
    case MONITOR_MODE:
      return getMonitorMode();

    }
    throw new IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new IllegalArgumentException();
    }

    switch (field) {
    case MONITOR_MODE:
      return isSetMonitorMode();
    }
    throw new IllegalStateException();
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof MonitorTaskModel)
      return this.equals((MonitorTaskModel)that);
    return false;
  }

  public boolean equals(MonitorTaskModel that) {
    if (that == null)
      return false;

    boolean this_present_monitorMode = true && this.isSetMonitorMode();
    boolean that_present_monitorMode = true && that.isSetMonitorMode();
    if (this_present_monitorMode || that_present_monitorMode) {
      if (!(this_present_monitorMode && that_present_monitorMode))
        return false;
      if (!this.monitorMode.equals(that.monitorMode))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    List<Object> list = new ArrayList<Object>();

    boolean present_monitorMode = true && (isSetMonitorMode());
    list.add(present_monitorMode);
    if (present_monitorMode)
      list.add(monitorMode.getValue());

    return list.hashCode();
  }

  @Override
  public int compareTo(MonitorTaskModel other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetMonitorMode()).compareTo(other.isSetMonitorMode());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMonitorMode()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.monitorMode, other.monitorMode);
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
    StringBuilder sb = new StringBuilder("MonitorTaskModel(");
    boolean first = true;

    sb.append("monitorMode:");
    if (this.monitorMode == null) {
      sb.append("null");
    } else {
      sb.append(this.monitorMode);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    if (!isSetMonitorMode()) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'monitorMode' is unset! Struct:" + toString());
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

  private static class MonitorTaskModelStandardSchemeFactory implements SchemeFactory {
    public MonitorTaskModelStandardScheme getScheme() {
      return new MonitorTaskModelStandardScheme();
    }
  }

  private static class MonitorTaskModelStandardScheme extends StandardScheme<MonitorTaskModel> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, MonitorTaskModel struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // MONITOR_MODE
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.monitorMode = org.apache.airavata.model.appcatalog.computeresource.MonitorMode.findByValue(iprot.readI32());
              struct.setMonitorModeIsSet(true);
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

    public void write(org.apache.thrift.protocol.TProtocol oprot, MonitorTaskModel struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (struct.monitorMode != null) {
        oprot.writeFieldBegin(MONITOR_MODE_FIELD_DESC);
        oprot.writeI32(struct.monitorMode.getValue());
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class MonitorTaskModelTupleSchemeFactory implements SchemeFactory {
    public MonitorTaskModelTupleScheme getScheme() {
      return new MonitorTaskModelTupleScheme();
    }
  }

  private static class MonitorTaskModelTupleScheme extends TupleScheme<MonitorTaskModel> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, MonitorTaskModel struct) throws org.apache.thrift.TException {
      TTupleProtocol oprot = (TTupleProtocol) prot;
      oprot.writeI32(struct.monitorMode.getValue());
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, MonitorTaskModel struct) throws org.apache.thrift.TException {
      TTupleProtocol iprot = (TTupleProtocol) prot;
      struct.monitorMode = org.apache.airavata.model.appcatalog.computeresource.MonitorMode.findByValue(iprot.readI32());
      struct.setMonitorModeIsSet(true);
    }
  }

}

