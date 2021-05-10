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

#include <tencentcloud/tem/v20201221/model/IngressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

IngressInfo::IngressInfo() :
    m_namespaceIdHasBeenSet(false),
    m_eksNamespaceHasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_clbIdHasBeenSet(false),
    m_tlsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_vipHasBeenSet(false)
{
}

CoreInternalOutcome IngressInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressInfo.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("EksNamespace") && !value["EksNamespace"].IsNull())
    {
        if (!value["EksNamespace"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressInfo.EksNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eksNamespace = string(value["EksNamespace"].GetString());
        m_eksNamespaceHasBeenSet = true;
    }

    if (value.HasMember("AddressIPVersion") && !value["AddressIPVersion"].IsNull())
    {
        if (!value["AddressIPVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressInfo.AddressIPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPVersion = string(value["AddressIPVersion"].GetString());
        m_addressIPVersionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Error("response `IngressInfo.Rules` is not array type"));

        const Value &tmpValue = value["Rules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IngressRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("ClbId") && !value["ClbId"].IsNull())
    {
        if (!value["ClbId"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressInfo.ClbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbId = string(value["ClbId"].GetString());
        m_clbIdHasBeenSet = true;
    }

    if (value.HasMember("Tls") && !value["Tls"].IsNull())
    {
        if (!value["Tls"].IsArray())
            return CoreInternalOutcome(Error("response `IngressInfo.Tls` is not array type"));

        const Value &tmpValue = value["Tls"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IngressTls item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tls.push_back(item);
        }
        m_tlsHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eksNamespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EksNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eksNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clbIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clbId.c_str(), allocator).Move(), allocator);
    }

    if (m_tlsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tls.begin(); itr != m_tls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

}


string IngressInfo::GetNamespaceId() const
{
    return m_namespaceId;
}

void IngressInfo::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool IngressInfo::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string IngressInfo::GetEksNamespace() const
{
    return m_eksNamespace;
}

void IngressInfo::SetEksNamespace(const string& _eksNamespace)
{
    m_eksNamespace = _eksNamespace;
    m_eksNamespaceHasBeenSet = true;
}

bool IngressInfo::EksNamespaceHasBeenSet() const
{
    return m_eksNamespaceHasBeenSet;
}

string IngressInfo::GetAddressIPVersion() const
{
    return m_addressIPVersion;
}

void IngressInfo::SetAddressIPVersion(const string& _addressIPVersion)
{
    m_addressIPVersion = _addressIPVersion;
    m_addressIPVersionHasBeenSet = true;
}

bool IngressInfo::AddressIPVersionHasBeenSet() const
{
    return m_addressIPVersionHasBeenSet;
}

string IngressInfo::GetName() const
{
    return m_name;
}

void IngressInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IngressInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<IngressRule> IngressInfo::GetRules() const
{
    return m_rules;
}

void IngressInfo::SetRules(const vector<IngressRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool IngressInfo::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string IngressInfo::GetClbId() const
{
    return m_clbId;
}

void IngressInfo::SetClbId(const string& _clbId)
{
    m_clbId = _clbId;
    m_clbIdHasBeenSet = true;
}

bool IngressInfo::ClbIdHasBeenSet() const
{
    return m_clbIdHasBeenSet;
}

vector<IngressTls> IngressInfo::GetTls() const
{
    return m_tls;
}

void IngressInfo::SetTls(const vector<IngressTls>& _tls)
{
    m_tls = _tls;
    m_tlsHasBeenSet = true;
}

bool IngressInfo::TlsHasBeenSet() const
{
    return m_tlsHasBeenSet;
}

string IngressInfo::GetClusterId() const
{
    return m_clusterId;
}

void IngressInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool IngressInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string IngressInfo::GetVip() const
{
    return m_vip;
}

void IngressInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool IngressInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}
