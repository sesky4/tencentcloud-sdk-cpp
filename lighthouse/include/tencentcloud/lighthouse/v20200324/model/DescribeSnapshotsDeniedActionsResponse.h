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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSDENIEDACTIONSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSDENIEDACTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/SnapshotDeniedActions.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeSnapshotsDeniedActions返回参数结构体
                */
                class DescribeSnapshotsDeniedActionsResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotsDeniedActionsResponse();
                    ~DescribeSnapshotsDeniedActionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取快照操作限制列表详细信息。
                     * @return SnapshotDeniedActionSet 快照操作限制列表详细信息。
                     */
                    std::vector<SnapshotDeniedActions> GetSnapshotDeniedActionSet() const;

                    /**
                     * 判断参数 SnapshotDeniedActionSet 是否已赋值
                     * @return SnapshotDeniedActionSet 是否已赋值
                     */
                    bool SnapshotDeniedActionSetHasBeenSet() const;

                private:

                    /**
                     * 快照操作限制列表详细信息。
                     */
                    std::vector<SnapshotDeniedActions> m_snapshotDeniedActionSet;
                    bool m_snapshotDeniedActionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSDENIEDACTIONSRESPONSE_H_