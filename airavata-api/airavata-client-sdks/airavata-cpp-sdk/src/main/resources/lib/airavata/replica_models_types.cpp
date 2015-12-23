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
#include "replica_models_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace apache { namespace airavata { namespace model { namespace file { namespace replica {

int _kFileModelTypeValues[] = {
  FileModelType::FILE,
  FileModelType::DIRECTORY
};
const char* _kFileModelTypeNames[] = {
  "FILE",
  "DIRECTORY"
};
const std::map<int, const char*> _FileModelType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kFileModelTypeValues, _kFileModelTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kStorageResourceTypeValues[] = {
  StorageResourceType::GATEWAY_DATA_STORE,
  StorageResourceType::BACKUP_GATEWAY_DATA_STORE,
  StorageResourceType::COMPUTE_RESOURCE,
  StorageResourceType::LONG_TERM_STORAGE_RESOURCE,
  StorageResourceType::OTHER
};
const char* _kStorageResourceTypeNames[] = {
  "GATEWAY_DATA_STORE",
  "BACKUP_GATEWAY_DATA_STORE",
  "COMPUTE_RESOURCE",
  "LONG_TERM_STORAGE_RESOURCE",
  "OTHER"
};
const std::map<int, const char*> _StorageResourceType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kStorageResourceTypeValues, _kStorageResourceTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kReplicaPersistentTypeValues[] = {
  ReplicaPersistentType::TRANSIENT,
  ReplicaPersistentType::PERSISTENT
};
const char* _kReplicaPersistentTypeNames[] = {
  "TRANSIENT",
  "PERSISTENT"
};
const std::map<int, const char*> _ReplicaPersistentType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kReplicaPersistentTypeValues, _kReplicaPersistentTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


FileCollectionModel::~FileCollectionModel() throw() {
}


void FileCollectionModel::__set_collectionId(const std::string& val) {
  this->collectionId = val;
__isset.collectionId = true;
}

void FileCollectionModel::__set_gatewayId(const std::string& val) {
  this->gatewayId = val;
__isset.gatewayId = true;
}

void FileCollectionModel::__set_username(const std::string& val) {
  this->username = val;
__isset.username = true;
}

void FileCollectionModel::__set_sharedUsers(const std::vector<std::string> & val) {
  this->sharedUsers = val;
__isset.sharedUsers = true;
}

void FileCollectionModel::__set_sharedPublic(const bool val) {
  this->sharedPublic = val;
__isset.sharedPublic = true;
}

void FileCollectionModel::__set_collectionName(const std::string& val) {
  this->collectionName = val;
__isset.collectionName = true;
}

void FileCollectionModel::__set_collectionDescription(const std::string& val) {
  this->collectionDescription = val;
__isset.collectionDescription = true;
}

void FileCollectionModel::__set_fileIdList(const std::vector<std::string> & val) {
  this->fileIdList = val;
__isset.fileIdList = true;
}

