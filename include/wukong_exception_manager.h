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
 * 
 * Description: the management of Wukong exception catching
 */

#ifndef WUKONG_WUKONG_EXCEPTION_MANAGER_H
#define WUKONG_WUKONG_EXCEPTION_MANAGER_H

#include "wukong_sysevent_listener.h"

#include "singleton.h"
#include "errors.h"

#include <fstream>

namespace OHOS {
    namespace AppExecFwk {
        class WuKongExceptionManager : public DelayedSingleton<WuKongExceptionManager> {
        public:
        // Start the catching process and write down the information of the exception, to put the information of csvFile into toollistener.
        bool StartCatching();

        //Stop the catching process and export the location of the result file.
        void StopCatching();

        /**
         * @brief if wukong exception manager has the ability to catch cpp crash.
         * @param isEnable
         * @return -
         */
        void SetCppCrashCatching(bool isEnable)
        {
            enableCppCrashCatching = isEnable;
        }

        /**
         * @brief if wukong exception manager has the ability to catch js crash.
         * @param isEnable
         * @return -
         */
        void SetJsCrashCatching(bool isEnable)
        {
            enableJsCrashCatching = isEnable;
        }

        /**
         * @brief if wukong exception manager has the ability to catch App's freeze.
         * @param isEnable
         * @return -
         */ 
        void SetAppFreezeCatching(bool isEnable)
        {
            enableAppFreezeCatching = isEnable;
        }

        /**
         * @brief to get the path of the current csvfile.
         * @return the path of the current csvfile.
         */
        std::string GetCurrentCsvFilePath()
        {
            return currentCsvFilePath;
        }

        private:
            std::shared_ptr<WuKongSysEventListener> toolListener;
            std::string currentCsvFilePath;
            std::ofstream csvFile;
            bool enableCppCrashCatching;
            bool enableJsCrashCatching;
            bool enableAppFreezeCatching;
        };
    } // namespace AppExecFwk
} // namespace OHOS

#endif // WUKONG_WUKONG_EXCEPTION_MANAGER_H
