/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cii/v20210408/model/CreateStructureTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cii::V20210408::Model;
using namespace rapidjson;
using namespace std;

CreateStructureTaskRequest::CreateStructureTaskRequest() :
    m_serviceTypeHasBeenSet(false),
    m_taskInfosHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_insuranceTypesHasBeenSet(false)
{
}

string CreateStructureTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInfos.begin(); itr != m_taskInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_policyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_insuranceTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InsuranceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_insuranceTypes.begin(); itr != m_insuranceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStructureTaskRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateStructureTaskRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateStructureTaskRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

vector<CreateStructureTaskInfo> CreateStructureTaskRequest::GetTaskInfos() const
{
    return m_taskInfos;
}

void CreateStructureTaskRequest::SetTaskInfos(const vector<CreateStructureTaskInfo>& _taskInfos)
{
    m_taskInfos = _taskInfos;
    m_taskInfosHasBeenSet = true;
}

bool CreateStructureTaskRequest::TaskInfosHasBeenSet() const
{
    return m_taskInfosHasBeenSet;
}

string CreateStructureTaskRequest::GetPolicyId() const
{
    return m_policyId;
}

void CreateStructureTaskRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CreateStructureTaskRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CreateStructureTaskRequest::GetTriggerType() const
{
    return m_triggerType;
}

void CreateStructureTaskRequest::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool CreateStructureTaskRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

vector<string> CreateStructureTaskRequest::GetInsuranceTypes() const
{
    return m_insuranceTypes;
}

void CreateStructureTaskRequest::SetInsuranceTypes(const vector<string>& _insuranceTypes)
{
    m_insuranceTypes = _insuranceTypes;
    m_insuranceTypesHasBeenSet = true;
}

bool CreateStructureTaskRequest::InsuranceTypesHasBeenSet() const
{
    return m_insuranceTypesHasBeenSet;
}

