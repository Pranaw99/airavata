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
#ifndef gateway_resource_profile_model_TYPES_H
#define gateway_resource_profile_model_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "compute_resource_model_types.h"


namespace apache { namespace airavata { namespace model { namespace appcatalog { namespace gatewayprofile {

class ComputeResourcePreference;

class DataStoragePreference;

class GatewayResourceProfile;

typedef struct _ComputeResourcePreference__isset {
  _ComputeResourcePreference__isset() : loginUserName(false), preferredJobSubmissionProtocol(false), preferredDataMovementProtocol(false), preferredBatchQueue(false), scratchLocation(false), allocationProjectNumber(false), resourceSpecificCredentialStoreToken(false) {}
  bool loginUserName :1;
  bool preferredJobSubmissionProtocol :1;
  bool preferredDataMovementProtocol :1;
  bool preferredBatchQueue :1;
  bool scratchLocation :1;
  bool allocationProjectNumber :1;
  bool resourceSpecificCredentialStoreToken :1;
} _ComputeResourcePreference__isset;

class ComputeResourcePreference {
 public:

  static const char* ascii_fingerprint; // = "294547CFB0912EC49097370EC1C66E41";
  static const uint8_t binary_fingerprint[16]; // = {0x29,0x45,0x47,0xCF,0xB0,0x91,0x2E,0xC4,0x90,0x97,0x37,0x0E,0xC1,0xC6,0x6E,0x41};

  ComputeResourcePreference(const ComputeResourcePreference&);
  ComputeResourcePreference& operator=(const ComputeResourcePreference&);
  ComputeResourcePreference() : computeResourceId(), overridebyAiravata(true), loginUserName(), preferredJobSubmissionProtocol(( ::apache::airavata::model::appcatalog::computeresource::JobSubmissionProtocol::type)0), preferredDataMovementProtocol(( ::apache::airavata::model::appcatalog::computeresource::DataMovementProtocol::type)0), preferredBatchQueue(), scratchLocation(), allocationProjectNumber(), resourceSpecificCredentialStoreToken() {
  }

  virtual ~ComputeResourcePreference() throw();
  std::string computeResourceId;
  bool overridebyAiravata;
  std::string loginUserName;
   ::apache::airavata::model::appcatalog::computeresource::JobSubmissionProtocol::type preferredJobSubmissionProtocol;
   ::apache::airavata::model::appcatalog::computeresource::DataMovementProtocol::type preferredDataMovementProtocol;
  std::string preferredBatchQueue;
  std::string scratchLocation;
  std::string allocationProjectNumber;
  std::string resourceSpecificCredentialStoreToken;

  _ComputeResourcePreference__isset __isset;

  void __set_computeResourceId(const std::string& val);

  void __set_overridebyAiravata(const bool val);

  void __set_loginUserName(const std::string& val);

  void __set_preferredJobSubmissionProtocol(const  ::apache::airavata::model::appcatalog::computeresource::JobSubmissionProtocol::type val);

  void __set_preferredDataMovementProtocol(const  ::apache::airavata::model::appcatalog::computeresource::DataMovementProtocol::type val);

  void __set_preferredBatchQueue(const std::string& val);

  void __set_scratchLocation(const std::string& val);

  void __set_allocationProjectNumber(const std::string& val);

  void __set_resourceSpecificCredentialStoreToken(const std::string& val);

  bool operator == (const ComputeResourcePreference & rhs) const
  {
    if (!(computeResourceId == rhs.computeResourceId))
      return false;
    if (!(overridebyAiravata == rhs.overridebyAiravata))
      return false;
    if (__isset.loginUserName != rhs.__isset.loginUserName)
      return false;
    else if (__isset.loginUserName && !(loginUserName == rhs.loginUserName))
      return false;
    if (__isset.preferredJobSubmissionProtocol != rhs.__isset.preferredJobSubmissionProtocol)
      return false;
    else if (__isset.preferredJobSubmissionProtocol && !(preferredJobSubmissionProtocol == rhs.preferredJobSubmissionProtocol))
      return false;
    if (__isset.preferredDataMovementProtocol != rhs.__isset.preferredDataMovementProtocol)
      return false;
    else if (__isset.preferredDataMovementProtocol && !(preferredDataMovementProtocol == rhs.preferredDataMovementProtocol))
      return false;
    if (__isset.preferredBatchQueue != rhs.__isset.preferredBatchQueue)
      return false;
    else if (__isset.preferredBatchQueue && !(preferredBatchQueue == rhs.preferredBatchQueue))
      return false;
    if (__isset.scratchLocation != rhs.__isset.scratchLocation)
      return false;
    else if (__isset.scratchLocation && !(scratchLocation == rhs.scratchLocation))
      return false;
    if (__isset.allocationProjectNumber != rhs.__isset.allocationProjectNumber)
      return false;
    else if (__isset.allocationProjectNumber && !(allocationProjectNumber == rhs.allocationProjectNumber))
      return false;
    if (__isset.resourceSpecificCredentialStoreToken != rhs.__isset.resourceSpecificCredentialStoreToken)
      return false;
    else if (__isset.resourceSpecificCredentialStoreToken && !(resourceSpecificCredentialStoreToken == rhs.resourceSpecificCredentialStoreToken))
      return false;
    return true;
  }
  bool operator != (const ComputeResourcePreference &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ComputeResourcePreference & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ComputeResourcePreference& obj);
};

void swap(ComputeResourcePreference &a, ComputeResourcePreference &b);

typedef struct _DataStoragePreference__isset {
  _DataStoragePreference__isset() : loginUserName(false), fileSystemRootLocation(false), resourceSpecificCredentialStoreToken(false) {}
  bool loginUserName :1;
  bool fileSystemRootLocation :1;
  bool resourceSpecificCredentialStoreToken :1;
} _DataStoragePreference__isset;

class DataStoragePreference {
 public:

