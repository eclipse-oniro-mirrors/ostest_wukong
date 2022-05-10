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

#include "touch_input.h"

#include <iostream>
#include <string>

#include "input_manager.h"
#include "multimode_manager.h"
#include "wukong_define.h"

namespace OHOS {
namespace WuKong {

TouchInput::TouchInput() : InputAction() {}

TouchInput::~TouchInput() {}

ErrCode TouchInput::OrderInput(std::shared_ptr<SpcialTestObject>& specialTestObject)
{
    ErrCode result = OHOS::ERR_OK;

    TouchParam* touchPtr = (TouchParam*)specialTestObject.get();
    if (touchPtr == nullptr) {
        return OHOS::ERR_INVALID_VALUE;
    }
    int touchX = touchPtr->x_;
    int touchY = touchPtr->y_;
    auto multiinput = MultimodeManager::GetInstance();
    result = multiinput->PointerInput(touchX, touchY, MMI::PointerEvent::SOURCE_TYPE_TOUCHSCREEN,
                                      MMI::PointerEvent::POINTER_ACTION_DOWN);
    result = multiinput->PointerInput(touchX, touchY, MMI::PointerEvent::SOURCE_TYPE_TOUCHSCREEN,
                                      MMI::PointerEvent::POINTER_ACTION_UP);
    INFO_LOG_STR("Touch: (%d, %d)", touchX, touchY);
    return result;
}

ErrCode TouchInput::RandomInput()
{
    ErrCode result = OHOS::ERR_OK;
    int32_t screenWidth = -1;
    int32_t screenHeight = -1;
    Util::GetInstance()->GetScreenSize(screenWidth, screenHeight);
    int touchX = rand() % screenWidth;
    int touchY = rand() % screenHeight;
    auto multiinput = MultimodeManager::GetInstance();
    result = multiinput->PointerInput(touchX, touchY, MMI::PointerEvent::SOURCE_TYPE_TOUCHSCREEN,
                                      MMI::PointerEvent::POINTER_ACTION_DOWN);
    result = multiinput->PointerInput(touchX, touchY, MMI::PointerEvent::SOURCE_TYPE_TOUCHSCREEN,
                                      MMI::PointerEvent::POINTER_ACTION_UP);
    INFO_LOG_STR("Touch: (%d, %d)", touchX, touchY);
    return result;
}

ErrCode TouchInput::GetInputInfo() { return OHOS::ERR_OK; }
}  // namespace WuKong
}  // namespace OHOS
