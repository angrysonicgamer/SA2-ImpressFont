#include "pch.h"
#include "FontSetup.h"


extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions &helperFunctions)
	{
		SetUpFont(path);
	}	
	
	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}
