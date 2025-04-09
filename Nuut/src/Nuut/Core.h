#pragma once

#ifdef NT_PLATFORM_WINDOWS
	#ifdef NT_BUILD_DLL
		#define NUUT_API __declspec(dllexport)
	#else
		#define NUUT_API __declspec(dllimport)
	#endif
#else
	#error Nuut only support Windows!
#endif
