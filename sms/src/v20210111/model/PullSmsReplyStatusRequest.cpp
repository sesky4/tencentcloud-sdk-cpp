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

#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20210111::Model;
using namespace rapidjson;
using namespace std;

PullSmsReplyStatusRequest::PullSmsReplyStatusRequest() :
    m_limitHasBeenSet(false),
    m_smsSdkAppIdHasBeenSet(false)
{
}

string PullSmsReplyStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_smsSdkAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsSdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_smsSdkAppId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t PullSmsReplyStatusRequest::GetLimit() const
{
    return m_limit;
}

void PullSmsReplyStatusRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool PullSmsReplyStatusRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string PullSmsReplyStatusRequest::GetSmsSdkAppId() const
{
    return m_smsSdkAppId;
}

void PullSmsReplyStatusRequest::SetSmsSdkAppId(const string& _smsSdkAppId)
{
    m_smsSdkAppId = _smsSdkAppId;
    m_smsSdkAppIdHasBeenSet = true;
}

bool PullSmsReplyStatusRequest::SmsSdkAppIdHasBeenSet() const
{
    return m_smsSdkAppIdHasBeenSet;
}

