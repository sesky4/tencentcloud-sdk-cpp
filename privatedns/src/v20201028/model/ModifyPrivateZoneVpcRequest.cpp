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

#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace rapidjson;
using namespace std;

ModifyPrivateZoneVpcRequest::ModifyPrivateZoneVpcRequest() :
    m_zoneIdHasBeenSet(false),
    m_vpcSetHasBeenSet(false)
{
}

string ModifyPrivateZoneVpcRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcSet.begin(); itr != m_vpcSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPrivateZoneVpcRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyPrivateZoneVpcRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyPrivateZoneVpcRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<VpcInfo> ModifyPrivateZoneVpcRequest::GetVpcSet() const
{
    return m_vpcSet;
}

void ModifyPrivateZoneVpcRequest::SetVpcSet(const vector<VpcInfo>& _vpcSet)
{
    m_vpcSet = _vpcSet;
    m_vpcSetHasBeenSet = true;
}

bool ModifyPrivateZoneVpcRequest::VpcSetHasBeenSet() const
{
    return m_vpcSetHasBeenSet;
}

