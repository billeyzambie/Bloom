#include "ModLoading.h"

#include "BloomUtil.h"

#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>

#include "Windows.h"
#include "json.hpp"

#include "../Lawn/Registries.h"
#include "../PakLib/PakInterface.h"

using json = nlohmann::json;

#ifdef DEBUG
constexpr const char *DEBUG_OR_RELEASE_STRING = "Debug";
#else
constexpr const char *DEBUG_OR_RELEASE_STRING = "Release";
#endif

#ifdef _WIN64
constexpr const char *ARCHITECTURE_STRING = "x64";
#else
constexpr const char *ARCHITECTURE_STRING = "x86";
#endif

static bool LoadMod(const std::string &theFolderName)
{
	std::string aManifestPath = "mods/" + theFolderName + "/manifest.json";
	std::ifstream aManifestFile{aManifestPath};

	std::string aModId;
	if (aManifestFile.good())
	{
		json aManifestJson = json::parse(aManifestFile);
		aModId = aManifestJson["mod_id"].get<std::string>();
		aModId = CreateAllUppercase(aModId);
	}
	else
	{
		std::cout << "[BloomLib] - " << theFolderName << " manifest not found" << std::endl;
		return false;
	}

	std::string aDllPath = "mods/" + theFolderName + "/" + DEBUG_OR_RELEASE_STRING + "_" + ARCHITECTURE_STRING + ".dll";

	HMODULE aMod = LoadLibraryA(aDllPath.c_str());

	if (aMod)
	{
		std::cout << "[BloomLib] - Loaded " << aDllPath << std::endl;
		void (*aModInitFunction)(const std::string *) = (void (*)(const std::string *))GetProcAddress(aMod, "ModInit");
		if (aModInitFunction)
			aModInitFunction(&theFolderName);
		else
		{
			std::cout << "[BloomLib] - ModInit function not found" << std::endl;
			return false;
		}
	}
	else
	{
		std::cout << "[BloomLib] - Loading " << aDllPath << " failed" << std::endl;
		return false;
	}

	std::string aPakPath = "mods/" + theFolderName + "/mod.pak";

	bool aModPakFound = gPakInterface->AddPakFile(aPakPath);

	if (aModPakFound)
	{
		std::cout << "[BloomLib] - Loaded " << aPakPath << std::endl;
	}
	else
	{
		std::cout << "[BloomLib] - " << aPakPath << " not found" << std::endl;
	}

	return true;
}

void LoadMods()
{
	std::string aPath = "mods";
	for (const auto &anEntry : std::filesystem::directory_iterator(aPath))
	{
		std::string aFolderName = anEntry.path().filename().string();
		std::cout << std::endl;
		std::cout << "[BloomLib] - Loading mod " << aFolderName << std::endl;

		bool aLoadingSucceeded = LoadMod(aFolderName);

		if (aLoadingSucceeded)
		{
			std::cout << "[BloomLib] - Successfully loaded mod " << aFolderName << std::endl;
		}
		else
		{
			std::cout << "[BloomLib] - Loading mod " << aFolderName << " failed" << std::endl;
		}
		std::cout << std::endl;
	}

	for (IRegistry *aRegistry : Registries::REGISTRIES)
	{
		aRegistry->Freeze();
	}
}