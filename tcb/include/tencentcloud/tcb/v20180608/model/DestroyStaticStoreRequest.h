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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYSTATICSTOREREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYSTATICSTOREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DestroyStaticStore请求参数结构体
                */
                class DestroyStaticStoreRequest : public AbstractModel
                {
                public:
                    DestroyStaticStoreRequest();
                    ~DestroyStaticStoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param EnvId 环境ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取cdn域名
                     * @return CdnDomain cdn域名
                     */
                    std::string GetCdnDomain() const;

                    /**
                     * 设置cdn域名
                     * @param CdnDomain cdn域名
                     */
                    void SetCdnDomain(const std::string& _cdnDomain);

                    /**
                     * 判断参数 CdnDomain 是否已赋值
                     * @return CdnDomain 是否已赋值
                     */
                    bool CdnDomainHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * cdn域名
                     */
                    std::string m_cdnDomain;
                    bool m_cdnDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYSTATICSTOREREQUEST_H_