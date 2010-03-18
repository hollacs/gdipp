// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <assert.h>
#include <tlhelp32.h>
#include <shlwapi.h>
#include <objbase.h>
#include <wbemidl.h>
#include <comutil.h>

#include <string>
#include <sstream>
#include <list>
#include <map>
#include <fstream>
#include <regex>

// TODO: reference additional headers your program requires here
#include "global.h"
#include "setting.h"

#include <easyhook.h>