uint32_t FileCollectionModel::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->collectionId);
          this->__isset.collectionId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->gatewayId);
          this->__isset.gatewayId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->sharedUsers.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->sharedUsers.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readString(this->sharedUsers[_i4]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.sharedUsers = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->sharedPublic);
          this->__isset.sharedPublic = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->collectionName);
          this->__isset.collectionName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->collectionDescription);
          this->__isset.collectionDescription = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->fileIdList.clear();
            uint32_t _size5;
            ::apache::thrift::protocol::TType _etype8;
            xfer += iprot->readListBegin(_etype8, _size5);
            this->fileIdList.resize(_size5);
            uint32_t _i9;
            for (_i9 = 0; _i9 < _size5; ++_i9)
            {
              xfer += iprot->readString(this->fileIdList[_i9]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fileIdList = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t FileCollectionModel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("FileCollectionModel");

  if (this->__isset.collectionId) {
    xfer += oprot->writeFieldBegin("collectionId", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->collectionId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.gatewayId) {
    xfer += oprot->writeFieldBegin("gatewayId", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->gatewayId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.username) {
    xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->username);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.sharedUsers) {
    xfer += oprot->writeFieldBegin("sharedUsers", ::apache::thrift::protocol::T_LIST, 4);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->sharedUsers.size()));
      std::vector<std::string> ::const_iterator _iter10;
      for (_iter10 = this->sharedUsers.begin(); _iter10 != this->sharedUsers.end(); ++_iter10)
      {
        xfer += oprot->writeString((*_iter10));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.sharedPublic) {
    xfer += oprot->writeFieldBegin("sharedPublic", ::apache::thrift::protocol::T_BOOL, 5);
    xfer += oprot->writeBool(this->sharedPublic);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.collectionName) {
    xfer += oprot->writeFieldBegin("collectionName", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->collectionName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.collectionDescription) {
    xfer += oprot->writeFieldBegin("collectionDescription", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->collectionDescription);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.fileIdList) {
    xfer += oprot->writeFieldBegin("fileIdList", ::apache::thrift::protocol::T_LIST, 8);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->fileIdList.size()));
      std::vector<std::string> ::const_iterator _iter11;
      for (_iter11 = this->fileIdList.begin(); _iter11 != this->fileIdList.end(); ++_iter11)
      {
        xfer += oprot->writeString((*_iter11));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(FileCollectionModel &a, FileCollectionModel &b) {
  using ::std::swap;
  swap(a.collectionId, b.collectionId);
  swap(a.gatewayId, b.gatewayId);
  swap(a.username, b.username);
  swap(a.sharedUsers, b.sharedUsers);
  swap(a.sharedPublic, b.sharedPublic);
  swap(a.collectionName, b.collectionName);
  swap(a.collectionDescription, b.collectionDescription);
  swap(a.fileIdList, b.fileIdList);
  swap(a.__isset, b.__isset);
}

FileCollectionModel::FileCollectionModel(const FileCollectionModel& other12) {
  collectionId = other12.collectionId;
  gatewayId = other12.gatewayId;
  username = other12.username;
  sharedUsers = other12.sharedUsers;
  sharedPublic = other12.sharedPublic;
  collectionName = other12.collectionName;
  collectionDescription = other12.collectionDescription;
  fileIdList = other12.fileIdList;
  __isset = other12.__isset;
}
FileCollectionModel& FileCollectionModel::operator=(const FileCollectionModel& other13) {
  collectionId = other13.collectionId;
  gatewayId = other13.gatewayId;
  username = other13.username;
  sharedUsers = other13.sharedUsers;
  sharedPublic = other13.sharedPublic;
  collectionName = other13.collectionName;
  collectionDescription = other13.collectionDescription;
  fileIdList = other13.fileIdList;
  __isset = other13.__isset;
  return *this;
}
void FileCollectionModel::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "FileCollectionModel(";
  out << "collectionId="; (__isset.collectionId ? (out << to_string(collectionId)) : (out << "<null>"));
  out << ", " << "gatewayId="; (__isset.gatewayId ? (out << to_string(gatewayId)) : (out << "<null>"));
  out << ", " << "username="; (__isset.username ? (out << to_string(username)) : (out << "<null>"));
  out << ", " << "sharedUsers="; (__isset.sharedUsers ? (out << to_string(sharedUsers)) : (out << "<null>"));
  out << ", " << "sharedPublic="; (__isset.sharedPublic ? (out << to_string(sharedPublic)) : (out << "<null>"));
  out << ", " << "collectionName="; (__isset.collectionName ? (out << to_string(collectionName)) : (out << "<null>"));
  out << ", " << "collectionDescription="; (__isset.collectionDescription ? (out << to_string(collectionDescription)) : (out << "<null>"));
  out << ", " << "fileIdList="; (__isset.fileIdList ? (out << to_string(fileIdList)) : (out << "<null>"));
  out << ")";
}


FileModel::~FileModel() throw() {
}


void FileModel::__set_fileId(const std::string& val) {
  this->fileId = val;
__isset.fileId = true;
}

void FileModel::__set_gatewayId(const std::string& val) {
  this->gatewayId = val;
__isset.gatewayId = true;
}

void FileModel::__set_username(const std::string& val) {
  this->username = val;
__isset.username = true;
}

void FileModel::__set_sharedUsers(const std::vector<std::string> & val) {
  this->sharedUsers = val;
__isset.sharedUsers = true;
}

void FileModel::__set_sharedPublic(const bool val) {
  this->sharedPublic = val;
__isset.sharedPublic = true;
}

void FileModel::__set_fileName(const std::string& val) {
  this->fileName = val;
__isset.fileName = true;
}

void FileModel::__set_fileDescription(const std::string& val) {
  this->fileDescription = val;
__isset.fileDescription = true;
}

void FileModel::__set_sha256Checksum(const std::string& val) {
  this->sha256Checksum = val;
__isset.sha256Checksum = true;
}

void FileModel::__set_fileType(const FileModelType::type val) {
  this->fileType = val;
__isset.fileType = true;
}

void FileModel::__set_fileSize(const int32_t val) {
  this->fileSize = val;
__isset.fileSize = true;
}

void FileModel::__set_nativeFormat(const std::string& val) {
  this->nativeFormat = val;
__isset.nativeFormat = true;
}

void FileModel::__set_creationTime(const int64_t val) {
  this->creationTime = val;
__isset.creationTime = true;
}

void FileModel::__set_lastModifiedTime(const int64_t val) {
  this->lastModifiedTime = val;
__isset.lastModifiedTime = true;
}

void FileModel::__set_fileReplicas(const std::vector<FileReplicaModel> & val) {
  this->fileReplicas = val;
__isset.fileReplicas = true;
}

uint32_t FileModel::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fileId);
          this->__isset.fileId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->gatewayId);
          this->__isset.gatewayId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->sharedUsers.clear();
            uint32_t _size14;
            ::apache::thrift::protocol::TType _etype17;
            xfer += iprot->readListBegin(_etype17, _size14);
            this->sharedUsers.resize(_size14);
            uint32_t _i18;
            for (_i18 = 0; _i18 < _size14; ++_i18)
            {
              xfer += iprot->readString(this->sharedUsers[_i18]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.sharedUsers = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->sharedPublic);
          this->__isset.sharedPublic = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fileName);
          this->__isset.fileName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fileDescription);
          this->__isset.fileDescription = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->sha256Checksum);
          this->__isset.sha256Checksum = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast19;
          xfer += iprot->readI32(ecast19);
          this->fileType = (FileModelType::type)ecast19;
          this->__isset.fileType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fileSize);
          this->__isset.fileSize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->nativeFormat);
          this->__isset.nativeFormat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->creationTime);
          this->__isset.creationTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->lastModifiedTime);
          this->__isset.lastModifiedTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->fileReplicas.clear();
            uint32_t _size20;
            ::apache::thrift::protocol::TType _etype23;
            xfer += iprot->readListBegin(_etype23, _size20);
            this->fileReplicas.resize(_size20);
            uint32_t _i24;
            for (_i24 = 0; _i24 < _size20; ++_i24)
            {
              xfer += this->fileReplicas[_i24].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fileReplicas = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t FileModel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("FileModel");

  if (this->__isset.fileId) {
    xfer += oprot->writeFieldBegin("fileId", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->fileId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.gatewayId) {
    xfer += oprot->writeFieldBegin("gatewayId", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->gatewayId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.username) {
    xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->username);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.sharedUsers) {
    xfer += oprot->writeFieldBegin("sharedUsers", ::apache::thrift::protocol::T_LIST, 4);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->sharedUsers.size()));
      std::vector<std::string> ::const_iterator _iter25;
      for (_iter25 = this->sharedUsers.begin(); _iter25 != this->sharedUsers.end(); ++_iter25)
      {
        xfer += oprot->writeString((*_iter25));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.sharedPublic) {
    xfer += oprot->writeFieldBegin("sharedPublic", ::apache::thrift::protocol::T_BOOL, 5);
    xfer += oprot->writeBool(this->sharedPublic);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.fileName) {
    xfer += oprot->writeFieldBegin("fileName", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->fileName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.fileDescription) {
    xfer += oprot->writeFieldBegin("fileDescription", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->fileDescription);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.sha256Checksum) {
    xfer += oprot->writeFieldBegin("sha256Checksum", ::apache::thrift::protocol::T_STRING, 8);
    xfer += oprot->writeString(this->sha256Checksum);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.fileType) {
    xfer += oprot->writeFieldBegin("fileType", ::apache::thrift::protocol::T_I32, 9);
    xfer += oprot->writeI32((int32_t)this->fileType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.fileSize) {
    xfer += oprot->writeFieldBegin("fileSize", ::apache::thrift::protocol::T_I32, 10);
    xfer += oprot->writeI32(this->fileSize);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.nativeFormat) {
    xfer += oprot->writeFieldBegin("nativeFormat", ::apache::thrift::protocol::T_STRING, 11);
    xfer += oprot->writeString(this->nativeFormat);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.creationTime) {
    xfer += oprot->writeFieldBegin("creationTime", ::apache::thrift::protocol::T_I64, 12);
    xfer += oprot->writeI64(this->creationTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.lastModifiedTime) {
    xfer += oprot->writeFieldBegin("lastModifiedTime", ::apache::thrift::protocol::T_I64, 13);
    xfer += oprot->writeI64(this->lastModifiedTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.fileReplicas) {
    xfer += oprot->writeFieldBegin("fileReplicas", ::apache::thrift::protocol::T_LIST, 14);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->fileReplicas.size()));
      std::vector<FileReplicaModel> ::const_iterator _iter26;
      for (_iter26 = this->fileReplicas.begin(); _iter26 != this->fileReplicas.end(); ++_iter26)
      {
        xfer += (*_iter26).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(FileModel &a, FileModel &b) {
  using ::std::swap;
  swap(a.fileId, b.fileId);
  swap(a.gatewayId, b.gatewayId);
  swap(a.username, b.username);
  swap(a.sharedUsers, b.sharedUsers);
  swap(a.sharedPublic, b.sharedPublic);
  swap(a.fileName, b.fileName);
  swap(a.fileDescription, b.fileDescription);
  swap(a.sha256Checksum, b.sha256Checksum);
  swap(a.fileType, b.fileType);
  swap(a.fileSize, b.fileSize);
  swap(a.nativeFormat, b.nativeFormat);
  swap(a.creationTime, b.creationTime);
  swap(a.lastModifiedTime, b.lastModifiedTime);
  swap(a.fileReplicas, b.fileReplicas);
  swap(a.__isset, b.__isset);
}

FileModel::FileModel(const FileModel& other27) {
  fileId = other27.fileId;
  gatewayId = other27.gatewayId;
  username = other27.username;
  sharedUsers = other27.sharedUsers;
  sharedPublic = other27.sharedPublic;
  fileName = other27.fileName;
  fileDescription = other27.fileDescription;
  sha256Checksum = other27.sha256Checksum;
  fileType = other27.fileType;
  fileSize = other27.fileSize;
  nativeFormat = other27.nativeFormat;
  creationTime = other27.creationTime;
  lastModifiedTime = other27.lastModifiedTime;
  fileReplicas = other27.fileReplicas;
  __isset = other27.__isset;
}
FileModel& FileModel::operator=(const FileModel& other28) {
  fileId = other28.fileId;
  gatewayId = other28.gatewayId;
  username = other28.username;
  sharedUsers = other28.sharedUsers;
  sharedPublic = other28.sharedPublic;
  fileName = other28.fileName;
  fileDescription = other28.fileDescription;
  sha256Checksum = other28.sha256Checksum;
  fileType = other28.fileType;
  fileSize = other28.fileSize;
  nativeFormat = other28.nativeFormat;
  creationTime = other28.creationTime;
  lastModifiedTime = other28.lastModifiedTime;
  fileReplicas = other28.fileReplicas;
  __isset = other28.__isset;
  return *this;
}
void FileModel::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "FileModel(";
  out << "fileId="; (__isset.fileId ? (out << to_string(fileId)) : (out << "<null>"));
  out << ", " << "gatewayId="; (__isset.gatewayId ? (out << to_string(gatewayId)) : (out << "<null>"));
  out << ", " << "username="; (__isset.username ? (out << to_string(username)) : (out << "<null>"));
  out << ", " << "sharedUsers="; (__isset.sharedUsers ? (out << to_string(sharedUsers)) : (out << "<null>"));
  out << ", " << "sharedPublic="; (__isset.sharedPublic ? (out << to_string(sharedPublic)) : (out << "<null>"));
  out << ", " << "fileName="; (__isset.fileName ? (out << to_string(fileName)) : (out << "<null>"));
  out << ", " << "fileDescription="; (__isset.fileDescription ? (out << to_string(fileDescription)) : (out << "<null>"));
  out << ", " << "sha256Checksum="; (__isset.sha256Checksum ? (out << to_string(sha256Checksum)) : (out << "<null>"));
  out << ", " << "fileType="; (__isset.fileType ? (out << to_string(fileType)) : (out << "<null>"));
  out << ", " << "fileSize="; (__isset.fileSize ? (out << to_string(fileSize)) : (out << "<null>"));
  out << ", " << "nativeFormat="; (__isset.nativeFormat ? (out << to_string(nativeFormat)) : (out << "<null>"));
  out << ", " << "creationTime="; (__isset.creationTime ? (out << to_string(creationTime)) : (out << "<null>"));
  out << ", " << "lastModifiedTime="; (__isset.lastModifiedTime ? (out << to_string(lastModifiedTime)) : (out << "<null>"));
  out << ", " << "fileReplicas="; (__isset.fileReplicas ? (out << to_string(fileReplicas)) : (out << "<null>"));
  out << ")";
}


FileReplicaModel::~FileReplicaModel() throw() {
}


void FileReplicaModel::__set_replicaName(const std::string& val) {
  this->replicaName = val;
__isset.replicaName = true;
}

void FileReplicaModel::__set_replicaDescription(const std::string& val) {
  this->replicaDescription = val;
__isset.replicaDescription = true;
}

void FileReplicaModel::__set_storageHostname(const std::string& val) {
  this->storageHostname = val;
__isset.storageHostname = true;
}

void FileReplicaModel::__set_storageResourceId(const std::string& val) {
  this->storageResourceId = val;
__isset.storageResourceId = true;
}

void FileReplicaModel::__set_filePath(const std::string& val) {
  this->filePath = val;
__isset.filePath = true;
}

void FileReplicaModel::__set_creationTime(const int64_t val) {
  this->creationTime = val;
__isset.creationTime = true;
}

void FileReplicaModel::__set_validUntilTime(const int64_t val) {
  this->validUntilTime = val;
__isset.validUntilTime = true;
}

void FileReplicaModel::__set_storageResourceType(const StorageResourceType::type val) {
  this->storageResourceType = val;
__isset.storageResourceType = true;
}

void FileReplicaModel::__set_replicaPersistentType(const ReplicaPersistentType::type val) {
  this->replicaPersistentType = val;
__isset.replicaPersistentType = true;
}

uint32_t FileReplicaModel::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->replicaName);
          this->__isset.replicaName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->replicaDescription);
          this->__isset.replicaDescription = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->storageHostname);
          this->__isset.storageHostname = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->storageResourceId);
          this->__isset.storageResourceId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->filePath);
          this->__isset.filePath = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->creationTime);
          this->__isset.creationTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->validUntilTime);
          this->__isset.validUntilTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast29;
          xfer += iprot->readI32(ecast29);
          this->storageResourceType = (StorageResourceType::type)ecast29;
          this->__isset.storageResourceType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast30;
          xfer += iprot->readI32(ecast30);
          this->replicaPersistentType = (ReplicaPersistentType::type)ecast30;
          this->__isset.replicaPersistentType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t FileReplicaModel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("FileReplicaModel");

  if (this->__isset.replicaName) {
    xfer += oprot->writeFieldBegin("replicaName", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->replicaName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.replicaDescription) {
    xfer += oprot->writeFieldBegin("replicaDescription", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->replicaDescription);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.storageHostname) {
    xfer += oprot->writeFieldBegin("storageHostname", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->storageHostname);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.storageResourceId) {
    xfer += oprot->writeFieldBegin("storageResourceId", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->storageResourceId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.filePath) {
    xfer += oprot->writeFieldBegin("filePath", ::apache::thrift::protocol::T_STRING, 5);
    xfer += oprot->writeString(this->filePath);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.creationTime) {
    xfer += oprot->writeFieldBegin("creationTime", ::apache::thrift::protocol::T_I64, 6);
    xfer += oprot->writeI64(this->creationTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.validUntilTime) {
    xfer += oprot->writeFieldBegin("validUntilTime", ::apache::thrift::protocol::T_I64, 7);
    xfer += oprot->writeI64(this->validUntilTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.storageResourceType) {
    xfer += oprot->writeFieldBegin("storageResourceType", ::apache::thrift::protocol::T_I32, 8);
    xfer += oprot->writeI32((int32_t)this->storageResourceType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.replicaPersistentType) {
    xfer += oprot->writeFieldBegin("replicaPersistentType", ::apache::thrift::protocol::T_I32, 9);
    xfer += oprot->writeI32((int32_t)this->replicaPersistentType);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(FileReplicaModel &a, FileReplicaModel &b) {
  using ::std::swap;
  swap(a.replicaName, b.replicaName);
  swap(a.replicaDescription, b.replicaDescription);
  swap(a.storageHostname, b.storageHostname);
  swap(a.storageResourceId, b.storageResourceId);
  swap(a.filePath, b.filePath);
  swap(a.creationTime, b.creationTime);
  swap(a.validUntilTime, b.validUntilTime);
  swap(a.storageResourceType, b.storageResourceType);
  swap(a.replicaPersistentType, b.replicaPersistentType);
  swap(a.__isset, b.__isset);
}

FileReplicaModel::FileReplicaModel(const FileReplicaModel& other31) {
  replicaName = other31.replicaName;
  replicaDescription = other31.replicaDescription;
  storageHostname = other31.storageHostname;
  storageResourceId = other31.storageResourceId;
  filePath = other31.filePath;
  creationTime = other31.creationTime;
  validUntilTime = other31.validUntilTime;
  storageResourceType = other31.storageResourceType;
  replicaPersistentType = other31.replicaPersistentType;
  __isset = other31.__isset;
}
FileReplicaModel& FileReplicaModel::operator=(const FileReplicaModel& other32) {
  replicaName = other32.replicaName;
  replicaDescription = other32.replicaDescription;
  storageHostname = other32.storageHostname;
  storageResourceId = other32.storageResourceId;
  filePath = other32.filePath;
  creationTime = other32.creationTime;
  validUntilTime = other32.validUntilTime;
  storageResourceType = other32.storageResourceType;
  replicaPersistentType = other32.replicaPersistentType;
  __isset = other32.__isset;
  return *this;
}
void FileReplicaModel::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "FileReplicaModel(";
  out << "replicaName="; (__isset.replicaName ? (out << to_string(replicaName)) : (out << "<null>"));
  out << ", " << "replicaDescription="; (__isset.replicaDescription ? (out << to_string(replicaDescription)) : (out << "<null>"));
  out << ", " << "storageHostname="; (__isset.storageHostname ? (out << to_string(storageHostname)) : (out << "<null>"));
  out << ", " << "storageResourceId="; (__isset.storageResourceId ? (out << to_string(storageResourceId)) : (out << "<null>"));
  out << ", " << "filePath="; (__isset.filePath ? (out << to_string(filePath)) : (out << "<null>"));
  out << ", " << "creationTime="; (__isset.creationTime ? (out << to_string(creationTime)) : (out << "<null>"));
  out << ", " << "validUntilTime="; (__isset.validUntilTime ? (out << to_string(validUntilTime)) : (out << "<null>"));
  out << ", " << "storageResourceType="; (__isset.storageResourceType ? (out << to_string(storageResourceType)) : (out << "<null>"));
  out << ", " << "replicaPersistentType="; (__isset.replicaPersistentType ? (out << to_string(replicaPersistentType)) : (out << "<null>"));
  out << ")";
}

}}}}} // namespace
