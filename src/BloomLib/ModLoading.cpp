#include "ModLoading.h"

#include <string>
#include <iostream>
#include <filesystem>

#include "Windows.h"

#include "../Lawn/Registries.h"
#include "../PakLib/PakInterface.h"

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

void LoadMods()
{
	std::string aPath = "mods";
	for (const auto &anEntry : std::filesystem::directory_iterator(aPath))
	{
		std::cout << std::endl;
		std::string aFolderName = anEntry.path().filename().string();

		std::cout << "Loading mod folder" << aFolderName << std::endl;

		std::string aDllPath = "mods/" + aFolderName + "/" + DEBUG_OR_RELEASE_STRING 
			+ "_" + ARCHITECTURE_STRING + ".dll";

		std::cout << "Loading " << aDllPath << std::endl;

		HMODULE aMod = LoadLibraryA(aDllPath.c_str());

		if (aMod)
		{
			std::cout << "Loaded mod " << aFolderName << std::endl;
			void (*aModInitFunction)(const std::string *) =
				(void (*)(const std::string *))GetProcAddress(aMod, "ModInit");
			if (aModInitFunction)
				aModInitFunction(&aFolderName);
			else
				std::cout << "ModInit function not found" << std::endl;
		}
		else
		{
			std::cout << "Loading " << aDllPath << " failed" << std::endl;
		}

		std::string aPakPath = "mods/" + aFolderName + "/" + "mod.pak";

		std::cout << "Loading " << aPakPath << std::endl;

		bool aModPakFound = gPakInterface->AddPakFile(aPakPath);

		if (aModPakFound)
		{
			std::cout << "Loaded " << aPakPath << std::endl;
		}
		else
		{
			std::cout << aPakPath << " not found" << std::endl;
		}

		std::cout << std::endl;
	}

	for (IRegistry *aRegistry : Registries::REGISTRIES)
	{
		aRegistry->Freeze();
	}
}