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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetAppBaseInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetAppList返回参数结构体
                */
                class DescribeAssetAppListResponse : public AbstractModel
                {
                public:
                    DescribeAssetAppListResponse();
                    ~DescribeAssetAppListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Apps 应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetAppBaseInfo> GetApps() const;

                    /**
                     * 判断参数 Apps 是否已赋值
                     * @return Apps 是否已赋值
                     */
                    bool AppsHasBeenSet() const;

                    /**
                     * 获取总数量
                     * @return Total 总数量
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetAppBaseInfo> m_apps;
                    bool m_appsHasBeenSet;

                    /**
                     * 总数量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPLISTRESPONSE_H_