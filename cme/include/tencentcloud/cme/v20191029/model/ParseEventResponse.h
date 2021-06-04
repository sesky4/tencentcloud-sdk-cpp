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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PARSEEVENTRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PARSEEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/EventContent.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ParseEvent返回参数结构体
                */
                class ParseEventResponse : public AbstractModel
                {
                public:
                    ParseEventResponse();
                    ~ParseEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取事件内容。
                     * @return EventContent 事件内容。
                     */
                    EventContent GetEventContent() const;

                    /**
                     * 判断参数 EventContent 是否已赋值
                     * @return EventContent 是否已赋值
                     */
                    bool EventContentHasBeenSet() const;

                private:

                    /**
                     * 事件内容。
                     */
                    EventContent m_eventContent;
                    bool m_eventContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PARSEEVENTRESPONSE_H_