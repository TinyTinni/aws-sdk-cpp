﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/AgentConfigurationStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationDiscoveryService
{
namespace Model
{
  class StopDataCollectionByAgentIdsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StopDataCollectionByAgentIdsResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API StopDataCollectionByAgentIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StopDataCollectionByAgentIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline const Aws::Vector<AgentConfigurationStatus>& GetAgentsConfigurationStatus() const{ return m_agentsConfigurationStatus; }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline void SetAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { m_agentsConfigurationStatus = value; }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline void SetAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { m_agentsConfigurationStatus = std::move(value); }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(const Aws::Vector<AgentConfigurationStatus>& value) { SetAgentsConfigurationStatus(value); return *this;}

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& WithAgentsConfigurationStatus(Aws::Vector<AgentConfigurationStatus>&& value) { SetAgentsConfigurationStatus(std::move(value)); return *this;}

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(const AgentConfigurationStatus& value) { m_agentsConfigurationStatus.push_back(value); return *this; }

    /**
     * <p>Information about the agents or connector that were instructed to stop
     * collecting data. Information includes the agent/connector ID, a description of
     * the operation performed, and whether the agent/connector configuration was
     * updated.</p>
     */
    inline StopDataCollectionByAgentIdsResult& AddAgentsConfigurationStatus(AgentConfigurationStatus&& value) { m_agentsConfigurationStatus.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopDataCollectionByAgentIdsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopDataCollectionByAgentIdsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopDataCollectionByAgentIdsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AgentConfigurationStatus> m_agentsConfigurationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
