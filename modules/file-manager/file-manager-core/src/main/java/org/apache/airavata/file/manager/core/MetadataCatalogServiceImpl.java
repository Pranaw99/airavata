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
package org.apache.airavata.file.manager.core;

import org.apache.airavata.file.manager.core.db.dao.MetadataDao;
import org.apache.airavata.file.manager.cpi.FileManagerException;
import org.apache.airavata.model.file.metadata.MetadataModel;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.IOException;

public class MetadataCatalogServiceImpl extends MetadataCatalogService {
    private final static Logger logger = LoggerFactory.getLogger(MetadataCatalogServiceImpl.class);

    private MetadataDao metadataDao;

    public MetadataCatalogServiceImpl() throws IOException {
        this.metadataDao = new MetadataDao();
    }

    /**
     * Create new metadata model
     *
     * @param metadataModel
     * @return
     * @throws FileManagerException
     */
    @Override
    public String createMetadata(MetadataModel metadataModel) throws FileManagerException {
        try{
            return metadataDao.createMetadata(metadataModel);
        }catch (Exception e){
            logger.error(e.getMessage(), e);
            throw new FileManagerException(e);
        }
    }

    /**
     * Update exisiting metadata model
     *
     * @param metadataModel
     * @throws FileManagerException
     */
    @Override
    public void updateMetadata(MetadataModel metadataModel) throws FileManagerException {
        try{
            metadataDao.updateMetadata(metadataModel);
        }catch (Exception e){
            logger.error(e.getMessage(), e);
            throw new FileManagerException(e);
        }
    }

    /**
     * Delete existing metadata model
     *
     * @param metadataId
     * @throws FileManagerException
     */
    @Override
    public void deleteMetadata(String metadataId) throws FileManagerException {
        try{
            metadataDao.deleteMetadata(metadataId);
        }catch (Exception e){
            logger.error(e.getMessage(), e);
            throw new FileManagerException(e);
        }
    }

    /**
     * Retrieve metadata model
     *
     * @param metadataId
     * @return
     * @throws FileManagerException
     */
    @Override
    public MetadataModel getMetadata(String metadataId) throws FileManagerException {
        try{
            return metadataDao.getMetadata(metadataId);
        }catch (Exception e){
            logger.error(e.getMessage(), e);
            throw new FileManagerException(e);
        }
    }
}