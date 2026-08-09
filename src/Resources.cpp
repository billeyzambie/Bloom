#include "Resources.h"
#include "SexyAppFramework/ResourceManager.h"
#include "LawnApp.h"
using namespace Sexy;

#pragma warning(disable : 4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const ResourceId &theName)
{
	gNeedRecalcVariableToIdMap = true;
	if (stricmp(theName.CStr(), "PVZ:DelayLoad_Almanac") == 0)
		return ExtractDelayLoad_AlmanacResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_AwardScreen") == 0)
		return ExtractDelayLoad_AwardScreenResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Background1") == 0)
		return ExtractDelayLoad_Background1Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Background2") == 0)
		return ExtractDelayLoad_Background2Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Background3") == 0)
		return ExtractDelayLoad_Background3Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Background4") == 0)
		return ExtractDelayLoad_Background4Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Background5") == 0)
		return ExtractDelayLoad_Background5Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Background6") == 0)
		return ExtractDelayLoad_Background6Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_BackgroundUnsodded") == 0)
		return ExtractDelayLoad_BackgroundUnsoddedResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ChallengeScreen") == 0)
		return ExtractDelayLoad_ChallengeScreenResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Credits") == 0)
		return ExtractDelayLoad_CreditsResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_GreenHouseGarden") == 0)
		return ExtractDelayLoad_GreenHouseGardenResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_GreenHouseOverlay") == 0)
		return ExtractDelayLoad_GreenHouseOverlayResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_MushroomGarden") == 0)
		return ExtractDelayLoad_MushroomGardenResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Store") == 0)
		return ExtractDelayLoad_StoreResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_TreeOfWisdom") == 0)
		return ExtractDelayLoad_TreeOfWisdomResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Zombatar") == 0)
		return ExtractDelayLoad_ZombatarResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ZombieFinalNote") == 0)
		return ExtractDelayLoad_ZombieFinalNoteResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ZombieNote") == 0)
		return ExtractDelayLoad_ZombieNoteResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ZombieNote1") == 0)
		return ExtractDelayLoad_ZombieNote1Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ZombieNote2") == 0)
		return ExtractDelayLoad_ZombieNote2Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ZombieNote3") == 0)
		return ExtractDelayLoad_ZombieNote3Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ZombieNote4") == 0)
		return ExtractDelayLoad_ZombieNote4Resources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_ZombieNoteHelp") == 0)
		return ExtractDelayLoad_ZombieNoteHelpResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:DelayLoad_Zombiquarium") == 0)
		return ExtractDelayLoad_ZombiquariumResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:Init") == 0)
		return ExtractInitResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:LoaderBar") == 0)
		return ExtractLoaderBarResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:LoadingFonts") == 0)
		return ExtractLoadingFontsResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:LoadingImages") == 0)
		return ExtractLoadingImagesResources(theManager);
	else if (stricmp(theName.CStr(), "PVZ:LoadingSounds") == 0)
		return ExtractLoadingSoundsResources(theManager);
	return false;
}

//Sexy::OldResourceId Sexy::GetIdByStringId(const char *theStringId)
//{
//	typedef std::map<ResourceId, int> MyMap;
//	static MyMap aMap;
//	if (aMap.empty())
//	{
//		for (int i = 0; i < RESOURCE_ID_MAX; i++)
//			aMap[GetStringIdById(i)] = i;
//	}
//
//	MyMap::iterator anItr = aMap.find(theStringId);
//	if (anItr == aMap.end())
//		return RESOURCE_ID_MAX;
//	else
//		return (OldResourceId)anItr->second;
//}

// DelayLoad_Almanac Resources
Image *Sexy::IMAGE_ALMANAC_INDEXBACK;
Image *Sexy::IMAGE_ALMANAC_PLANTBACK;
Image *Sexy::IMAGE_ALMANAC_ZOMBIEBACK;
Image *Sexy::IMAGE_ALMANAC_PLANTCARD;
Image *Sexy::IMAGE_ALMANAC_ZOMBIECARD;
Image *Sexy::IMAGE_ALMANAC_ZOMBIEWINDOW;
Image *Sexy::IMAGE_ALMANAC_ZOMBIEWINDOW2;
Image *Sexy::IMAGE_ALMANAC_ZOMBIEBLANK;
Image *Sexy::IMAGE_ALMANAC_GROUNDDAY;
Image *Sexy::IMAGE_ALMANAC_GROUNDNIGHT;
Image *Sexy::IMAGE_ALMANAC_GROUNDPOOL;
Image *Sexy::IMAGE_ALMANAC_GROUNDNIGHTPOOL;
Image *Sexy::IMAGE_ALMANAC_GROUNDROOF;
Image *Sexy::IMAGE_ALMANAC_GROUNDICE;
Image *Sexy::IMAGE_ALMANAC_CLOSEBUTTON;
Image *Sexy::IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT;
Image *Sexy::IMAGE_ALMANAC_INDEXBUTTON;
Image *Sexy::IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT;

bool Sexy::ExtractDelayLoad_AlmanacResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ALMANAC_INDEXBACK = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_INDEXBACK"});
		IMAGE_ALMANAC_PLANTBACK = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_PLANTBACK"});
		IMAGE_ALMANAC_ZOMBIEBACK = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_ZOMBIEBACK"});
		IMAGE_ALMANAC_PLANTCARD = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_PLANTCARD"});
		IMAGE_ALMANAC_ZOMBIECARD = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_ZOMBIECARD"});
		IMAGE_ALMANAC_ZOMBIEWINDOW = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_ZOMBIEWINDOW"});
		IMAGE_ALMANAC_ZOMBIEWINDOW2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_ZOMBIEWINDOW2"});
		IMAGE_ALMANAC_ZOMBIEBLANK = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_ZOMBIEBLANK"});
		IMAGE_ALMANAC_GROUNDDAY = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_GROUNDDAY"});
		IMAGE_ALMANAC_GROUNDNIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_GROUNDNIGHT"});
		IMAGE_ALMANAC_GROUNDPOOL = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_GROUNDPOOL"});
		IMAGE_ALMANAC_GROUNDNIGHTPOOL = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_GROUNDNIGHTPOOL"});
		IMAGE_ALMANAC_GROUNDROOF = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_GROUNDROOF"});
		IMAGE_ALMANAC_GROUNDICE = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_GROUNDICE"});
		IMAGE_ALMANAC_CLOSEBUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_CLOSEBUTTON"});
		IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT"});
		IMAGE_ALMANAC_INDEXBUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_INDEXBUTTON"});
		IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_AwardScreen Resources
Image *Sexy::IMAGE_AWARDSCREEN_BACK;