  static const char* ascii_fingerprint; // = "6BA700CA2E5FC52A8DA5ADCF811DC8DA";
  static const uint8_t binary_fingerprint[16]; // = {0x6B,0xA7,0x00,0xCA,0x2E,0x5F,0xC5,0x2A,0x8D,0xA5,0xAD,0xCF,0x81,0x1D,0xC8,0xDA};

  DataStoragePreference(const DataStoragePreference&);
  DataStoragePreference& operator=(const DataStoragePreference&);
  DataStoragePreference() : dataMovememtResourceId(), loginUserName(), fileSystemRootLocation(), resourceSpecificCredentialStoreToken() {
  }

  virtual ~DataStoragePreference() throw();
  std::string dataMovememtResourceId;
  std::string loginUserName;
  std::string fileSystemRootLocation;
  std::string resourceSpecificCredentialStoreToken;

  _DataStoragePreference__isset __isset;

  void __set_dataMovememtResourceId(const std::string& val);

  void __set_loginUserName(const std::string& val);

  void __set_fileSystemRootLocation(const std::string& val);

  void __set_resourceSpecificCredentialStoreToken(const std::string& val);

  bool operator == (const DataStoragePreference & rhs) const
  {
    if (!(dataMovememtResourceId == rhs.dataMovememtResourceId))
      return false;
    if (__isset.loginUserName != rhs.__isset.loginUserName)
      return false;
    else if (__isset.loginUserName && !(loginUserName == rhs.loginUserName))
      return false;
    if (__isset.fileSystemRootLocation != rhs.__isset.fileSystemRootLocation)
      return false;
    else if (__isset.fileSystemRootLocation && !(fileSystemRootLocation == rhs.fileSystemRootLocation))
      return false;
    if (__isset.resourceSpecificCredentialStoreToken != rhs.__isset.resourceSpecificCredentialStoreToken)
      return false;
    else if (__isset.resourceSpecificCredentialStoreToken && !(resourceSpecificCredentialStoreToken == rhs.resourceSpecificCredentialStoreToken))
      return false;
    return true;
  }
  bool operator != (const DataStoragePreference &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DataStoragePreference & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const DataStoragePreference& obj);
};

void swap(DataStoragePreference &a, DataStoragePreference &b);

typedef struct _GatewayResourceProfile__isset {
  _GatewayResourceProfile__isset() : credentialStoreToken(false), computeResourcePreferences(false), dataStoragePreferences(false) {}
  bool credentialStoreToken :1;
  bool computeResourcePreferences :1;
  bool dataStoragePreferences :1;
} _GatewayResourceProfile__isset;

class GatewayResourceProfile {
 public:

  static const char* ascii_fingerprint; // = "37EFF83E3A15E60FB3772FDFEAD90A88";
  static const uint8_t binary_fingerprint[16]; // = {0x37,0xEF,0xF8,0x3E,0x3A,0x15,0xE6,0x0F,0xB3,0x77,0x2F,0xDF,0xEA,0xD9,0x0A,0x88};

  GatewayResourceProfile(const GatewayResourceProfile&);
  GatewayResourceProfile& operator=(const GatewayResourceProfile&);
  GatewayResourceProfile() : gatewayID(), dataStorageHostName(), credentialStoreToken() {
  }

  virtual ~GatewayResourceProfile() throw();
  std::string gatewayID;
  std::string dataStorageHostName;
  std::string credentialStoreToken;
  std::vector<ComputeResourcePreference>  computeResourcePreferences;
  std::vector<DataStoragePreference>  dataStoragePreferences;

  _GatewayResourceProfile__isset __isset;

  void __set_gatewayID(const std::string& val);

  void __set_dataStorageHostName(const std::string& val);

  void __set_credentialStoreToken(const std::string& val);

  void __set_computeResourcePreferences(const std::vector<ComputeResourcePreference> & val);

  void __set_dataStoragePreferences(const std::vector<DataStoragePreference> & val);

  bool operator == (const GatewayResourceProfile & rhs) const
  {
    if (!(gatewayID == rhs.gatewayID))
      return false;
    if (!(dataStorageHostName == rhs.dataStorageHostName))
      return false;
    if (__isset.credentialStoreToken != rhs.__isset.credentialStoreToken)
      return false;
    else if (__isset.credentialStoreToken && !(credentialStoreToken == rhs.credentialStoreToken))
      return false;
    if (__isset.computeResourcePreferences != rhs.__isset.computeResourcePreferences)
      return false;
    else if (__isset.computeResourcePreferences && !(computeResourcePreferences == rhs.computeResourcePreferences))
      return false;
    if (__isset.dataStoragePreferences != rhs.__isset.dataStoragePreferences)
      return false;
    else if (__isset.dataStoragePreferences && !(dataStoragePreferences == rhs.dataStoragePreferences))
      return false;
    return true;
  }
  bool operator != (const GatewayResourceProfile &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GatewayResourceProfile & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const GatewayResourceProfile& obj);
};

void swap(GatewayResourceProfile &a, GatewayResourceProfile &b);

}}}}} // namespace

#endif
