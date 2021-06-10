/*
 * Copyright (C) 2021 Patrick Goldinger
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FLORISBOARD_JNI_UTILS_H
#define FLORISBOARD_JNI_UTILS_H

#include <jni.h>
#include <string>

namespace utils {

std::string j2std_string(JNIEnv *env, jstring in);
jstring std2j_string(JNIEnv *env, const std::string& in);

} // namespace utils

#endif // FLORISBOARD_JNI_UTILS_H
