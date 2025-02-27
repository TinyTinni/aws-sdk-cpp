﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/UserData.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class SearchUsersResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API SearchUsersResult();
    AWS_ALEXAFORBUSINESS_API SearchUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API SearchUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The users that meet the specified set of filter criteria, in sort order.</p>
     */
    inline const Aws::Vector<UserData>& GetUsers() const{ return m_users; }

    /**
     * <p>The users that meet the specified set of filter criteria, in sort order.</p>
     */
    inline void SetUsers(const Aws::Vector<UserData>& value) { m_users = value; }

    /**
     * <p>The users that meet the specified set of filter criteria, in sort order.</p>
     */
    inline void SetUsers(Aws::Vector<UserData>&& value) { m_users = std::move(value); }

    /**
     * <p>The users that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchUsersResult& WithUsers(const Aws::Vector<UserData>& value) { SetUsers(value); return *this;}

    /**
     * <p>The users that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchUsersResult& WithUsers(Aws::Vector<UserData>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>The users that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchUsersResult& AddUsers(const UserData& value) { m_users.push_back(value); return *this; }

    /**
     * <p>The users that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchUsersResult& AddUsers(UserData&& value) { m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of users returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of users returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of users returned.</p>
     */
    inline SearchUsersResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserData> m_users;

    Aws::String m_nextToken;

    int m_totalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
