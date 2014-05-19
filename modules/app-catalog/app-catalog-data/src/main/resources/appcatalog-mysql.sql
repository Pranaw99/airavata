/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

CREATE TABLE COMPUTE_RESOURCE
(
         RESOURCE_ID VARCHAR(255),
         HOST_NAME VARCHAR(255),
         DESCRIPTION VARCHAR(255),
         SCRATCH_LOCATION VARCHAR(255),
         PREFERRED_JOB_SUBMISSION_PROTOCOL VARCHAR(255),
         PRIMARY KEY(RESOURCE_ID)
);

CREATE TABLE HOST_ALIAS
(
         RESOURCE_ID VARCHAR(255),
         ALIAS VARCHAR(255),
         PRIMARY KEY(RESOURCE_ID,ALIAS),
         FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
);

CREATE TABLE HOST_IPADDRESS
  (
           RESOURCE_ID VARCHAR(255),
           IP_ADDRESS VARCHAR(255),
           PRIMARY KEY(RESOURCE_ID,IP_ADDRESS),
           FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
  );

CREATE TABLE JOB_SUBMISSION_PROTOCOL
(
         RESOURCE_ID VARCHAR(255),
         SUBMISSION_ID VARCHAR(255),
         JOB_TYPE VARCHAR(255),
         PRIMARY KEY(RESOURCE_ID,SUBMISSION_ID,JOB_TYPE),
         FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
);

CREATE TABLE DATA_MOVEMENT_PROTOCOL
(
         RESOURCE_ID VARCHAR(255),
         DATA_MOVE_ID VARCHAR(255),
         JOB_TYPE VARCHAR(255),
         PRIMARY KEY(RESOURCE_ID,DATA_MOVE_ID,JOB_TYPE),
         FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
);

CREATE TABLE GSISSH_SUBMISSION
(
         SUBMISSION_ID VARCHAR(255),
         RESOURCE_ID VARCHAR(255),
         RESOURCE_JOB_MANAGER VARCHAR(255),
         SSH_PORT INTEGER,
         INSTALLED_PATH VARCHAR(255),
         MONITOR_MODE VARCHAR(255),
         PRIMARY KEY(SUBMISSION_ID),
         FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
);

CREATE TABLE GSISSH_EXPORTS
(
         SUBMISSION_ID VARCHAR(255),
         EXPORT VARCHAR(255),
         PRIMARY KEY(SUBMISSION_ID, EXPORT),
         FOREIGN KEY (SUBMISSION_ID) REFERENCES GSISSH_SUBMISSION(SUBMISSION_ID) ON DELETE CASCADE
);

CREATE TABLE GSISSH_PREJOBCOMMANDS
(
         SUBMISSION_ID VARCHAR(255),
         COMMAND VARCHAR(255),
         PRIMARY KEY(SUBMISSION_ID, COMMAND),
         FOREIGN KEY (SUBMISSION_ID) REFERENCES GSISSH_SUBMISSION(SUBMISSION_ID) ON DELETE CASCADE
);

CREATE TABLE GSISSH_POSTJOBCOMMANDS
(
         SUBMISSION_ID VARCHAR(255),
         COMMAND VARCHAR(255),
         PRIMARY KEY(SUBMISSION_ID, COMMAND),
         FOREIGN KEY (SUBMISSION_ID) REFERENCES GSISSH_SUBMISSION(SUBMISSION_ID) ON DELETE CASCADE
);

CREATE TABLE GLOBUS_SUBMISSION
(
         SUBMISSION_ID VARCHAR(255),
         RESOURCE_ID VARCHAR(255),
         RESOURCE_JOB_MANAGER VARCHAR(255),
         SECURITY_PROTOCAL VARCHAR(255),
         GLOBUS_GATEKEEPER_EP VARCHAR(255),
         PRIMARY KEY(SUBMISSION_ID),
         FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
);

CREATE TABLE SSH_SUBMISSION
(
         SUBMISSION_ID VARCHAR(255),
         RESOURCE_ID VARCHAR(255),
         RESOURCE_JOB_MANAGER VARCHAR(255),
         SSH_PORT INTEGER,
         PRIMARY KEY(SUBMISSION_ID),
         FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
);

CREATE TABLE SCP_DATAMOVEMENT
(
         DATA_MOVE_ID VARCHAR(255),
         RESOURCE_ID VARCHAR(255),
         RESOURCE_JOB_MANAGER VARCHAR(255),
         SSH_PORT INTEGER,
         PRIMARY KEY(DATA_MOVE_ID),
         FOREIGN KEY (RESOURCE_ID) REFERENCES COMPUTE_RESOURCE(RESOURCE_ID) ON DELETE CASCADE
);