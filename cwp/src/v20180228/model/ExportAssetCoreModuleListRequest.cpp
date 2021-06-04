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

#include <tencentcloud/cwp/v20180228/model/ExportAssetCoreModuleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

ExportAssetCoreModuleListRequest::ExportAssetCoreModuleListRequest() :
    m_filtersHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

string ExportAssetCoreModuleListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_quuid.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<AssetFilters> ExportAssetCoreModuleListRequest::GetFilters() const
{
    return m_filters;
}

void ExportAssetCoreModuleListRequest::SetFilters(const vector<AssetFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportAssetCoreModuleListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string ExportAssetCoreModuleListRequest::GetOrder() const
{
    return m_order;
}

void ExportAssetCoreModuleListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ExportAssetCoreModuleListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string ExportAssetCoreModuleListRequest::GetBy() const
{
    return m_by;
}

void ExportAssetCoreModuleListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool ExportAssetCoreModuleListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string ExportAssetCoreModuleListRequest::GetUuid() const
{
    return m_uuid;
}

void ExportAssetCoreModuleListRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ExportAssetCoreModuleListRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ExportAssetCoreModuleListRequest::GetQuuid() const
{
    return m_quuid;
}

void ExportAssetCoreModuleListRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ExportAssetCoreModuleListRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

