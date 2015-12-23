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
#ifndef replica_models_TYPES_H
#define replica_models_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "data_movement_models_types.h"


namespace apache { namespace airavata { namespace model { namespace file { namespace replica {

struct FileModelType {
  enum type {
    FILE = 0,
    DIRECTORY = 1
  };
};

extern const std::map<int, const char*> _FileModelType_VALUES_TO_NAMES;

struct StorageResourceType {
  enum type {
    GATEWAY_DATA_STORE = 0,
    BACKUP_GATEWAY_DATA_STORE = 1,
    COMPUTE_RESOURCE = 2,
    LONG_TERM_STORAGE_RESOURCE = 3,
    OTHER = 4
  };
};

extern const std::map<int, const char*> _StorageResourceType_VALUES_TO_NAMES;

struct ReplicaPersistentType {
  enum type {
    TRANSIENT = 0,
    PERSISTENT = 1
  };
};

extern const std::map<int, const char*> _ReplicaPersistentType_VALUES_TO_NAMES;

class FileCollectionModel;

class FileModel;

class FileReplicaModel;

typedef struct _FileCollectionModel__isset {
  _FileCollectionModel__isset() : collectionId(false), gatewayId(false), username(false), sharedUsers(false), sharedPublic(false), collectionName(false), collectionDescription(false), fileIdList(false) {}
  bool collectionId :1;
  bool gatewayId :1;
  bool username :1;
  bool sharedUsers :1;
  bool sharedPublic :1;
  bool collectionName :1;
  bool collectionDescription :1;
  bool fileIdList :1;
} _FileCollectionModel__isset;

class FileCollectionModel {
 public:

  FileCollectionModel(const FileCollectionModel&);
  FileCollectionModel& operator=(const FileCollectionModel&);
  FileCollectionModel() : collectionId(), gatewayId(), username(), sharedPublic(0), collectionName(), collectionDescription() {
  }

  virtual ~FileCollectionModel() throw();
  std::string collectionId;
  std::string gatewayId;
  std::string username;
  std::vector<std::string>  sharedUsers;
  bool sharedPublic;
  std::string collectionName;
  std::string collectionDescription;
  std::vector<std::string>  fileIdList;

  _FileCollectionModel__isset __isset;

  void __set_collectionId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  void __set_username(const std::string& val);

  void __set_sharedUsers(const std::vector<std::string> & val);

  void __set_sharedPublic(const bool val);

  void __set_collectionName(const std::string& val);

  void __set_collectionDescription(const std::string& val);

  void __set_fileIdList(const std::vector<std::string> & val);

