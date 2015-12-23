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
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef file__transfer_models_TYPES_H
#define file__transfer_models_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace apache { namespace airavata { namespace model { namespace file { namespace transfer {

struct StorageResourceProtocol {
  enum type {
    SCP = 0,
    SFTP = 1,
    HTTP = 2,
    HTTPS = 3,
    GridFTP = 4,
    LOCAL = 5
  };
};

extern const std::map<int, const char*> _StorageResourceProtocol_VALUES_TO_NAMES;

struct LSEntryType {
  enum type {
    DIRECTORY = 0,
    FILE = 1
  };
};

extern const std::map<int, const char*> _LSEntryType_VALUES_TO_NAMES;

struct FileTransferMode {
  enum type {
    SYNC = 0,
    ASYNC = 1
  };
};

extern const std::map<int, const char*> _FileTransferMode_VALUES_TO_NAMES;

struct FileTransferStatus {
  enum type {
    CREATED = 0,
    QUEUED = 1,
    RUNNING = 2,
    COMPLETED = 3,
    FAILED = 4
  };
};

extern const std::map<int, const char*> _FileTransferStatus_VALUES_TO_NAMES;

class FileTransferRequestModel;

class LSEntryModel;

typedef struct _FileTransferRequestModel__isset {
  _FileTransferRequestModel__isset() : transferId(false), gatewayId(false), username(false), srcHostname(false), srcLoginName(false), srcPort(false), srcProtocol(false), srcFilePath(false), srcHostCredToken(false), destHostname(false), destLoginName(false), destPort(false), destProtocol(false), destFilePath(false), destHostCredToken(false), fileTransferMode(false), transferStatus(false), fileSize(false), transferTime(false), createdTime(false), lastModifiedType(false), callbackEmails(false) {}
  bool transferId :1;
  bool gatewayId :1;
  bool username :1;
  bool srcHostname :1;
  bool srcLoginName :1;
  bool srcPort :1;
  bool srcProtocol :1;
  bool srcFilePath :1;
  bool srcHostCredToken :1;
  bool destHostname :1;
  bool destLoginName :1;
  bool destPort :1;
  bool destProtocol :1;
  bool destFilePath :1;
  bool destHostCredToken :1;
  bool fileTransferMode :1;
  bool transferStatus :1;
  bool fileSize :1;
  bool transferTime :1;
  bool createdTime :1;
  bool lastModifiedType :1;
  bool callbackEmails :1;
} _FileTransferRequestModel__isset;

class FileTransferRequestModel {
 public:

  FileTransferRequestModel(const FileTransferRequestModel&);
  FileTransferRequestModel& operator=(const FileTransferRequestModel&);
  FileTransferRequestModel() : transferId(), gatewayId(), username(), srcHostname(), srcLoginName(), srcPort(0), srcProtocol((StorageResourceProtocol::type)0), srcFilePath(), srcHostCredToken(), destHostname(), destLoginName(), destPort(0), destProtocol((StorageResourceProtocol::type)0), destFilePath(), destHostCredToken(), fileTransferMode((FileTransferMode::type)0), transferStatus((FileTransferStatus::type)0), fileSize(0), transferTime(0), createdTime(0), lastModifiedType(0) {
  }

  virtual ~FileTransferRequestModel() throw();
  std::string transferId;
  std::string gatewayId;
  std::string username;
  std::string srcHostname;
  std::string srcLoginName;
  int64_t srcPort;
  StorageResourceProtocol::type srcProtocol;
  std::string srcFilePath;
  std::string srcHostCredToken;
  std::string destHostname;
  std::string destLoginName;
  int64_t destPort;
  StorageResourceProtocol::type destProtocol;
  std::string destFilePath;
  std::string destHostCredToken;
  FileTransferMode::type fileTransferMode;
  FileTransferStatus::type transferStatus;
  int64_t fileSize;
  int64_t transferTime;
  int64_t createdTime;
  int64_t lastModifiedType;
  std::vector<std::string>  callbackEmails;

  _FileTransferRequestModel__isset __isset;

  void __set_transferId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  void __set_username(const std::string& val);

