/**
 * SA2 Mod Loader.
 * Mod metadata structures.
 */

#ifndef SA2MODLOADER_SA2MODINFO_H
#define SA2MODLOADER_SA2MODINFO_H

#include "SA2Structs.h"

static const int ModLoaderVer = 12;

struct PatchInfo
{
	void* address;
	const void* data;
	int datasize;
};

struct PatchList
{
	const PatchInfo* Patches;
	int Count;
};

struct PointerInfo
{
	void* address;
	void* data;
};

struct PointerList
{
	const PointerInfo* Pointers;
	int Count;
};

#define patchdecl(address,data) { (void*)address, arrayptrandsize(data) }
#define ptrdecl(address,data) { (void*)address, (void*)data }

struct LoaderSettings
{
	bool DebugConsole;
	bool DebugScreen;
	bool DebugFile;
	bool DebugCrashLog;
	bool PauseWhenInactive;
	bool DisableExitPrompt;
	int ScreenNum;
	bool BorderlessWindow;
	bool FullScreen;
	bool SkipIntro;
	bool SyncLoad;
	int HorizontalResolution;
	int VerticalResolution;
	int VoiceLanguage;
	int TextLanguage;
	bool CustomWindowSize;
	int WindowWidth;
	int WindowHeight;
	bool ResizableWindow;
	bool MaintainAspectRatio;
	bool FramerateLimiter;
	int TestSpawnLevel;
	int TestSpawnCharacter;
	int TestSpawnPlayer2;
	bool TestSpawnPositionEnabled;
	int TestSpawnX;
	int TestSpawnY;
	int TestSpawnZ;
	int TestSpawnRotation;
	int TestSpawnEvent;
	int TestSpawnSaveID;
};

struct ModDependency
{
	const char* ID;
	const char* Folder;
	const char* Name;
	const char* Link;
};

struct ModDepsList
{
	const ModDependency* data;
	int size;

	// Retrieves an iterator to the start of the list (enables range-based for).
	const ModDependency* begin()
	{
		return data;
	}

	// Retrieves an iterator to the end of the list (enables range-based for).
	const ModDependency* end()
	{
		return data + size;
	}

	const ModDependency& operator [](int pos)
	{
		return data[pos];
	}
};

struct Mod
{
	const char* Name;
	const char* Author;
	const char* Description;
	const char* Version;
	const char* Folder;
	const char* ID;
	HMODULE DLLHandle;
	bool MainSaveRedirect;
	bool ChaoSaveRedirect;
	const ModDepsList Dependencies;

	template <typename T>
	T GetDllExport(const char* name) const
	{
		if (!DLLHandle)
			return nullptr;
		return reinterpret_cast<T>(GetProcAddress(DLLHandle, name));
	}
};

struct ModList
{
	// Retrieves an iterator to the start of the list (enables range-based for).
	const Mod* (*begin)();
	// Retrieves an iterator to the end of the list (enables range-based for).
	const Mod* (*end)();
	// Retrieves the item at position pos.
	const Mod& (*at)(int pos);
	// Retrieves a pointer to the start of the list.
	const Mod* (*data)();
	// Retrieves the number of items in the list.
	int (*size)();
	// Find a mod by its ID.
	const Mod* (*find)(const char* id);
	// Find a mod by its name.
	const Mod* (*find_by_name)(const char* name);
	// Find a mod by its folder.
	const Mod* (*find_by_folder)(const char* folder);
	// Find a mod by its DLL handle.
	const Mod* (*find_by_dll)(HMODULE handle);

	const Mod& operator [](int pos)
	{
		return at(pos);
	}
};

