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

#include <tencentcloud/dnspod/v20210323/model/CreateRecordBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

CreateRecordBatchRequest::CreateRecordBatchRequest() :
    m_domainIdListHasBeenSet(false),
    m_recordListHasBeenSet(false)
{
}

string CreateRecordBatchRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_domainIdList.begin(); itr != m_domainIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recordListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordList.begin(); itr != m_recordList.end(); ++itr, ++i)
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


vector<string> CreateRecordBatchRequest::GetDomainIdList() const
{
    return m_domainIdList;
}

void CreateRecordBatchRequest::SetDomainIdList(const vector<string>& _domainIdList)
{
    m_domainIdList = _domainIdList;
    m_domainIdListHasBeenSet = true;
}

bool CreateRecordBatchRequest::DomainIdListHasBeenSet() const
{
    return m_domainIdListHasBeenSet;
}

vector<AddRecordBatch> CreateRecordBatchRequest::GetRecordList() const
{
    return m_recordList;
}

void CreateRecordBatchRequest::SetRecordList(const vector<AddRecordBatch>& _recordList)
{
    m_recordList = _recordList;
    m_recordListHasBeenSet = true;
}

bool CreateRecordBatchRequest::RecordListHasBeenSet() const
{
    return m_recordListHasBeenSet;
}