  void __set_srcHostname(const std::string& val);

  void __set_srcLoginName(const std::string& val);

  void __set_srcPort(const int64_t val);

  void __set_srcProtocol(const StorageResourceProtocol::type val);

  void __set_srcFilePath(const std::string& val);

  void __set_srcHostCredToken(const std::string& val);

  void __set_destHostname(const std::string& val);

  void __set_destLoginName(const std::string& val);

  void __set_destPort(const int64_t val);

  void __set_destProtocol(const StorageResourceProtocol::type val);

  void __set_destFilePath(const std::string& val);

  void __set_destHostCredToken(const std::string& val);

  void __set_fileTransferMode(const FileTransferMode::type val);

  void __set_transferStatus(const FileTransferStatus::type val);

  void __set_fileSize(const int64_t val);

  void __set_transferTime(const int64_t val);

  void __set_createdTime(const int64_t val);

  void __set_lastModifiedType(const int64_t val);

  void __set_callbackEmails(const std::vector<std::string> & val);

  bool operator == (const FileTransferRequestModel & rhs) const
  {
    if (__isset.transferId != rhs.__isset.transferId)
      return false;
    else if (__isset.transferId && !(transferId == rhs.transferId))
      return false;
    if (__isset.gatewayId != rhs.__isset.gatewayId)
      return false;
    else if (__isset.gatewayId && !(gatewayId == rhs.gatewayId))
      return false;
    if (__isset.username != rhs.__isset.username)
      return false;
    else if (__isset.username && !(username == rhs.username))
      return false;
    if (__isset.srcHostname != rhs.__isset.srcHostname)
      return false;
    else if (__isset.srcHostname && !(srcHostname == rhs.srcHostname))
      return false;
    if (__isset.srcLoginName != rhs.__isset.srcLoginName)
      return false;
    else if (__isset.srcLoginName && !(srcLoginName == rhs.srcLoginName))
      return false;
    if (__isset.srcPort != rhs.__isset.srcPort)
      return false;
    else if (__isset.srcPort && !(srcPort == rhs.srcPort))
      return false;
    if (__isset.srcProtocol != rhs.__isset.srcProtocol)
      return false;
    else if (__isset.srcProtocol && !(srcProtocol == rhs.srcProtocol))
      return false;
    if (__isset.srcFilePath != rhs.__isset.srcFilePath)
      return false;
    else if (__isset.srcFilePath && !(srcFilePath == rhs.srcFilePath))
      return false;
    if (__isset.srcHostCredToken != rhs.__isset.srcHostCredToken)
      return false;
    else if (__isset.srcHostCredToken && !(srcHostCredToken == rhs.srcHostCredToken))
      return false;
    if (__isset.destHostname != rhs.__isset.destHostname)
      return false;
    else if (__isset.destHostname && !(destHostname == rhs.destHostname))
      return false;
    if (__isset.destLoginName != rhs.__isset.destLoginName)
      return false;
    else if (__isset.destLoginName && !(destLoginName == rhs.destLoginName))
      return false;
    if (__isset.destPort != rhs.__isset.destPort)
      return false;
    else if (__isset.destPort && !(destPort == rhs.destPort))
      return false;
    if (__isset.destProtocol != rhs.__isset.destProtocol)
      return false;
    else if (__isset.destProtocol && !(destProtocol == rhs.destProtocol))
      return false;
    if (__isset.destFilePath != rhs.__isset.destFilePath)
      return false;
    else if (__isset.destFilePath && !(destFilePath == rhs.destFilePath))
      return false;
    if (__isset.destHostCredToken != rhs.__isset.destHostCredToken)
      return false;
    else if (__isset.destHostCredToken && !(destHostCredToken == rhs.destHostCredToken))
      return false;
    if (__isset.fileTransferMode != rhs.__isset.fileTransferMode)
      return false;
    else if (__isset.fileTransferMode && !(fileTransferMode == rhs.fileTransferMode))
      return false;
    if (__isset.transferStatus != rhs.__isset.transferStatus)
      return false;
    else if (__isset.transferStatus && !(transferStatus == rhs.transferStatus))
      return false;
    if (__isset.fileSize != rhs.__isset.fileSize)
      return false;
    else if (__isset.fileSize && !(fileSize == rhs.fileSize))
      return false;
    if (__isset.transferTime != rhs.__isset.transferTime)
      return false;
    else if (__isset.transferTime && !(transferTime == rhs.transferTime))
      return false;
    if (__isset.createdTime != rhs.__isset.createdTime)
      return false;
    else if (__isset.createdTime && !(createdTime == rhs.createdTime))
      return false;
    if (__isset.lastModifiedType != rhs.__isset.lastModifiedType)
      return false;
    else if (__isset.lastModifiedType && !(lastModifiedType == rhs.lastModifiedType))
      return false;
    if (__isset.callbackEmails != rhs.__isset.callbackEmails)
      return false;
    else if (__isset.callbackEmails && !(callbackEmails == rhs.callbackEmails))
      return false;
    return true;
  }
  bool operator != (const FileTransferRequestModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileTransferRequestModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FileTransferRequestModel &a, FileTransferRequestModel &b);

inline std::ostream& operator<<(std::ostream& out, const FileTransferRequestModel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _LSEntryModel__isset {
  _LSEntryModel__isset() : type(false), size(false), nativeType(false), name(false), path(false), storageHostName(false), lastModifiedType(false), createdTime(false) {}
  bool type :1;
  bool size :1;
  bool nativeType :1;
  bool name :1;
  bool path :1;
  bool storageHostName :1;
  bool lastModifiedType :1;
  bool createdTime :1;
} _LSEntryModel__isset;

class LSEntryModel {
 public:

  LSEntryModel(const LSEntryModel&);
  LSEntryModel& operator=(const LSEntryModel&);
  LSEntryModel() : type((LSEntryType::type)0), size(0), nativeType(), name(), path(), storageHostName(), lastModifiedType(0), createdTime(0) {
  }

  virtual ~LSEntryModel() throw();
  LSEntryType::type type;
  int64_t size;
  std::string nativeType;
  std::string name;
  std::string path;
  std::string storageHostName;
  int64_t lastModifiedType;
  int64_t createdTime;

  _LSEntryModel__isset __isset;

  void __set_type(const LSEntryType::type val);

  void __set_size(const int64_t val);

  void __set_nativeType(const std::string& val);

  void __set_name(const std::string& val);

  void __set_path(const std::string& val);

  void __set_storageHostName(const std::string& val);

  void __set_lastModifiedType(const int64_t val);

  void __set_createdTime(const int64_t val);

  bool operator == (const LSEntryModel & rhs) const
  {
    if (__isset.type != rhs.__isset.type)
      return false;
    else if (__isset.type && !(type == rhs.type))
      return false;
    if (__isset.size != rhs.__isset.size)
      return false;
    else if (__isset.size && !(size == rhs.size))
      return false;
    if (__isset.nativeType != rhs.__isset.nativeType)
      return false;
    else if (__isset.nativeType && !(nativeType == rhs.nativeType))
      return false;
    if (__isset.name != rhs.__isset.name)
      return false;
    else if (__isset.name && !(name == rhs.name))
      return false;
    if (__isset.path != rhs.__isset.path)
      return false;
    else if (__isset.path && !(path == rhs.path))
      return false;
    if (__isset.storageHostName != rhs.__isset.storageHostName)
      return false;
    else if (__isset.storageHostName && !(storageHostName == rhs.storageHostName))
      return false;
    if (__isset.lastModifiedType != rhs.__isset.lastModifiedType)
      return false;
    else if (__isset.lastModifiedType && !(lastModifiedType == rhs.lastModifiedType))
      return false;
    if (__isset.createdTime != rhs.__isset.createdTime)
      return false;
    else if (__isset.createdTime && !(createdTime == rhs.createdTime))
      return false;
    return true;
  }
  bool operator != (const LSEntryModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LSEntryModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LSEntryModel &a, LSEntryModel &b);

inline std::ostream& operator<<(std::ostream& out, const LSEntryModel& obj)
{
  obj.printTo(out);
  return out;
}

}}}}} // namespace

#endif