  bool operator == (const FileCollectionModel & rhs) const
  {
    if (__isset.collectionId != rhs.__isset.collectionId)
      return false;
    else if (__isset.collectionId && !(collectionId == rhs.collectionId))
      return false;
    if (__isset.gatewayId != rhs.__isset.gatewayId)
      return false;
    else if (__isset.gatewayId && !(gatewayId == rhs.gatewayId))
      return false;
    if (__isset.username != rhs.__isset.username)
      return false;
    else if (__isset.username && !(username == rhs.username))
      return false;
    if (__isset.sharedUsers != rhs.__isset.sharedUsers)
      return false;
    else if (__isset.sharedUsers && !(sharedUsers == rhs.sharedUsers))
      return false;
    if (__isset.sharedPublic != rhs.__isset.sharedPublic)
      return false;
    else if (__isset.sharedPublic && !(sharedPublic == rhs.sharedPublic))
      return false;
    if (__isset.collectionName != rhs.__isset.collectionName)
      return false;
    else if (__isset.collectionName && !(collectionName == rhs.collectionName))
      return false;
    if (__isset.collectionDescription != rhs.__isset.collectionDescription)
      return false;
    else if (__isset.collectionDescription && !(collectionDescription == rhs.collectionDescription))
      return false;
    if (__isset.fileIdList != rhs.__isset.fileIdList)
      return false;
    else if (__isset.fileIdList && !(fileIdList == rhs.fileIdList))
      return false;
    return true;
  }
  bool operator != (const FileCollectionModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileCollectionModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FileCollectionModel &a, FileCollectionModel &b);

inline std::ostream& operator<<(std::ostream& out, const FileCollectionModel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _FileModel__isset {
  _FileModel__isset() : fileId(false), gatewayId(false), username(false), sharedUsers(false), sharedPublic(false), fileName(false), fileDescription(false), sha256Checksum(false), fileType(false), fileSize(false), nativeFormat(false), creationTime(false), lastModifiedTime(false), fileReplicas(false) {}
  bool fileId :1;
  bool gatewayId :1;
  bool username :1;
  bool sharedUsers :1;
  bool sharedPublic :1;
  bool fileName :1;
  bool fileDescription :1;
  bool sha256Checksum :1;
  bool fileType :1;
  bool fileSize :1;
  bool nativeFormat :1;
  bool creationTime :1;
  bool lastModifiedTime :1;
  bool fileReplicas :1;
} _FileModel__isset;

class FileModel {
 public:

  FileModel(const FileModel&);
  FileModel& operator=(const FileModel&);
  FileModel() : fileId(), gatewayId(), username(), sharedPublic(0), fileName(), fileDescription(), sha256Checksum(), fileType((FileModelType::type)0), fileSize(0), nativeFormat(), creationTime(0), lastModifiedTime(0) {
  }

  virtual ~FileModel() throw();
  std::string fileId;
  std::string gatewayId;
  std::string username;
  std::vector<std::string>  sharedUsers;
  bool sharedPublic;
  std::string fileName;
  std::string fileDescription;
  std::string sha256Checksum;
  FileModelType::type fileType;
  int32_t fileSize;
  std::string nativeFormat;
  int64_t creationTime;
  int64_t lastModifiedTime;
  std::vector<FileReplicaModel>  fileReplicas;

  _FileModel__isset __isset;

  void __set_fileId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  void __set_username(const std::string& val);

  void __set_sharedUsers(const std::vector<std::string> & val);

  void __set_sharedPublic(const bool val);

  void __set_fileName(const std::string& val);

  void __set_fileDescription(const std::string& val);

  void __set_sha256Checksum(const std::string& val);

  void __set_fileType(const FileModelType::type val);

  void __set_fileSize(const int32_t val);

  void __set_nativeFormat(const std::string& val);

  void __set_creationTime(const int64_t val);

  void __set_lastModifiedTime(const int64_t val);

  void __set_fileReplicas(const std::vector<FileReplicaModel> & val);

  bool operator == (const FileModel & rhs) const
  {
    if (__isset.fileId != rhs.__isset.fileId)
      return false;
    else if (__isset.fileId && !(fileId == rhs.fileId))
      return false;
    if (__isset.gatewayId != rhs.__isset.gatewayId)
      return false;
    else if (__isset.gatewayId && !(gatewayId == rhs.gatewayId))
      return false;
    if (__isset.username != rhs.__isset.username)
      return false;
    else if (__isset.username && !(username == rhs.username))
      return false;
    if (__isset.sharedUsers != rhs.__isset.sharedUsers)
      return false;
    else if (__isset.sharedUsers && !(sharedUsers == rhs.sharedUsers))
      return false;
    if (__isset.sharedPublic != rhs.__isset.sharedPublic)
      return false;
    else if (__isset.sharedPublic && !(sharedPublic == rhs.sharedPublic))
      return false;
    if (__isset.fileName != rhs.__isset.fileName)
      return false;
    else if (__isset.fileName && !(fileName == rhs.fileName))
      return false;
    if (__isset.fileDescription != rhs.__isset.fileDescription)
      return false;
    else if (__isset.fileDescription && !(fileDescription == rhs.fileDescription))
      return false;
    if (__isset.sha256Checksum != rhs.__isset.sha256Checksum)
      return false;
    else if (__isset.sha256Checksum && !(sha256Checksum == rhs.sha256Checksum))
      return false;
    if (__isset.fileType != rhs.__isset.fileType)
      return false;
    else if (__isset.fileType && !(fileType == rhs.fileType))
      return false;
    if (__isset.fileSize != rhs.__isset.fileSize)
      return false;
    else if (__isset.fileSize && !(fileSize == rhs.fileSize))
      return false;
    if (__isset.nativeFormat != rhs.__isset.nativeFormat)
      return false;
    else if (__isset.nativeFormat && !(nativeFormat == rhs.nativeFormat))
      return false;
    if (__isset.creationTime != rhs.__isset.creationTime)
      return false;
    else if (__isset.creationTime && !(creationTime == rhs.creationTime))
      return false;
    if (__isset.lastModifiedTime != rhs.__isset.lastModifiedTime)
      return false;
    else if (__isset.lastModifiedTime && !(lastModifiedTime == rhs.lastModifiedTime))
      return false;
    if (__isset.fileReplicas != rhs.__isset.fileReplicas)
      return false;
    else if (__isset.fileReplicas && !(fileReplicas == rhs.fileReplicas))
      return false;
    return true;
  }
  bool operator != (const FileModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FileModel &a, FileModel &b);

inline std::ostream& operator<<(std::ostream& out, const FileModel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _FileReplicaModel__isset {
  _FileReplicaModel__isset() : replicaName(false), replicaDescription(false), storageHostname(false), storageResourceId(false), filePath(false), creationTime(false), validUntilTime(false), storageResourceType(false), replicaPersistentType(false) {}
  bool replicaName :1;
  bool replicaDescription :1;
  bool storageHostname :1;
  bool storageResourceId :1;
  bool filePath :1;
  bool creationTime :1;
  bool validUntilTime :1;
  bool storageResourceType :1;
  bool replicaPersistentType :1;
} _FileReplicaModel__isset;

class FileReplicaModel {
 public:

  FileReplicaModel(const FileReplicaModel&);
  FileReplicaModel& operator=(const FileReplicaModel&);
  FileReplicaModel() : replicaName(), replicaDescription(), storageHostname(), storageResourceId(), filePath(), creationTime(0), validUntilTime(0), storageResourceType((StorageResourceType::type)0), replicaPersistentType((ReplicaPersistentType::type)0) {
  }

  virtual ~FileReplicaModel() throw();
  std::string replicaName;
  std::string replicaDescription;
  std::string storageHostname;
  std::string storageResourceId;
  std::string filePath;
  int64_t creationTime;
  int64_t validUntilTime;
  StorageResourceType::type storageResourceType;
  ReplicaPersistentType::type replicaPersistentType;

  _FileReplicaModel__isset __isset;

  void __set_replicaName(const std::string& val);

  void __set_replicaDescription(const std::string& val);

  void __set_storageHostname(const std::string& val);

  void __set_storageResourceId(const std::string& val);

  void __set_filePath(const std::string& val);

  void __set_creationTime(const int64_t val);

  void __set_validUntilTime(const int64_t val);

  void __set_storageResourceType(const StorageResourceType::type val);

  void __set_replicaPersistentType(const ReplicaPersistentType::type val);

  bool operator == (const FileReplicaModel & rhs) const
  {
    if (__isset.replicaName != rhs.__isset.replicaName)
      return false;
    else if (__isset.replicaName && !(replicaName == rhs.replicaName))
      return false;
    if (__isset.replicaDescription != rhs.__isset.replicaDescription)
      return false;
    else if (__isset.replicaDescription && !(replicaDescription == rhs.replicaDescription))
      return false;
    if (__isset.storageHostname != rhs.__isset.storageHostname)
      return false;
    else if (__isset.storageHostname && !(storageHostname == rhs.storageHostname))
      return false;
    if (__isset.storageResourceId != rhs.__isset.storageResourceId)
      return false;
    else if (__isset.storageResourceId && !(storageResourceId == rhs.storageResourceId))
      return false;
    if (__isset.filePath != rhs.__isset.filePath)
      return false;
    else if (__isset.filePath && !(filePath == rhs.filePath))
      return false;
    if (__isset.creationTime != rhs.__isset.creationTime)
      return false;
    else if (__isset.creationTime && !(creationTime == rhs.creationTime))
      return false;
    if (__isset.validUntilTime != rhs.__isset.validUntilTime)
      return false;
    else if (__isset.validUntilTime && !(validUntilTime == rhs.validUntilTime))
      return false;
    if (__isset.storageResourceType != rhs.__isset.storageResourceType)
      return false;
    else if (__isset.storageResourceType && !(storageResourceType == rhs.storageResourceType))
      return false;
    if (__isset.replicaPersistentType != rhs.__isset.replicaPersistentType)
      return false;
    else if (__isset.replicaPersistentType && !(replicaPersistentType == rhs.replicaPersistentType))
      return false;
    return true;
  }
  bool operator != (const FileReplicaModel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileReplicaModel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FileReplicaModel &a, FileReplicaModel &b);

inline std::ostream& operator<<(std::ostream& out, const FileReplicaModel& obj)
{
  obj.printTo(out);
  return out;
}

}}}}} // namespace

#endif
