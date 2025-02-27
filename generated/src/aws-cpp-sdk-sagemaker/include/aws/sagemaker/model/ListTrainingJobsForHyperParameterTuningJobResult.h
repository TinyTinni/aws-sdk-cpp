﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListTrainingJobsForHyperParameterTuningJobResult
  {
  public:
    AWS_SAGEMAKER_API ListTrainingJobsForHyperParameterTuningJobResult();
    AWS_SAGEMAKER_API ListTrainingJobsForHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTrainingJobsForHyperParameterTuningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a>TrainingJobSummary</a> objects that describe the training jobs
     * that the <code>ListTrainingJobsForHyperParameterTuningJob</code> request
     * returned.</p>
     */
    inline const Aws::Vector<HyperParameterTrainingJobSummary>& GetTrainingJobSummaries() const{ return m_trainingJobSummaries; }

    /**
     * <p>A list of <a>TrainingJobSummary</a> objects that describe the training jobs
     * that the <code>ListTrainingJobsForHyperParameterTuningJob</code> request
     * returned.</p>
     */
    inline void SetTrainingJobSummaries(const Aws::Vector<HyperParameterTrainingJobSummary>& value) { m_trainingJobSummaries = value; }

    /**
     * <p>A list of <a>TrainingJobSummary</a> objects that describe the training jobs
     * that the <code>ListTrainingJobsForHyperParameterTuningJob</code> request
     * returned.</p>
     */
    inline void SetTrainingJobSummaries(Aws::Vector<HyperParameterTrainingJobSummary>&& value) { m_trainingJobSummaries = std::move(value); }

    /**
     * <p>A list of <a>TrainingJobSummary</a> objects that describe the training jobs
     * that the <code>ListTrainingJobsForHyperParameterTuningJob</code> request
     * returned.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithTrainingJobSummaries(const Aws::Vector<HyperParameterTrainingJobSummary>& value) { SetTrainingJobSummaries(value); return *this;}

    /**
     * <p>A list of <a>TrainingJobSummary</a> objects that describe the training jobs
     * that the <code>ListTrainingJobsForHyperParameterTuningJob</code> request
     * returned.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithTrainingJobSummaries(Aws::Vector<HyperParameterTrainingJobSummary>&& value) { SetTrainingJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <a>TrainingJobSummary</a> objects that describe the training jobs
     * that the <code>ListTrainingJobsForHyperParameterTuningJob</code> request
     * returned.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobResult& AddTrainingJobSummaries(const HyperParameterTrainingJobSummary& value) { m_trainingJobSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <a>TrainingJobSummary</a> objects that describe the training jobs
     * that the <code>ListTrainingJobsForHyperParameterTuningJob</code> request
     * returned.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobResult& AddTrainingJobSummaries(HyperParameterTrainingJobSummary&& value) { m_trainingJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of this <code>ListTrainingJobsForHyperParameterTuningJob</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of training jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of this <code>ListTrainingJobsForHyperParameterTuningJob</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of training jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of this <code>ListTrainingJobsForHyperParameterTuningJob</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of training jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of this <code>ListTrainingJobsForHyperParameterTuningJob</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of training jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of this <code>ListTrainingJobsForHyperParameterTuningJob</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of training jobs, use the token in the next request.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of this <code>ListTrainingJobsForHyperParameterTuningJob</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of training jobs, use the token in the next request.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of this <code>ListTrainingJobsForHyperParameterTuningJob</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of training jobs, use the token in the next request.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTrainingJobsForHyperParameterTuningJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<HyperParameterTrainingJobSummary> m_trainingJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
