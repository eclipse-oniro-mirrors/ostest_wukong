/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TEST_WUKONG_FORMAT_H
#define TEST_WUKONG_FORMAT_H

#include "iosfwd"
#include "memory"

namespace OHOS {
namespace WuKong {
class Format {
public:
    Format();
    virtual ~Format();
    /*
     * @brief format algorithm implementation
     * @param tablePtr stored after statistics
     * @param target format output string
     * @return
     */
    virtual void FormatDetail(std::shared_ptr<Table> tablePtr, std::string &target);
};
}  // namespace WuKong
}  // namespace OHOS
#endif
