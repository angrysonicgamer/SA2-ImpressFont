#include "pch.h"
#include "FontSetup.h"
#include <string>
#include <vector>


VoidFunc(UnloadFonts, 0x6B62C0);
VoidFunc(LoadFonts, 0x6B6130);

DataArray(byte, MainFontSetup, 0x89F3E8, 224);
DataArray(byte, ChaoWorldFontSetup, 0x8A78D0, 224);


const char* ConvertToCStyle(const std::string& text)
{
	return strcpy(new char[text.length()], text.c_str());
}


// Loading font

void LoadMainFont(const std::string& path)
{
	WriteData((const char**)0xB5D648, ConvertToCStyle("..\\..\\" + path));
	UnloadFonts();
	LoadFonts();
}

void LoadChaoFont(const std::string& path)
{
	WriteData((const char**)0x12E9BD0, ConvertToCStyle("..\\..\\" + path));
}


void LoadFont(const char* modPath, const char* fontPath)
{
	std::string path = std::string(modPath) + fontPath;
	LoadMainFont(path);
	LoadChaoFont(path);
}


// Setting up character widths

struct LetterData
{
	byte LetterCode;
	byte Width;
};

std::vector<LetterData> ImpressSetup
{
	{ '!', 5 }, // using chars here to visualize
	{ '"', 8 },
	{ '#', 15 },
	{ '$', 12 },
	{ '%', 18 },
	{ '&', 17 },
	{ '\'', 3 },
	{ '(', 6 },
	{ ')', 6 },
	{ '*', 7 },
	{ '+', 13 },
	{ ',', 4 },
	{ '-', 7 },
	{ '.', 5 },
	{ '/', 9 },
	{ '0', 13 },
	{ '1', 6 },
	{ '2', 13 },
	{ '3', 13 },
	{ '4', 13 },
	{ '5', 13 },
	{ '6', 13 },
	{ '7', 11 },
	{ '8', 13 },
	{ '9', 13 },
	{ ':', 5 },
	{ ';', 5 },
	{ '<', 13 },
	{ '=', 13 },
	{ '>', 13 },
	{ '?', 12 },
	{ '@', 20 },
	{ 'A', 12 },
	{ 'B', 11 },
	{ 'C', 13 },
	{ 'D', 12 },
	{ 'E', 10 },
	{ 'F', 10 },
	{ 'G', 12 },
	{ 'H', 12 },
	{ 'I', 4 },
	{ 'J', 7 },
	{ 'K', 13 },
	{ 'L', 8 },
	{ 'M', 15 },
	{ 'N', 11 },
	{ 'O', 14 },
	{ 'P', 11 },
	{ 'Q', 13 },
	{ 'R', 13 },
	{ 'S', 13 },
	{ 'T', 10 },
	{ 'U', 12 },
	{ 'V', 13 },
	{ 'W', 19 },
	{ 'X', 15 },
	{ 'Y', 14 },
	{ 'Z', 12 },
	{ '[', 6 },
	{ '\\', 9 },
	{ ']', 6 },
	{ '^', 13 },
	{ '_', 11 },
	{ '`', 6 },
	{ 'a', 10 },
	{ 'b', 11 },
	{ 'c', 10 },
	{ 'd', 11 },
	{ 'e', 10 },
	{ 'f', 9 },
	{ 'g', 12 },
	{ 'h', 10 },
	{ 'i', 4 },
	{ 'j', 5 },
	{ 'k', 10 },
	{ 'l', 4 },
	{ 'm', 16 },
	{ 'n', 9 },
	{ 'o', 11 },
	{ 'p', 11 },
	{ 'q', 11 },
	{ 'r', 6 },
	{ 's', 9 },
	{ 't', 7 },
	{ 'u', 10 },
	{ 'v', 10 },
	{ 'w', 15 },
	{ 'x', 11 },
	{ 'y', 11 },
	{ 'z', 10 },
	{ '{', 8 },
	{ '|', 3 },
	{ '}', 8 },
	{ '~', 15 },

	{ 0x8A, 13 }, //Š	

	{ 0x8C, 20 }, //Œ

	{ 0x8E, 10 }, //ž

	{ 0x9A, 9 }, //š

	{ 0x9C, 17 }, //œ

	{ 0x9E, 12 }, //Ž
	{ 0x9F, 14 }, //Ÿ

	{ L'¡', 5 },

	{ L'¿', 12 },
	{ L'À', 12 },
	{ L'Á', 12 },
	{ L'Â', 12 },
	{ L'Ã', 12 },
	{ L'Ä', 12 },
	{ L'Å', 12 },
	{ L'Æ', 20 },
	{ L'Ç', 13 },
	{ L'È', 10 },
	{ L'É', 10 },
	{ L'Ê', 10 },
	{ L'Ë', 10 },
	{ L'Ì', 6 },
	{ L'Í', 6 },
	{ L'Î', 7 },
	{ L'Ï', 7 },
	{ L'Ð', 13 },
	{ L'Ñ', 11 },
	{ L'Ò', 14 },
	{ L'Ó', 14 },
	{ L'Ô', 14 },
	{ L'Õ', 14 },
	{ L'Ö', 14 },
	{ L'×', 12 },
	{ L'Ø', 14 },
	{ L'Ù', 12 },
	{ L'Ú', 12 },
	{ L'Û', 12 },
	{ L'Ü', 12 },
	{ L'Ý', 14 },
	{ L'Þ', 11 },
	{ L'ß', 11 },

	{ L'à', 10 },
	{ L'á', 10 },
	{ L'â', 10 },
	{ L'ã', 10 },
	{ L'ä', 10 },
	{ L'å', 10 },
	{ L'æ', 16 },
	{ L'ç', 10 },
	{ L'è', 10 },
	{ L'é', 10 },
	{ L'ê', 10 },
	{ L'ë', 10 },
	{ L'ì', 6 },
	{ L'í', 6 },
	{ L'î', 7 },
	{ L'ï', 7 },
	{ L'ð', 11 },
	{ L'ñ', 9 },
	{ L'ò', 11 },
	{ L'ó', 11 },
	{ L'ô', 11 },
	{ L'õ', 11 },
	{ L'ö', 11 },
	{ L'÷', 13 },
	{ L'ø', 11 },
	{ L'ù', 10 },
	{ L'ú', 10 },
	{ L'û', 10 },
	{ L'ü', 10 },
	{ L'ý', 11 },
	{ L'þ', 11 },
	{ L'ÿ', 11 },
};

void WriteFontData(const std::vector<LetterData>& fontData)
{
	for (auto& letter : fontData)
	{
		MainFontSetup[letter.LetterCode - ' '] = letter.Width;
		ChaoWorldFontSetup[letter.LetterCode - ' '] = letter.Width;
	}
}


void SetUpFont(const char* modPath, const char* fontPath)
{
	LoadFont(modPath, fontPath);
	WriteFontData(ImpressSetup);
}