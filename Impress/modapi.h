#pragma once

#include <string>


extern "C"
{
	__declspec(dllexport) void LoadMainFont(std::string modPath, std::string fontPath);
}