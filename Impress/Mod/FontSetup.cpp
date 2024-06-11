#include "pch.h"
#include "Render Fix/renderfix_api.h"
#include "FontSetup.h"
#include <string>


// Structs based on my own font stuff research

enum FontTypes
{
	Kanji,
	AsciiS,
	AsciiE,
};

struct FontCharacterData
{
	int Color[24][24];
};

struct FontInfo
{
	const char* FontFileName;
	FontCharacterData* FontBuffer;
};

struct ChaoFontInfo
{
	const char* FontFileName;
	FontCharacterData* FontBuffer;
	Uint8* WidthsSetup;
};

struct AsciiFontData
{
	Uint8* WidthsSetup;
	FontCharacterData* FontBuffer;
	FontTypes FontType;
};

struct KanjiFontData
{
	Uint8* WidthsSetup;
	FontCharacterData* FontBuffer;
	FontTypes FontType;
	int SomethingSjisRelated;
};

struct FontData
{
	int Null;
	AsciiFontData AsciiData;
	KanjiFontData KanjiData;
};


VoidFunc(UnloadFonts, 0x6B62C0);
VoidFunc(LoadFonts, 0x6B6130);
DataArray(FontInfo, FontsList, 0xB5D640, 3);
DataArray(ChaoFontInfo, ChaoFontsList, 0x12E9BC4, 3);
DataArray(FontData, Fonts, 0xB5D658, 6);

const char* ImpressPath = "Font\\efmsgfont_ascii24S_impress.bin";
char FullFontPath[MAX_PATH];
Uint8 FontWidthsSetup[224];


const char* ConvertToCStyle(const std::string& text)
{
	return strcpy(new char[text.length()], text.c_str());
}


// Loading font

void LoadFont(const char* modPath)
{
	sprintf(FullFontPath, "..\\..\\%s\\%s", modPath, ImpressPath);
	FontsList[AsciiS].FontFileName = FullFontPath; // main font
	ChaoFontsList[AsciiS].FontFileName = FullFontPath; // chao font
	UnloadFonts();
	LoadFonts();
}


// Automatic character widths calculation

void CalculateCharacterWidths()
{
	FontWidthsSetup[0] = 9; // vanilla width of space
	
	for (int charNumber = 1; charNumber < 224; charNumber++) // starting from 1 because 0 is space (empty pixels)
	{
		int maxColumn = 0;
		for (int row = 0; row < 24; row++)
		{
			for (int column = 0; column < 24; column++)
			{
				if (FontsList[AsciiS].FontBuffer[charNumber].Color[row][column] != 0)
				{
					if (column > maxColumn)
						maxColumn = column;
				}
			}
		}
		FontWidthsSetup[charNumber] = maxColumn + 1;
	}
}


// No Render Fix

void InitFont(const char* modPath)
{
	LoadFont(modPath);
	CalculateCharacterWidths();
	for (int language = Language_English; language <= Language_Italian; language++)
	{
		Fonts[language].AsciiData.WidthsSetup = FontWidthsSetup;
	}	
	ChaoFontsList[AsciiS].WidthsSetup = FontWidthsSetup;
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