#undef ReplaceFile // WinAPI function
struct HelperFunctions
{
	// The version of the structure.
	int Version;
	// Registers a start position for a character.
	void(__cdecl* RegisterStartPosition)(unsigned char character, const StartPosition& position);
	// Clears the list of registered start positions for a character.
	void(__cdecl* ClearStartPositionList)(unsigned char character);
	// Registers a 2P intro position for a character.
	void(__cdecl* Register2PIntroPosition)(unsigned char character, const LevelEndPosition& position);
	// Clears the list of registered 2P intro positions for a character.
	void(__cdecl* Clear2PIntroPositionList)(unsigned char character);
	// Returns the path where main game save files are stored.
	// Requires version >= 4.
	const char* (__cdecl* GetMainSavePath)();
	// Returns the path where Chao save files are stored.
	// Requires version >= 4.
	const char* (__cdecl* GetChaoSavePath)();
	// Registers an end position for a character.
	// Requires version >= 5.
	void(__cdecl* RegisterEndPosition)(unsigned char character, const StartPosition& position);
	// Clears the list of registered end positions for a character.
	// Requires version >= 5.
	void(__cdecl* ClearEndPositionList)(unsigned char character);
	// Registers an end position for missions 2 and 3 for a character.
	// Requires version >= 5.
	void(__cdecl* RegisterMission23EndPosition)(unsigned char character, const LevelEndPosition& position);
	// Clears the list of registered end positions for missions 2 and 3 for a character.
	// Requires version >= 5.
	void(__cdecl* ClearMission23EndPositionList)(unsigned char character);
	// Replaces data exported from the Data DLL with your own data.
	// Requires version >= 6.
	void(__cdecl* HookExport)(LPCSTR exportName, const void* newdata);
	/**
	* @brief Gets the real path to a replaceable file.
	*
	* If your mod contains files in its SYSTEM folder that it loads manually,
	* you can use this function to retrieve the full path to the file. This
	* allows other mods to replace this file without any extra work from you.
	* Requires version >= 7.
	*
	* @param path The file path (e.g "resource\\gd_PC\\my_cool_file.bin")
	* @return The replaced path to the file.
	*/
	const char* (__cdecl* GetReplaceablePath)(const char* path);
	// Replaces the source file with the destination file.
	// Requires version >= 7.
	void(__cdecl* ReplaceFile)(const char* src, const char* dst);
	// Sets the window title.
	// Requires version >= 7.
	void(__cdecl* SetWindowTitle)(const wchar_t* title);
	// Sets the size of the debug font, defaults to 12.
	// Requires version >= 8
	void(__cdecl* SetDebugFontSize)(float size);
	// Sets the argb color of the debug font, defaults to 0xFFBFBFBF.
	// Requires version >= 8
	void(__cdecl* SetDebugFontColor)(int color);
	// Displays a string on screen at a specific location (using NJM_LOCATION)
	// Example: DisplayDebugString(NJM_LOCATION(x, y), "string");
	// Requires version >= 8
	void(__cdecl* DisplayDebugString)(int loc, const char* str);
	// Displays a formatted string on screen at a specific location (using NJM_LOCATION)
	// Requires version >= 8
	void(__cdecl* DisplayDebugStringFormatted)(int loc, const char* Format, ...);
	// Displays a number on screen at a specific location (using NJM_LOCATION)
	// If the number of digits is superior, it will add leading zeroes.
	// Example: DisplayDebugNumber(NJM_LOCATION(x, y), 123, 5); will display 00123.
	// Requires version >= 8
	void(__cdecl* DisplayDebugNumber)(int loc, int value, int numdigits);

	// The settings that the mod loader was initialized with.
	// Requires version >= 9.
	const LoaderSettings* LoaderSettings;

	// API for listing information on loaded mods.
	// Requires version >= 9.
	const ModList* Mods;

	/**
	* @brief Registers an ID for a new voice.
	* Requires version >= 10.
	*
	* @param fileJP: The path to the audio file to play for Japanese.
	* @param fileEN: The path to the audio file to play for English.
	* @return The ID number for your voice, or 0 if the list is full.
	*
	*/
	uint16_t(__cdecl* RegisterVoice)(const char* fileJP, const char* fileEN);

	// Replaces an individual texture from a GVM file with an image file.
	// Requires version >= 11.
	void(__cdecl* ReplaceTexture)(const char* gvm_name, const char* tex_name, const char* file_path, uint32_t gbix, uint32_t width, uint32_t height);

	// Removes any file replacements for the specified file.
	// Requires version >= 12.
	void(__cdecl* UnreplaceFile)(const char* file);
};

typedef void(__cdecl* ModInitFunc)(const char* path, const HelperFunctions& helperFunctions);

typedef void(__cdecl* ModEvent)();

struct ModInfo
{
	int Version;
	void(__cdecl* Init)(const char* path, const HelperFunctions& helperFunctions);
	const PatchInfo* Patches;
	int PatchCount;
	const PointerInfo* Jumps;
	int JumpCount;
	const PointerInfo* Calls;
	int CallCount;
	const PointerInfo* Pointers;
	int PointerCount;
};

#endif // SA2MODLOADER_SA2MODINFO_H