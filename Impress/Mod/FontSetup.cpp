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
		std::vector<int> rowWidthValues;
		rowWidthValues.push_back(0);
		for (int row = 0; row < 24; row++)
		{
			int rowWidth = 0;
			for (int column = 0; column < 24; column++)
			{
				if (AsciiSFontBuffer[charNumber * 24 * 24 + row * 24 + column] != 0)
					rowWidth = column + 1; // getting the last non-zero value in a row, that would represent its width
			}
			if (rowWidth > rowWidthValues.back())
				rowWidthValues.push_back(rowWidth); // adding that width if it tops a previous width
		}
		MainFontSetup[charNumber] = rowWidthValues.back(); // the max width would be the character width we need
		ChaoWorldFontSetup[charNumber] = rowWidthValues.back();
	}
}


void SetUpFont(const char* modPath, const char* fontPath)
{
	LoadFont(modPath, fontPath);
	CalculateCharacterWidths();
}