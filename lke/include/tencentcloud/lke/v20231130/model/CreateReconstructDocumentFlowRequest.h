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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/CreateReconstructDocumentFlowConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateReconstructDocumentFlow请求参数结构体
                */
                class CreateReconstructDocumentFlowRequest : public AbstractModel
                {
                public:
                    CreateReconstructDocumentFlowRequest();
                    ~CreateReconstructDocumentFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件类型。支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
                     * @return FileType 文件类型。支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型。支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
                     * @param _fileType 文件类型。支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取文件的 Base64 值。支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。
                     * @return FileBase64 文件的 Base64 值。支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。
                     * 
                     */
                    std::string GetFileBase64() const;

                    /**
                     * 设置文件的 Base64 值。支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。
                     * @param _fileBase64 文件的 Base64 值。支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。
                     * 
                     */
                    void SetFileBase64(const std::string& _fileBase64);

                    /**
                     * 判断参数 FileBase64 是否已赋值
                     * @return FileBase64 是否已赋值
                     * 
                     */
                    bool FileBase64HasBeenSet() const;

                    /**
                     * 获取文件的 Url 地址。支持的文件大小：所下载文件经 Base64 编码后不超过 100M。文件下载时间不超过 15 秒。支持的图片像素：单边介于20-10000px之间。 文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return FileUrl 文件的 Url 地址。支持的文件大小：所下载文件经 Base64 编码后不超过 100M。文件下载时间不超过 15 秒。支持的图片像素：单边介于20-10000px之间。 文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件的 Url 地址。支持的文件大小：所下载文件经 Base64 编码后不超过 100M。文件下载时间不超过 15 秒。支持的图片像素：单边介于20-10000px之间。 文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _fileUrl 文件的 Url 地址。支持的文件大小：所下载文件经 Base64 编码后不超过 100M。文件下载时间不超过 15 秒。支持的图片像素：单边介于20-10000px之间。 文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取当传入文件是PDF类型时，用来指定pdf识别的起始页码，识别的页码包含当前值。默认为1，表示从pdf文件的第1页开始识别。
                     * @return FileStartPageNumber 当传入文件是PDF类型时，用来指定pdf识别的起始页码，识别的页码包含当前值。默认为1，表示从pdf文件的第1页开始识别。
                     * 
                     */
                    int64_t GetFileStartPageNumber() const;

                    /**
                     * 设置当传入文件是PDF类型时，用来指定pdf识别的起始页码，识别的页码包含当前值。默认为1，表示从pdf文件的第1页开始识别。
                     * @param _fileStartPageNumber 当传入文件是PDF类型时，用来指定pdf识别的起始页码，识别的页码包含当前值。默认为1，表示从pdf文件的第1页开始识别。
                     * 
                     */
                    void SetFileStartPageNumber(const int64_t& _fileStartPageNumber);

                    /**
                     * 判断参数 FileStartPageNumber 是否已赋值
                     * @return FileStartPageNumber 是否已赋值
                     * 
                     */
                    bool FileStartPageNumberHasBeenSet() const;

                    /**
                     * 获取当传入文件是PDF类型时，用来指定pdf识别的结束页码，识别的页码包含当前值。默认为100，表示识别到pdf文件的第100页。单次调用最多支持识别100页内容，即FileEndPageNumber-FileStartPageNumber需要不大于100。
                     * @return FileEndPageNumber 当传入文件是PDF类型时，用来指定pdf识别的结束页码，识别的页码包含当前值。默认为100，表示识别到pdf文件的第100页。单次调用最多支持识别100页内容，即FileEndPageNumber-FileStartPageNumber需要不大于100。
                     * 
                     */
                    int64_t GetFileEndPageNumber() const;

                    /**
                     * 设置当传入文件是PDF类型时，用来指定pdf识别的结束页码，识别的页码包含当前值。默认为100，表示识别到pdf文件的第100页。单次调用最多支持识别100页内容，即FileEndPageNumber-FileStartPageNumber需要不大于100。
                     * @param _fileEndPageNumber 当传入文件是PDF类型时，用来指定pdf识别的结束页码，识别的页码包含当前值。默认为100，表示识别到pdf文件的第100页。单次调用最多支持识别100页内容，即FileEndPageNumber-FileStartPageNumber需要不大于100。
                     * 
                     */
                    void SetFileEndPageNumber(const int64_t& _fileEndPageNumber);

                    /**
                     * 判断参数 FileEndPageNumber 是否已赋值
                     * @return FileEndPageNumber 是否已赋值
                     * 
                     */
                    bool FileEndPageNumberHasBeenSet() const;

                    /**
                     * 获取创建文档解析任务配置信息
                     * @return Config 创建文档解析任务配置信息
                     * 
                     */
                    CreateReconstructDocumentFlowConfig GetConfig() const;

                    /**
                     * 设置创建文档解析任务配置信息
                     * @param _config 创建文档解析任务配置信息
                     * 
                     */
                    void SetConfig(const CreateReconstructDocumentFlowConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 文件类型。支持的文件类型：PDF、DOC、DOCX、PPT、PPTX、MD、TXT、XLS、XLSX、CSV、PNG、JPG、JPEG、BMP、GIF、WEBP、HEIC、EPS、ICNS、IM、PCX、PPM、TIFF、XBM、HEIF、JP2
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件的 Base64 值。支持的文件大小：所下载文件经Base64编码后不超过 8M。文件下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。文件的 FileUrl、FileBase64 必须提供一个，如果都提供，只使用 FileUrl。
                     */
                    std::string m_fileBase64;
                    bool m_fileBase64HasBeenSet;

                    /**
                     * 文件的 Url 地址。支持的文件大小：所下载文件经 Base64 编码后不超过 100M。文件下载时间不超过 15 秒。支持的图片像素：单边介于20-10000px之间。 文件存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议文件存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 当传入文件是PDF类型时，用来指定pdf识别的起始页码，识别的页码包含当前值。默认为1，表示从pdf文件的第1页开始识别。
                     */
                    int64_t m_fileStartPageNumber;
                    bool m_fileStartPageNumberHasBeenSet;

                    /**
                     * 当传入文件是PDF类型时，用来指定pdf识别的结束页码，识别的页码包含当前值。默认为100，表示识别到pdf文件的第100页。单次调用最多支持识别100页内容，即FileEndPageNumber-FileStartPageNumber需要不大于100。
                     */
                    int64_t m_fileEndPageNumber;
                    bool m_fileEndPageNumberHasBeenSet;

                    /**
                     * 创建文档解析任务配置信息
                     */
                    CreateReconstructDocumentFlowConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWREQUEST_H_
