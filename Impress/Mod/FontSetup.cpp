#include "pch.h"
#include "Render Fix/renderfix_api.h"
#include "FontSetup.h"
#include <string>


VoidFunc(UnloadFonts, 0x6B62C0);
VoidFunc(LoadFonts, 0x6B6130);
DataPointer(int*, AsciiSFontBuffer, 0xB5D64C);
DataArray(byte, MainFontSetup, 0x89F3E8, 224);
DataArray(byte, ChaoWorldFontSetup, 0x8A78D0, 224);

const char* ImpressPath = "\\Font\\efmsgfont_ascii24S_impress.bin";


const char* ConvertToCStyle(const std::string& text)
{
	return strcpy(new char[text.length()], text.c_str());
}


// Loading font

void LoadFont(const char* modPath)
{
	std::string fullFontPath = std::string(modPath) + ImpressPath;
	WriteData((const char**)0xB5D648, ConvertToCStyle("..\\..\\" + fullFontPath)); // main font
	WriteData((const char**)0x12E9BD0, ConvertToCStyle("..\\..\\" + fullFontPath)); // chao font
	UnloadFonts();
	LoadFonts();
}


// Automatic character widths calculation

void CalculateCharacterWidths()
{
	MainFontSetup[0] = 9; // vanilla width of space
	ChaoWorldFontSetup[0] = 9;
	
	for (int charNumber = 1; charNumber < 224; charNumber++) // starting from 1 because 0 is space (empty pixels)
	{
		int maxColumn = 0;
		for (int row = 0; row < 24; row++)
		{
			for (int column = 0; column < 24; column++)
			{
				if (AsciiSFontBuffer[charNumber * 24 * 24 + row * 24 + column] != 0)
				{
					if (column > maxColumn)
						maxColumn = column;
				}
			}
		}
		MainFontSetup[charNumber] = maxColumn + 1;
		ChaoWorldFontSetup[charNumber] = maxColumn + 1;
	}
}


// No Render Fix

void InitFont(const char* modPath)
{
	LoadFont(modPath);
	CalculateCharacterWidths();
}


// Using Render Fix font API

void InitFont_RF(RFAPI_CORE* pApi, const char* modPath)
{
	std::string fullFontPath = std::string(modPath) + ImpressPath;

	const RFAPI_FONT* rf_font = pApi->pApiFont;
	RFS_FONT* myfont = rf_font->LoadFontFile(fullFontPath.c_str(), FONT_FTYPE_RGBA_ASCII);
	for (int language = FONT_LANG_ENG; language <= FONT_LANG_ITA; language++)
	{
		rf_font->SetFont(static_cast<RFE_FONT_LANG>(language), FONT_TYPE_ASCII, myfont);
	}
	rf_font->SetChaoFont(FONT_TYPE_ASCII, myfont);
}