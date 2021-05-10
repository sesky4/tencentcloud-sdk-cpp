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

#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceQosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyNetworkInterfaceQosRequest::ModifyNetworkInterfaceQosRequest() :
    m_networkInterfaceIdsHasBeenSet(false),
    m_qosLevelHasBeenSet(false)
{
}

string ModifyNetworkInterfaceQosRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_networkInterfaceIds.begin(); itr != m_networkInterfaceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_qosLevelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyNetworkInterfaceQosRequest::GetNetworkInterfaceIds() const
{
    return m_networkInterfaceIds;
}

void ModifyNetworkInterfaceQosRequest::SetNetworkInterfaceIds(const vector<string>& _networkInterfaceIds)
{
    m_networkInterfaceIds = _networkInterfaceIds;
    m_networkInterfaceIdsHasBeenSet = true;
}

bool ModifyNetworkInterfaceQosRequest::NetworkInterfaceIdsHasBeenSet() const
{
    return m_networkInterfaceIdsHasBeenSet;
}

string ModifyNetworkInterfaceQosRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void ModifyNetworkInterfaceQosRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool ModifyNetworkInterfaceQosRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

