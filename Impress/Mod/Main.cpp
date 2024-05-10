#include "pch.h"
#include "Render Fix/renderfix_api.h"
#include "FontSetup.h"
#include <vector>


bool UseRenderFixFontLoading;

extern "C"
{
	__declspec(dllexport) void RF_Init(RFAPI_CORE* pApi, const char* modPath, const HelperFunctions& helperFunctions)
	{
		if (pApi->version < 1) // doesn't have font loading API
			return;

		UseRenderFixFontLoading = true;
		InitFont_RF(pApi, modPath);
		PrintDebug("IMPRESSive: used Render Fix font loading API\n");
	}
	
	__declspec(dllexport) void Init(const char* modPath, const HelperFunctions& helperFunctions)
	{
		if (!UseRenderFixFontLoading)
		{
			InitFont(modPath);
			PrintDebug("IMPRESSive: Render Fix font API not found, used my own font loading method\n");
		}		
	}	
	
	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}
