/*
 * Copyright (C) 2024 Sophos, Inc.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef OSX_ATTR_APPLE_API_WRAPPER_H_
#define OSX_ATTR_APPLE_API_WRAPPER_H_

#include "CoreFoundation/CoreFoundation.h"

CFErrorRef osx_attr_wrapper_for_SCCopyLastError();

#endif /** OSX_ATTR_APPLE_API_WRAPPER_H_ @}*/
