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

#include "page_tree.h"

#include <string>

namespace OHOS {
namespace WuKong {

using namespace std;
PageTree::PageTree() : WuKongTree() {}

PageTree::~PageTree() {}

ErrCode PageTree::GetId() { return OHOS::ERR_OK; }

ErrCode PageTree::GetRoot() { return OHOS::ERR_OK; }

ErrCode PageTree::AddChild() { return OHOS::ERR_OK; }

ErrCode PageTree::PreOrderList() { return OHOS::ERR_OK; }
}  // namespace WuKong
}  // namespace OHOS
