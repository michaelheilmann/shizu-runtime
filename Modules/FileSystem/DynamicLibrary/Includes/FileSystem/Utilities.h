/*
  Shizu Runtime
  Copyright (C) 2024 Michael Heilmann. All rights reserved.

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#if !defined(FILE_SYSTEM_UTILITIES_H_INCLUDED)
#define FILE_SYSTEM_UTILITIES_H_INCLUDED

#include "Shizu/Runtime/Include.h"

Shizu_ByteArray*
Shizu_Value_getByteArrayArgument
  (
    Shizu_State2* state,
    Shizu_Value* value
  );

Shizu_String*
Shizu_Value_getStringArgument
  (
    Shizu_State2* state,
    Shizu_Value* value
  );

Shizu_String*
Shizu_toNativePath
  (
    Shizu_State2* state,
    Shizu_String* path
  );

#endif // FILE_SYSTEM_UTILITIES_H_INCLUDED