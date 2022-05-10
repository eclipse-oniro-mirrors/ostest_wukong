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

#ifndef TEST_WUKONG_COMMON_H
#define TEST_WUKONG_COMMON_H

#include "errors.h"
#include "wukong_logger.h"
#include "wukong_util.h"

namespace OHOS {
namespace WuKong {
#define PARAM_COUNT_TIME_ERROR "has set '-T', can not set '-T' and '-c' at the same time"
#define PARAM_TIME_COUNT_ERROR "has set '-c', can not set '-c' and '-T' at the same time"

#define SEMPHORE_RUN_NAME "wukong_sem_run"
#define SEMPHORE_STOP_NAME "wukong_sem_stop"

#define TRACK_LOG_STD() Logger::GetInstance()->Print(LOG_LEVEL_TRACK, "STD : (%5d) %s", __LINE__, __func__)
#define TRACK_LOG_END() Logger::GetInstance()->Print(LOG_LEVEL_TRACK, "END : (%5d) %s", __LINE__, __func__)
#define TRACK_LOG_STR(format, ...) Logger::GetInstance()->Print(LOG_LEVEL_TRACK, "TRK : (%5d) %s : " #format, __LINE__, __func__, __VA_ARGS__)
#define DEBUG_LOG_STR(format, ...) Logger::GetInstance()->Print(LOG_LEVEL_DEBUG, "DBG : (%5d) %s : " #format, __LINE__, __func__, __VA_ARGS__)
#define INFO_LOG_STR(format, ...) Logger::GetInstance()->Print(LOG_LEVEL_INFO, "INF : (%5d) %s : " #format, __LINE__, __func__, __VA_ARGS__)
#define WARN_LOG_STR(format, ...) Logger::GetInstance()->Print(LOG_LEVEL_WARN, "WRN : (%5d) %s : " #format, __LINE__, __func__, __VA_ARGS__)
#define ERROR_LOG_STR(format, ...) Logger::GetInstance()->Print(LOG_LEVEL_ERROR, "ERR : (%5d) %s : " #format, __LINE__, __func__, __VA_ARGS__)
#define TRACK_LOG(str) Logger::GetInstance()->Print(LOG_LEVEL_TRACK, "TRK : (%5d) %s : " #str, __LINE__, __func__)
#define DEBUG_LOG(str) Logger::GetInstance()->Print(LOG_LEVEL_DEBUG, "DBG : (%5d) %s : " #str, __LINE__, __func__)
#define INFO_LOG(str) Logger::GetInstance()->Print(LOG_LEVEL_INFO, "INF : (%5d) %s : " #str, __LINE__, __func__)
#define WARN_LOG(str) Logger::GetInstance()->Print(LOG_LEVEL_WARN, "WRN : (%5d) %s : " #str, __LINE__, __func__)
#define ERROR_LOG(str) Logger::GetInstance()->Print(LOG_LEVEL_ERROR, "ERR : (%5d) %s : " #str, __LINE__, __func__)
#define TEST_RUN_LOG(str) Logger::GetInstance()->Print(LOG_LEVEL_INFO, "RUN : %s", str)

}  // namespace WuKong
}  // namespace OHOS
#endif  // TEST_WUKONG_COMMON_H