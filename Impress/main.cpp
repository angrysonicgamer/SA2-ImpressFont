#include "SA2ModLoader.h"
#include "pch.h"



extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions &helperFunctions)
	{
		SetUpFont(path);
	}	
	
	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}
