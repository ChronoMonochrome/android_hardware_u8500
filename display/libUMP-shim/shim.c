/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "libUMP-shim"

#include "ump.h"
#include "arch_011_udd/ump_arch.h"
#include <ump/ump_debug.h>

#include <ump/ump_uk_types.h>
#include "os/ump_uku.h"

#include <cutils/log.h>

#include <dlfcn.h>
#include <errno.h>


