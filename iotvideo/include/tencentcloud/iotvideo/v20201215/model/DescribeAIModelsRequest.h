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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEAIMODELSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEAIMODELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeAIModels请求参数结构体
                */
                class DescribeAIModelsRequest : public AbstractModel
                {
                public:
                    DescribeAIModelsRequest();
                    ~DescribeAIModelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param ModelId 模型ID
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     * @return Status 申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     * @param Status 申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取偏移量，Offset从0开始
                     * @return Offset 偏移量，Offset从0开始
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，Offset从0开始
                     * @param Offset 偏移量，Offset从0开始
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页的大小，最大100
                     * @return Limit 分页的大小，最大100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的大小，最大100
                     * @param Limit 分页的大小，最大100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 申请状态：1-已申请；2-已取消；3-已拒绝；4-已通过
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 偏移量，Offset从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小，最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEAIMODELSREQUEST_H_