bool Sexy::ExtractDelayLoad_AwardScreenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_AWARDSCREEN_BACK = aMgr.GetImageThrow({"PVZ", "IMAGE_AWARDSCREEN_BACK"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background1 Resources
Image *Sexy::IMAGE_BACKGROUND1;
Image *Sexy::IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY;
Image *Sexy::IMAGE_BACKGROUND1_GAMEOVER_MASK;

bool Sexy::ExtractDelayLoad_Background1Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND1 = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND1"});
		IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY"});
		IMAGE_BACKGROUND1_GAMEOVER_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND1_GAMEOVER_MASK"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background2 Resources
Image *Sexy::IMAGE_BACKGROUND2;
Image *Sexy::IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY;
Image *Sexy::IMAGE_BACKGROUND2_GAMEOVER_MASK;

bool Sexy::ExtractDelayLoad_Background2Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND2 = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND2"});
		IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY"});
		IMAGE_BACKGROUND2_GAMEOVER_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND2_GAMEOVER_MASK"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background3 Resources
Image *Sexy::IMAGE_BACKGROUND3;
Image *Sexy::IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY;
Image *Sexy::IMAGE_BACKGROUND3_GAMEOVER_MASK;

bool Sexy::ExtractDelayLoad_Background3Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND3 = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND3"});
		IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY"});
		IMAGE_BACKGROUND3_GAMEOVER_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND3_GAMEOVER_MASK"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background4 Resources
Image *Sexy::IMAGE_BACKGROUND4;
Image *Sexy::IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY;
Image *Sexy::IMAGE_BACKGROUND4_GAMEOVER_MASK;
Image *Sexy::IMAGE_FOG;
Image *Sexy::IMAGE_FOG_SOFTWARE;

bool Sexy::ExtractDelayLoad_Background4Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND4 = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND4"});
		IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY"});
		IMAGE_BACKGROUND4_GAMEOVER_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND4_GAMEOVER_MASK"});
		IMAGE_FOG = aMgr.GetImageThrow({"PVZ", "IMAGE_FOG"});
		IMAGE_FOG_SOFTWARE = aMgr.GetImageThrow({"PVZ", "IMAGE_FOG_SOFTWARE"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background5 Resources
Image *Sexy::IMAGE_BACKGROUND5;
Image *Sexy::IMAGE_BACKGROUND5_GAMEOVER_MASK;

bool Sexy::ExtractDelayLoad_Background5Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND5 = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND5"});
		IMAGE_BACKGROUND5_GAMEOVER_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND5_GAMEOVER_MASK"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Background6 Resources
Image *Sexy::IMAGE_BACKGROUND6BOSS;
Image *Sexy::IMAGE_BACKGROUND6_GAMEOVER_MASK;

bool Sexy::ExtractDelayLoad_Background6Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND6BOSS = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND6BOSS"});
		IMAGE_BACKGROUND6_GAMEOVER_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND6_GAMEOVER_MASK"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_BackgroundUnsodded Resources
Image *Sexy::IMAGE_BACKGROUND1UNSODDED;
Image *Sexy::IMAGE_SOD1ROW;
Image *Sexy::IMAGE_SOD3ROW;

bool Sexy::ExtractDelayLoad_BackgroundUnsoddedResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND1UNSODDED = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND1UNSODDED"});
		IMAGE_SOD1ROW = aMgr.GetImageThrow({"PVZ", "IMAGE_SOD1ROW"});
		IMAGE_SOD3ROW = aMgr.GetImageThrow({"PVZ", "IMAGE_SOD3ROW"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ChallengeScreen Resources
Image *Sexy::IMAGE_CHALLENGE_BACKGROUND;
Image *Sexy::IMAGE_CHALLENGE_WINDOW;
Image *Sexy::IMAGE_CHALLENGE_WINDOW_HIGHLIGHT;
Image *Sexy::IMAGE_CHALLENGE_BLANK;
Image *Sexy::IMAGE_CHALLENGE_THUMBNAILS;
Image *Sexy::IMAGE_SURVIVAL_THUMBNAILS;
Image *Sexy::IMAGE_LOCK;
Image *Sexy::IMAGE_LOCK_OPEN;

bool Sexy::ExtractDelayLoad_ChallengeScreenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_CHALLENGE_BACKGROUND = aMgr.GetImageThrow({"PVZ", "IMAGE_CHALLENGE_BACKGROUND"});
		IMAGE_CHALLENGE_WINDOW = aMgr.GetImageThrow({"PVZ", "IMAGE_CHALLENGE_WINDOW"});
		IMAGE_CHALLENGE_WINDOW_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_CHALLENGE_WINDOW_HIGHLIGHT"});
		IMAGE_CHALLENGE_BLANK = aMgr.GetImageThrow({"PVZ", "IMAGE_CHALLENGE_BLANK"});
		IMAGE_CHALLENGE_THUMBNAILS = aMgr.GetImageThrow({"PVZ", "IMAGE_CHALLENGE_THUMBNAILS"});
		IMAGE_SURVIVAL_THUMBNAILS = aMgr.GetImageThrow({"PVZ", "IMAGE_SURVIVAL_THUMBNAILS"});
		IMAGE_LOCK = aMgr.GetImageThrow({"PVZ", "IMAGE_LOCK"});
		IMAGE_LOCK_OPEN = aMgr.GetImageThrow({"PVZ", "IMAGE_LOCK_OPEN"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Credits Resources
Font *Sexy::FONT_BRIANNETOD32;
Font *Sexy::FONT_BRIANNETOD32BLACK;
Image *Sexy::IMAGE_REANIM_SUNFLOWER_HEAD_SING1;
Image *Sexy::IMAGE_REANIM_SUNFLOWER_HEAD_SING2;
Image *Sexy::IMAGE_REANIM_SUNFLOWER_HEAD_SING3;
Image *Sexy::IMAGE_REANIM_SUNFLOWER_HEAD_SING4;
Image *Sexy::IMAGE_REANIM_SUNFLOWER_HEAD_SING5;
Image *Sexy::IMAGE_REANIM_SUNFLOWER_HEAD_WINK;
Image *Sexy::IMAGE_REANIM_CREDITS_DISCOLIGHTS;
Image *Sexy::IMAGE_REANIM_CREDITS_FOGMACHINE;
Image *Sexy::IMAGE_CREDITS_ZOMBIENOTE;
Image *Sexy::IMAGE_CREDITS_PLAYBUTTON;

bool Sexy::ExtractDelayLoad_CreditsResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_BRIANNETOD32 = aMgr.GetFontThrow({"PVZ", "FONT_BRIANNETOD32"});
		FONT_BRIANNETOD32BLACK = aMgr.GetFontThrow({"PVZ", "FONT_BRIANNETOD32BLACK"});
		IMAGE_REANIM_SUNFLOWER_HEAD_SING1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING1"});
		IMAGE_REANIM_SUNFLOWER_HEAD_SING2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING2"});
		IMAGE_REANIM_SUNFLOWER_HEAD_SING3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING3"});
		IMAGE_REANIM_SUNFLOWER_HEAD_SING4 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING4"});
		IMAGE_REANIM_SUNFLOWER_HEAD_SING5 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING5"});
		IMAGE_REANIM_SUNFLOWER_HEAD_WINK = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_WINK"});
		IMAGE_REANIM_CREDITS_DISCOLIGHTS = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CREDITS_DISCOLIGHTS"});
		IMAGE_REANIM_CREDITS_FOGMACHINE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CREDITS_FOGMACHINE"});
		IMAGE_CREDITS_ZOMBIENOTE = aMgr.GetImageThrow({"PVZ", "IMAGE_CREDITS_ZOMBIENOTE"});
		IMAGE_CREDITS_PLAYBUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_CREDITS_PLAYBUTTON"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_GreenHouseGarden Resources
Image *Sexy::IMAGE_BACKGROUND_GREENHOUSE;

bool Sexy::ExtractDelayLoad_GreenHouseGardenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND_GREENHOUSE = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND_GREENHOUSE"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_GreenHouseOverlay Resources
Image *Sexy::IMAGE_BACKGROUND_GREENHOUSE_OVERLAY;

bool Sexy::ExtractDelayLoad_GreenHouseOverlayResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND_GREENHOUSE_OVERLAY = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND_GREENHOUSE_OVERLAY"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_MushroomGarden Resources
Image *Sexy::IMAGE_BACKGROUND_MUSHROOMGARDEN;

bool Sexy::ExtractDelayLoad_MushroomGardenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BACKGROUND_MUSHROOMGARDEN = aMgr.GetImageThrow({"PVZ", "IMAGE_BACKGROUND_MUSHROOMGARDEN"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Store Resources
Image *Sexy::IMAGE_STORE_BACKGROUND;
Image *Sexy::IMAGE_STORE_BACKGROUNDNIGHT;
Image *Sexy::IMAGE_STORE_CAR;
Image *Sexy::IMAGE_STORE_CAR_NIGHT;
Image *Sexy::IMAGE_STORE_CARCLOSED;
Image *Sexy::IMAGE_STORE_CARCLOSED_NIGHT;
Image *Sexy::IMAGE_STORE_HATCHBACKOPEN;
Image *Sexy::IMAGE_STORE_SIGN;
Image *Sexy::IMAGE_STORE_MAINMENUBUTTON;
Image *Sexy::IMAGE_STORE_MAINMENUBUTTONDOWN;
Image *Sexy::IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT;
Image *Sexy::IMAGE_STORE_NEXTBUTTON;
Image *Sexy::IMAGE_STORE_NEXTBUTTONHIGHLIGHT;
Image *Sexy::IMAGE_STORE_NEXTBUTTONDISABLED;
Image *Sexy::IMAGE_STORE_PREVBUTTON;
Image *Sexy::IMAGE_STORE_PREVBUTTONHIGHLIGHT;
Image *Sexy::IMAGE_STORE_PREVBUTTONDISABLED;
Image *Sexy::IMAGE_STORE_PRICETAG;
Image *Sexy::IMAGE_STORE_PACKETUPGRADE;
Image *Sexy::IMAGE_STORE_MUSHROOMGARDENICON;
Image *Sexy::IMAGE_STORE_AQUARIUMGARDENICON;
Image *Sexy::IMAGE_STORE_TREEOFWISDOMICON;
Image *Sexy::IMAGE_STORE_FIRSTAIDWALLNUTICON;
Image *Sexy::IMAGE_STORE_PVZICON;

bool Sexy::ExtractDelayLoad_StoreResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_STORE_BACKGROUND = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_BACKGROUND"});
		IMAGE_STORE_BACKGROUNDNIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_BACKGROUNDNIGHT"});
		IMAGE_STORE_CAR = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_CAR"});
		IMAGE_STORE_CAR_NIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_CAR_NIGHT"});
		IMAGE_STORE_CARCLOSED = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_CARCLOSED"});
		IMAGE_STORE_CARCLOSED_NIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_CARCLOSED_NIGHT"});
		IMAGE_STORE_HATCHBACKOPEN = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_HATCHBACKOPEN"});
		IMAGE_STORE_SIGN = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_SIGN"});
		IMAGE_STORE_MAINMENUBUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_MAINMENUBUTTON"});
		IMAGE_STORE_MAINMENUBUTTONDOWN = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_MAINMENUBUTTONDOWN"});
		IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT"});
		IMAGE_STORE_NEXTBUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_NEXTBUTTON"});
		IMAGE_STORE_NEXTBUTTONHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_NEXTBUTTONHIGHLIGHT"});
		IMAGE_STORE_NEXTBUTTONDISABLED = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_NEXTBUTTONDISABLED"});
		IMAGE_STORE_PREVBUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_PREVBUTTON"});
		IMAGE_STORE_PREVBUTTONHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_PREVBUTTONHIGHLIGHT"});
		IMAGE_STORE_PREVBUTTONDISABLED = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_PREVBUTTONDISABLED"});
		IMAGE_STORE_PRICETAG = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_PRICETAG"});
		IMAGE_STORE_PACKETUPGRADE = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_PACKETUPGRADE"});
		IMAGE_STORE_MUSHROOMGARDENICON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_MUSHROOMGARDENICON"});
		IMAGE_STORE_AQUARIUMGARDENICON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_AQUARIUMGARDENICON"});
		IMAGE_STORE_TREEOFWISDOMICON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_TREEOFWISDOMICON"});
		IMAGE_STORE_FIRSTAIDWALLNUTICON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_FIRSTAIDWALLNUTICON"});
		IMAGE_STORE_PVZICON = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_PVZICON"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_TreeOfWisdom Resources

bool Sexy::ExtractDelayLoad_TreeOfWisdomResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Zombatar Resources
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_BG;
Image *Sexy::IMAGE_ZOMBATAR_PREV_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_PREV_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_NEXT_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_NEXT_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_ZOMBIE_BLANK;
Image *Sexy::IMAGE_ZOMBATAR_ZOMBIE_BLANK_SKIN;
Image *Sexy::IMAGE_ZOMBATAR_BACKGROUND_CRAZYDAVE;
Image *Sexy::IMAGE_ZOMBATAR_BACKGROUND_MENU;
Image *Sexy::IMAGE_ZOMBATAR_BACKGROUND_MENU_DOS;
Image *Sexy::IMAGE_ZOMBATAR_BACKGROUND_ROOF;
Image *Sexy::IMAGE_ZOMBATAR_WIDGET_BG;
Image *Sexy::IMAGE_ZOMBATAR_WIDGET_INNER_BG;
Image *Sexy::IMAGE_ZOMBATAR_COLORS_BG;
Image *Sexy::IMAGE_ZOMBATAR_LOGO;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_BACKDROPS_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_BACKDROPS_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_BACKDROPS_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_HATS_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_HATS_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_HATS_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_SKIN_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_SKIN_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_BUTTON_OVER;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_BG_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_TRIPTYCH;
Image *Sexy::IMAGE_ZOMBATAR_COLORPICKER;
Image *Sexy::IMAGE_ZOMBATAR_COLORPICKER_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_COLORPICKER_NONE;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_BG_NONE;
Image *Sexy::IMAGE_ZOMBATAR_COLORS_BG_SMALL;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_1;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_2;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_3;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_4;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_5;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_6;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_7;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_8;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_9;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_10;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_11;
Image *Sexy::IMAGE_ZOMBATAR_CLOTHES_12;
Image *Sexy::IMAGE_ZOMBATAR_HATS_1;
Image *Sexy::IMAGE_ZOMBATAR_HATS_2;
Image *Sexy::IMAGE_ZOMBATAR_HATS_3;
Image *Sexy::IMAGE_ZOMBATAR_HATS_4;
Image *Sexy::IMAGE_ZOMBATAR_HATS_5;
Image *Sexy::IMAGE_ZOMBATAR_HATS_6;
Image *Sexy::IMAGE_ZOMBATAR_HATS_7;
Image *Sexy::IMAGE_ZOMBATAR_HATS_8;
Image *Sexy::IMAGE_ZOMBATAR_HATS_9;
Image *Sexy::IMAGE_ZOMBATAR_HATS_10;
Image *Sexy::IMAGE_ZOMBATAR_HATS_11;
Image *Sexy::IMAGE_ZOMBATAR_HATS_12;
Image *Sexy::IMAGE_ZOMBATAR_HATS_13;
Image *Sexy::IMAGE_ZOMBATAR_HATS_14;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_1;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_2;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_3;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_4;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_5;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_6;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_7;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_8;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_9;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_10;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_11;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_12;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_13;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_14;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_15;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_16;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_1;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_2;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_3;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_4;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_5;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_6;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_7;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_8;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_9;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_10;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_11;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_12;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_13;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_14;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_15;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_16;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_1;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_2;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_3;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_4;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_5;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_6;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_7;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_8;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_9;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_10;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_11;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_12;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_13;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_14;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_15;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_16;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_17;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_18;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_19;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_20;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_21;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_22;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_23;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_24;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_1;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_2;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_3;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_4;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_5;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_6;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_7;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_8;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_9;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_10;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_11;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_12;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_13;
Image *Sexy::IMAGE_ZOMBATAR_TIDBITS_14;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_1;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_2;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_3;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_4;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_5;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_6;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_7;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_8;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_9;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_10;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_11;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_12;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_13;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_14;
Image *Sexy::IMAGE_ZOMBATAR_HATS_1_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_1_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_2_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_11_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_12_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_13_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_14_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HAIR_15_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_1_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_4_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_8_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_9_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_10_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_11_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_12_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_14_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_15_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_16_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_18_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_21_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_22_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_23_MASK;
Image *Sexy::IMAGE_ZOMBATAR_FACIALHAIR_24_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_1_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_2_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_3_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_4_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_5_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_6_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_7_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_8_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_9_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_10_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_11_MASK;
Image *Sexy::IMAGE_ZOMBATAR_EYEWEAR_12_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HATS_3_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HATS_6_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HATS_7_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HATS_8_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HATS_9_MASK;
Image *Sexy::IMAGE_ZOMBATAR_HATS_11_MASK;
Image *Sexy::IMAGE_ZOMBATAR_BACKGROUND_BLANK;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_15;
Image *Sexy::IMAGE_ZOMBATAR_ACCESSORY_16;
Image *Sexy::IMAGE_ZOMBATAR_ACCEPT_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_ACCEPT_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_FINISHED_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_FINISHED_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_MAIN_BG;
Image *Sexy::IMAGE_ZOMBATAR_BACK_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_BACK_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_TOS_ARROW;
Image *Sexy::IMAGE_ZOMBATAR_BEGIN_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_BEGIN_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_TOS_SLIDER;
Image *Sexy::IMAGE_ZOMBATAR_TOS_SLIDER_THUMB;
Image *Sexy::IMAGE_ZOMBATAR_DISPLAY_WINDOW;
Image *Sexy::IMAGE_ZOMBATAR_MAINMENUBACK_HIGHLIGHT;
Image *Sexy::IMAGE_ZOMBATAR_VIEW_BUTTON;
Image *Sexy::IMAGE_ZOMBATAR_VIEW_BUTTON_HIGHLIGHT;

bool Sexy::ExtractDelayLoad_ZombatarResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBATAR_ACCESSORY_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BG"});
		IMAGE_ZOMBATAR_PREV_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_PREV_BUTTON"});
		IMAGE_ZOMBATAR_PREV_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_PREV_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_NEXT_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_NEXT_BUTTON"});
		IMAGE_ZOMBATAR_NEXT_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_NEXT_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_ZOMBIE_BLANK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ZOMBIE_BLANK"});
		IMAGE_ZOMBATAR_ZOMBIE_BLANK_SKIN = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ZOMBIE_BLANK_SKIN"});
		IMAGE_ZOMBATAR_BACKGROUND_CRAZYDAVE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_CRAZYDAVE"});
		IMAGE_ZOMBATAR_BACKGROUND_MENU = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_MENU"});
		IMAGE_ZOMBATAR_BACKGROUND_MENU_DOS = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_MENU_DOS"});
		IMAGE_ZOMBATAR_BACKGROUND_ROOF = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_ROOF"});
		IMAGE_ZOMBATAR_WIDGET_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_WIDGET_BG"});
		IMAGE_ZOMBATAR_WIDGET_INNER_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_WIDGET_INNER_BG"});
		IMAGE_ZOMBATAR_COLORS_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_COLORS_BG"});
		IMAGE_ZOMBATAR_LOGO = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_LOGO"});
		IMAGE_ZOMBATAR_ACCESSORY_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BUTTON"});
		IMAGE_ZOMBATAR_ACCESSORY_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_ACCESSORY_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BUTTON_OVER"});
		IMAGE_ZOMBATAR_BACKDROPS_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKDROPS_BUTTON"});
		IMAGE_ZOMBATAR_BACKDROPS_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKDROPS_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_BACKDROPS_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKDROPS_BUTTON_OVER"});
		IMAGE_ZOMBATAR_CLOTHES_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_BUTTON"});
		IMAGE_ZOMBATAR_CLOTHES_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_CLOTHES_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_BUTTON_OVER"});
		IMAGE_ZOMBATAR_EYEWEAR_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_BUTTON"});
		IMAGE_ZOMBATAR_EYEWEAR_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_EYEWEAR_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_BUTTON_OVER"});
		IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON"});
		IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_OVER"});
		IMAGE_ZOMBATAR_HAIR_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_BUTTON"});
		IMAGE_ZOMBATAR_HAIR_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_HAIR_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_BUTTON_OVER"});
		IMAGE_ZOMBATAR_HATS_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_BUTTON"});
		IMAGE_ZOMBATAR_HATS_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_HATS_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_BUTTON_OVER"});
		IMAGE_ZOMBATAR_SKIN_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_SKIN_BUTTON"});
		IMAGE_ZOMBATAR_SKIN_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_SKIN_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_TIDBITS_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_BUTTON"});
		IMAGE_ZOMBATAR_TIDBITS_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_TIDBITS_BUTTON_OVER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_BUTTON_OVER"});
		IMAGE_ZOMBATAR_ACCESSORY_BG_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BG_HIGHLIGHT"});
		IMAGE_ZOMBATAR_TRIPTYCH = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TRIPTYCH"});
		IMAGE_ZOMBATAR_COLORPICKER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_COLORPICKER"});
		IMAGE_ZOMBATAR_COLORPICKER_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_COLORPICKER_HIGHLIGHT"});
		IMAGE_ZOMBATAR_COLORPICKER_NONE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_COLORPICKER_NONE"});
		IMAGE_ZOMBATAR_ACCESSORY_BG_NONE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BG_NONE"});
		IMAGE_ZOMBATAR_COLORS_BG_SMALL = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_COLORS_BG_SMALL"});
		IMAGE_ZOMBATAR_CLOTHES_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_1"});
		IMAGE_ZOMBATAR_CLOTHES_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_2"});
		IMAGE_ZOMBATAR_CLOTHES_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_3"});
		IMAGE_ZOMBATAR_CLOTHES_4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_4"});
		IMAGE_ZOMBATAR_CLOTHES_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_5"});
		IMAGE_ZOMBATAR_CLOTHES_6 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_6"});
		IMAGE_ZOMBATAR_CLOTHES_7 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_7"});
		IMAGE_ZOMBATAR_CLOTHES_8 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_8"});
		IMAGE_ZOMBATAR_CLOTHES_9 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_9"});
		IMAGE_ZOMBATAR_CLOTHES_10 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_10"});
		IMAGE_ZOMBATAR_CLOTHES_11 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_11"});
		IMAGE_ZOMBATAR_CLOTHES_12 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_CLOTHES_12"});
		IMAGE_ZOMBATAR_HATS_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_1"});
		IMAGE_ZOMBATAR_HATS_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_2"});
		IMAGE_ZOMBATAR_HATS_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_3"});
		IMAGE_ZOMBATAR_HATS_4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_4"});
		IMAGE_ZOMBATAR_HATS_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_5"});
		IMAGE_ZOMBATAR_HATS_6 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_6"});
		IMAGE_ZOMBATAR_HATS_7 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_7"});
		IMAGE_ZOMBATAR_HATS_8 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_8"});
		IMAGE_ZOMBATAR_HATS_9 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_9"});
		IMAGE_ZOMBATAR_HATS_10 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_10"});
		IMAGE_ZOMBATAR_HATS_11 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_11"});
		IMAGE_ZOMBATAR_HATS_12 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_12"});
		IMAGE_ZOMBATAR_HATS_13 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_13"});
		IMAGE_ZOMBATAR_HATS_14 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_14"});
		IMAGE_ZOMBATAR_HAIR_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_1"});
		IMAGE_ZOMBATAR_HAIR_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_2"});
		IMAGE_ZOMBATAR_HAIR_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_3"});
		IMAGE_ZOMBATAR_HAIR_4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_4"});
		IMAGE_ZOMBATAR_HAIR_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_5"});
		IMAGE_ZOMBATAR_HAIR_6 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_6"});
		IMAGE_ZOMBATAR_HAIR_7 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_7"});
		IMAGE_ZOMBATAR_HAIR_8 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_8"});
		IMAGE_ZOMBATAR_HAIR_9 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_9"});
		IMAGE_ZOMBATAR_HAIR_10 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_10"});
		IMAGE_ZOMBATAR_HAIR_11 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_11"});
		IMAGE_ZOMBATAR_HAIR_12 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_12"});
		IMAGE_ZOMBATAR_HAIR_13 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_13"});
		IMAGE_ZOMBATAR_HAIR_14 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_14"});
		IMAGE_ZOMBATAR_HAIR_15 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_15"});
		IMAGE_ZOMBATAR_HAIR_16 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_16"});
		IMAGE_ZOMBATAR_EYEWEAR_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_1"});
		IMAGE_ZOMBATAR_EYEWEAR_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_2"});
		IMAGE_ZOMBATAR_EYEWEAR_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_3"});
		IMAGE_ZOMBATAR_EYEWEAR_4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_4"});
		IMAGE_ZOMBATAR_EYEWEAR_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_5"});
		IMAGE_ZOMBATAR_EYEWEAR_6 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_6"});
		IMAGE_ZOMBATAR_EYEWEAR_7 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_7"});
		IMAGE_ZOMBATAR_EYEWEAR_8 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_8"});
		IMAGE_ZOMBATAR_EYEWEAR_9 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_9"});
		IMAGE_ZOMBATAR_EYEWEAR_10 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_10"});
		IMAGE_ZOMBATAR_EYEWEAR_11 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_11"});
		IMAGE_ZOMBATAR_EYEWEAR_12 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_12"});
		IMAGE_ZOMBATAR_EYEWEAR_13 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_13"});
		IMAGE_ZOMBATAR_EYEWEAR_14 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_14"});
		IMAGE_ZOMBATAR_EYEWEAR_15 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_15"});
		IMAGE_ZOMBATAR_EYEWEAR_16 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_16"});
		IMAGE_ZOMBATAR_FACIALHAIR_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_1"});
		IMAGE_ZOMBATAR_FACIALHAIR_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_2"});
		IMAGE_ZOMBATAR_FACIALHAIR_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_3"});
		IMAGE_ZOMBATAR_FACIALHAIR_4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_4"});
		IMAGE_ZOMBATAR_FACIALHAIR_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_5"});
		IMAGE_ZOMBATAR_FACIALHAIR_6 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_6"});
		IMAGE_ZOMBATAR_FACIALHAIR_7 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_7"});
		IMAGE_ZOMBATAR_FACIALHAIR_8 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_8"});
		IMAGE_ZOMBATAR_FACIALHAIR_9 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_9"});
		IMAGE_ZOMBATAR_FACIALHAIR_10 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_10"});
		IMAGE_ZOMBATAR_FACIALHAIR_11 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_11"});
		IMAGE_ZOMBATAR_FACIALHAIR_12 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_12"});
		IMAGE_ZOMBATAR_FACIALHAIR_13 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_13"});
		IMAGE_ZOMBATAR_FACIALHAIR_14 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_14"});
		IMAGE_ZOMBATAR_FACIALHAIR_15 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_15"});
		IMAGE_ZOMBATAR_FACIALHAIR_16 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_16"});
		IMAGE_ZOMBATAR_FACIALHAIR_17 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_17"});
		IMAGE_ZOMBATAR_FACIALHAIR_18 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_18"});
		IMAGE_ZOMBATAR_FACIALHAIR_19 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_19"});
		IMAGE_ZOMBATAR_FACIALHAIR_20 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_20"});
		IMAGE_ZOMBATAR_FACIALHAIR_21 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_21"});
		IMAGE_ZOMBATAR_FACIALHAIR_22 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_22"});
		IMAGE_ZOMBATAR_FACIALHAIR_23 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_23"});
		IMAGE_ZOMBATAR_FACIALHAIR_24 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_24"});
		IMAGE_ZOMBATAR_TIDBITS_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_1"});
		IMAGE_ZOMBATAR_TIDBITS_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_2"});
		IMAGE_ZOMBATAR_TIDBITS_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_3"});
		IMAGE_ZOMBATAR_TIDBITS_4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_4"});
		IMAGE_ZOMBATAR_TIDBITS_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_5"});
		IMAGE_ZOMBATAR_TIDBITS_6 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_6"});
		IMAGE_ZOMBATAR_TIDBITS_7 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_7"});
		IMAGE_ZOMBATAR_TIDBITS_8 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_8"});
		IMAGE_ZOMBATAR_TIDBITS_9 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_9"});
		IMAGE_ZOMBATAR_TIDBITS_10 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_10"});
		IMAGE_ZOMBATAR_TIDBITS_11 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_11"});
		IMAGE_ZOMBATAR_TIDBITS_12 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_12"});
		IMAGE_ZOMBATAR_TIDBITS_13 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_13"});
		IMAGE_ZOMBATAR_TIDBITS_14 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TIDBITS_14"});
		IMAGE_ZOMBATAR_ACCESSORY_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_1"});
		IMAGE_ZOMBATAR_ACCESSORY_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_2"});
		IMAGE_ZOMBATAR_ACCESSORY_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_3"});
		IMAGE_ZOMBATAR_ACCESSORY_4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_4"});
		IMAGE_ZOMBATAR_ACCESSORY_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_5"});
		IMAGE_ZOMBATAR_ACCESSORY_6 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_6"});
		IMAGE_ZOMBATAR_ACCESSORY_7 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_7"});
		IMAGE_ZOMBATAR_ACCESSORY_8 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_8"});
		IMAGE_ZOMBATAR_ACCESSORY_9 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_9"});
		IMAGE_ZOMBATAR_ACCESSORY_10 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_10"});
		IMAGE_ZOMBATAR_ACCESSORY_11 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_11"});
		IMAGE_ZOMBATAR_ACCESSORY_12 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_12"});
		IMAGE_ZOMBATAR_ACCESSORY_13 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_13"});
		IMAGE_ZOMBATAR_ACCESSORY_14 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_14"});
		IMAGE_ZOMBATAR_HATS_1_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_1_MASK"});
		IMAGE_ZOMBATAR_HAIR_1_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_1_MASK"});
		IMAGE_ZOMBATAR_HAIR_2_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_2_MASK"});
		IMAGE_ZOMBATAR_HAIR_11_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_11_MASK"});
		IMAGE_ZOMBATAR_HAIR_12_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_12_MASK"});
		IMAGE_ZOMBATAR_HAIR_13_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_13_MASK"});
		IMAGE_ZOMBATAR_HAIR_14_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_14_MASK"});
		IMAGE_ZOMBATAR_HAIR_15_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HAIR_15_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_1_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_1_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_4_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_4_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_8_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_8_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_9_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_9_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_10_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_10_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_11_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_11_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_12_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_12_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_14_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_14_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_15_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_15_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_16_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_16_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_18_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_18_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_21_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_21_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_22_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_22_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_23_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_23_MASK"});
		IMAGE_ZOMBATAR_FACIALHAIR_24_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_24_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_1_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_1_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_2_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_2_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_3_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_3_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_4_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_4_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_5_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_5_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_6_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_6_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_7_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_7_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_8_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_8_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_9_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_9_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_10_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_10_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_11_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_11_MASK"});
		IMAGE_ZOMBATAR_EYEWEAR_12_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_12_MASK"});
		IMAGE_ZOMBATAR_HATS_3_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_3_MASK"});
		IMAGE_ZOMBATAR_HATS_6_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_6_MASK"});
		IMAGE_ZOMBATAR_HATS_7_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_7_MASK"});
		IMAGE_ZOMBATAR_HATS_8_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_8_MASK"});
		IMAGE_ZOMBATAR_HATS_9_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_9_MASK"});
		IMAGE_ZOMBATAR_HATS_11_MASK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_HATS_11_MASK"});
		IMAGE_ZOMBATAR_BACKGROUND_BLANK = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_BLANK"});
		IMAGE_ZOMBATAR_ACCESSORY_15 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_15"});
		IMAGE_ZOMBATAR_ACCESSORY_16 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_16"});
		IMAGE_ZOMBATAR_ACCEPT_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCEPT_BUTTON"});
		IMAGE_ZOMBATAR_ACCEPT_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_ACCEPT_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_FINISHED_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FINISHED_BUTTON"});
		IMAGE_ZOMBATAR_FINISHED_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_FINISHED_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_MAIN_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_MAIN_BG"});
		IMAGE_ZOMBATAR_BACK_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACK_BUTTON"});
		IMAGE_ZOMBATAR_BACK_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BACK_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON"});
		IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_TOS_ARROW = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TOS_ARROW"});
		IMAGE_ZOMBATAR_BEGIN_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BEGIN_BUTTON"});
		IMAGE_ZOMBATAR_BEGIN_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_BEGIN_BUTTON_HIGHLIGHT"});
		IMAGE_ZOMBATAR_TOS_SLIDER = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TOS_SLIDER"});
		IMAGE_ZOMBATAR_TOS_SLIDER_THUMB = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_TOS_SLIDER_THUMB"});
		IMAGE_ZOMBATAR_DISPLAY_WINDOW = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_DISPLAY_WINDOW"});
		IMAGE_ZOMBATAR_MAINMENUBACK_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_MAINMENUBACK_HIGHLIGHT"});
		IMAGE_ZOMBATAR_VIEW_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_VIEW_BUTTON"});
		IMAGE_ZOMBATAR_VIEW_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBATAR_VIEW_BUTTON_HIGHLIGHT"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieFinalNote Resources
Image *Sexy::IMAGE_ZOMBIE_FINAL_NOTE;

bool Sexy::ExtractDelayLoad_ZombieFinalNoteResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_FINAL_NOTE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_FINAL_NOTE"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote Resources
Image *Sexy::IMAGE_ZOMBIE_NOTE;

bool Sexy::ExtractDelayLoad_ZombieNoteResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_NOTE"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote1 Resources
Image *Sexy::IMAGE_ZOMBIE_NOTE1;

bool Sexy::ExtractDelayLoad_ZombieNote1Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_NOTE1"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote2 Resources
Image *Sexy::IMAGE_ZOMBIE_NOTE2;

bool Sexy::ExtractDelayLoad_ZombieNote2Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_NOTE2"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote3 Resources
Image *Sexy::IMAGE_ZOMBIE_NOTE3;

bool Sexy::ExtractDelayLoad_ZombieNote3Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_NOTE3"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNote4 Resources
Image *Sexy::IMAGE_ZOMBIE_NOTE4;

bool Sexy::ExtractDelayLoad_ZombieNote4Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_NOTE4"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_ZombieNoteHelp Resources
Image *Sexy::IMAGE_ZOMBIE_NOTE_HELP;

bool Sexy::ExtractDelayLoad_ZombieNoteHelpResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ZOMBIE_NOTE_HELP = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_NOTE_HELP"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// DelayLoad_Zombiquarium Resources
Image *Sexy::IMAGE_AQUARIUM1;
Image *Sexy::IMAGE_WAVECENTER;
Image *Sexy::IMAGE_WAVESIDE;

bool Sexy::ExtractDelayLoad_ZombiquariumResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_AQUARIUM1 = aMgr.GetImageThrow({"PVZ", "IMAGE_AQUARIUM1"});
		IMAGE_WAVECENTER = aMgr.GetImageThrow({"PVZ", "IMAGE_WAVECENTER"});
		IMAGE_WAVESIDE = aMgr.GetImageThrow({"PVZ", "IMAGE_WAVESIDE"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// Init Resources
Image *Sexy::IMAGE_BLANK;
Image *Sexy::IMAGE_POPCAP_LOGO;
Image *Sexy::IMAGE_PARTNER_LOGO;

bool Sexy::ExtractInitResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_BLANK = aMgr.GetImageThrow({"PVZ", "IMAGE_BLANK"});
		IMAGE_POPCAP_LOGO = aMgr.GetImageThrow({"PVZ", "IMAGE_POPCAP_LOGO"});
		IMAGE_PARTNER_LOGO = aMgr.GetImageThrow({"PVZ", "IMAGE_PARTNER_LOGO"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// LoaderBar Resources
Image *Sexy::IMAGE_TITLESCREEN;
Image *Sexy::IMAGE_LOADBAR_DIRT;
Image *Sexy::IMAGE_LOADBAR_GRASS;
Image *Sexy::IMAGE_PVZ_LOGO;
Image *Sexy::IMAGE_REANIM_SODROLLCAP;
Font *Sexy::FONT_BRIANNETOD16;
int Sexy::SOUND_BUTTONCLICK;
int Sexy::SOUND_LOADINGBAR_FLOWER;
int Sexy::SOUND_LOADINGBAR_ZOMBIE;

bool Sexy::ExtractLoaderBarResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_TITLESCREEN = aMgr.GetImageThrow({"PVZ", "IMAGE_TITLESCREEN"});
		IMAGE_LOADBAR_DIRT = aMgr.GetImageThrow({"PVZ", "IMAGE_LOADBAR_DIRT"});
		IMAGE_LOADBAR_GRASS = aMgr.GetImageThrow({"PVZ", "IMAGE_LOADBAR_GRASS"});
		IMAGE_PVZ_LOGO = aMgr.GetImageThrow({"PVZ", "IMAGE_PVZ_LOGO"});
		IMAGE_REANIM_SODROLLCAP = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SODROLLCAP"});
		FONT_BRIANNETOD16 = aMgr.GetFontThrow({"PVZ", "FONT_BRIANNETOD16"});
		SOUND_BUTTONCLICK = aMgr.GetSoundThrow({"PVZ", "SOUND_BUTTONCLICK"});
		SOUND_LOADINGBAR_FLOWER = aMgr.GetSoundThrow({"PVZ", "SOUND_LOADINGBAR_FLOWER"});
		SOUND_LOADINGBAR_ZOMBIE = aMgr.GetSoundThrow({"PVZ", "SOUND_LOADINGBAR_ZOMBIE"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// LoadingFonts Resources
Image *Sexy::FONT_IMAGE_HOUSEOFTERROR28;
Font *Sexy::FONT_HOUSEOFTERROR28;
Font *Sexy::FONT_HOUSEOFTERROR20;
Font *Sexy::FONT_HOUSEOFTERROR16;
Font *Sexy::FONT_TINYBOLD;
Font *Sexy::FONT_CONTINUUMBOLD14;
Font *Sexy::FONT_CONTINUUMBOLD14OUTLINE;
Font *Sexy::FONT_DWARVENTODCRAFT12;
Font *Sexy::FONT_DWARVENTODCRAFT15;
Font *Sexy::FONT_DWARVENTODCRAFT18;
Font *Sexy::FONT_DWARVENTODCRAFT18BRIGHTGREENINSET;
Font *Sexy::FONT_DWARVENTODCRAFT18GREENINSET;
Font *Sexy::FONT_DWARVENTODCRAFT18YELLOW;
Font *Sexy::FONT_DWARVENTODCRAFT24;
Font *Sexy::FONT_DWARVENTODCRAFT36BRIGHTGREENINSET;
Font *Sexy::FONT_DWARVENTODCRAFT36GREENINSET;
Font *Sexy::FONT_PICO129;
Font *Sexy::FONT_BRIANNETOD12;

bool Sexy::ExtractLoadingFontsResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_IMAGE_HOUSEOFTERROR28 = aMgr.GetImageThrow({"PVZ", "FONT_IMAGE_HOUSEOFTERROR28"});
		FONT_HOUSEOFTERROR28 = aMgr.GetFontThrow({"PVZ", "FONT_HOUSEOFTERROR28"});
		FONT_HOUSEOFTERROR20 = aMgr.GetFontThrow({"PVZ", "FONT_HOUSEOFTERROR20"});
		FONT_HOUSEOFTERROR16 = aMgr.GetFontThrow({"PVZ", "FONT_HOUSEOFTERROR16"});
		FONT_TINYBOLD = aMgr.GetFontThrow({"PVZ", "FONT_TINYBOLD"});
		FONT_CONTINUUMBOLD14 = aMgr.GetFontThrow({"PVZ", "FONT_CONTINUUMBOLD14"});
		FONT_CONTINUUMBOLD14OUTLINE = aMgr.GetFontThrow({"PVZ", "FONT_CONTINUUMBOLD14OUTLINE"});
		FONT_DWARVENTODCRAFT12 = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT12"});
		FONT_DWARVENTODCRAFT15 = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT15"});
		FONT_DWARVENTODCRAFT18 = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT18"});
		FONT_DWARVENTODCRAFT18BRIGHTGREENINSET = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT18BRIGHTGREENINSET"});
		FONT_DWARVENTODCRAFT18GREENINSET = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT18GREENINSET"});
		FONT_DWARVENTODCRAFT18YELLOW = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT18YELLOW"});
		FONT_DWARVENTODCRAFT24 = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT24"});
		FONT_DWARVENTODCRAFT36BRIGHTGREENINSET = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT36BRIGHTGREENINSET"});
		FONT_DWARVENTODCRAFT36GREENINSET = aMgr.GetFontThrow({"PVZ", "FONT_DWARVENTODCRAFT36GREENINSET"});
		FONT_PICO129 = aMgr.GetFontThrow({"PVZ", "FONT_PICO129"});
		FONT_BRIANNETOD12 = aMgr.GetFontThrow({"PVZ", "FONT_BRIANNETOD12"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// LoadingImages Resources
Image *Sexy::IMAGE_EDITBOX;
Image *Sexy::IMAGE_DIALOG_TOPLEFT;
Image *Sexy::IMAGE_DIALOG_TOPMIDDLE;
Image *Sexy::IMAGE_DIALOG_TOPRIGHT;
Image *Sexy::IMAGE_DIALOG_CENTERLEFT;
Image *Sexy::IMAGE_DIALOG_CENTERMIDDLE;
Image *Sexy::IMAGE_DIALOG_CENTERRIGHT;
Image *Sexy::IMAGE_DIALOG_BOTTOMLEFT;
Image *Sexy::IMAGE_DIALOG_BOTTOMMIDDLE;
Image *Sexy::IMAGE_DIALOG_BOTTOMRIGHT;
Image *Sexy::IMAGE_DIALOG_BIGBOTTOMLEFT;
Image *Sexy::IMAGE_DIALOG_BIGBOTTOMMIDDLE;
Image *Sexy::IMAGE_DIALOG_BIGBOTTOMRIGHT;
Image *Sexy::IMAGE_DIALOG_HEADER;
Image *Sexy::IMAGE_BUTTON_LEFT;
Image *Sexy::IMAGE_BUTTON_MIDDLE;
Image *Sexy::IMAGE_BUTTON_RIGHT;
Image *Sexy::IMAGE_BUTTON_DOWN_LEFT;
Image *Sexy::IMAGE_BUTTON_DOWN_MIDDLE;
Image *Sexy::IMAGE_BUTTON_DOWN_RIGHT;
Image *Sexy::IMAGE_SEEDCHOOSER_BACKGROUND;
Image *Sexy::IMAGE_SEEDCHOOSER_BUTTON;
Image *Sexy::IMAGE_SEEDCHOOSER_BUTTON_DISABLED;
Image *Sexy::IMAGE_SEEDCHOOSER_BUTTON_GLOW;
Image *Sexy::IMAGE_SEEDCHOOSER_BUTTON2;
Image *Sexy::IMAGE_SEEDCHOOSER_BUTTON2_GLOW;
Image *Sexy::IMAGE_SEEDCHOOSER_IMITATERADDON;
Image *Sexy::IMAGE_SEEDS;
Image *Sexy::IMAGE_SEEDPACKET_LARGER;
Image *Sexy::IMAGE_SEEDPACKETSILHOUETTE;
Image *Sexy::IMAGE_FLAGMETER;
Image *Sexy::IMAGE_FLAGMETERLEVELPROGRESS;
Image *Sexy::IMAGE_FLAGMETERPARTS;
Image *Sexy::IMAGE_TROPHY;
Image *Sexy::IMAGE_TROPHY_HI_RES;
Image *Sexy::IMAGE_MINIGAME_TROPHY;
Image *Sexy::IMAGE_ZOMBIE_NOTE_SMALL;
Image *Sexy::IMAGE_TACO;
Image *Sexy::IMAGE_CARKEYS;
Image *Sexy::IMAGE_ALMANAC;
Image *Sexy::IMAGE_ICON_POOLCLEANER;
Image *Sexy::IMAGE_ICON_ROOFCLEANER;
Image *Sexy::IMAGE_ICON_RAKE;
Image *Sexy::IMAGE_BRAIN;
Image *Sexy::IMAGE_MONEYBAG;
Image *Sexy::IMAGE_MONEYBAG_HI_RES;
Image *Sexy::IMAGE_CHOCOLATE;
Image *Sexy::IMAGE_OPTIONS_BACKTOGAMEBUTTON0;
Image *Sexy::IMAGE_OPTIONS_BACKTOGAMEBUTTON2;
Image *Sexy::IMAGE_OPTIONS_CHECKBOX0;
Image *Sexy::IMAGE_OPTIONS_CHECKBOX1;
Image *Sexy::IMAGE_OPTIONS_MENUBACK;
Image *Sexy::IMAGE_OPTIONS_SLIDERKNOB2;
Image *Sexy::IMAGE_OPTIONS_SLIDERSLOT;
Image *Sexy::IMAGE_SELECTORSCREEN_HELP1;
Image *Sexy::IMAGE_SELECTORSCREEN_HELP2;
Image *Sexy::IMAGE_SELECTORSCREEN_OPTIONS1;
Image *Sexy::IMAGE_SELECTORSCREEN_OPTIONS2;
Image *Sexy::IMAGE_SELECTORSCREEN_QUIT1;
Image *Sexy::IMAGE_SELECTORSCREEN_QUIT2;
Image *Sexy::IMAGE_SELECTORSCREEN_ALMANAC;
Image *Sexy::IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT;
Image *Sexy::IMAGE_SELECTORSCREEN_STORE;
Image *Sexy::IMAGE_SELECTORSCREEN_STOREHIGHLIGHT;
Image *Sexy::IMAGE_SELECTORSCREEN_LEVELNUMBERS;
Image *Sexy::IMAGE_SELECTORSCREEN_ZENGARDEN;
Image *Sexy::IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT;
Image *Sexy::IMAGE_STORE_SPEECHBUBBLE;
Image *Sexy::IMAGE_STORE_SPEECHBUBBLE2;
Image *Sexy::IMAGE_SELECTORSCREEN_ACHIEVEMENTS_BG;
Image *Sexy::IMAGE_SELECTORSCREEN_MOREWAYSTOPLAY_BG;
Image *Sexy::IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL;
Image *Sexy::IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL_PRESS;
Image *Sexy::IMAGE_ACHEESEMENTS_BEJEWELED;
Image *Sexy::IMAGE_ACHEESEMENTS_BOOKWORM;
Image *Sexy::IMAGE_ACHEESEMENTS_CHINA;
Image *Sexy::IMAGE_ACHEESEMENTS_CHUZZLE;
Image *Sexy::IMAGE_ACHEESEMENTS_HOLE_TILE;
Image *Sexy::IMAGE_ACHEESEMENTS_PEGGLE;
Image *Sexy::IMAGE_ACHEESEMENTS_PIPE;
Image *Sexy::IMAGE_ACHEESEMENTS_ZUMA;
Image *Sexy::IMAGE_ACHEESEMENTS_ICONS;
Image *Sexy::IMAGE_ACHEESEMENTS_BACK_HIGHLIGHT;
Image *Sexy::IMAGE_QUICKPLAY_MINIGAMES_BUTTON;
Image *Sexy::IMAGE_QUICKPLAY_MINIGAMES_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_QUICKPLAY_MINIGAMES_CLOUD;
Image *Sexy::IMAGE_QUICKPLAY_PUZZLES_BUTTON;
Image *Sexy::IMAGE_QUICKPLAY_PUZZLES_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_QUICKPLAY_PUZZLES_CLOUD;
Image *Sexy::IMAGE_QUICKPLAY_SURVIVAL_BUTTON;
Image *Sexy::IMAGE_QUICKPLAY_SURVIVAL_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_QUICKPLAY_SURVIVAL_CLOUD;
Image *Sexy::IMAGE_QUICKPLAY_BACK_BUTTON;
Image *Sexy::IMAGE_QUICKPLAY_BACK_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ACHEESEMENTS_MORE_ROCK;
Image *Sexy::IMAGE_ACHEESEMENTS_MORE_BUTTON;
Image *Sexy::IMAGE_ACHEESEMENTS_MORE_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_ACHEESEMENTS_TOP_BUTTON;
Image *Sexy::IMAGE_ACHEESEMENTS_TOP_BUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_SHOVEL;
Image *Sexy::IMAGE_SHOVEL_HI_RES;
Image *Sexy::IMAGE_TOMBSTONES;
Image *Sexy::IMAGE_TOMBSTONE_MOUNDS;
Image *Sexy::IMAGE_NIGHT_GRAVE_GRAPHIC;
Image *Sexy::IMAGE_CRATER;
Image *Sexy::IMAGE_CRATER_FADING;
Image *Sexy::IMAGE_CRATER_ROOF_CENTER;
Image *Sexy::IMAGE_CRATER_ROOF_LEFT;
Image *Sexy::IMAGE_CRATER_WATER_DAY;
Image *Sexy::IMAGE_CRATER_WATER_NIGHT;
Image *Sexy::IMAGE_COBCANNON_TARGET;
Image *Sexy::IMAGE_COBCANNON_POPCORN;
Image *Sexy::IMAGE_FERTILIZER;
Image *Sexy::IMAGE_WATERINGCAN;
Image *Sexy::IMAGE_WATERINGCANGOLD;
Image *Sexy::IMAGE_PHONOGRAPH;
Image *Sexy::IMAGE_BEGHOULED_TWIST_OVERLAY;
Image *Sexy::IMAGE_ZEN_GOLDTOOLRETICLE;
Image *Sexy::IMAGE_ZEN_GARDENGLOVE;
Image *Sexy::IMAGE_ZEN_MONEYSIGN;
Image *Sexy::IMAGE_ZEN_NEXTGARDEN;
Image *Sexy::IMAGE_ZEN_WHEELBARROW;
Image *Sexy::IMAGE_ZENSHOPBUTTON;
Image *Sexy::IMAGE_ZENSHOPBUTTON_HIGHLIGHT;
Image *Sexy::IMAGE_PRESENT;
Image *Sexy::IMAGE_PRESENTOPEN;
Image *Sexy::IMAGE_SUNFLOWER_TROPHY;
Image *Sexy::IMAGE_SLOTMACHINE_OVERLAY;
Image *Sexy::IMAGE_SCARY_POT;
Image *Sexy::IMAGE_BUG_SPRAY;
Image *Sexy::IMAGE_PLANTSPEECHBUBBLE;
Image *Sexy::IMAGE_WATERDROP;
Image *Sexy::IMAGE_TREEFOOD;
Image *Sexy::IMAGE_PACKET_PLANTS;
Image *Sexy::IMAGE_ZEN_NEED_ICONS;
Image *Sexy::IMAGE_PROJECTILEPEA;
Image *Sexy::IMAGE_PROJECTILESNOWPEA;
Image *Sexy::IMAGE_PROJECTILECACTUS;
Image *Sexy::IMAGE_DIRTSMALL;
Image *Sexy::IMAGE_DIRTBIG;
Image *Sexy::IMAGE_ROCKSMALL;
Image *Sexy::IMAGE_WATERPARTICLE;
Image *Sexy::IMAGE_WHITEWATER;
Image *Sexy::IMAGE_WHITEWATER_SHADOW;
Image *Sexy::IMAGE_MELONPULT_PARTICLES;
Image *Sexy::IMAGE_WINTERMELON_PARTICLES;
Image *Sexy::IMAGE_PROJECTILE_STAR;
Image *Sexy::IMAGE_SEEDBANK;
Image *Sexy::IMAGE_CONVEYORBELT_BACKDROP;
Image *Sexy::IMAGE_CONVEYORBELT;
Image *Sexy::IMAGE_SHOVELBANK;
Image *Sexy::IMAGE_SUNBANK;
Image *Sexy::IMAGE_COINBANK;
Image *Sexy::IMAGE_POOL;
Image *Sexy::IMAGE_POOL_NIGHT;
Image *Sexy::IMAGE_POOL_BASE;
Image *Sexy::IMAGE_POOL_BASE_NIGHT;
Image *Sexy::IMAGE_POOL_SHADING;
Image *Sexy::IMAGE_POOL_SHADING_NIGHT;
Image *Sexy::IMAGE_POOL_CAUSTIC_EFFECT;
Image *Sexy::IMAGE_PLANTSHADOW;
Image *Sexy::IMAGE_PLANTSHADOW2;
Image *Sexy::IMAGE_PEA_SHADOWS;
Image *Sexy::IMAGE_WALLNUT_BOWLINGSTRIPE;
Image *Sexy::IMAGE_ICE;
Image *Sexy::IMAGE_ICE_CAP;
Image *Sexy::IMAGE_ICE_SPARKLES;
Image *Sexy::IMAGE_IMITATERSEED;
Image *Sexy::IMAGE_ALMANAC_IMITATER;
Image *Sexy::IMAGE_IMITATERSEEDDISABLED;
Image *Sexy::IMAGE_ICETRAP;
Image *Sexy::IMAGE_ICETRAP2;
Image *Sexy::IMAGE_ICETRAP_PARTICLES;
Image *Sexy::IMAGE_ZOMBIE_BOBSLED1;
Image *Sexy::IMAGE_ZOMBIE_BOBSLED2;
Image *Sexy::IMAGE_ZOMBIE_BOBSLED3;
Image *Sexy::IMAGE_ZOMBIE_BOBSLED4;
Image *Sexy::IMAGE_ZOMBIE_BOBSLED_INSIDE;
Image *Sexy::IMAGE_BUNGEECORD;
Image *Sexy::IMAGE_BUNGEETARGET;
Image *Sexy::IMAGE_SPOTLIGHT;
Image *Sexy::IMAGE_SPOTLIGHT2;
Image *Sexy::IMAGE_WHITEPIXEL;
Image *Sexy::IMAGE_ZOMBIEPOLEVAULTERHEAD;
Image *Sexy::IMAGE_ZOMBIEFOOTBALLHEAD;
Image *Sexy::IMAGE_POOLSPARKLY;
Image *Sexy::IMAGE_WALLNUTPARTICLESSMALL;
Image *Sexy::IMAGE_WALLNUTPARTICLESLARGE;
Image *Sexy::IMAGE_PEA_SPLATS;
Image *Sexy::IMAGE_STAR_PARTICLES;
Image *Sexy::IMAGE_STAR_SPLATS;
Image *Sexy::IMAGE_PEA_PARTICLES;
Image *Sexy::IMAGE_SNOWPEA_SPLATS;
Image *Sexy::IMAGE_SNOWPEA_PARTICLES;
Image *Sexy::IMAGE_SNOWPEA_PUFF;
Image *Sexy::IMAGE_SNOWFLAKES;
Image *Sexy::IMAGE_POTATOMINE_PARTICLES;
Image *Sexy::IMAGE_PUFFSHROOM_PUFF1;
Image *Sexy::IMAGE_ZAMBONISMOKE;
Image *Sexy::IMAGE_ZOMBIEDANCERHEAD;
Image *Sexy::IMAGE_ZOMBIEBALLOONHEAD;
Image *Sexy::IMAGE_ZOMBIEIMPHEAD;
Image *Sexy::IMAGE_ZOMBIEDIGGERHEAD;
Image *Sexy::IMAGE_ZOMBIEDIGGERARM;
Image *Sexy::IMAGE_ZOMBIEDOLPHINRIDERHEAD;
Image *Sexy::IMAGE_ZOMBIEPOGO;
Image *Sexy::IMAGE_ZOMBIEBACKUPDANCERHEAD;
Image *Sexy::IMAGE_ZOMBIEBOBSLEDHEAD;
Image *Sexy::IMAGE_ZOMBIELADDERHEAD;
Image *Sexy::IMAGE_ZOMBIEYETIHEAD;
Image *Sexy::IMAGE_SEEDPACKETFLASH;
Image *Sexy::IMAGE_ZOMBIEJACKBOXARM;
Image *Sexy::IMAGE_IMITATERCLOUDS;
Image *Sexy::IMAGE_IMITATERPUFFS;
Image *Sexy::IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES;
Image *Sexy::IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES;
Image *Sexy::IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES;
Image *Sexy::IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES;
Image *Sexy::IMAGE_DOOMSHROOM_EXPLOSION_BASE;
Image *Sexy::IMAGE_RAIN;
Image *Sexy::IMAGE_VASE_CHUNKS;
Image *Sexy::IMAGE_ZOMBOSS_PARTICLES;
Image *Sexy::IMAGE_AWARDPICKUPGLOW;
Image *Sexy::IMAGE_ZOMBIE_SEAWEED;
Image *Sexy::IMAGE_PINATA;
Image *Sexy::IMAGE_ZOMBIEFUTUREGLASSES;
Image *Sexy::IMAGE_DUST_PUFFS;
Image *Sexy::IMAGE_REANIM_WALLNUT_BODY;
Image *Sexy::IMAGE_REANIM_WALLNUT_CRACKED1;
Image *Sexy::IMAGE_REANIM_WALLNUT_CRACKED2;
Image *Sexy::IMAGE_REANIM_TALLNUT_CRACKED1;
Image *Sexy::IMAGE_REANIM_TALLNUT_CRACKED2;
Image *Sexy::IMAGE_REANIM_PUMPKIN_DAMAGE1;
Image *Sexy::IMAGE_REANIM_PUMPKIN_DAMAGE3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CONE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CONE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CONE3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BUCKET1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BUCKET2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BUCKET3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_SCREENDOOR1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_SCREENDOOR2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_SCREENDOOR3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_FLAG1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_FLAG3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET;
Image *Sexy::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND;
Image *Sexy::IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER;
Image *Sexy::IMAGE_REANIM_ZOMBIE_PAPER_PAPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_PAPER_PAPER3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD;
Image *Sexy::IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT;
Image *Sexy::IMAGE_REANIM_COIN_SILVER_DOLLAR;
Image *Sexy::IMAGE_REANIM_COIN_GOLD_DOLLAR;
Image *Sexy::IMAGE_REANIM_DIAMOND;
Image *Sexy::IMAGE_REANIM_COINGLOW;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_HAND;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BACKUP_INNERARM_HAND;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BACKUP_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_OUTERARM_HAND;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_IMP_ARM2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND;
Image *Sexy::IMAGE_REANIM_ZOMBIE_JACKBOX_BOX;
Image *Sexy::IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL;
Image *Sexy::IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_LADDER_1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_LADDER_5;
Image *Sexy::IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE;
Image *Sexy::IMAGE_REANIM_CABBAGEPULT_CABBAGE;
Image *Sexy::IMAGE_REANIM_CORNPULT_KERNAL;
Image *Sexy::IMAGE_REANIM_CORNPULT_BUTTER;
Image *Sexy::IMAGE_REANIM_CORNPULT_BUTTER_SPLAT;
Image *Sexy::IMAGE_REANIM_MELONPULT_MELON;
Image *Sexy::IMAGE_REANIM_WINTERMELON_PROJECTILE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE;
Image *Sexy::IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT;
Image *Sexy::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1;
Image *Sexy::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3;
Image *Sexy::IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4;
Image *Sexy::IMAGE_REANIM_GARLIC_BODY2;
Image *Sexy::IMAGE_REANIM_GARLIC_BODY3;
Image *Sexy::IMAGE_REANIM_COBCANNON_COB;
Image *Sexy::IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND;
Image *Sexy::IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_WOODSIGN3_PRESS;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_BG;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW;
Image *Sexy::IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW;
Image *Sexy::IMAGE_REANIM_TREE_BG;
Image *Sexy::IMAGE_REANIM_POT_TOP_DARK;
Image *Sexy::IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE;
Image *Sexy::IMAGE_REANIM_STINKY_TURN3;
Image *Sexy::IMAGE_REANIM_CRAZYDAVE_MOUTH1;
Image *Sexy::IMAGE_REANIM_CRAZYDAVE_MOUTH4;
Image *Sexy::IMAGE_REANIM_CRAZYDAVE_MOUTH5;
Image *Sexy::IMAGE_REANIM_CRAZYDAVE_MOUTH6;
Image *Sexy::IMAGE_REANIM_ZOMBIE_MUSTACHE2;
Image *Sexy::IMAGE_REANIM_ZOMBIE_MUSTACHE3;

bool Sexy::ExtractLoadingImagesResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_EDITBOX = aMgr.GetImageThrow({"PVZ", "IMAGE_EDITBOX"});
		IMAGE_DIALOG_TOPLEFT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_TOPLEFT"});
		IMAGE_DIALOG_TOPMIDDLE = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_TOPMIDDLE"});
		IMAGE_DIALOG_TOPRIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_TOPRIGHT"});
		IMAGE_DIALOG_CENTERLEFT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_CENTERLEFT"});
		IMAGE_DIALOG_CENTERMIDDLE = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_CENTERMIDDLE"});
		IMAGE_DIALOG_CENTERRIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_CENTERRIGHT"});
		IMAGE_DIALOG_BOTTOMLEFT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_BOTTOMLEFT"});
		IMAGE_DIALOG_BOTTOMMIDDLE = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_BOTTOMMIDDLE"});
		IMAGE_DIALOG_BOTTOMRIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_BOTTOMRIGHT"});
		IMAGE_DIALOG_BIGBOTTOMLEFT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_BIGBOTTOMLEFT"});
		IMAGE_DIALOG_BIGBOTTOMMIDDLE = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_BIGBOTTOMMIDDLE"});
		IMAGE_DIALOG_BIGBOTTOMRIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_BIGBOTTOMRIGHT"});
		IMAGE_DIALOG_HEADER = aMgr.GetImageThrow({"PVZ", "IMAGE_DIALOG_HEADER"});
		IMAGE_BUTTON_LEFT = aMgr.GetImageThrow({"PVZ", "IMAGE_BUTTON_LEFT"});
		IMAGE_BUTTON_MIDDLE = aMgr.GetImageThrow({"PVZ", "IMAGE_BUTTON_MIDDLE"});
		IMAGE_BUTTON_RIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_BUTTON_RIGHT"});
		IMAGE_BUTTON_DOWN_LEFT = aMgr.GetImageThrow({"PVZ", "IMAGE_BUTTON_DOWN_LEFT"});
		IMAGE_BUTTON_DOWN_MIDDLE = aMgr.GetImageThrow({"PVZ", "IMAGE_BUTTON_DOWN_MIDDLE"});
		IMAGE_BUTTON_DOWN_RIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_BUTTON_DOWN_RIGHT"});
		IMAGE_SEEDCHOOSER_BACKGROUND = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDCHOOSER_BACKGROUND"});
		IMAGE_SEEDCHOOSER_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDCHOOSER_BUTTON"});
		IMAGE_SEEDCHOOSER_BUTTON_DISABLED = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDCHOOSER_BUTTON_DISABLED"});
		IMAGE_SEEDCHOOSER_BUTTON_GLOW = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDCHOOSER_BUTTON_GLOW"});
		IMAGE_SEEDCHOOSER_BUTTON2 = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDCHOOSER_BUTTON2"});
		IMAGE_SEEDCHOOSER_BUTTON2_GLOW = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDCHOOSER_BUTTON2_GLOW"});
		IMAGE_SEEDCHOOSER_IMITATERADDON = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDCHOOSER_IMITATERADDON"});
		IMAGE_SEEDS = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDS"});
		IMAGE_SEEDPACKET_LARGER = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDPACKET_LARGER"});
		IMAGE_SEEDPACKETSILHOUETTE = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDPACKETSILHOUETTE"});
		IMAGE_FLAGMETER = aMgr.GetImageThrow({"PVZ", "IMAGE_FLAGMETER"});
		IMAGE_FLAGMETERLEVELPROGRESS = aMgr.GetImageThrow({"PVZ", "IMAGE_FLAGMETERLEVELPROGRESS"});
		IMAGE_FLAGMETERPARTS = aMgr.GetImageThrow({"PVZ", "IMAGE_FLAGMETERPARTS"});
		IMAGE_TROPHY = aMgr.GetImageThrow({"PVZ", "IMAGE_TROPHY"});
		IMAGE_TROPHY_HI_RES = aMgr.GetImageThrow({"PVZ", "IMAGE_TROPHY_HI_RES"});
		IMAGE_MINIGAME_TROPHY = aMgr.GetImageThrow({"PVZ", "IMAGE_MINIGAME_TROPHY"});
		IMAGE_ZOMBIE_NOTE_SMALL = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_NOTE_SMALL"});
		IMAGE_TACO = aMgr.GetImageThrow({"PVZ", "IMAGE_TACO"});
		IMAGE_CARKEYS = aMgr.GetImageThrow({"PVZ", "IMAGE_CARKEYS"});
		IMAGE_ALMANAC = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC"});
		IMAGE_ICON_POOLCLEANER = aMgr.GetImageThrow({"PVZ", "IMAGE_ICON_POOLCLEANER"});
		IMAGE_ICON_ROOFCLEANER = aMgr.GetImageThrow({"PVZ", "IMAGE_ICON_ROOFCLEANER"});
		IMAGE_ICON_RAKE = aMgr.GetImageThrow({"PVZ", "IMAGE_ICON_RAKE"});
		IMAGE_BRAIN = aMgr.GetImageThrow({"PVZ", "IMAGE_BRAIN"});
		IMAGE_MONEYBAG = aMgr.GetImageThrow({"PVZ", "IMAGE_MONEYBAG"});
		IMAGE_MONEYBAG_HI_RES = aMgr.GetImageThrow({"PVZ", "IMAGE_MONEYBAG_HI_RES"});
		IMAGE_CHOCOLATE = aMgr.GetImageThrow({"PVZ", "IMAGE_CHOCOLATE"});
		IMAGE_OPTIONS_BACKTOGAMEBUTTON0 = aMgr.GetImageThrow({"PVZ", "IMAGE_OPTIONS_BACKTOGAMEBUTTON0"});
		IMAGE_OPTIONS_BACKTOGAMEBUTTON2 = aMgr.GetImageThrow({"PVZ", "IMAGE_OPTIONS_BACKTOGAMEBUTTON2"});
		IMAGE_OPTIONS_CHECKBOX0 = aMgr.GetImageThrow({"PVZ", "IMAGE_OPTIONS_CHECKBOX0"});
		IMAGE_OPTIONS_CHECKBOX1 = aMgr.GetImageThrow({"PVZ", "IMAGE_OPTIONS_CHECKBOX1"});
		IMAGE_OPTIONS_MENUBACK = aMgr.GetImageThrow({"PVZ", "IMAGE_OPTIONS_MENUBACK"});
		IMAGE_OPTIONS_SLIDERKNOB2 = aMgr.GetImageThrow({"PVZ", "IMAGE_OPTIONS_SLIDERKNOB2"});
		IMAGE_OPTIONS_SLIDERSLOT = aMgr.GetImageThrow({"PVZ", "IMAGE_OPTIONS_SLIDERSLOT"});
		IMAGE_SELECTORSCREEN_HELP1 = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_HELP1"});
		IMAGE_SELECTORSCREEN_HELP2 = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_HELP2"});
		IMAGE_SELECTORSCREEN_OPTIONS1 = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_OPTIONS1"});
		IMAGE_SELECTORSCREEN_OPTIONS2 = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_OPTIONS2"});
		IMAGE_SELECTORSCREEN_QUIT1 = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_QUIT1"});
		IMAGE_SELECTORSCREEN_QUIT2 = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_QUIT2"});
		IMAGE_SELECTORSCREEN_ALMANAC = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_ALMANAC"});
		IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT"});
		IMAGE_SELECTORSCREEN_STORE = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_STORE"});
		IMAGE_SELECTORSCREEN_STOREHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_STOREHIGHLIGHT"});
		IMAGE_SELECTORSCREEN_LEVELNUMBERS = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_LEVELNUMBERS"});
		IMAGE_SELECTORSCREEN_ZENGARDEN = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_ZENGARDEN"});
		IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT"});
		IMAGE_STORE_SPEECHBUBBLE = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_SPEECHBUBBLE"});
		IMAGE_STORE_SPEECHBUBBLE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_STORE_SPEECHBUBBLE2"});
		IMAGE_SELECTORSCREEN_ACHIEVEMENTS_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_ACHIEVEMENTS_BG"});
		IMAGE_SELECTORSCREEN_MOREWAYSTOPLAY_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_MOREWAYSTOPLAY_BG"});
		IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL"});
		IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL_PRESS = aMgr.GetImageThrow({"PVZ", "IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL_PRESS"});
		IMAGE_ACHEESEMENTS_BEJEWELED = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_BEJEWELED"});
		IMAGE_ACHEESEMENTS_BOOKWORM = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_BOOKWORM"});
		IMAGE_ACHEESEMENTS_CHINA = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_CHINA"});
		IMAGE_ACHEESEMENTS_CHUZZLE = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_CHUZZLE"});
		IMAGE_ACHEESEMENTS_HOLE_TILE = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_HOLE_TILE"});
		IMAGE_ACHEESEMENTS_PEGGLE = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_PEGGLE"});
		IMAGE_ACHEESEMENTS_PIPE = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_PIPE"});
		IMAGE_ACHEESEMENTS_ZUMA = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_ZUMA"});
		IMAGE_ACHEESEMENTS_ICONS = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_ICONS"});
		IMAGE_ACHEESEMENTS_BACK_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_BACK_HIGHLIGHT"});
		IMAGE_QUICKPLAY_MINIGAMES_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_MINIGAMES_BUTTON"});
		IMAGE_QUICKPLAY_MINIGAMES_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_MINIGAMES_BUTTON_HIGHLIGHT"});
		IMAGE_QUICKPLAY_MINIGAMES_CLOUD = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_MINIGAMES_CLOUD"});
		IMAGE_QUICKPLAY_PUZZLES_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_PUZZLES_BUTTON"});
		IMAGE_QUICKPLAY_PUZZLES_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_PUZZLES_BUTTON_HIGHLIGHT"});
		IMAGE_QUICKPLAY_PUZZLES_CLOUD = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_PUZZLES_CLOUD"});
		IMAGE_QUICKPLAY_SURVIVAL_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_SURVIVAL_BUTTON"});
		IMAGE_QUICKPLAY_SURVIVAL_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_SURVIVAL_BUTTON_HIGHLIGHT"});
		IMAGE_QUICKPLAY_SURVIVAL_CLOUD = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_SURVIVAL_CLOUD"});
		IMAGE_QUICKPLAY_BACK_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_BACK_BUTTON"});
		IMAGE_QUICKPLAY_BACK_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_QUICKPLAY_BACK_BUTTON_HIGHLIGHT"});
		IMAGE_ACHEESEMENTS_MORE_ROCK = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_MORE_ROCK"});
		IMAGE_ACHEESEMENTS_MORE_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_MORE_BUTTON"});
		IMAGE_ACHEESEMENTS_MORE_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_MORE_BUTTON_HIGHLIGHT"});
		IMAGE_ACHEESEMENTS_TOP_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_TOP_BUTTON"});
		IMAGE_ACHEESEMENTS_TOP_BUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ACHEESEMENTS_TOP_BUTTON_HIGHLIGHT"});
		IMAGE_SHOVEL = aMgr.GetImageThrow({"PVZ", "IMAGE_SHOVEL"});
		IMAGE_SHOVEL_HI_RES = aMgr.GetImageThrow({"PVZ", "IMAGE_SHOVEL_HI_RES"});
		IMAGE_TOMBSTONES = aMgr.GetImageThrow({"PVZ", "IMAGE_TOMBSTONES"});
		IMAGE_TOMBSTONE_MOUNDS = aMgr.GetImageThrow({"PVZ", "IMAGE_TOMBSTONE_MOUNDS"});
		IMAGE_NIGHT_GRAVE_GRAPHIC = aMgr.GetImageThrow({"PVZ", "IMAGE_NIGHT_GRAVE_GRAPHIC"});
		IMAGE_CRATER = aMgr.GetImageThrow({"PVZ", "IMAGE_CRATER"});
		IMAGE_CRATER_FADING = aMgr.GetImageThrow({"PVZ", "IMAGE_CRATER_FADING"});
		IMAGE_CRATER_ROOF_CENTER = aMgr.GetImageThrow({"PVZ", "IMAGE_CRATER_ROOF_CENTER"});
		IMAGE_CRATER_ROOF_LEFT = aMgr.GetImageThrow({"PVZ", "IMAGE_CRATER_ROOF_LEFT"});
		IMAGE_CRATER_WATER_DAY = aMgr.GetImageThrow({"PVZ", "IMAGE_CRATER_WATER_DAY"});
		IMAGE_CRATER_WATER_NIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_CRATER_WATER_NIGHT"});
		IMAGE_COBCANNON_TARGET = aMgr.GetImageThrow({"PVZ", "IMAGE_COBCANNON_TARGET"});
		IMAGE_COBCANNON_POPCORN = aMgr.GetImageThrow({"PVZ", "IMAGE_COBCANNON_POPCORN"});
		IMAGE_FERTILIZER = aMgr.GetImageThrow({"PVZ", "IMAGE_FERTILIZER"});
		IMAGE_WATERINGCAN = aMgr.GetImageThrow({"PVZ", "IMAGE_WATERINGCAN"});
		IMAGE_WATERINGCANGOLD = aMgr.GetImageThrow({"PVZ", "IMAGE_WATERINGCANGOLD"});
		IMAGE_PHONOGRAPH = aMgr.GetImageThrow({"PVZ", "IMAGE_PHONOGRAPH"});
		IMAGE_BEGHOULED_TWIST_OVERLAY = aMgr.GetImageThrow({"PVZ", "IMAGE_BEGHOULED_TWIST_OVERLAY"});
		IMAGE_ZEN_GOLDTOOLRETICLE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZEN_GOLDTOOLRETICLE"});
		IMAGE_ZEN_GARDENGLOVE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZEN_GARDENGLOVE"});
		IMAGE_ZEN_MONEYSIGN = aMgr.GetImageThrow({"PVZ", "IMAGE_ZEN_MONEYSIGN"});
		IMAGE_ZEN_NEXTGARDEN = aMgr.GetImageThrow({"PVZ", "IMAGE_ZEN_NEXTGARDEN"});
		IMAGE_ZEN_WHEELBARROW = aMgr.GetImageThrow({"PVZ", "IMAGE_ZEN_WHEELBARROW"});
		IMAGE_ZENSHOPBUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_ZENSHOPBUTTON"});
		IMAGE_ZENSHOPBUTTON_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_ZENSHOPBUTTON_HIGHLIGHT"});
		IMAGE_PRESENT = aMgr.GetImageThrow({"PVZ", "IMAGE_PRESENT"});
		IMAGE_PRESENTOPEN = aMgr.GetImageThrow({"PVZ", "IMAGE_PRESENTOPEN"});
		IMAGE_SUNFLOWER_TROPHY = aMgr.GetImageThrow({"PVZ", "IMAGE_SUNFLOWER_TROPHY"});
		IMAGE_SLOTMACHINE_OVERLAY = aMgr.GetImageThrow({"PVZ", "IMAGE_SLOTMACHINE_OVERLAY"});
		IMAGE_SCARY_POT = aMgr.GetImageThrow({"PVZ", "IMAGE_SCARY_POT"});
		IMAGE_BUG_SPRAY = aMgr.GetImageThrow({"PVZ", "IMAGE_BUG_SPRAY"});
		IMAGE_PLANTSPEECHBUBBLE = aMgr.GetImageThrow({"PVZ", "IMAGE_PLANTSPEECHBUBBLE"});
		IMAGE_WATERDROP = aMgr.GetImageThrow({"PVZ", "IMAGE_WATERDROP"});
		IMAGE_TREEFOOD = aMgr.GetImageThrow({"PVZ", "IMAGE_TREEFOOD"});
		IMAGE_PACKET_PLANTS = aMgr.GetImageThrow({"PVZ", "IMAGE_PACKET_PLANTS"});
		IMAGE_ZEN_NEED_ICONS = aMgr.GetImageThrow({"PVZ", "IMAGE_ZEN_NEED_ICONS"});
		IMAGE_PROJECTILEPEA = aMgr.GetImageThrow({"PVZ", "IMAGE_PROJECTILEPEA"});
		IMAGE_PROJECTILESNOWPEA = aMgr.GetImageThrow({"PVZ", "IMAGE_PROJECTILESNOWPEA"});
		IMAGE_PROJECTILECACTUS = aMgr.GetImageThrow({"PVZ", "IMAGE_PROJECTILECACTUS"});
		IMAGE_DIRTSMALL = aMgr.GetImageThrow({"PVZ", "IMAGE_DIRTSMALL"});
		IMAGE_DIRTBIG = aMgr.GetImageThrow({"PVZ", "IMAGE_DIRTBIG"});
		IMAGE_ROCKSMALL = aMgr.GetImageThrow({"PVZ", "IMAGE_ROCKSMALL"});
		IMAGE_WATERPARTICLE = aMgr.GetImageThrow({"PVZ", "IMAGE_WATERPARTICLE"});
		IMAGE_WHITEWATER = aMgr.GetImageThrow({"PVZ", "IMAGE_WHITEWATER"});
		IMAGE_WHITEWATER_SHADOW = aMgr.GetImageThrow({"PVZ", "IMAGE_WHITEWATER_SHADOW"});
		IMAGE_MELONPULT_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_MELONPULT_PARTICLES"});
		IMAGE_WINTERMELON_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_WINTERMELON_PARTICLES"});
		IMAGE_PROJECTILE_STAR = aMgr.GetImageThrow({"PVZ", "IMAGE_PROJECTILE_STAR"});
		IMAGE_SEEDBANK = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDBANK"});
		IMAGE_CONVEYORBELT_BACKDROP = aMgr.GetImageThrow({"PVZ", "IMAGE_CONVEYORBELT_BACKDROP"});
		IMAGE_CONVEYORBELT = aMgr.GetImageThrow({"PVZ", "IMAGE_CONVEYORBELT"});
		IMAGE_SHOVELBANK = aMgr.GetImageThrow({"PVZ", "IMAGE_SHOVELBANK"});
		IMAGE_SUNBANK = aMgr.GetImageThrow({"PVZ", "IMAGE_SUNBANK"});
		IMAGE_COINBANK = aMgr.GetImageThrow({"PVZ", "IMAGE_COINBANK"});
		IMAGE_POOL = aMgr.GetImageThrow({"PVZ", "IMAGE_POOL"});
		IMAGE_POOL_NIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_POOL_NIGHT"});
		IMAGE_POOL_BASE = aMgr.GetImageThrow({"PVZ", "IMAGE_POOL_BASE"});
		IMAGE_POOL_BASE_NIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_POOL_BASE_NIGHT"});
		IMAGE_POOL_SHADING = aMgr.GetImageThrow({"PVZ", "IMAGE_POOL_SHADING"});
		IMAGE_POOL_SHADING_NIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_POOL_SHADING_NIGHT"});
		IMAGE_POOL_CAUSTIC_EFFECT = aMgr.GetImageThrow({"PVZ", "IMAGE_POOL_CAUSTIC_EFFECT"});
		IMAGE_PLANTSHADOW = aMgr.GetImageThrow({"PVZ", "IMAGE_PLANTSHADOW"});
		IMAGE_PLANTSHADOW2 = aMgr.GetImageThrow({"PVZ", "IMAGE_PLANTSHADOW2"});
		IMAGE_PEA_SHADOWS = aMgr.GetImageThrow({"PVZ", "IMAGE_PEA_SHADOWS"});
		IMAGE_WALLNUT_BOWLINGSTRIPE = aMgr.GetImageThrow({"PVZ", "IMAGE_WALLNUT_BOWLINGSTRIPE"});
		IMAGE_ICE = aMgr.GetImageThrow({"PVZ", "IMAGE_ICE"});
		IMAGE_ICE_CAP = aMgr.GetImageThrow({"PVZ", "IMAGE_ICE_CAP"});
		IMAGE_ICE_SPARKLES = aMgr.GetImageThrow({"PVZ", "IMAGE_ICE_SPARKLES"});
		IMAGE_IMITATERSEED = aMgr.GetImageThrow({"PVZ", "IMAGE_IMITATERSEED"});
		IMAGE_ALMANAC_IMITATER = aMgr.GetImageThrow({"PVZ", "IMAGE_ALMANAC_IMITATER"});
		IMAGE_IMITATERSEEDDISABLED = aMgr.GetImageThrow({"PVZ", "IMAGE_IMITATERSEEDDISABLED"});
		IMAGE_ICETRAP = aMgr.GetImageThrow({"PVZ", "IMAGE_ICETRAP"});
		IMAGE_ICETRAP2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ICETRAP2"});
		IMAGE_ICETRAP_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_ICETRAP_PARTICLES"});
		IMAGE_ZOMBIE_BOBSLED1 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOBSLED1"});
		IMAGE_ZOMBIE_BOBSLED2 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOBSLED2"});
		IMAGE_ZOMBIE_BOBSLED3 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOBSLED3"});
		IMAGE_ZOMBIE_BOBSLED4 = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOBSLED4"});
		IMAGE_ZOMBIE_BOBSLED_INSIDE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOBSLED_INSIDE"});
		IMAGE_BUNGEECORD = aMgr.GetImageThrow({"PVZ", "IMAGE_BUNGEECORD"});
		IMAGE_BUNGEETARGET = aMgr.GetImageThrow({"PVZ", "IMAGE_BUNGEETARGET"});
		IMAGE_SPOTLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_SPOTLIGHT"});
		IMAGE_SPOTLIGHT2 = aMgr.GetImageThrow({"PVZ", "IMAGE_SPOTLIGHT2"});
		IMAGE_WHITEPIXEL = aMgr.GetImageThrow({"PVZ", "IMAGE_WHITEPIXEL"});
		IMAGE_ZOMBIEPOLEVAULTERHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEPOLEVAULTERHEAD"});
		IMAGE_ZOMBIEFOOTBALLHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEFOOTBALLHEAD"});
		IMAGE_POOLSPARKLY = aMgr.GetImageThrow({"PVZ", "IMAGE_POOLSPARKLY"});
		IMAGE_WALLNUTPARTICLESSMALL = aMgr.GetImageThrow({"PVZ", "IMAGE_WALLNUTPARTICLESSMALL"});
		IMAGE_WALLNUTPARTICLESLARGE = aMgr.GetImageThrow({"PVZ", "IMAGE_WALLNUTPARTICLESLARGE"});
		IMAGE_PEA_SPLATS = aMgr.GetImageThrow({"PVZ", "IMAGE_PEA_SPLATS"});
		IMAGE_STAR_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_STAR_PARTICLES"});
		IMAGE_STAR_SPLATS = aMgr.GetImageThrow({"PVZ", "IMAGE_STAR_SPLATS"});
		IMAGE_PEA_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_PEA_PARTICLES"});
		IMAGE_SNOWPEA_SPLATS = aMgr.GetImageThrow({"PVZ", "IMAGE_SNOWPEA_SPLATS"});
		IMAGE_SNOWPEA_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_SNOWPEA_PARTICLES"});
		IMAGE_SNOWPEA_PUFF = aMgr.GetImageThrow({"PVZ", "IMAGE_SNOWPEA_PUFF"});
		IMAGE_SNOWFLAKES = aMgr.GetImageThrow({"PVZ", "IMAGE_SNOWFLAKES"});
		IMAGE_POTATOMINE_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_POTATOMINE_PARTICLES"});
		IMAGE_PUFFSHROOM_PUFF1 = aMgr.GetImageThrow({"PVZ", "IMAGE_PUFFSHROOM_PUFF1"});
		IMAGE_ZAMBONISMOKE = aMgr.GetImageThrow({"PVZ", "IMAGE_ZAMBONISMOKE"});
		IMAGE_ZOMBIEDANCERHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEDANCERHEAD"});
		IMAGE_ZOMBIEBALLOONHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEBALLOONHEAD"});
		IMAGE_ZOMBIEIMPHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEIMPHEAD"});
		IMAGE_ZOMBIEDIGGERHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEDIGGERHEAD"});
		IMAGE_ZOMBIEDIGGERARM = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEDIGGERARM"});
		IMAGE_ZOMBIEDOLPHINRIDERHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEDOLPHINRIDERHEAD"});
		IMAGE_ZOMBIEPOGO = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEPOGO"});
		IMAGE_ZOMBIEBACKUPDANCERHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEBACKUPDANCERHEAD"});
		IMAGE_ZOMBIEBOBSLEDHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEBOBSLEDHEAD"});
		IMAGE_ZOMBIELADDERHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIELADDERHEAD"});
		IMAGE_ZOMBIEYETIHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEYETIHEAD"});
		IMAGE_SEEDPACKETFLASH = aMgr.GetImageThrow({"PVZ", "IMAGE_SEEDPACKETFLASH"});
		IMAGE_ZOMBIEJACKBOXARM = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEJACKBOXARM"});
		IMAGE_IMITATERCLOUDS = aMgr.GetImageThrow({"PVZ", "IMAGE_IMITATERCLOUDS"});
		IMAGE_IMITATERPUFFS = aMgr.GetImageThrow({"PVZ", "IMAGE_IMITATERPUFFS"});
		IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES"});
		IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES"});
		IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES"});
		IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES"});
		IMAGE_DOOMSHROOM_EXPLOSION_BASE = aMgr.GetImageThrow({"PVZ", "IMAGE_DOOMSHROOM_EXPLOSION_BASE"});
		IMAGE_RAIN = aMgr.GetImageThrow({"PVZ", "IMAGE_RAIN"});
		IMAGE_VASE_CHUNKS = aMgr.GetImageThrow({"PVZ", "IMAGE_VASE_CHUNKS"});
		IMAGE_ZOMBOSS_PARTICLES = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBOSS_PARTICLES"});
		IMAGE_AWARDPICKUPGLOW = aMgr.GetImageThrow({"PVZ", "IMAGE_AWARDPICKUPGLOW"});
		IMAGE_ZOMBIE_SEAWEED = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIE_SEAWEED"});
		IMAGE_PINATA = aMgr.GetImageThrow({"PVZ", "IMAGE_PINATA"});
		IMAGE_ZOMBIEFUTUREGLASSES = aMgr.GetImageThrow({"PVZ", "IMAGE_ZOMBIEFUTUREGLASSES"});
		IMAGE_DUST_PUFFS = aMgr.GetImageThrow({"PVZ", "IMAGE_DUST_PUFFS"});
		IMAGE_REANIM_WALLNUT_BODY = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_WALLNUT_BODY"});
		IMAGE_REANIM_WALLNUT_CRACKED1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_WALLNUT_CRACKED1"});
		IMAGE_REANIM_WALLNUT_CRACKED2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_WALLNUT_CRACKED2"});
		IMAGE_REANIM_TALLNUT_CRACKED1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_TALLNUT_CRACKED1"});
		IMAGE_REANIM_TALLNUT_CRACKED2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_TALLNUT_CRACKED2"});
		IMAGE_REANIM_PUMPKIN_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_PUMPKIN_DAMAGE1"});
		IMAGE_REANIM_PUMPKIN_DAMAGE3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_PUMPKIN_DAMAGE3"});
		IMAGE_REANIM_ZOMBIE_CONE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CONE1"});
		IMAGE_REANIM_ZOMBIE_CONE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CONE2"});
		IMAGE_REANIM_ZOMBIE_CONE3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CONE3"});
		IMAGE_REANIM_ZOMBIE_BUCKET1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BUCKET1"});
		IMAGE_REANIM_ZOMBIE_BUCKET2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BUCKET2"});
		IMAGE_REANIM_ZOMBIE_BUCKET3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BUCKET3"});
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT"});
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2"});
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3"});
		IMAGE_REANIM_ZOMBIE_SCREENDOOR1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_SCREENDOOR1"});
		IMAGE_REANIM_ZOMBIE_SCREENDOOR2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_SCREENDOOR2"});
		IMAGE_REANIM_ZOMBIE_SCREENDOOR3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_SCREENDOOR3"});
		IMAGE_REANIM_ZOMBIE_FLAG1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_FLAG1"});
		IMAGE_REANIM_ZOMBIE_FLAG3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_FLAG3"});
		IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET"});
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2"});
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3"});
		IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND"});
		IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER"});
		IMAGE_REANIM_ZOMBIE_PAPER_PAPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_PAPER2"});
		IMAGE_REANIM_ZOMBIE_PAPER_PAPER3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_PAPER3"});
		IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD"});
		IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT"});
		IMAGE_REANIM_COIN_SILVER_DOLLAR = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_COIN_SILVER_DOLLAR"});
		IMAGE_REANIM_COIN_GOLD_DOLLAR = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_COIN_GOLD_DOLLAR"});
		IMAGE_REANIM_DIAMOND = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_DIAMOND"});
		IMAGE_REANIM_COINGLOW = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_COINGLOW"});
		IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_HAND = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_HAND"});
		IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_BACKUP_INNERARM_HAND = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BACKUP_INNERARM_HAND"});
		IMAGE_REANIM_ZOMBIE_BACKUP_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BACKUP_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_OUTERARM_HAND = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_OUTERARM_HAND"});
		IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE"});
		IMAGE_REANIM_ZOMBIE_IMP_ARM2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_IMP_ARM2"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE"});
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE"});
		IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1"});
		IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2"});
		IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2"});
		IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND"});
		IMAGE_REANIM_ZOMBIE_JACKBOX_BOX = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_JACKBOX_BOX"});
		IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2"});
		IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED"});
		IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL"});
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE"});
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE"});
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL"});
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL"});
		IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE"});
		IMAGE_REANIM_ZOMBIE_LADDER_1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_1"});
		IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_LADDER_5 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_5"});
		IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL"});
		IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1"});
		IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2"});
		IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE"});
		IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE"});
		IMAGE_REANIM_CABBAGEPULT_CABBAGE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CABBAGEPULT_CABBAGE"});
		IMAGE_REANIM_CORNPULT_KERNAL = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CORNPULT_KERNAL"});
		IMAGE_REANIM_CORNPULT_BUTTER = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CORNPULT_BUTTER"});
		IMAGE_REANIM_CORNPULT_BUTTER_SPLAT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CORNPULT_BUTTER_SPLAT"});
		IMAGE_REANIM_MELONPULT_MELON = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_MELONPULT_MELON"});
		IMAGE_REANIM_WINTERMELON_PROJECTILE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_WINTERMELON_PROJECTILE"});
		IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE"});
		IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT"});
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1"});
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2"});
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3"});
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4"});
		IMAGE_REANIM_GARLIC_BODY2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_GARLIC_BODY2"});
		IMAGE_REANIM_GARLIC_BODY3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_GARLIC_BODY3"});
		IMAGE_REANIM_COBCANNON_COB = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_COBCANNON_COB"});
		IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2"});
		IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND"});
		IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD"});
		IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON"});
		IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT"});
		IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON"});
		IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT"});
		IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON"});
		IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT"});
		IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON"});
		IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT"});
		IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON"});
		IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT"});
		IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS"});
		IMAGE_REANIM_SELECTORSCREEN_WOODSIGN3_PRESS = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_WOODSIGN3_PRESS"});
		IMAGE_REANIM_SELECTORSCREEN_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_BG"});
		IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW"});
		IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW"});
		IMAGE_REANIM_TREE_BG = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_TREE_BG"});
		IMAGE_REANIM_POT_TOP_DARK = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_POT_TOP_DARK"});
		IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE"});
		IMAGE_REANIM_STINKY_TURN3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_STINKY_TURN3"});
		IMAGE_REANIM_CRAZYDAVE_MOUTH1 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH1"});
		IMAGE_REANIM_CRAZYDAVE_MOUTH4 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH4"});
		IMAGE_REANIM_CRAZYDAVE_MOUTH5 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH5"});
		IMAGE_REANIM_CRAZYDAVE_MOUTH6 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH6"});
		IMAGE_REANIM_ZOMBIE_MUSTACHE2 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_MUSTACHE2"});
		IMAGE_REANIM_ZOMBIE_MUSTACHE3 = aMgr.GetImageThrow({"PVZ", "IMAGE_REANIM_ZOMBIE_MUSTACHE3"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}

// LoadingSounds Resources
int Sexy::SOUND_ACHIEVEMENT;
int Sexy::SOUND_AWOOGA;
int Sexy::SOUND_BLEEP;
int Sexy::SOUND_BUZZER;
int Sexy::SOUND_CHOMP;
int Sexy::SOUND_CHOMP2;
int Sexy::SOUND_CHOMPSOFT;
int Sexy::SOUND_EVILLAUGH;
int Sexy::SOUND_FLOOP;
int Sexy::SOUND_FROZEN;
int Sexy::SOUND_GULP;
int Sexy::SOUND_GROAN;
int Sexy::SOUND_GROAN2;
int Sexy::SOUND_GROAN3;
int Sexy::SOUND_GROAN4;
int Sexy::SOUND_GROAN5;
int Sexy::SOUND_GROAN6;
int Sexy::SOUND_LOSEMUSIC;
int Sexy::SOUND_MINDCONTROLLED;
int Sexy::SOUND_PAUSE;
int Sexy::SOUND_PLANT;
int Sexy::SOUND_PLANT2;
int Sexy::SOUND_POINTS;
int Sexy::SOUND_SEEDLIFT;
int Sexy::SOUND_SIREN;
int Sexy::SOUND_SLURP;
int Sexy::SOUND_SPLAT;
int Sexy::SOUND_SPLAT2;
int Sexy::SOUND_SPLAT3;
int Sexy::SOUND_SUKHBIR;
int Sexy::SOUND_SUKHBIR2;
int Sexy::SOUND_SUKHBIR3;
int Sexy::SOUND_SUKHBIR4;
int Sexy::SOUND_SUKHBIR5;
int Sexy::SOUND_SUKHBIR6;
int Sexy::SOUND_TAP;
int Sexy::SOUND_TAP2;
int Sexy::SOUND_THROW;
int Sexy::SOUND_THROW2;
int Sexy::SOUND_BLOVER;
int Sexy::SOUND_WINMUSIC;
int Sexy::SOUND_LAWNMOWER;
int Sexy::SOUND_BOING;
int Sexy::SOUND_JACKINTHEBOX;
int Sexy::SOUND_DIAMOND;
int Sexy::SOUND_DOLPHIN_APPEARS;
int Sexy::SOUND_DOLPHIN_BEFORE_JUMPING;
int Sexy::SOUND_POTATO_MINE;
int Sexy::SOUND_ZAMBONI;
int Sexy::SOUND_BALLOON_POP;
int Sexy::SOUND_THUNDER;
int Sexy::SOUND_ZOMBIESPLASH;
int Sexy::SOUND_BOWLING;
int Sexy::SOUND_BOWLINGIMPACT;
int Sexy::SOUND_BOWLINGIMPACT2;
int Sexy::SOUND_GRAVEBUSTERCHOMP;
int Sexy::SOUND_GRAVEBUTTON;
int Sexy::SOUND_LIMBS_POP;
int Sexy::SOUND_PLANTERN;
int Sexy::SOUND_POGO_ZOMBIE;
int Sexy::SOUND_SNOW_PEA_SPARKLES;
int Sexy::SOUND_PLANT_WATER;
int Sexy::SOUND_ZOMBIE_ENTERING_WATER;
int Sexy::SOUND_ZOMBIE_FALLING_1;
int Sexy::SOUND_ZOMBIE_FALLING_2;
int Sexy::SOUND_PUFF;
int Sexy::SOUND_FUME;
int Sexy::SOUND_HUGE_WAVE;
int Sexy::SOUND_SLOT_MACHINE;
int Sexy::SOUND_COIN;
int Sexy::SOUND_ROLL_IN;
int Sexy::SOUND_DIGGER_ZOMBIE;
int Sexy::SOUND_HATCHBACK_CLOSE;
int Sexy::SOUND_HATCHBACK_OPEN;
int Sexy::SOUND_KERNELPULT;
int Sexy::SOUND_KERNELPULT2;
int Sexy::SOUND_ZOMBAQUARIUM_DIE;
int Sexy::SOUND_BUNGEE_SCREAM;
int Sexy::SOUND_BUNGEE_SCREAM2;
int Sexy::SOUND_BUNGEE_SCREAM3;
int Sexy::SOUND_BUTTER;
int Sexy::SOUND_JACK_SURPRISE;
int Sexy::SOUND_JACK_SURPRISE2;
int Sexy::SOUND_NEWSPAPER_RARRGH;
int Sexy::SOUND_NEWSPAPER_RARRGH2;
int Sexy::SOUND_NEWSPAPER_RIP;
int Sexy::SOUND_SQUASH_HMM;
int Sexy::SOUND_SQUASH_HMM2;
int Sexy::SOUND_VASE_BREAKING;
int Sexy::SOUND_POOL_CLEANER;
int Sexy::SOUND_MAGNETSHROOM;
int Sexy::SOUND_LADDER_ZOMBIE;
int Sexy::SOUND_GARGANTUAR_THUMP;
int Sexy::SOUND_BASKETBALL;
int Sexy::SOUND_FIREPEA;
int Sexy::SOUND_IGNITE;
int Sexy::SOUND_IGNITE2;
int Sexy::SOUND_READYSETPLANT;
int Sexy::SOUND_DOOMSHROOM;
int Sexy::SOUND_EXPLOSION;
int Sexy::SOUND_FINALWAVE;
int Sexy::SOUND_REVERSE_EXPLOSION;
int Sexy::SOUND_RVTHROW;
int Sexy::SOUND_SHIELDHIT;
int Sexy::SOUND_SHIELDHIT2;
int Sexy::SOUND_BOSSEXPLOSION;
int Sexy::SOUND_CHERRYBOMB;
int Sexy::SOUND_BONK;
int Sexy::SOUND_SWING;
int Sexy::SOUND_RAIN;
int Sexy::SOUND_LIGHTFILL;
int Sexy::SOUND_PLASTICHIT;
int Sexy::SOUND_PLASTICHIT2;
int Sexy::SOUND_JALAPENO;
int Sexy::SOUND_BALLOONINFLATE;
int Sexy::SOUND_BIGCHOMP;
int Sexy::SOUND_MELONIMPACT;
int Sexy::SOUND_MELONIMPACT2;
int Sexy::SOUND_PLANTGROW;
int Sexy::SOUND_SHOOP;
int Sexy::SOUND_TAPGLASS;
int Sexy::SOUND_JUICY;
int Sexy::SOUND_COFFEE;
int Sexy::SOUND_WAKEUP;
int Sexy::SOUND_LOWGROAN;
int Sexy::SOUND_LOWGROAN2;
int Sexy::SOUND_PRIZE;
int Sexy::SOUND_YUCK;
int Sexy::SOUND_YUCK2;
int Sexy::SOUND_GRASSSTEP;
int Sexy::SOUND_SHOVEL;
int Sexy::SOUND_COBLAUNCH;
int Sexy::SOUND_WATERING;
int Sexy::SOUND_POLEVAULT;
int Sexy::SOUND_GRAVESTONE_RUMBLE;
int Sexy::SOUND_DIRT_RISE;
int Sexy::SOUND_FERTILIZER;
int Sexy::SOUND_PORTAL;
int Sexy::SOUND_BUGSPRAY;
int Sexy::SOUND_SCREAM;
int Sexy::SOUND_PAPER;
int Sexy::SOUND_MONEYFALLS;
int Sexy::SOUND_IMP;
int Sexy::SOUND_IMP2;
int Sexy::SOUND_HYDRAULIC_SHORT;
int Sexy::SOUND_HYDRAULIC;
int Sexy::SOUND_GARGANTUDEATH;
int Sexy::SOUND_CERAMIC;
int Sexy::SOUND_BOSSBOULDERATTACK;
int Sexy::SOUND_CHIME;
int Sexy::SOUND_CRAZYDAVESHORT1;
int Sexy::SOUND_CRAZYDAVESHORT2;
int Sexy::SOUND_CRAZYDAVESHORT3;
int Sexy::SOUND_CRAZYDAVELONG1;
int Sexy::SOUND_CRAZYDAVELONG2;
int Sexy::SOUND_CRAZYDAVELONG3;
int Sexy::SOUND_CRAZYDAVEEXTRALONG1;
int Sexy::SOUND_CRAZYDAVEEXTRALONG2;
int Sexy::SOUND_CRAZYDAVEEXTRALONG3;
int Sexy::SOUND_CRAZYDAVECRAZY;
int Sexy::SOUND_PHONOGRAPH;
int Sexy::SOUND_DANCER;
int Sexy::SOUND_FINALFANFARE;
int Sexy::SOUND_CRAZYDAVESCREAM;
int Sexy::SOUND_CRAZYDAVESCREAM2;

bool Sexy::ExtractLoadingSoundsResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		SOUND_ACHIEVEMENT = aMgr.GetSoundThrow({"PVZ", "SOUND_ACHIEVEMENT"});
		SOUND_AWOOGA = aMgr.GetSoundThrow({"PVZ", "SOUND_AWOOGA"});
		SOUND_BLEEP = aMgr.GetSoundThrow({"PVZ", "SOUND_BLEEP"});
		SOUND_BUZZER = aMgr.GetSoundThrow({"PVZ", "SOUND_BUZZER"});
		SOUND_CHOMP = aMgr.GetSoundThrow({"PVZ", "SOUND_CHOMP"});
		SOUND_CHOMP2 = aMgr.GetSoundThrow({"PVZ", "SOUND_CHOMP2"});
		SOUND_CHOMPSOFT = aMgr.GetSoundThrow({"PVZ", "SOUND_CHOMPSOFT"});
		SOUND_EVILLAUGH = aMgr.GetSoundThrow({"PVZ", "SOUND_EVILLAUGH"});
		SOUND_FLOOP = aMgr.GetSoundThrow({"PVZ", "SOUND_FLOOP"});
		SOUND_FROZEN = aMgr.GetSoundThrow({"PVZ", "SOUND_FROZEN"});
		SOUND_GULP = aMgr.GetSoundThrow({"PVZ", "SOUND_GULP"});
		SOUND_GROAN = aMgr.GetSoundThrow({"PVZ", "SOUND_GROAN"});
		SOUND_GROAN2 = aMgr.GetSoundThrow({"PVZ", "SOUND_GROAN2"});
		SOUND_GROAN3 = aMgr.GetSoundThrow({"PVZ", "SOUND_GROAN3"});
		SOUND_GROAN4 = aMgr.GetSoundThrow({"PVZ", "SOUND_GROAN4"});
		SOUND_GROAN5 = aMgr.GetSoundThrow({"PVZ", "SOUND_GROAN5"});
		SOUND_GROAN6 = aMgr.GetSoundThrow({"PVZ", "SOUND_GROAN6"});
		SOUND_LOSEMUSIC = aMgr.GetSoundThrow({"PVZ", "SOUND_LOSEMUSIC"});
		SOUND_MINDCONTROLLED = aMgr.GetSoundThrow({"PVZ", "SOUND_MINDCONTROLLED"});
		SOUND_PAUSE = aMgr.GetSoundThrow({"PVZ", "SOUND_PAUSE"});
		SOUND_PLANT = aMgr.GetSoundThrow({"PVZ", "SOUND_PLANT"});
		SOUND_PLANT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_PLANT2"});
		SOUND_POINTS = aMgr.GetSoundThrow({"PVZ", "SOUND_POINTS"});
		SOUND_SEEDLIFT = aMgr.GetSoundThrow({"PVZ", "SOUND_SEEDLIFT"});
		SOUND_SIREN = aMgr.GetSoundThrow({"PVZ", "SOUND_SIREN"});
		SOUND_SLURP = aMgr.GetSoundThrow({"PVZ", "SOUND_SLURP"});
		SOUND_SPLAT = aMgr.GetSoundThrow({"PVZ", "SOUND_SPLAT"});
		SOUND_SPLAT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_SPLAT2"});
		SOUND_SPLAT3 = aMgr.GetSoundThrow({"PVZ", "SOUND_SPLAT3"});
		SOUND_SUKHBIR = aMgr.GetSoundThrow({"PVZ", "SOUND_SUKHBIR"});
		SOUND_SUKHBIR2 = aMgr.GetSoundThrow({"PVZ", "SOUND_SUKHBIR2"});
		SOUND_SUKHBIR3 = aMgr.GetSoundThrow({"PVZ", "SOUND_SUKHBIR3"});
		SOUND_SUKHBIR4 = aMgr.GetSoundThrow({"PVZ", "SOUND_SUKHBIR4"});
		SOUND_SUKHBIR5 = aMgr.GetSoundThrow({"PVZ", "SOUND_SUKHBIR5"});
		SOUND_SUKHBIR6 = aMgr.GetSoundThrow({"PVZ", "SOUND_SUKHBIR6"});
		SOUND_TAP = aMgr.GetSoundThrow({"PVZ", "SOUND_TAP"});
		SOUND_TAP2 = aMgr.GetSoundThrow({"PVZ", "SOUND_TAP2"});
		SOUND_THROW = aMgr.GetSoundThrow({"PVZ", "SOUND_THROW"});
		SOUND_THROW2 = aMgr.GetSoundThrow({"PVZ", "SOUND_THROW2"});
		SOUND_BLOVER = aMgr.GetSoundThrow({"PVZ", "SOUND_BLOVER"});
		SOUND_WINMUSIC = aMgr.GetSoundThrow({"PVZ", "SOUND_WINMUSIC"});
		SOUND_LAWNMOWER = aMgr.GetSoundThrow({"PVZ", "SOUND_LAWNMOWER"});
		SOUND_BOING = aMgr.GetSoundThrow({"PVZ", "SOUND_BOING"});
		SOUND_JACKINTHEBOX = aMgr.GetSoundThrow({"PVZ", "SOUND_JACKINTHEBOX"});
		SOUND_DIAMOND = aMgr.GetSoundThrow({"PVZ", "SOUND_DIAMOND"});
		SOUND_DOLPHIN_APPEARS = aMgr.GetSoundThrow({"PVZ", "SOUND_DOLPHIN_APPEARS"});
		SOUND_DOLPHIN_BEFORE_JUMPING = aMgr.GetSoundThrow({"PVZ", "SOUND_DOLPHIN_BEFORE_JUMPING"});
		SOUND_POTATO_MINE = aMgr.GetSoundThrow({"PVZ", "SOUND_POTATO_MINE"});
		SOUND_ZAMBONI = aMgr.GetSoundThrow({"PVZ", "SOUND_ZAMBONI"});
		SOUND_BALLOON_POP = aMgr.GetSoundThrow({"PVZ", "SOUND_BALLOON_POP"});
		SOUND_THUNDER = aMgr.GetSoundThrow({"PVZ", "SOUND_THUNDER"});
		SOUND_ZOMBIESPLASH = aMgr.GetSoundThrow({"PVZ", "SOUND_ZOMBIESPLASH"});
		SOUND_BOWLING = aMgr.GetSoundThrow({"PVZ", "SOUND_BOWLING"});
		SOUND_BOWLINGIMPACT = aMgr.GetSoundThrow({"PVZ", "SOUND_BOWLINGIMPACT"});
		SOUND_BOWLINGIMPACT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_BOWLINGIMPACT2"});
		SOUND_GRAVEBUSTERCHOMP = aMgr.GetSoundThrow({"PVZ", "SOUND_GRAVEBUSTERCHOMP"});
		SOUND_GRAVEBUTTON = aMgr.GetSoundThrow({"PVZ", "SOUND_GRAVEBUTTON"});
		SOUND_LIMBS_POP = aMgr.GetSoundThrow({"PVZ", "SOUND_LIMBS_POP"});
		SOUND_PLANTERN = aMgr.GetSoundThrow({"PVZ", "SOUND_PLANTERN"});
		SOUND_POGO_ZOMBIE = aMgr.GetSoundThrow({"PVZ", "SOUND_POGO_ZOMBIE"});
		SOUND_SNOW_PEA_SPARKLES = aMgr.GetSoundThrow({"PVZ", "SOUND_SNOW_PEA_SPARKLES"});
		SOUND_PLANT_WATER = aMgr.GetSoundThrow({"PVZ", "SOUND_PLANT_WATER"});
		SOUND_ZOMBIE_ENTERING_WATER = aMgr.GetSoundThrow({"PVZ", "SOUND_ZOMBIE_ENTERING_WATER"});
		SOUND_ZOMBIE_FALLING_1 = aMgr.GetSoundThrow({"PVZ", "SOUND_ZOMBIE_FALLING_1"});
		SOUND_ZOMBIE_FALLING_2 = aMgr.GetSoundThrow({"PVZ", "SOUND_ZOMBIE_FALLING_2"});
		SOUND_PUFF = aMgr.GetSoundThrow({"PVZ", "SOUND_PUFF"});
		SOUND_FUME = aMgr.GetSoundThrow({"PVZ", "SOUND_FUME"});
		SOUND_HUGE_WAVE = aMgr.GetSoundThrow({"PVZ", "SOUND_HUGE_WAVE"});
		SOUND_SLOT_MACHINE = aMgr.GetSoundThrow({"PVZ", "SOUND_SLOT_MACHINE"});
		SOUND_COIN = aMgr.GetSoundThrow({"PVZ", "SOUND_COIN"});
		SOUND_ROLL_IN = aMgr.GetSoundThrow({"PVZ", "SOUND_ROLL_IN"});
		SOUND_DIGGER_ZOMBIE = aMgr.GetSoundThrow({"PVZ", "SOUND_DIGGER_ZOMBIE"});
		SOUND_HATCHBACK_CLOSE = aMgr.GetSoundThrow({"PVZ", "SOUND_HATCHBACK_CLOSE"});
		SOUND_HATCHBACK_OPEN = aMgr.GetSoundThrow({"PVZ", "SOUND_HATCHBACK_OPEN"});
		SOUND_KERNELPULT = aMgr.GetSoundThrow({"PVZ", "SOUND_KERNELPULT"});
		SOUND_KERNELPULT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_KERNELPULT2"});
		SOUND_ZOMBAQUARIUM_DIE = aMgr.GetSoundThrow({"PVZ", "SOUND_ZOMBAQUARIUM_DIE"});
		SOUND_BUNGEE_SCREAM = aMgr.GetSoundThrow({"PVZ", "SOUND_BUNGEE_SCREAM"});
		SOUND_BUNGEE_SCREAM2 = aMgr.GetSoundThrow({"PVZ", "SOUND_BUNGEE_SCREAM2"});
		SOUND_BUNGEE_SCREAM3 = aMgr.GetSoundThrow({"PVZ", "SOUND_BUNGEE_SCREAM3"});
		SOUND_BUTTER = aMgr.GetSoundThrow({"PVZ", "SOUND_BUTTER"});
		SOUND_JACK_SURPRISE = aMgr.GetSoundThrow({"PVZ", "SOUND_JACK_SURPRISE"});
		SOUND_JACK_SURPRISE2 = aMgr.GetSoundThrow({"PVZ", "SOUND_JACK_SURPRISE2"});
		SOUND_NEWSPAPER_RARRGH = aMgr.GetSoundThrow({"PVZ", "SOUND_NEWSPAPER_RARRGH"});
		SOUND_NEWSPAPER_RARRGH2 = aMgr.GetSoundThrow({"PVZ", "SOUND_NEWSPAPER_RARRGH2"});
		SOUND_NEWSPAPER_RIP = aMgr.GetSoundThrow({"PVZ", "SOUND_NEWSPAPER_RIP"});
		SOUND_SQUASH_HMM = aMgr.GetSoundThrow({"PVZ", "SOUND_SQUASH_HMM"});
		SOUND_SQUASH_HMM2 = aMgr.GetSoundThrow({"PVZ", "SOUND_SQUASH_HMM2"});
		SOUND_VASE_BREAKING = aMgr.GetSoundThrow({"PVZ", "SOUND_VASE_BREAKING"});
		SOUND_POOL_CLEANER = aMgr.GetSoundThrow({"PVZ", "SOUND_POOL_CLEANER"});
		SOUND_MAGNETSHROOM = aMgr.GetSoundThrow({"PVZ", "SOUND_MAGNETSHROOM"});
		SOUND_LADDER_ZOMBIE = aMgr.GetSoundThrow({"PVZ", "SOUND_LADDER_ZOMBIE"});
		SOUND_GARGANTUAR_THUMP = aMgr.GetSoundThrow({"PVZ", "SOUND_GARGANTUAR_THUMP"});
		SOUND_BASKETBALL = aMgr.GetSoundThrow({"PVZ", "SOUND_BASKETBALL"});
		SOUND_FIREPEA = aMgr.GetSoundThrow({"PVZ", "SOUND_FIREPEA"});
		SOUND_IGNITE = aMgr.GetSoundThrow({"PVZ", "SOUND_IGNITE"});
		SOUND_IGNITE2 = aMgr.GetSoundThrow({"PVZ", "SOUND_IGNITE2"});
		SOUND_READYSETPLANT = aMgr.GetSoundThrow({"PVZ", "SOUND_READYSETPLANT"});
		SOUND_DOOMSHROOM = aMgr.GetSoundThrow({"PVZ", "SOUND_DOOMSHROOM"});
		SOUND_EXPLOSION = aMgr.GetSoundThrow({"PVZ", "SOUND_EXPLOSION"});
		SOUND_FINALWAVE = aMgr.GetSoundThrow({"PVZ", "SOUND_FINALWAVE"});
		SOUND_REVERSE_EXPLOSION = aMgr.GetSoundThrow({"PVZ", "SOUND_REVERSE_EXPLOSION"});
		SOUND_RVTHROW = aMgr.GetSoundThrow({"PVZ", "SOUND_RVTHROW"});
		SOUND_SHIELDHIT = aMgr.GetSoundThrow({"PVZ", "SOUND_SHIELDHIT"});
		SOUND_SHIELDHIT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_SHIELDHIT2"});
		SOUND_BOSSEXPLOSION = aMgr.GetSoundThrow({"PVZ", "SOUND_BOSSEXPLOSION"});
		SOUND_CHERRYBOMB = aMgr.GetSoundThrow({"PVZ", "SOUND_CHERRYBOMB"});
		SOUND_BONK = aMgr.GetSoundThrow({"PVZ", "SOUND_BONK"});
		SOUND_SWING = aMgr.GetSoundThrow({"PVZ", "SOUND_SWING"});
		SOUND_RAIN = aMgr.GetSoundThrow({"PVZ", "SOUND_RAIN"});
		SOUND_LIGHTFILL = aMgr.GetSoundThrow({"PVZ", "SOUND_LIGHTFILL"});
		SOUND_PLASTICHIT = aMgr.GetSoundThrow({"PVZ", "SOUND_PLASTICHIT"});
		SOUND_PLASTICHIT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_PLASTICHIT2"});
		SOUND_JALAPENO = aMgr.GetSoundThrow({"PVZ", "SOUND_JALAPENO"});
		SOUND_BALLOONINFLATE = aMgr.GetSoundThrow({"PVZ", "SOUND_BALLOONINFLATE"});
		SOUND_BIGCHOMP = aMgr.GetSoundThrow({"PVZ", "SOUND_BIGCHOMP"});
		SOUND_MELONIMPACT = aMgr.GetSoundThrow({"PVZ", "SOUND_MELONIMPACT"});
		SOUND_MELONIMPACT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_MELONIMPACT2"});
		SOUND_PLANTGROW = aMgr.GetSoundThrow({"PVZ", "SOUND_PLANTGROW"});
		SOUND_SHOOP = aMgr.GetSoundThrow({"PVZ", "SOUND_SHOOP"});
		SOUND_TAPGLASS = aMgr.GetSoundThrow({"PVZ", "SOUND_TAPGLASS"});
		SOUND_JUICY = aMgr.GetSoundThrow({"PVZ", "SOUND_JUICY"});
		SOUND_COFFEE = aMgr.GetSoundThrow({"PVZ", "SOUND_COFFEE"});
		SOUND_WAKEUP = aMgr.GetSoundThrow({"PVZ", "SOUND_WAKEUP"});
		SOUND_LOWGROAN = aMgr.GetSoundThrow({"PVZ", "SOUND_LOWGROAN"});
		SOUND_LOWGROAN2 = aMgr.GetSoundThrow({"PVZ", "SOUND_LOWGROAN2"});
		SOUND_PRIZE = aMgr.GetSoundThrow({"PVZ", "SOUND_PRIZE"});
		SOUND_YUCK = aMgr.GetSoundThrow({"PVZ", "SOUND_YUCK"});
		SOUND_YUCK2 = aMgr.GetSoundThrow({"PVZ", "SOUND_YUCK2"});
		SOUND_GRASSSTEP = aMgr.GetSoundThrow({"PVZ", "SOUND_GRASSSTEP"});
		SOUND_SHOVEL = aMgr.GetSoundThrow({"PVZ", "SOUND_SHOVEL"});
		SOUND_COBLAUNCH = aMgr.GetSoundThrow({"PVZ", "SOUND_COBLAUNCH"});
		SOUND_WATERING = aMgr.GetSoundThrow({"PVZ", "SOUND_WATERING"});
		SOUND_POLEVAULT = aMgr.GetSoundThrow({"PVZ", "SOUND_POLEVAULT"});
		SOUND_GRAVESTONE_RUMBLE = aMgr.GetSoundThrow({"PVZ", "SOUND_GRAVESTONE_RUMBLE"});
		SOUND_DIRT_RISE = aMgr.GetSoundThrow({"PVZ", "SOUND_DIRT_RISE"});
		SOUND_FERTILIZER = aMgr.GetSoundThrow({"PVZ", "SOUND_FERTILIZER"});
		SOUND_PORTAL = aMgr.GetSoundThrow({"PVZ", "SOUND_PORTAL"});
		SOUND_BUGSPRAY = aMgr.GetSoundThrow({"PVZ", "SOUND_BUGSPRAY"});
		SOUND_SCREAM = aMgr.GetSoundThrow({"PVZ", "SOUND_SCREAM"});
		SOUND_PAPER = aMgr.GetSoundThrow({"PVZ", "SOUND_PAPER"});
		SOUND_MONEYFALLS = aMgr.GetSoundThrow({"PVZ", "SOUND_MONEYFALLS"});
		SOUND_IMP = aMgr.GetSoundThrow({"PVZ", "SOUND_IMP"});
		SOUND_IMP2 = aMgr.GetSoundThrow({"PVZ", "SOUND_IMP2"});
		SOUND_HYDRAULIC_SHORT = aMgr.GetSoundThrow({"PVZ", "SOUND_HYDRAULIC_SHORT"});
		SOUND_HYDRAULIC = aMgr.GetSoundThrow({"PVZ", "SOUND_HYDRAULIC"});
		SOUND_GARGANTUDEATH = aMgr.GetSoundThrow({"PVZ", "SOUND_GARGANTUDEATH"});
		SOUND_CERAMIC = aMgr.GetSoundThrow({"PVZ", "SOUND_CERAMIC"});
		SOUND_BOSSBOULDERATTACK = aMgr.GetSoundThrow({"PVZ", "SOUND_BOSSBOULDERATTACK"});
		SOUND_CHIME = aMgr.GetSoundThrow({"PVZ", "SOUND_CHIME"});
		SOUND_CRAZYDAVESHORT1 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVESHORT1"});
		SOUND_CRAZYDAVESHORT2 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVESHORT2"});
		SOUND_CRAZYDAVESHORT3 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVESHORT3"});
		SOUND_CRAZYDAVELONG1 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVELONG1"});
		SOUND_CRAZYDAVELONG2 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVELONG2"});
		SOUND_CRAZYDAVELONG3 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVELONG3"});
		SOUND_CRAZYDAVEEXTRALONG1 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVEEXTRALONG1"});
		SOUND_CRAZYDAVEEXTRALONG2 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVEEXTRALONG2"});
		SOUND_CRAZYDAVEEXTRALONG3 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVEEXTRALONG3"});
		SOUND_CRAZYDAVECRAZY = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVECRAZY"});
		SOUND_PHONOGRAPH = aMgr.GetSoundThrow({"PVZ", "SOUND_PHONOGRAPH"});
		SOUND_DANCER = aMgr.GetSoundThrow({"PVZ", "SOUND_DANCER"});
		SOUND_FINALFANFARE = aMgr.GetSoundThrow({"PVZ", "SOUND_FINALFANFARE"});
		SOUND_CRAZYDAVESCREAM = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVESCREAM"});
		SOUND_CRAZYDAVESCREAM2 = aMgr.GetSoundThrow({"PVZ", "SOUND_CRAZYDAVESCREAM2"});
	}
	catch (ResourceManagerException &)
	{
		return false;
	}
	return true;
}


Image *Sexy::GetImageById(const ResourceId &theId)
{
	auto &aMap = gLawnApp->mResourceManager->GetImageMap();
	auto anItr = aMap.find(theId);
	if (anItr == aMap.end())
		return nullptr;
	return ((ResourceManager::ImageRes *)anItr->second)->mImage;
}

Font *Sexy::GetFontById(const ResourceId &theId)
{
	auto &aMap = gLawnApp->mResourceManager->GetImageMap();
	auto anItr = aMap.find(theId);
	if (anItr == aMap.end())
		return nullptr;
	return ((ResourceManager::FontRes *)anItr->second)->mFont;
}

int Sexy::GetSoundById(const ResourceId &theId)
{
	auto &aMap = gLawnApp->mResourceManager->GetImageMap();
	auto anItr = aMap.find(theId);
	if (anItr == aMap.end())
		return -1;
	return ((ResourceManager::SoundRes *)anItr->second)->mSoundId;
}

static ResourceId GetIdByVariable(const void *theVariable)
{
	typedef std::map<const void *, ResourceId> MyMap;
	static MyMap aMap;
	if (gNeedRecalcVariableToIdMap)
	{
		gNeedRecalcVariableToIdMap = false;
		aMap.clear();

		auto &anImageMap = gLawnApp->mResourceManager->GetImageMap();
		auto &aSoundMap = gLawnApp->mResourceManager->GetSoundMap();
		auto &aFontMap = gLawnApp->mResourceManager->GetFontMap();

		for (auto &aPair : anImageMap)
		{
			auto *aRes = (ResourceManager::ImageRes *)aPair.second;
			Image *anImage = aRes->mImage;
			aMap[anImage] = aPair.first;
		}

		for (auto &aPair : aSoundMap)
		{
			auto *aRes = (ResourceManager::SoundRes *)aPair.second;
			int aSound = aRes->mSoundId;
			aMap[(void *)aSound] = aPair.first;
		}

		for (auto &aPair : aFontMap)
		{
			auto *aRes = (ResourceManager::FontRes *)aPair.second;
			Font *aFont = aRes->mFont;
			aMap[aFont] = aPair.first;
		}
	}

	MyMap::iterator anItr = aMap.find(theVariable);
	if (anItr == aMap.end())
		return {};
	else
		return anItr->second;
}

ResourceId Sexy::GetIdByImage(Image *theImage)
{
	return GetIdByVariable(theImage);
}

ResourceId Sexy::GetIdByFont(Font *theFont)
{
	return GetIdByVariable(theFont);
}

ResourceId Sexy::GetIdBySound(int theSound)
{
	return GetIdByVariable((void *)theSound);
}
