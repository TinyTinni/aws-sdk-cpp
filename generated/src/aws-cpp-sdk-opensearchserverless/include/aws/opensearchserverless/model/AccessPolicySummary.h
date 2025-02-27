﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/AccessPolicyType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>A summary of the data access policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/AccessPolicySummary">AWS
   * API Reference</a></p>
   */
  class AccessPolicySummary
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API AccessPolicySummary();
    AWS_OPENSEARCHSERVERLESS_API AccessPolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API AccessPolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Epoch time when the access policy was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The Epoch time when the access policy was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The Epoch time when the access policy was created.</p>
     */
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The Epoch time when the access policy was created.</p>
     */
    inline AccessPolicySummary& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The description of the access policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the access policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the access policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the access policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the access policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the access policy.</p>
     */
    inline AccessPolicySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the access policy.</p>
     */
    inline AccessPolicySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the access policy.</p>
     */
    inline AccessPolicySummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time when the collection was last modified.</p>
     */
    inline AccessPolicySummary& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The name of the access policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the access policy.</p>
     */
    inline AccessPolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the access policy.</p>
     */
    inline AccessPolicySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the access policy.</p>
     */
    inline AccessPolicySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the policy.</p>
     */
    inline const Aws::String& GetPolicyVersion() const{ return m_policyVersion; }

    /**
     * <p>The version of the policy.</p>
     */
    inline bool PolicyVersionHasBeenSet() const { return m_policyVersionHasBeenSet; }

    /**
     * <p>The version of the policy.</p>
     */
    inline void SetPolicyVersion(const Aws::String& value) { m_policyVersionHasBeenSet = true; m_policyVersion = value; }

    /**
     * <p>The version of the policy.</p>
     */
    inline void SetPolicyVersion(Aws::String&& value) { m_policyVersionHasBeenSet = true; m_policyVersion = std::move(value); }

    /**
     * <p>The version of the policy.</p>
     */
    inline void SetPolicyVersion(const char* value) { m_policyVersionHasBeenSet = true; m_policyVersion.assign(value); }

    /**
     * <p>The version of the policy.</p>
     */
    inline AccessPolicySummary& WithPolicyVersion(const Aws::String& value) { SetPolicyVersion(value); return *this;}

    /**
     * <p>The version of the policy.</p>
     */
    inline AccessPolicySummary& WithPolicyVersion(Aws::String&& value) { SetPolicyVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the policy.</p>
     */
    inline AccessPolicySummary& WithPolicyVersion(const char* value) { SetPolicyVersion(value); return *this;}


    /**
     * <p>The type of access policy. Currently the only available type is
     * <code>data</code>.</p>
     */
    inline const AccessPolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of access policy. Currently the only available type is
     * <code>data</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of access policy. Currently the only available type is
     * <code>data</code>.</p>
     */
    inline void SetType(const AccessPolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of access policy. Currently the only available type is
     * <code>data</code>.</p>
     */
    inline void SetType(AccessPolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of access policy. Currently the only available type is
     * <code>data</code>.</p>
     */
    inline AccessPolicySummary& WithType(const AccessPolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of access policy. Currently the only available type is
     * <code>data</code>.</p>
     */
    inline AccessPolicySummary& WithType(AccessPolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policyVersion;
    bool m_policyVersionHasBeenSet = false;

    AccessPolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
