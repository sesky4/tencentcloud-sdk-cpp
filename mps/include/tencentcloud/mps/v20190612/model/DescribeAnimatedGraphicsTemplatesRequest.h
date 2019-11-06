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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEANIMATEDGRAPHICSTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEANIMATEDGRAPHICSTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAnimatedGraphicsTemplates请求参数结构体
                */
                class DescribeAnimatedGraphicsTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAnimatedGraphicsTemplatesRequest();
                    ~DescribeAnimatedGraphicsTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转动图模板唯一标识过滤条件，数组长度限制：100。
                     * @return Definitions 转动图模板唯一标识过滤条件，数组长度限制：100。
                     */
                    std::vector<uint64_t> GetDefinitions() const;

                    /**
                     * 设置转动图模板唯一标识过滤条件，数组长度限制：100。
                     * @param Definitions 转动图模板唯一标识过滤条件，数组长度限制：100。
                     */
                    void SetDefinitions(const std::vector<uint64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param Offset 分页偏移量，默认值：0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：100。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：100。
                     * @param Limit 返回记录条数，默认值：10，最大值：100。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param Type 模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 转动图模板唯一标识过滤条件，数组长度限制：100。
                     */
                    std::vector<uint64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEANIMATEDGRAPHICSTEMPLATESREQUEST_H_