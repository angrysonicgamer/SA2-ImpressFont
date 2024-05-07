#include "pch.h"
#include "FontSetup.h"
#include <string>
#include <vector>


VoidFunc(UnloadFonts, 0x6B62C0);
VoidFunc(LoadFonts, 0x6B6130);
DataPointer(int*, AsciiSFontBuffer, 0xB5D64C);
DataArray(byte, MainFontSetup, 0x89F3E8, 224);
DataArray(byte, ChaoWorldFontSetup, 0x8A78D0, 224);


const char* ConvertToCStyle(const std::string& text)
{
	return strcpy(new char[text.length()], text.c_str());
}


// Loading font

void LoadFont(const char* modPath, const char* fontPath)
{
	std::string path = std::string(modPath) + fontPath;
	WriteData((const char**)0xB5D648, ConvertToCStyle("..\\..\\" + path)); // main font
	WriteData((const char**)0x12E9BD0, ConvertToCStyle("..\\..\\" + path)); // chao font
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
		int width = 0;
		for (int row = 0; row < 24; row++)
		{
			for (int column = 0; column < 24; column++)
			{
				if (AsciiSFontBuffer[charNumber * 24 * 24 + row * 24 + column] != 0)
				{
					if (column > width)
						width = column;
				}
			}
		}
		MainFontSetup[charNumber] = width + 1;
		ChaoWorldFontSetup[charNumber] = width + 1;
	}
}


void SetUpFont(const char* modPath, const char* fontPath)
{
	LoadFont(modPath, fontPath);
	CalculateCharacterWidths();
}