#include "Resources.h"
#include "SexyAppFramework/ResourceManager.h"
using namespace Sexy;

#pragma warning(disable : 4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const ResourceId &theName)
{
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

void *Sexy::RESOURCE_NONE = nullptr;

static void *gResources[] = {&IMAGE_ALMANAC_INDEXBACK,
							 &IMAGE_ALMANAC_PLANTBACK,
							 &IMAGE_ALMANAC_ZOMBIEBACK,
							 &IMAGE_ALMANAC_PLANTCARD,
							 &IMAGE_ALMANAC_ZOMBIECARD,
							 &IMAGE_ALMANAC_ZOMBIEWINDOW,
							 &IMAGE_ALMANAC_ZOMBIEWINDOW2,
							 &IMAGE_ALMANAC_ZOMBIEBLANK,
							 &IMAGE_ALMANAC_GROUNDDAY,
							 &IMAGE_ALMANAC_GROUNDNIGHT,
							 &IMAGE_ALMANAC_GROUNDPOOL,
							 &IMAGE_ALMANAC_GROUNDNIGHTPOOL,
							 &IMAGE_ALMANAC_GROUNDROOF,
							 &IMAGE_ALMANAC_GROUNDICE,
							 &IMAGE_ALMANAC_CLOSEBUTTON,
							 &IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT,
							 &IMAGE_ALMANAC_INDEXBUTTON,
							 &IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT,
							 &IMAGE_AWARDSCREEN_BACK,
							 &IMAGE_BACKGROUND1,
							 &IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY,
							 &IMAGE_BACKGROUND1_GAMEOVER_MASK,
							 &IMAGE_BACKGROUND2,
							 &IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY,
							 &IMAGE_BACKGROUND2_GAMEOVER_MASK,
							 &IMAGE_BACKGROUND3,
							 &IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY,
							 &IMAGE_BACKGROUND3_GAMEOVER_MASK,
							 &IMAGE_BACKGROUND4,
							 &IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY,
							 &IMAGE_BACKGROUND4_GAMEOVER_MASK,
							 &IMAGE_FOG,
							 &IMAGE_FOG_SOFTWARE,
							 &IMAGE_BACKGROUND5,
							 &IMAGE_BACKGROUND5_GAMEOVER_MASK,
							 &IMAGE_BACKGROUND6BOSS,
							 &IMAGE_BACKGROUND6_GAMEOVER_MASK,
							 &IMAGE_BACKGROUND1UNSODDED,
							 &IMAGE_SOD1ROW,
							 &IMAGE_SOD3ROW,
							 &IMAGE_CHALLENGE_BACKGROUND,
							 &IMAGE_CHALLENGE_WINDOW,
							 &IMAGE_CHALLENGE_WINDOW_HIGHLIGHT,
							 &IMAGE_CHALLENGE_BLANK,
							 &IMAGE_CHALLENGE_THUMBNAILS,
							 &IMAGE_SURVIVAL_THUMBNAILS,
							 &IMAGE_LOCK,
							 &IMAGE_LOCK_OPEN,
							 &FONT_BRIANNETOD32,
							 &FONT_BRIANNETOD32BLACK,
							 &IMAGE_REANIM_SUNFLOWER_HEAD_SING1,
							 &IMAGE_REANIM_SUNFLOWER_HEAD_SING2,
							 &IMAGE_REANIM_SUNFLOWER_HEAD_SING3,
							 &IMAGE_REANIM_SUNFLOWER_HEAD_SING4,
							 &IMAGE_REANIM_SUNFLOWER_HEAD_SING5,
							 &IMAGE_REANIM_SUNFLOWER_HEAD_WINK,
							 &IMAGE_REANIM_CREDITS_DISCOLIGHTS,
							 &IMAGE_REANIM_CREDITS_FOGMACHINE,
							 &IMAGE_CREDITS_ZOMBIENOTE,
							 &IMAGE_CREDITS_PLAYBUTTON,
							 &IMAGE_BACKGROUND_GREENHOUSE,
							 &IMAGE_BACKGROUND_GREENHOUSE_OVERLAY,
							 &IMAGE_BACKGROUND_MUSHROOMGARDEN,
							 &IMAGE_STORE_BACKGROUND,
							 &IMAGE_STORE_BACKGROUNDNIGHT,
							 &IMAGE_STORE_CAR,
							 &IMAGE_STORE_CAR_NIGHT,
							 &IMAGE_STORE_CARCLOSED,
							 &IMAGE_STORE_CARCLOSED_NIGHT,
							 &IMAGE_STORE_HATCHBACKOPEN,
							 &IMAGE_STORE_SIGN,
							 &IMAGE_STORE_MAINMENUBUTTON,
							 &IMAGE_STORE_MAINMENUBUTTONDOWN,
							 &IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT,
							 &IMAGE_STORE_NEXTBUTTON,
							 &IMAGE_STORE_NEXTBUTTONHIGHLIGHT,
							 &IMAGE_STORE_NEXTBUTTONDISABLED,
							 &IMAGE_STORE_PREVBUTTON,
							 &IMAGE_STORE_PREVBUTTONHIGHLIGHT,
							 &IMAGE_STORE_PREVBUTTONDISABLED,
							 &IMAGE_STORE_PRICETAG,
							 &IMAGE_STORE_PACKETUPGRADE,
							 &IMAGE_STORE_MUSHROOMGARDENICON,
							 &IMAGE_STORE_AQUARIUMGARDENICON,
							 &IMAGE_STORE_TREEOFWISDOMICON,
							 &IMAGE_STORE_FIRSTAIDWALLNUTICON,
							 &IMAGE_STORE_PVZICON,
							 &IMAGE_ZOMBATAR_ACCESSORY_BG,
							 &IMAGE_ZOMBATAR_PREV_BUTTON,
							 &IMAGE_ZOMBATAR_PREV_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_NEXT_BUTTON,
							 &IMAGE_ZOMBATAR_NEXT_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_ZOMBIE_BLANK,
							 &IMAGE_ZOMBATAR_ZOMBIE_BLANK_SKIN,
							 &IMAGE_ZOMBATAR_BACKGROUND_CRAZYDAVE,
							 &IMAGE_ZOMBATAR_BACKGROUND_MENU,
							 &IMAGE_ZOMBATAR_BACKGROUND_MENU_DOS,
							 &IMAGE_ZOMBATAR_BACKGROUND_ROOF,
							 &IMAGE_ZOMBATAR_WIDGET_BG,
							 &IMAGE_ZOMBATAR_WIDGET_INNER_BG,
							 &IMAGE_ZOMBATAR_COLORS_BG,
							 &IMAGE_ZOMBATAR_LOGO,
							 &IMAGE_ZOMBATAR_ACCESSORY_BUTTON,
							 &IMAGE_ZOMBATAR_ACCESSORY_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_ACCESSORY_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_BACKDROPS_BUTTON,
							 &IMAGE_ZOMBATAR_BACKDROPS_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_BACKDROPS_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_CLOTHES_BUTTON,
							 &IMAGE_ZOMBATAR_CLOTHES_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_CLOTHES_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_EYEWEAR_BUTTON,
							 &IMAGE_ZOMBATAR_EYEWEAR_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_EYEWEAR_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON,
							 &IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_HAIR_BUTTON,
							 &IMAGE_ZOMBATAR_HAIR_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_HAIR_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_HATS_BUTTON,
							 &IMAGE_ZOMBATAR_HATS_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_HATS_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_SKIN_BUTTON,
							 &IMAGE_ZOMBATAR_SKIN_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_TIDBITS_BUTTON,
							 &IMAGE_ZOMBATAR_TIDBITS_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_TIDBITS_BUTTON_OVER,
							 &IMAGE_ZOMBATAR_ACCESSORY_BG_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_TRIPTYCH,
							 &IMAGE_ZOMBATAR_COLORPICKER,
							 &IMAGE_ZOMBATAR_COLORPICKER_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_COLORPICKER_NONE,
							 &IMAGE_ZOMBATAR_ACCESSORY_BG_NONE,
							 &IMAGE_ZOMBATAR_COLORS_BG_SMALL,
							 &IMAGE_ZOMBATAR_CLOTHES_1,
							 &IMAGE_ZOMBATAR_CLOTHES_2,
							 &IMAGE_ZOMBATAR_CLOTHES_3,
							 &IMAGE_ZOMBATAR_CLOTHES_4,
							 &IMAGE_ZOMBATAR_CLOTHES_5,
							 &IMAGE_ZOMBATAR_CLOTHES_6,
							 &IMAGE_ZOMBATAR_CLOTHES_7,
							 &IMAGE_ZOMBATAR_CLOTHES_8,
							 &IMAGE_ZOMBATAR_CLOTHES_9,
							 &IMAGE_ZOMBATAR_CLOTHES_10,
							 &IMAGE_ZOMBATAR_CLOTHES_11,
							 &IMAGE_ZOMBATAR_CLOTHES_12,
							 &IMAGE_ZOMBATAR_HATS_1,
							 &IMAGE_ZOMBATAR_HATS_2,
							 &IMAGE_ZOMBATAR_HATS_3,
							 &IMAGE_ZOMBATAR_HATS_4,
							 &IMAGE_ZOMBATAR_HATS_5,
							 &IMAGE_ZOMBATAR_HATS_6,
							 &IMAGE_ZOMBATAR_HATS_7,
							 &IMAGE_ZOMBATAR_HATS_8,
							 &IMAGE_ZOMBATAR_HATS_9,
							 &IMAGE_ZOMBATAR_HATS_10,
							 &IMAGE_ZOMBATAR_HATS_11,
							 &IMAGE_ZOMBATAR_HATS_12,
							 &IMAGE_ZOMBATAR_HATS_13,
							 &IMAGE_ZOMBATAR_HATS_14,
							 &IMAGE_ZOMBATAR_HAIR_1,
							 &IMAGE_ZOMBATAR_HAIR_2,
							 &IMAGE_ZOMBATAR_HAIR_3,
							 &IMAGE_ZOMBATAR_HAIR_4,
							 &IMAGE_ZOMBATAR_HAIR_5,
							 &IMAGE_ZOMBATAR_HAIR_6,
							 &IMAGE_ZOMBATAR_HAIR_7,
							 &IMAGE_ZOMBATAR_HAIR_8,
							 &IMAGE_ZOMBATAR_HAIR_9,
							 &IMAGE_ZOMBATAR_HAIR_10,
							 &IMAGE_ZOMBATAR_HAIR_11,
							 &IMAGE_ZOMBATAR_HAIR_12,
							 &IMAGE_ZOMBATAR_HAIR_13,
							 &IMAGE_ZOMBATAR_HAIR_14,
							 &IMAGE_ZOMBATAR_HAIR_15,
							 &IMAGE_ZOMBATAR_HAIR_16,
							 &IMAGE_ZOMBATAR_EYEWEAR_1,
							 &IMAGE_ZOMBATAR_EYEWEAR_2,
							 &IMAGE_ZOMBATAR_EYEWEAR_3,
							 &IMAGE_ZOMBATAR_EYEWEAR_4,
							 &IMAGE_ZOMBATAR_EYEWEAR_5,
							 &IMAGE_ZOMBATAR_EYEWEAR_6,
							 &IMAGE_ZOMBATAR_EYEWEAR_7,
							 &IMAGE_ZOMBATAR_EYEWEAR_8,
							 &IMAGE_ZOMBATAR_EYEWEAR_9,
							 &IMAGE_ZOMBATAR_EYEWEAR_10,
							 &IMAGE_ZOMBATAR_EYEWEAR_11,
							 &IMAGE_ZOMBATAR_EYEWEAR_12,
							 &IMAGE_ZOMBATAR_EYEWEAR_13,
							 &IMAGE_ZOMBATAR_EYEWEAR_14,
							 &IMAGE_ZOMBATAR_EYEWEAR_15,
							 &IMAGE_ZOMBATAR_EYEWEAR_16,
							 &IMAGE_ZOMBATAR_FACIALHAIR_1,
							 &IMAGE_ZOMBATAR_FACIALHAIR_2,
							 &IMAGE_ZOMBATAR_FACIALHAIR_3,
							 &IMAGE_ZOMBATAR_FACIALHAIR_4,
							 &IMAGE_ZOMBATAR_FACIALHAIR_5,
							 &IMAGE_ZOMBATAR_FACIALHAIR_6,
							 &IMAGE_ZOMBATAR_FACIALHAIR_7,
							 &IMAGE_ZOMBATAR_FACIALHAIR_8,
							 &IMAGE_ZOMBATAR_FACIALHAIR_9,
							 &IMAGE_ZOMBATAR_FACIALHAIR_10,
							 &IMAGE_ZOMBATAR_FACIALHAIR_11,
							 &IMAGE_ZOMBATAR_FACIALHAIR_12,
							 &IMAGE_ZOMBATAR_FACIALHAIR_13,
							 &IMAGE_ZOMBATAR_FACIALHAIR_14,
							 &IMAGE_ZOMBATAR_FACIALHAIR_15,
							 &IMAGE_ZOMBATAR_FACIALHAIR_16,
							 &IMAGE_ZOMBATAR_FACIALHAIR_17,
							 &IMAGE_ZOMBATAR_FACIALHAIR_18,
							 &IMAGE_ZOMBATAR_FACIALHAIR_19,
							 &IMAGE_ZOMBATAR_FACIALHAIR_20,
							 &IMAGE_ZOMBATAR_FACIALHAIR_21,
							 &IMAGE_ZOMBATAR_FACIALHAIR_22,
							 &IMAGE_ZOMBATAR_FACIALHAIR_23,
							 &IMAGE_ZOMBATAR_FACIALHAIR_24,
							 &IMAGE_ZOMBATAR_TIDBITS_1,
							 &IMAGE_ZOMBATAR_TIDBITS_2,
							 &IMAGE_ZOMBATAR_TIDBITS_3,
							 &IMAGE_ZOMBATAR_TIDBITS_4,
							 &IMAGE_ZOMBATAR_TIDBITS_5,
							 &IMAGE_ZOMBATAR_TIDBITS_6,
							 &IMAGE_ZOMBATAR_TIDBITS_7,
							 &IMAGE_ZOMBATAR_TIDBITS_8,
							 &IMAGE_ZOMBATAR_TIDBITS_9,
							 &IMAGE_ZOMBATAR_TIDBITS_10,
							 &IMAGE_ZOMBATAR_TIDBITS_11,
							 &IMAGE_ZOMBATAR_TIDBITS_12,
							 &IMAGE_ZOMBATAR_TIDBITS_13,
							 &IMAGE_ZOMBATAR_TIDBITS_14,
							 &IMAGE_ZOMBATAR_ACCESSORY_1,
							 &IMAGE_ZOMBATAR_ACCESSORY_2,
							 &IMAGE_ZOMBATAR_ACCESSORY_3,
							 &IMAGE_ZOMBATAR_ACCESSORY_4,
							 &IMAGE_ZOMBATAR_ACCESSORY_5,
							 &IMAGE_ZOMBATAR_ACCESSORY_6,
							 &IMAGE_ZOMBATAR_ACCESSORY_7,
							 &IMAGE_ZOMBATAR_ACCESSORY_8,
							 &IMAGE_ZOMBATAR_ACCESSORY_9,
							 &IMAGE_ZOMBATAR_ACCESSORY_10,
							 &IMAGE_ZOMBATAR_ACCESSORY_11,
							 &IMAGE_ZOMBATAR_ACCESSORY_12,
							 &IMAGE_ZOMBATAR_ACCESSORY_13,
							 &IMAGE_ZOMBATAR_ACCESSORY_14,
							 &IMAGE_ZOMBATAR_HATS_1_MASK,
							 &IMAGE_ZOMBATAR_HAIR_1_MASK,
							 &IMAGE_ZOMBATAR_HAIR_2_MASK,
							 &IMAGE_ZOMBATAR_HAIR_11_MASK,
							 &IMAGE_ZOMBATAR_HAIR_12_MASK,
							 &IMAGE_ZOMBATAR_HAIR_13_MASK,
							 &IMAGE_ZOMBATAR_HAIR_14_MASK,
							 &IMAGE_ZOMBATAR_HAIR_15_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_1_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_4_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_8_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_9_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_10_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_11_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_12_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_14_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_15_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_16_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_18_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_21_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_22_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_23_MASK,
							 &IMAGE_ZOMBATAR_FACIALHAIR_24_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_1_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_2_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_3_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_4_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_5_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_6_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_7_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_8_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_9_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_10_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_11_MASK,
							 &IMAGE_ZOMBATAR_EYEWEAR_12_MASK,
							 &IMAGE_ZOMBATAR_HATS_3_MASK,
							 &IMAGE_ZOMBATAR_HATS_6_MASK,
							 &IMAGE_ZOMBATAR_HATS_7_MASK,
							 &IMAGE_ZOMBATAR_HATS_8_MASK,
							 &IMAGE_ZOMBATAR_HATS_9_MASK,
							 &IMAGE_ZOMBATAR_HATS_11_MASK,
							 &IMAGE_ZOMBATAR_BACKGROUND_BLANK,
							 &IMAGE_ZOMBATAR_ACCESSORY_15,
							 &IMAGE_ZOMBATAR_ACCESSORY_16,
							 &IMAGE_ZOMBATAR_ACCEPT_BUTTON,
							 &IMAGE_ZOMBATAR_ACCEPT_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_FINISHED_BUTTON,
							 &IMAGE_ZOMBATAR_FINISHED_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_MAIN_BG,
							 &IMAGE_ZOMBATAR_BACK_BUTTON,
							 &IMAGE_ZOMBATAR_BACK_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON,
							 &IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_TOS_ARROW,
							 &IMAGE_ZOMBATAR_BEGIN_BUTTON,
							 &IMAGE_ZOMBATAR_BEGIN_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_TOS_SLIDER,
							 &IMAGE_ZOMBATAR_TOS_SLIDER_THUMB,
							 &IMAGE_ZOMBATAR_DISPLAY_WINDOW,
							 &IMAGE_ZOMBATAR_MAINMENUBACK_HIGHLIGHT,
							 &IMAGE_ZOMBATAR_VIEW_BUTTON,
							 &IMAGE_ZOMBATAR_VIEW_BUTTON_HIGHLIGHT,
							 &IMAGE_ZOMBIE_FINAL_NOTE,
							 &IMAGE_ZOMBIE_NOTE,
							 &IMAGE_ZOMBIE_NOTE1,
							 &IMAGE_ZOMBIE_NOTE2,
							 &IMAGE_ZOMBIE_NOTE3,
							 &IMAGE_ZOMBIE_NOTE4,
							 &IMAGE_ZOMBIE_NOTE_HELP,
							 &IMAGE_AQUARIUM1,
							 &IMAGE_WAVECENTER,
							 &IMAGE_WAVESIDE,
							 &IMAGE_BLANK,
							 &IMAGE_POPCAP_LOGO,
							 &IMAGE_PARTNER_LOGO,
							 &IMAGE_TITLESCREEN,
							 &IMAGE_LOADBAR_DIRT,
							 &IMAGE_LOADBAR_GRASS,
							 &IMAGE_PVZ_LOGO,
							 &IMAGE_REANIM_SODROLLCAP,
							 &FONT_BRIANNETOD16,
							 &SOUND_BUTTONCLICK,
							 &SOUND_LOADINGBAR_FLOWER,
							 &SOUND_LOADINGBAR_ZOMBIE,
							 &FONT_IMAGE_HOUSEOFTERROR28,
							 &FONT_HOUSEOFTERROR28,
							 &FONT_HOUSEOFTERROR20,
							 &FONT_HOUSEOFTERROR16,
							 &FONT_TINYBOLD,
							 &FONT_CONTINUUMBOLD14,
							 &FONT_CONTINUUMBOLD14OUTLINE,
							 &FONT_DWARVENTODCRAFT12,
							 &FONT_DWARVENTODCRAFT15,
							 &FONT_DWARVENTODCRAFT18,
							 &FONT_DWARVENTODCRAFT18BRIGHTGREENINSET,
							 &FONT_DWARVENTODCRAFT18GREENINSET,
							 &FONT_DWARVENTODCRAFT18YELLOW,
							 &FONT_DWARVENTODCRAFT24,
							 &FONT_DWARVENTODCRAFT36BRIGHTGREENINSET,
							 &FONT_DWARVENTODCRAFT36GREENINSET,
							 &FONT_PICO129,
							 &FONT_BRIANNETOD12,
							 &IMAGE_EDITBOX,
							 &IMAGE_DIALOG_TOPLEFT,
							 &IMAGE_DIALOG_TOPMIDDLE,
							 &IMAGE_DIALOG_TOPRIGHT,
							 &IMAGE_DIALOG_CENTERLEFT,
							 &IMAGE_DIALOG_CENTERMIDDLE,
							 &IMAGE_DIALOG_CENTERRIGHT,
							 &IMAGE_DIALOG_BOTTOMLEFT,
							 &IMAGE_DIALOG_BOTTOMMIDDLE,
							 &IMAGE_DIALOG_BOTTOMRIGHT,
							 &IMAGE_DIALOG_BIGBOTTOMLEFT,
							 &IMAGE_DIALOG_BIGBOTTOMMIDDLE,
							 &IMAGE_DIALOG_BIGBOTTOMRIGHT,
							 &IMAGE_DIALOG_HEADER,
							 &IMAGE_BUTTON_LEFT,
							 &IMAGE_BUTTON_MIDDLE,
							 &IMAGE_BUTTON_RIGHT,
							 &IMAGE_BUTTON_DOWN_LEFT,
							 &IMAGE_BUTTON_DOWN_MIDDLE,
							 &IMAGE_BUTTON_DOWN_RIGHT,
							 &IMAGE_SEEDCHOOSER_BACKGROUND,
							 &IMAGE_SEEDCHOOSER_BUTTON,
							 &IMAGE_SEEDCHOOSER_BUTTON_DISABLED,
							 &IMAGE_SEEDCHOOSER_BUTTON_GLOW,
							 &IMAGE_SEEDCHOOSER_BUTTON2,
							 &IMAGE_SEEDCHOOSER_BUTTON2_GLOW,
							 &IMAGE_SEEDCHOOSER_IMITATERADDON,
							 &IMAGE_SEEDS,
							 &IMAGE_SEEDPACKET_LARGER,
							 &IMAGE_SEEDPACKETSILHOUETTE,
							 &IMAGE_FLAGMETER,
							 &IMAGE_FLAGMETERLEVELPROGRESS,
							 &IMAGE_FLAGMETERPARTS,
							 &IMAGE_TROPHY,
							 &IMAGE_TROPHY_HI_RES,
							 &IMAGE_MINIGAME_TROPHY,
							 &IMAGE_ZOMBIE_NOTE_SMALL,
							 &IMAGE_TACO,
							 &IMAGE_CARKEYS,
							 &IMAGE_ALMANAC,
							 &IMAGE_ICON_POOLCLEANER,
							 &IMAGE_ICON_ROOFCLEANER,
							 &IMAGE_ICON_RAKE,
							 &IMAGE_BRAIN,
							 &IMAGE_MONEYBAG,
							 &IMAGE_MONEYBAG_HI_RES,
							 &IMAGE_CHOCOLATE,
							 &IMAGE_OPTIONS_BACKTOGAMEBUTTON0,
							 &IMAGE_OPTIONS_BACKTOGAMEBUTTON2,
							 &IMAGE_OPTIONS_CHECKBOX0,
							 &IMAGE_OPTIONS_CHECKBOX1,
							 &IMAGE_OPTIONS_MENUBACK,
							 &IMAGE_OPTIONS_SLIDERKNOB2,
							 &IMAGE_OPTIONS_SLIDERSLOT,
							 &IMAGE_SELECTORSCREEN_HELP1,
							 &IMAGE_SELECTORSCREEN_HELP2,
							 &IMAGE_SELECTORSCREEN_OPTIONS1,
							 &IMAGE_SELECTORSCREEN_OPTIONS2,
							 &IMAGE_SELECTORSCREEN_QUIT1,
							 &IMAGE_SELECTORSCREEN_QUIT2,
							 &IMAGE_SELECTORSCREEN_ALMANAC,
							 &IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT,
							 &IMAGE_SELECTORSCREEN_STORE,
							 &IMAGE_SELECTORSCREEN_STOREHIGHLIGHT,
							 &IMAGE_SELECTORSCREEN_LEVELNUMBERS,
							 &IMAGE_SELECTORSCREEN_ZENGARDEN,
							 &IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT,
							 &IMAGE_STORE_SPEECHBUBBLE,
							 &IMAGE_STORE_SPEECHBUBBLE2,
							 &IMAGE_SELECTORSCREEN_ACHIEVEMENTS_BG,
							 &IMAGE_SELECTORSCREEN_MOREWAYSTOPLAY_BG,
							 &IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL,
							 &IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL_PRESS,
							 &IMAGE_ACHEESEMENTS_BEJEWELED,
							 &IMAGE_ACHEESEMENTS_BOOKWORM,
							 &IMAGE_ACHEESEMENTS_CHINA,
							 &IMAGE_ACHEESEMENTS_CHUZZLE,
							 &IMAGE_ACHEESEMENTS_HOLE_TILE,
							 &IMAGE_ACHEESEMENTS_PEGGLE,
							 &IMAGE_ACHEESEMENTS_PIPE,
							 &IMAGE_ACHEESEMENTS_ZUMA,
							 &IMAGE_ACHEESEMENTS_ICONS,
							 &IMAGE_ACHEESEMENTS_BACK_HIGHLIGHT,
							 &IMAGE_QUICKPLAY_MINIGAMES_BUTTON,
							 &IMAGE_QUICKPLAY_MINIGAMES_BUTTON_HIGHLIGHT,
							 &IMAGE_QUICKPLAY_MINIGAMES_CLOUD,
							 &IMAGE_QUICKPLAY_PUZZLES_BUTTON,
							 &IMAGE_QUICKPLAY_PUZZLES_BUTTON_HIGHLIGHT,
							 &IMAGE_QUICKPLAY_PUZZLES_CLOUD,
							 &IMAGE_QUICKPLAY_SURVIVAL_BUTTON,
							 &IMAGE_QUICKPLAY_SURVIVAL_BUTTON_HIGHLIGHT,
							 &IMAGE_QUICKPLAY_SURVIVAL_CLOUD,
							 &IMAGE_QUICKPLAY_BACK_BUTTON,
							 &IMAGE_QUICKPLAY_BACK_BUTTON_HIGHLIGHT,
							 &IMAGE_ACHEESEMENTS_MORE_ROCK,
							 &IMAGE_ACHEESEMENTS_MORE_BUTTON,
							 &IMAGE_ACHEESEMENTS_MORE_BUTTON_HIGHLIGHT,
							 &IMAGE_ACHEESEMENTS_TOP_BUTTON,
							 &IMAGE_ACHEESEMENTS_TOP_BUTTON_HIGHLIGHT,
							 &IMAGE_SHOVEL,
							 &IMAGE_SHOVEL_HI_RES,
							 &IMAGE_TOMBSTONES,
							 &IMAGE_TOMBSTONE_MOUNDS,
							 &IMAGE_NIGHT_GRAVE_GRAPHIC,
							 &IMAGE_CRATER,
							 &IMAGE_CRATER_FADING,
							 &IMAGE_CRATER_ROOF_CENTER,
							 &IMAGE_CRATER_ROOF_LEFT,
							 &IMAGE_CRATER_WATER_DAY,
							 &IMAGE_CRATER_WATER_NIGHT,
							 &IMAGE_COBCANNON_TARGET,
							 &IMAGE_COBCANNON_POPCORN,
							 &IMAGE_FERTILIZER,
							 &IMAGE_WATERINGCAN,
							 &IMAGE_WATERINGCANGOLD,
							 &IMAGE_PHONOGRAPH,
							 &IMAGE_BEGHOULED_TWIST_OVERLAY,
							 &IMAGE_ZEN_GOLDTOOLRETICLE,
							 &IMAGE_ZEN_GARDENGLOVE,
							 &IMAGE_ZEN_MONEYSIGN,
							 &IMAGE_ZEN_NEXTGARDEN,
							 &IMAGE_ZEN_WHEELBARROW,
							 &IMAGE_ZENSHOPBUTTON,
							 &IMAGE_ZENSHOPBUTTON_HIGHLIGHT,
							 &IMAGE_PRESENT,
							 &IMAGE_PRESENTOPEN,
							 &IMAGE_SUNFLOWER_TROPHY,
							 &IMAGE_SLOTMACHINE_OVERLAY,
							 &IMAGE_SCARY_POT,
							 &IMAGE_BUG_SPRAY,
							 &IMAGE_PLANTSPEECHBUBBLE,
							 &IMAGE_WATERDROP,
							 &IMAGE_TREEFOOD,
							 &IMAGE_PACKET_PLANTS,
							 &IMAGE_ZEN_NEED_ICONS,
							 &IMAGE_PROJECTILEPEA,
							 &IMAGE_PROJECTILESNOWPEA,
							 &IMAGE_PROJECTILECACTUS,
							 &IMAGE_DIRTSMALL,
							 &IMAGE_DIRTBIG,
							 &IMAGE_ROCKSMALL,
							 &IMAGE_WATERPARTICLE,
							 &IMAGE_WHITEWATER,
							 &IMAGE_WHITEWATER_SHADOW,
							 &IMAGE_MELONPULT_PARTICLES,
							 &IMAGE_WINTERMELON_PARTICLES,
							 &IMAGE_PROJECTILE_STAR,
							 &IMAGE_SEEDBANK,
							 &IMAGE_CONVEYORBELT_BACKDROP,
							 &IMAGE_CONVEYORBELT,
							 &IMAGE_SHOVELBANK,
							 &IMAGE_SUNBANK,
							 &IMAGE_COINBANK,
							 &IMAGE_POOL,
							 &IMAGE_POOL_NIGHT,
							 &IMAGE_POOL_BASE,
							 &IMAGE_POOL_BASE_NIGHT,
							 &IMAGE_POOL_SHADING,
							 &IMAGE_POOL_SHADING_NIGHT,
							 &IMAGE_POOL_CAUSTIC_EFFECT,
							 &IMAGE_PLANTSHADOW,
							 &IMAGE_PLANTSHADOW2,
							 &IMAGE_PEA_SHADOWS,
							 &IMAGE_WALLNUT_BOWLINGSTRIPE,
							 &IMAGE_ICE,
							 &IMAGE_ICE_CAP,
							 &IMAGE_ICE_SPARKLES,
							 &IMAGE_IMITATERSEED,
							 &IMAGE_ALMANAC_IMITATER,
							 &IMAGE_IMITATERSEEDDISABLED,
							 &IMAGE_ICETRAP,
							 &IMAGE_ICETRAP2,
							 &IMAGE_ICETRAP_PARTICLES,
							 &IMAGE_ZOMBIE_BOBSLED1,
							 &IMAGE_ZOMBIE_BOBSLED2,
							 &IMAGE_ZOMBIE_BOBSLED3,
							 &IMAGE_ZOMBIE_BOBSLED4,
							 &IMAGE_ZOMBIE_BOBSLED_INSIDE,
							 &IMAGE_BUNGEECORD,
							 &IMAGE_BUNGEETARGET,
							 &IMAGE_SPOTLIGHT,
							 &IMAGE_SPOTLIGHT2,
							 &IMAGE_WHITEPIXEL,
							 &IMAGE_ZOMBIEPOLEVAULTERHEAD,
							 &IMAGE_ZOMBIEFOOTBALLHEAD,
							 &IMAGE_POOLSPARKLY,
							 &IMAGE_WALLNUTPARTICLESSMALL,
							 &IMAGE_WALLNUTPARTICLESLARGE,
							 &IMAGE_PEA_SPLATS,
							 &IMAGE_STAR_PARTICLES,
							 &IMAGE_STAR_SPLATS,
							 &IMAGE_PEA_PARTICLES,
							 &IMAGE_SNOWPEA_SPLATS,
							 &IMAGE_SNOWPEA_PARTICLES,
							 &IMAGE_SNOWPEA_PUFF,
							 &IMAGE_SNOWFLAKES,
							 &IMAGE_POTATOMINE_PARTICLES,
							 &IMAGE_PUFFSHROOM_PUFF1,
							 &IMAGE_ZAMBONISMOKE,
							 &IMAGE_ZOMBIEDANCERHEAD,
							 &IMAGE_ZOMBIEBALLOONHEAD,
							 &IMAGE_ZOMBIEIMPHEAD,
							 &IMAGE_ZOMBIEDIGGERHEAD,
							 &IMAGE_ZOMBIEDIGGERARM,
							 &IMAGE_ZOMBIEDOLPHINRIDERHEAD,
							 &IMAGE_ZOMBIEPOGO,
							 &IMAGE_ZOMBIEBACKUPDANCERHEAD,
							 &IMAGE_ZOMBIEBOBSLEDHEAD,
							 &IMAGE_ZOMBIELADDERHEAD,
							 &IMAGE_ZOMBIEYETIHEAD,
							 &IMAGE_SEEDPACKETFLASH,
							 &IMAGE_ZOMBIEJACKBOXARM,
							 &IMAGE_IMITATERCLOUDS,
							 &IMAGE_IMITATERPUFFS,
							 &IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES,
							 &IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES,
							 &IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES,
							 &IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES,
							 &IMAGE_DOOMSHROOM_EXPLOSION_BASE,
							 &IMAGE_RAIN,
							 &IMAGE_VASE_CHUNKS,
							 &IMAGE_ZOMBOSS_PARTICLES,
							 &IMAGE_AWARDPICKUPGLOW,
							 &IMAGE_ZOMBIE_SEAWEED,
							 &IMAGE_PINATA,
							 &IMAGE_ZOMBIEFUTUREGLASSES,
							 &IMAGE_DUST_PUFFS,
							 &IMAGE_REANIM_WALLNUT_BODY,
							 &IMAGE_REANIM_WALLNUT_CRACKED1,
							 &IMAGE_REANIM_WALLNUT_CRACKED2,
							 &IMAGE_REANIM_TALLNUT_CRACKED1,
							 &IMAGE_REANIM_TALLNUT_CRACKED2,
							 &IMAGE_REANIM_PUMPKIN_DAMAGE1,
							 &IMAGE_REANIM_PUMPKIN_DAMAGE3,
							 &IMAGE_REANIM_ZOMBIE_CONE1,
							 &IMAGE_REANIM_ZOMBIE_CONE2,
							 &IMAGE_REANIM_ZOMBIE_CONE3,
							 &IMAGE_REANIM_ZOMBIE_BUCKET1,
							 &IMAGE_REANIM_ZOMBIE_BUCKET2,
							 &IMAGE_REANIM_ZOMBIE_BUCKET3,
							 &IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT,
							 &IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2,
							 &IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3,
							 &IMAGE_REANIM_ZOMBIE_SCREENDOOR1,
							 &IMAGE_REANIM_ZOMBIE_SCREENDOOR2,
							 &IMAGE_REANIM_ZOMBIE_SCREENDOOR3,
							 &IMAGE_REANIM_ZOMBIE_FLAG1,
							 &IMAGE_REANIM_ZOMBIE_FLAG3,
							 &IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET,
							 &IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2,
							 &IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3,
							 &IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND,
							 &IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER,
							 &IMAGE_REANIM_ZOMBIE_PAPER_PAPER2,
							 &IMAGE_REANIM_ZOMBIE_PAPER_PAPER3,
							 &IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD,
							 &IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT,
							 &IMAGE_REANIM_COIN_SILVER_DOLLAR,
							 &IMAGE_REANIM_COIN_GOLD_DOLLAR,
							 &IMAGE_REANIM_DIAMOND,
							 &IMAGE_REANIM_COINGLOW,
							 &IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_HAND,
							 &IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_BACKUP_INNERARM_HAND,
							 &IMAGE_REANIM_ZOMBIE_BACKUP_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_OUTERARM_HAND,
							 &IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE,
							 &IMAGE_REANIM_ZOMBIE_IMP_ARM2,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE,
							 &IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE,
							 &IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2,
							 &IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND,
							 &IMAGE_REANIM_ZOMBIE_JACKBOX_BOX,
							 &IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2,
							 &IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED,
							 &IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL,
							 &IMAGE_REANIM_ZOMBIE_CATAPULT_POLE,
							 &IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE,
							 &IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL,
							 &IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL,
							 &IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE,
							 &IMAGE_REANIM_ZOMBIE_LADDER_1,
							 &IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_LADDER_5,
							 &IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL,
							 &IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1,
							 &IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2,
							 &IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE,
							 &IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE,
							 &IMAGE_REANIM_CABBAGEPULT_CABBAGE,
							 &IMAGE_REANIM_CORNPULT_KERNAL,
							 &IMAGE_REANIM_CORNPULT_BUTTER,
							 &IMAGE_REANIM_CORNPULT_BUTTER_SPLAT,
							 &IMAGE_REANIM_MELONPULT_MELON,
							 &IMAGE_REANIM_WINTERMELON_PROJECTILE,
							 &IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE,
							 &IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT,
							 &IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1,
							 &IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2,
							 &IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3,
							 &IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4,
							 &IMAGE_REANIM_GARLIC_BODY2,
							 &IMAGE_REANIM_GARLIC_BODY3,
							 &IMAGE_REANIM_COBCANNON_COB,
							 &IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2,
							 &IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND,
							 &IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD,
							 &IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON,
							 &IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT,
							 &IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON,
							 &IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT,
							 &IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON,
							 &IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT,
							 &IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON,
							 &IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT,
							 &IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON,
							 &IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT,
							 &IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS,
							 &IMAGE_REANIM_SELECTORSCREEN_WOODSIGN3_PRESS,
							 &IMAGE_REANIM_SELECTORSCREEN_BG,
							 &IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW,
							 &IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW,
							 &IMAGE_REANIM_TREE_BG,
							 &IMAGE_REANIM_POT_TOP_DARK,
							 &IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE,
							 &IMAGE_REANIM_STINKY_TURN3,
							 &IMAGE_REANIM_CRAZYDAVE_MOUTH1,
							 &IMAGE_REANIM_CRAZYDAVE_MOUTH4,
							 &IMAGE_REANIM_CRAZYDAVE_MOUTH5,
							 &IMAGE_REANIM_CRAZYDAVE_MOUTH6,
							 &IMAGE_REANIM_ZOMBIE_MUSTACHE2,
							 &IMAGE_REANIM_ZOMBIE_MUSTACHE3,
							 &SOUND_ACHIEVEMENT,
							 &SOUND_AWOOGA,
							 &SOUND_BLEEP,
							 &SOUND_BUZZER,
							 &SOUND_CHOMP,
							 &SOUND_CHOMP2,
							 &SOUND_CHOMPSOFT,
							 &SOUND_EVILLAUGH,
							 &SOUND_FLOOP,
							 &SOUND_FROZEN,
							 &SOUND_GULP,
							 &SOUND_GROAN,
							 &SOUND_GROAN2,
							 &SOUND_GROAN3,
							 &SOUND_GROAN4,
							 &SOUND_GROAN5,
							 &SOUND_GROAN6,
							 &SOUND_LOSEMUSIC,
							 &SOUND_MINDCONTROLLED,
							 &SOUND_PAUSE,
							 &SOUND_PLANT,
							 &SOUND_PLANT2,
							 &SOUND_POINTS,
							 &SOUND_SEEDLIFT,
							 &SOUND_SIREN,
							 &SOUND_SLURP,
							 &SOUND_SPLAT,
							 &SOUND_SPLAT2,
							 &SOUND_SPLAT3,
							 &SOUND_SUKHBIR,
							 &SOUND_SUKHBIR2,
							 &SOUND_SUKHBIR3,
							 &SOUND_SUKHBIR4,
							 &SOUND_SUKHBIR5,
							 &SOUND_SUKHBIR6,
							 &SOUND_TAP,
							 &SOUND_TAP2,
							 &SOUND_THROW,
							 &SOUND_THROW2,
							 &SOUND_BLOVER,
							 &SOUND_WINMUSIC,
							 &SOUND_LAWNMOWER,
							 &SOUND_BOING,
							 &SOUND_JACKINTHEBOX,
							 &SOUND_DIAMOND,
							 &SOUND_DOLPHIN_APPEARS,
							 &SOUND_DOLPHIN_BEFORE_JUMPING,
							 &SOUND_POTATO_MINE,
							 &SOUND_ZAMBONI,
							 &SOUND_BALLOON_POP,
							 &SOUND_THUNDER,
							 &SOUND_ZOMBIESPLASH,
							 &SOUND_BOWLING,
							 &SOUND_BOWLINGIMPACT,
							 &SOUND_BOWLINGIMPACT2,
							 &SOUND_GRAVEBUSTERCHOMP,
							 &SOUND_GRAVEBUTTON,
							 &SOUND_LIMBS_POP,
							 &SOUND_PLANTERN,
							 &SOUND_POGO_ZOMBIE,
							 &SOUND_SNOW_PEA_SPARKLES,
							 &SOUND_PLANT_WATER,
							 &SOUND_ZOMBIE_ENTERING_WATER,
							 &SOUND_ZOMBIE_FALLING_1,
							 &SOUND_ZOMBIE_FALLING_2,
							 &SOUND_PUFF,
							 &SOUND_FUME,
							 &SOUND_HUGE_WAVE,
							 &SOUND_SLOT_MACHINE,
							 &SOUND_COIN,
							 &SOUND_ROLL_IN,
							 &SOUND_DIGGER_ZOMBIE,
							 &SOUND_HATCHBACK_CLOSE,
							 &SOUND_HATCHBACK_OPEN,
							 &SOUND_KERNELPULT,
							 &SOUND_KERNELPULT2,
							 &SOUND_ZOMBAQUARIUM_DIE,
							 &SOUND_BUNGEE_SCREAM,
							 &SOUND_BUNGEE_SCREAM2,
							 &SOUND_BUNGEE_SCREAM3,
							 &SOUND_BUTTER,
							 &SOUND_JACK_SURPRISE,
							 &SOUND_JACK_SURPRISE2,
							 &SOUND_NEWSPAPER_RARRGH,
							 &SOUND_NEWSPAPER_RARRGH2,
							 &SOUND_NEWSPAPER_RIP,
							 &SOUND_SQUASH_HMM,
							 &SOUND_SQUASH_HMM2,
							 &SOUND_VASE_BREAKING,
							 &SOUND_POOL_CLEANER,
							 &SOUND_MAGNETSHROOM,
							 &SOUND_LADDER_ZOMBIE,
							 &SOUND_GARGANTUAR_THUMP,
							 &SOUND_BASKETBALL,
							 &SOUND_FIREPEA,
							 &SOUND_IGNITE,
							 &SOUND_IGNITE2,
							 &SOUND_READYSETPLANT,
							 &SOUND_DOOMSHROOM,
							 &SOUND_EXPLOSION,
							 &SOUND_FINALWAVE,
							 &SOUND_REVERSE_EXPLOSION,
							 &SOUND_RVTHROW,
							 &SOUND_SHIELDHIT,
							 &SOUND_SHIELDHIT2,
							 &SOUND_BOSSEXPLOSION,
							 &SOUND_CHERRYBOMB,
							 &SOUND_BONK,
							 &SOUND_SWING,
							 &SOUND_RAIN,
							 &SOUND_LIGHTFILL,
							 &SOUND_PLASTICHIT,
							 &SOUND_PLASTICHIT2,
							 &SOUND_JALAPENO,
							 &SOUND_BALLOONINFLATE,
							 &SOUND_BIGCHOMP,
							 &SOUND_MELONIMPACT,
							 &SOUND_MELONIMPACT2,
							 &SOUND_PLANTGROW,
							 &SOUND_SHOOP,
							 &SOUND_TAPGLASS,
							 &SOUND_JUICY,
							 &SOUND_COFFEE,
							 &SOUND_WAKEUP,
							 &SOUND_LOWGROAN,
							 &SOUND_LOWGROAN2,
							 &SOUND_PRIZE,
							 &SOUND_YUCK,
							 &SOUND_YUCK2,
							 &SOUND_GRASSSTEP,
							 &SOUND_SHOVEL,
							 &SOUND_COBLAUNCH,
							 &SOUND_WATERING,
							 &SOUND_POLEVAULT,
							 &SOUND_GRAVESTONE_RUMBLE,
							 &SOUND_DIRT_RISE,
							 &SOUND_FERTILIZER,
							 &SOUND_PORTAL,
							 &SOUND_BUGSPRAY,
							 &SOUND_SCREAM,
							 &SOUND_PAPER,
							 &SOUND_MONEYFALLS,
							 &SOUND_IMP,
							 &SOUND_IMP2,
							 &SOUND_HYDRAULIC_SHORT,
							 &SOUND_HYDRAULIC,
							 &SOUND_GARGANTUDEATH,
							 &SOUND_CERAMIC,
							 &SOUND_BOSSBOULDERATTACK,
							 &SOUND_CHIME,
							 &SOUND_CRAZYDAVESHORT1,
							 &SOUND_CRAZYDAVESHORT2,
							 &SOUND_CRAZYDAVESHORT3,
							 &SOUND_CRAZYDAVELONG1,
							 &SOUND_CRAZYDAVELONG2,
							 &SOUND_CRAZYDAVELONG3,
							 &SOUND_CRAZYDAVEEXTRALONG1,
							 &SOUND_CRAZYDAVEEXTRALONG2,
							 &SOUND_CRAZYDAVEEXTRALONG3,
							 &SOUND_CRAZYDAVECRAZY,
							 &SOUND_PHONOGRAPH,
							 &SOUND_DANCER,
							 &SOUND_FINALFANFARE,
							 &SOUND_CRAZYDAVESCREAM,
							 &SOUND_CRAZYDAVESCREAM2,
							 &RESOURCE_NONE};

Image *Sexy::LoadImageById(ResourceManager *theManager, int theId)
{
	return (*((Image **)gResources[theId]) = theManager->LoadImage(GetStringIdById(theId)));
}

void Sexy::ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage)
{
	theManager->ReplaceImage(GetStringIdById(theId), theImage);
	*(Image **)gResources[theId] = theImage;
}

Image *Sexy::GetImageById(int theId)
{
	return *(Image **)gResources[theId];
}

Font *Sexy::GetFontById(int theId)
{
	return *(Font **)gResources[theId];
}

int Sexy::GetSoundById(int theId)
{
	return *(int *)gResources[theId];
}

Image *&Sexy::GetImageRefById(int theId)
{
	return *(Image **)gResources[theId];
}

Font *&Sexy::GetFontRefById(int theId)
{
	return *(Font **)gResources[theId];
}

int &Sexy::GetSoundRefById(int theId)
{
	return *(int *)gResources[theId];
}

static Sexy::OldResourceId GetIdByVariable(const void *theVariable)
{
	typedef std::map<int, int> MyMap;
	static MyMap aMap;
	if (gNeedRecalcVariableToIdMap)
	{
		gNeedRecalcVariableToIdMap = false;
		aMap.clear();
		for (int i = 0; i < RESOURCE_ID_MAX; i++)
			aMap[*(int *)gResources[i]] = i;
	}

	MyMap::iterator anItr = aMap.find((int)(uintptr_t)theVariable);
	if (anItr == aMap.end())
		return RESOURCE_ID_MAX;
	else
		return (OldResourceId)anItr->second;
}

Sexy::OldResourceId Sexy::GetIdByImage(Image *theImage)
{
	return GetIdByVariable(theImage);
}

Sexy::OldResourceId Sexy::GetIdByFont(Font *theFont)
{
	return GetIdByVariable(theFont);
}

Sexy::OldResourceId Sexy::GetIdBySound(int theSound)
{
	return GetIdByVariable((void *)theSound);
}

ResourceId Sexy::GetStringIdById(int theId)
{
	switch (theId)
	{
	case IMAGE_ALMANAC_INDEXBACK_ID:
		return {"PVZ", "IMAGE_ALMANAC_INDEXBACK"};
	case IMAGE_ALMANAC_PLANTBACK_ID:
		return {"PVZ", "IMAGE_ALMANAC_PLANTBACK"};
	case IMAGE_ALMANAC_ZOMBIEBACK_ID:
		return {"PVZ", "IMAGE_ALMANAC_ZOMBIEBACK"};
	case IMAGE_ALMANAC_PLANTCARD_ID:
		return {"PVZ", "IMAGE_ALMANAC_PLANTCARD"};
	case IMAGE_ALMANAC_ZOMBIECARD_ID:
		return {"PVZ", "IMAGE_ALMANAC_ZOMBIECARD"};
	case IMAGE_ALMANAC_ZOMBIEWINDOW_ID:
		return {"PVZ", "IMAGE_ALMANAC_ZOMBIEWINDOW"};
	case IMAGE_ALMANAC_ZOMBIEWINDOW2_ID:
		return {"PVZ", "IMAGE_ALMANAC_ZOMBIEWINDOW2"};
	case IMAGE_ALMANAC_ZOMBIEBLANK_ID:
		return {"PVZ", "IMAGE_ALMANAC_ZOMBIEBLANK"};
	case IMAGE_ALMANAC_GROUNDDAY_ID:
		return {"PVZ", "IMAGE_ALMANAC_GROUNDDAY"};
	case IMAGE_ALMANAC_GROUNDNIGHT_ID:
		return {"PVZ", "IMAGE_ALMANAC_GROUNDNIGHT"};
	case IMAGE_ALMANAC_GROUNDPOOL_ID:
		return {"PVZ", "IMAGE_ALMANAC_GROUNDPOOL"};
	case IMAGE_ALMANAC_GROUNDNIGHTPOOL_ID:
		return {"PVZ", "IMAGE_ALMANAC_GROUNDNIGHTPOOL"};
	case IMAGE_ALMANAC_GROUNDROOF_ID:
		return {"PVZ", "IMAGE_ALMANAC_GROUNDROOF"};
	case IMAGE_ALMANAC_GROUNDICE_ID:
		return {"PVZ", "IMAGE_ALMANAC_GROUNDICE"};
	case IMAGE_ALMANAC_CLOSEBUTTON_ID:
		return {"PVZ", "IMAGE_ALMANAC_CLOSEBUTTON"};
	case IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT"};
	case IMAGE_ALMANAC_INDEXBUTTON_ID:
		return {"PVZ", "IMAGE_ALMANAC_INDEXBUTTON"};
	case IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT"};
	case IMAGE_AWARDSCREEN_BACK_ID:
		return {"PVZ", "IMAGE_AWARDSCREEN_BACK"};
	case IMAGE_BACKGROUND1_ID:
		return {"PVZ", "IMAGE_BACKGROUND1"};
	case IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY_ID:
		return {"PVZ", "IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY"};
	case IMAGE_BACKGROUND1_GAMEOVER_MASK_ID:
		return {"PVZ", "IMAGE_BACKGROUND1_GAMEOVER_MASK"};
	case IMAGE_BACKGROUND2_ID:
		return {"PVZ", "IMAGE_BACKGROUND2"};
	case IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY_ID:
		return {"PVZ", "IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY"};
	case IMAGE_BACKGROUND2_GAMEOVER_MASK_ID:
		return {"PVZ", "IMAGE_BACKGROUND2_GAMEOVER_MASK"};
	case IMAGE_BACKGROUND3_ID:
		return {"PVZ", "IMAGE_BACKGROUND3"};
	case IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY_ID:
		return {"PVZ", "IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY"};
	case IMAGE_BACKGROUND3_GAMEOVER_MASK_ID:
		return {"PVZ", "IMAGE_BACKGROUND3_GAMEOVER_MASK"};
	case IMAGE_BACKGROUND4_ID:
		return {"PVZ", "IMAGE_BACKGROUND4"};
	case IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY_ID:
		return {"PVZ", "IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY"};
	case IMAGE_BACKGROUND4_GAMEOVER_MASK_ID:
		return {"PVZ", "IMAGE_BACKGROUND4_GAMEOVER_MASK"};
	case IMAGE_FOG_ID:
		return {"PVZ", "IMAGE_FOG"};
	case IMAGE_FOG_SOFTWARE_ID:
		return {"PVZ", "IMAGE_FOG_SOFTWARE"};
	case IMAGE_BACKGROUND5_ID:
		return {"PVZ", "IMAGE_BACKGROUND5"};
	case IMAGE_BACKGROUND5_GAMEOVER_MASK_ID:
		return {"PVZ", "IMAGE_BACKGROUND5_GAMEOVER_MASK"};
	case IMAGE_BACKGROUND6BOSS_ID:
		return {"PVZ", "IMAGE_BACKGROUND6BOSS"};
	case IMAGE_BACKGROUND6_GAMEOVER_MASK_ID:
		return {"PVZ", "IMAGE_BACKGROUND6_GAMEOVER_MASK"};
	case IMAGE_BACKGROUND1UNSODDED_ID:
		return {"PVZ", "IMAGE_BACKGROUND1UNSODDED"};
	case IMAGE_SOD1ROW_ID:
		return {"PVZ", "IMAGE_SOD1ROW"};
	case IMAGE_SOD3ROW_ID:
		return {"PVZ", "IMAGE_SOD3ROW"};
	case IMAGE_CHALLENGE_BACKGROUND_ID:
		return {"PVZ", "IMAGE_CHALLENGE_BACKGROUND"};
	case IMAGE_CHALLENGE_WINDOW_ID:
		return {"PVZ", "IMAGE_CHALLENGE_WINDOW"};
	case IMAGE_CHALLENGE_WINDOW_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_CHALLENGE_WINDOW_HIGHLIGHT"};
	case IMAGE_CHALLENGE_BLANK_ID:
		return {"PVZ", "IMAGE_CHALLENGE_BLANK"};
	case IMAGE_CHALLENGE_THUMBNAILS_ID:
		return {"PVZ", "IMAGE_CHALLENGE_THUMBNAILS"};
	case IMAGE_SURVIVAL_THUMBNAILS_ID:
		return {"PVZ", "IMAGE_SURVIVAL_THUMBNAILS"};
	case IMAGE_LOCK_ID:
		return {"PVZ", "IMAGE_LOCK"};
	case IMAGE_LOCK_OPEN_ID:
		return {"PVZ", "IMAGE_LOCK_OPEN"};
	case FONT_BRIANNETOD32_ID:
		return {"PVZ", "FONT_BRIANNETOD32"};
	case FONT_BRIANNETOD32BLACK_ID:
		return {"PVZ", "FONT_BRIANNETOD32BLACK"};
	case IMAGE_REANIM_SUNFLOWER_HEAD_SING1_ID:
		return {"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING1"};
	case IMAGE_REANIM_SUNFLOWER_HEAD_SING2_ID:
		return {"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING2"};
	case IMAGE_REANIM_SUNFLOWER_HEAD_SING3_ID:
		return {"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING3"};
	case IMAGE_REANIM_SUNFLOWER_HEAD_SING4_ID:
		return {"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING4"};
	case IMAGE_REANIM_SUNFLOWER_HEAD_SING5_ID:
		return {"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_SING5"};
	case IMAGE_REANIM_SUNFLOWER_HEAD_WINK_ID:
		return {"PVZ", "IMAGE_REANIM_SUNFLOWER_HEAD_WINK"};
	case IMAGE_REANIM_CREDITS_DISCOLIGHTS_ID:
		return {"PVZ", "IMAGE_REANIM_CREDITS_DISCOLIGHTS"};
	case IMAGE_REANIM_CREDITS_FOGMACHINE_ID:
		return {"PVZ", "IMAGE_REANIM_CREDITS_FOGMACHINE"};
	case IMAGE_CREDITS_ZOMBIENOTE_ID:
		return {"PVZ", "IMAGE_CREDITS_ZOMBIENOTE"};
	case IMAGE_CREDITS_PLAYBUTTON_ID:
		return {"PVZ", "IMAGE_CREDITS_PLAYBUTTON"};
	case IMAGE_BACKGROUND_GREENHOUSE_ID:
		return {"PVZ", "IMAGE_BACKGROUND_GREENHOUSE"};
	case IMAGE_BACKGROUND_GREENHOUSE_OVERLAY_ID:
		return {"PVZ", "IMAGE_BACKGROUND_GREENHOUSE_OVERLAY"};
	case IMAGE_BACKGROUND_MUSHROOMGARDEN_ID:
		return {"PVZ", "IMAGE_BACKGROUND_MUSHROOMGARDEN"};
	case IMAGE_STORE_BACKGROUND_ID:
		return {"PVZ", "IMAGE_STORE_BACKGROUND"};
	case IMAGE_STORE_BACKGROUNDNIGHT_ID:
		return {"PVZ", "IMAGE_STORE_BACKGROUNDNIGHT"};
	case IMAGE_STORE_CAR_ID:
		return {"PVZ", "IMAGE_STORE_CAR"};
	case IMAGE_STORE_CAR_NIGHT_ID:
		return {"PVZ", "IMAGE_STORE_CAR_NIGHT"};
	case IMAGE_STORE_CARCLOSED_ID:
		return {"PVZ", "IMAGE_STORE_CARCLOSED"};
	case IMAGE_STORE_CARCLOSED_NIGHT_ID:
		return {"PVZ", "IMAGE_STORE_CARCLOSED_NIGHT"};
	case IMAGE_STORE_HATCHBACKOPEN_ID:
		return {"PVZ", "IMAGE_STORE_HATCHBACKOPEN"};
	case IMAGE_STORE_SIGN_ID:
		return {"PVZ", "IMAGE_STORE_SIGN"};
	case IMAGE_STORE_MAINMENUBUTTON_ID:
		return {"PVZ", "IMAGE_STORE_MAINMENUBUTTON"};
	case IMAGE_STORE_MAINMENUBUTTONDOWN_ID:
		return {"PVZ", "IMAGE_STORE_MAINMENUBUTTONDOWN"};
	case IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT"};
	case IMAGE_STORE_NEXTBUTTON_ID:
		return {"PVZ", "IMAGE_STORE_NEXTBUTTON"};
	case IMAGE_STORE_NEXTBUTTONHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_STORE_NEXTBUTTONHIGHLIGHT"};
	case IMAGE_STORE_NEXTBUTTONDISABLED_ID:
		return {"PVZ", "IMAGE_STORE_NEXTBUTTONDISABLED"};
	case IMAGE_STORE_PREVBUTTON_ID:
		return {"PVZ", "IMAGE_STORE_PREVBUTTON"};
	case IMAGE_STORE_PREVBUTTONHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_STORE_PREVBUTTONHIGHLIGHT"};
	case IMAGE_STORE_PREVBUTTONDISABLED_ID:
		return {"PVZ", "IMAGE_STORE_PREVBUTTONDISABLED"};
	case IMAGE_STORE_PRICETAG_ID:
		return {"PVZ", "IMAGE_STORE_PRICETAG"};
	case IMAGE_STORE_PACKETUPGRADE_ID:
		return {"PVZ", "IMAGE_STORE_PACKETUPGRADE"};
	case IMAGE_STORE_MUSHROOMGARDENICON_ID:
		return {"PVZ", "IMAGE_STORE_MUSHROOMGARDENICON"};
	case IMAGE_STORE_AQUARIUMGARDENICON_ID:
		return {"PVZ", "IMAGE_STORE_AQUARIUMGARDENICON"};
	case IMAGE_STORE_TREEOFWISDOMICON_ID:
		return {"PVZ", "IMAGE_STORE_TREEOFWISDOMICON"};
	case IMAGE_STORE_FIRSTAIDWALLNUTICON_ID:
		return {"PVZ", "IMAGE_STORE_FIRSTAIDWALLNUTICON"};
	case IMAGE_STORE_PVZICON_ID:
		return {"PVZ", "IMAGE_STORE_PVZICON"};
	case IMAGE_ZOMBATAR_ACCESSORY_BG_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BG"};
	case IMAGE_ZOMBATAR_PREV_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_PREV_BUTTON"};
	case IMAGE_ZOMBATAR_PREV_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_PREV_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_NEXT_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_NEXT_BUTTON"};
	case IMAGE_ZOMBATAR_NEXT_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_NEXT_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_ZOMBIE_BLANK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ZOMBIE_BLANK"};
	case IMAGE_ZOMBATAR_ZOMBIE_BLANK_SKIN_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ZOMBIE_BLANK_SKIN"};
	case IMAGE_ZOMBATAR_BACKGROUND_CRAZYDAVE_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_CRAZYDAVE"};
	case IMAGE_ZOMBATAR_BACKGROUND_MENU_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_MENU"};
	case IMAGE_ZOMBATAR_BACKGROUND_MENU_DOS_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_MENU_DOS"};
	case IMAGE_ZOMBATAR_BACKGROUND_ROOF_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_ROOF"};
	case IMAGE_ZOMBATAR_WIDGET_BG_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_WIDGET_BG"};
	case IMAGE_ZOMBATAR_WIDGET_INNER_BG_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_WIDGET_INNER_BG"};
	case IMAGE_ZOMBATAR_COLORS_BG_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_COLORS_BG"};
	case IMAGE_ZOMBATAR_LOGO_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_LOGO"};
	case IMAGE_ZOMBATAR_ACCESSORY_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BUTTON"};
	case IMAGE_ZOMBATAR_ACCESSORY_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_ACCESSORY_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_BACKDROPS_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKDROPS_BUTTON"};
	case IMAGE_ZOMBATAR_BACKDROPS_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKDROPS_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_BACKDROPS_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKDROPS_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_CLOTHES_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_BUTTON"};
	case IMAGE_ZOMBATAR_CLOTHES_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_CLOTHES_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_EYEWEAR_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_BUTTON"};
	case IMAGE_ZOMBATAR_EYEWEAR_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_EYEWEAR_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON"};
	case IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIAL_HAIR_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_HAIR_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_BUTTON"};
	case IMAGE_ZOMBATAR_HAIR_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_HAIR_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_HATS_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_BUTTON"};
	case IMAGE_ZOMBATAR_HATS_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_HATS_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_SKIN_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_SKIN_BUTTON"};
	case IMAGE_ZOMBATAR_SKIN_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_SKIN_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_TIDBITS_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_BUTTON"};
	case IMAGE_ZOMBATAR_TIDBITS_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_TIDBITS_BUTTON_OVER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_BUTTON_OVER"};
	case IMAGE_ZOMBATAR_ACCESSORY_BG_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BG_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_TRIPTYCH_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TRIPTYCH"};
	case IMAGE_ZOMBATAR_COLORPICKER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_COLORPICKER"};
	case IMAGE_ZOMBATAR_COLORPICKER_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_COLORPICKER_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_COLORPICKER_NONE_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_COLORPICKER_NONE"};
	case IMAGE_ZOMBATAR_ACCESSORY_BG_NONE_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_BG_NONE"};
	case IMAGE_ZOMBATAR_COLORS_BG_SMALL_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_COLORS_BG_SMALL"};
	case IMAGE_ZOMBATAR_CLOTHES_1_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_1"};
	case IMAGE_ZOMBATAR_CLOTHES_2_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_2"};
	case IMAGE_ZOMBATAR_CLOTHES_3_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_3"};
	case IMAGE_ZOMBATAR_CLOTHES_4_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_4"};
	case IMAGE_ZOMBATAR_CLOTHES_5_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_5"};
	case IMAGE_ZOMBATAR_CLOTHES_6_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_6"};
	case IMAGE_ZOMBATAR_CLOTHES_7_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_7"};
	case IMAGE_ZOMBATAR_CLOTHES_8_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_8"};
	case IMAGE_ZOMBATAR_CLOTHES_9_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_9"};
	case IMAGE_ZOMBATAR_CLOTHES_10_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_10"};
	case IMAGE_ZOMBATAR_CLOTHES_11_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_11"};
	case IMAGE_ZOMBATAR_CLOTHES_12_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_CLOTHES_12"};
	case IMAGE_ZOMBATAR_HATS_1_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_1"};
	case IMAGE_ZOMBATAR_HATS_2_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_2"};
	case IMAGE_ZOMBATAR_HATS_3_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_3"};
	case IMAGE_ZOMBATAR_HATS_4_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_4"};
	case IMAGE_ZOMBATAR_HATS_5_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_5"};
	case IMAGE_ZOMBATAR_HATS_6_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_6"};
	case IMAGE_ZOMBATAR_HATS_7_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_7"};
	case IMAGE_ZOMBATAR_HATS_8_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_8"};
	case IMAGE_ZOMBATAR_HATS_9_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_9"};
	case IMAGE_ZOMBATAR_HATS_10_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_10"};
	case IMAGE_ZOMBATAR_HATS_11_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_11"};
	case IMAGE_ZOMBATAR_HATS_12_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_12"};
	case IMAGE_ZOMBATAR_HATS_13_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_13"};
	case IMAGE_ZOMBATAR_HATS_14_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_14"};
	case IMAGE_ZOMBATAR_HAIR_1_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_1"};
	case IMAGE_ZOMBATAR_HAIR_2_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_2"};
	case IMAGE_ZOMBATAR_HAIR_3_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_3"};
	case IMAGE_ZOMBATAR_HAIR_4_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_4"};
	case IMAGE_ZOMBATAR_HAIR_5_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_5"};
	case IMAGE_ZOMBATAR_HAIR_6_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_6"};
	case IMAGE_ZOMBATAR_HAIR_7_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_7"};
	case IMAGE_ZOMBATAR_HAIR_8_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_8"};
	case IMAGE_ZOMBATAR_HAIR_9_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_9"};
	case IMAGE_ZOMBATAR_HAIR_10_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_10"};
	case IMAGE_ZOMBATAR_HAIR_11_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_11"};
	case IMAGE_ZOMBATAR_HAIR_12_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_12"};
	case IMAGE_ZOMBATAR_HAIR_13_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_13"};
	case IMAGE_ZOMBATAR_HAIR_14_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_14"};
	case IMAGE_ZOMBATAR_HAIR_15_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_15"};
	case IMAGE_ZOMBATAR_HAIR_16_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_16"};
	case IMAGE_ZOMBATAR_EYEWEAR_1_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_1"};
	case IMAGE_ZOMBATAR_EYEWEAR_2_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_2"};
	case IMAGE_ZOMBATAR_EYEWEAR_3_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_3"};
	case IMAGE_ZOMBATAR_EYEWEAR_4_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_4"};
	case IMAGE_ZOMBATAR_EYEWEAR_5_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_5"};
	case IMAGE_ZOMBATAR_EYEWEAR_6_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_6"};
	case IMAGE_ZOMBATAR_EYEWEAR_7_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_7"};
	case IMAGE_ZOMBATAR_EYEWEAR_8_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_8"};
	case IMAGE_ZOMBATAR_EYEWEAR_9_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_9"};
	case IMAGE_ZOMBATAR_EYEWEAR_10_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_10"};
	case IMAGE_ZOMBATAR_EYEWEAR_11_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_11"};
	case IMAGE_ZOMBATAR_EYEWEAR_12_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_12"};
	case IMAGE_ZOMBATAR_EYEWEAR_13_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_13"};
	case IMAGE_ZOMBATAR_EYEWEAR_14_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_14"};
	case IMAGE_ZOMBATAR_EYEWEAR_15_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_15"};
	case IMAGE_ZOMBATAR_EYEWEAR_16_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_16"};
	case IMAGE_ZOMBATAR_FACIALHAIR_1_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_1"};
	case IMAGE_ZOMBATAR_FACIALHAIR_2_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_2"};
	case IMAGE_ZOMBATAR_FACIALHAIR_3_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_3"};
	case IMAGE_ZOMBATAR_FACIALHAIR_4_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_4"};
	case IMAGE_ZOMBATAR_FACIALHAIR_5_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_5"};
	case IMAGE_ZOMBATAR_FACIALHAIR_6_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_6"};
	case IMAGE_ZOMBATAR_FACIALHAIR_7_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_7"};
	case IMAGE_ZOMBATAR_FACIALHAIR_8_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_8"};
	case IMAGE_ZOMBATAR_FACIALHAIR_9_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_9"};
	case IMAGE_ZOMBATAR_FACIALHAIR_10_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_10"};
	case IMAGE_ZOMBATAR_FACIALHAIR_11_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_11"};
	case IMAGE_ZOMBATAR_FACIALHAIR_12_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_12"};
	case IMAGE_ZOMBATAR_FACIALHAIR_13_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_13"};
	case IMAGE_ZOMBATAR_FACIALHAIR_14_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_14"};
	case IMAGE_ZOMBATAR_FACIALHAIR_15_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_15"};
	case IMAGE_ZOMBATAR_FACIALHAIR_16_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_16"};
	case IMAGE_ZOMBATAR_FACIALHAIR_17_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_17"};
	case IMAGE_ZOMBATAR_FACIALHAIR_18_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_18"};
	case IMAGE_ZOMBATAR_FACIALHAIR_19_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_19"};
	case IMAGE_ZOMBATAR_FACIALHAIR_20_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_20"};
	case IMAGE_ZOMBATAR_FACIALHAIR_21_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_21"};
	case IMAGE_ZOMBATAR_FACIALHAIR_22_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_22"};
	case IMAGE_ZOMBATAR_FACIALHAIR_23_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_23"};
	case IMAGE_ZOMBATAR_FACIALHAIR_24_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_24"};
	case IMAGE_ZOMBATAR_TIDBITS_1_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_1"};
	case IMAGE_ZOMBATAR_TIDBITS_2_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_2"};
	case IMAGE_ZOMBATAR_TIDBITS_3_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_3"};
	case IMAGE_ZOMBATAR_TIDBITS_4_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_4"};
	case IMAGE_ZOMBATAR_TIDBITS_5_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_5"};
	case IMAGE_ZOMBATAR_TIDBITS_6_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_6"};
	case IMAGE_ZOMBATAR_TIDBITS_7_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_7"};
	case IMAGE_ZOMBATAR_TIDBITS_8_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_8"};
	case IMAGE_ZOMBATAR_TIDBITS_9_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_9"};
	case IMAGE_ZOMBATAR_TIDBITS_10_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_10"};
	case IMAGE_ZOMBATAR_TIDBITS_11_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_11"};
	case IMAGE_ZOMBATAR_TIDBITS_12_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_12"};
	case IMAGE_ZOMBATAR_TIDBITS_13_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_13"};
	case IMAGE_ZOMBATAR_TIDBITS_14_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TIDBITS_14"};
	case IMAGE_ZOMBATAR_ACCESSORY_1_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_1"};
	case IMAGE_ZOMBATAR_ACCESSORY_2_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_2"};
	case IMAGE_ZOMBATAR_ACCESSORY_3_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_3"};
	case IMAGE_ZOMBATAR_ACCESSORY_4_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_4"};
	case IMAGE_ZOMBATAR_ACCESSORY_5_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_5"};
	case IMAGE_ZOMBATAR_ACCESSORY_6_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_6"};
	case IMAGE_ZOMBATAR_ACCESSORY_7_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_7"};
	case IMAGE_ZOMBATAR_ACCESSORY_8_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_8"};
	case IMAGE_ZOMBATAR_ACCESSORY_9_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_9"};
	case IMAGE_ZOMBATAR_ACCESSORY_10_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_10"};
	case IMAGE_ZOMBATAR_ACCESSORY_11_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_11"};
	case IMAGE_ZOMBATAR_ACCESSORY_12_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_12"};
	case IMAGE_ZOMBATAR_ACCESSORY_13_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_13"};
	case IMAGE_ZOMBATAR_ACCESSORY_14_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_14"};
	case IMAGE_ZOMBATAR_HATS_1_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_1_MASK"};
	case IMAGE_ZOMBATAR_HAIR_1_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_1_MASK"};
	case IMAGE_ZOMBATAR_HAIR_2_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_2_MASK"};
	case IMAGE_ZOMBATAR_HAIR_11_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_11_MASK"};
	case IMAGE_ZOMBATAR_HAIR_12_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_12_MASK"};
	case IMAGE_ZOMBATAR_HAIR_13_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_13_MASK"};
	case IMAGE_ZOMBATAR_HAIR_14_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_14_MASK"};
	case IMAGE_ZOMBATAR_HAIR_15_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HAIR_15_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_1_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_1_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_4_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_4_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_8_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_8_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_9_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_9_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_10_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_10_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_11_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_11_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_12_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_12_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_14_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_14_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_15_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_15_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_16_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_16_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_18_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_18_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_21_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_21_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_22_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_22_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_23_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_23_MASK"};
	case IMAGE_ZOMBATAR_FACIALHAIR_24_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FACIALHAIR_24_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_1_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_1_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_2_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_2_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_3_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_3_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_4_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_4_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_5_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_5_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_6_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_6_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_7_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_7_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_8_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_8_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_9_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_9_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_10_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_10_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_11_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_11_MASK"};
	case IMAGE_ZOMBATAR_EYEWEAR_12_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_EYEWEAR_12_MASK"};
	case IMAGE_ZOMBATAR_HATS_3_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_3_MASK"};
	case IMAGE_ZOMBATAR_HATS_6_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_6_MASK"};
	case IMAGE_ZOMBATAR_HATS_7_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_7_MASK"};
	case IMAGE_ZOMBATAR_HATS_8_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_8_MASK"};
	case IMAGE_ZOMBATAR_HATS_9_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_9_MASK"};
	case IMAGE_ZOMBATAR_HATS_11_MASK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_HATS_11_MASK"};
	case IMAGE_ZOMBATAR_BACKGROUND_BLANK_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACKGROUND_BLANK"};
	case IMAGE_ZOMBATAR_ACCESSORY_15_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_15"};
	case IMAGE_ZOMBATAR_ACCESSORY_16_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCESSORY_16"};
	case IMAGE_ZOMBATAR_ACCEPT_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCEPT_BUTTON"};
	case IMAGE_ZOMBATAR_ACCEPT_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_ACCEPT_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_FINISHED_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FINISHED_BUTTON"};
	case IMAGE_ZOMBATAR_FINISHED_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_FINISHED_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_MAIN_BG_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_MAIN_BG"};
	case IMAGE_ZOMBATAR_BACK_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACK_BUTTON"};
	case IMAGE_ZOMBATAR_BACK_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BACK_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON"};
	case IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_NEWZOMBIE_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_TOS_ARROW_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TOS_ARROW"};
	case IMAGE_ZOMBATAR_BEGIN_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BEGIN_BUTTON"};
	case IMAGE_ZOMBATAR_BEGIN_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_BEGIN_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_TOS_SLIDER_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TOS_SLIDER"};
	case IMAGE_ZOMBATAR_TOS_SLIDER_THUMB_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_TOS_SLIDER_THUMB"};
	case IMAGE_ZOMBATAR_DISPLAY_WINDOW_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_DISPLAY_WINDOW"};
	case IMAGE_ZOMBATAR_MAINMENUBACK_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_MAINMENUBACK_HIGHLIGHT"};
	case IMAGE_ZOMBATAR_VIEW_BUTTON_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_VIEW_BUTTON"};
	case IMAGE_ZOMBATAR_VIEW_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZOMBATAR_VIEW_BUTTON_HIGHLIGHT"};
	case IMAGE_ZOMBIE_FINAL_NOTE_ID:
		return {"PVZ", "IMAGE_ZOMBIE_FINAL_NOTE"};
	case IMAGE_ZOMBIE_NOTE_ID:
		return {"PVZ", "IMAGE_ZOMBIE_NOTE"};
	case IMAGE_ZOMBIE_NOTE1_ID:
		return {"PVZ", "IMAGE_ZOMBIE_NOTE1"};
	case IMAGE_ZOMBIE_NOTE2_ID:
		return {"PVZ", "IMAGE_ZOMBIE_NOTE2"};
	case IMAGE_ZOMBIE_NOTE3_ID:
		return {"PVZ", "IMAGE_ZOMBIE_NOTE3"};
	case IMAGE_ZOMBIE_NOTE4_ID:
		return {"PVZ", "IMAGE_ZOMBIE_NOTE4"};
	case IMAGE_ZOMBIE_NOTE_HELP_ID:
		return {"PVZ", "IMAGE_ZOMBIE_NOTE_HELP"};
	case IMAGE_AQUARIUM1_ID:
		return {"PVZ", "IMAGE_AQUARIUM1"};
	case IMAGE_WAVECENTER_ID:
		return {"PVZ", "IMAGE_WAVECENTER"};
	case IMAGE_WAVESIDE_ID:
		return {"PVZ", "IMAGE_WAVESIDE"};
	case IMAGE_BLANK_ID:
		return {"PVZ", "IMAGE_BLANK"};
	case IMAGE_POPCAP_LOGO_ID:
		return {"PVZ", "IMAGE_POPCAP_LOGO"};
	case IMAGE_PARTNER_LOGO_ID:
		return {"PVZ", "IMAGE_PARTNER_LOGO"};
	case IMAGE_TITLESCREEN_ID:
		return {"PVZ", "IMAGE_TITLESCREEN"};
	case IMAGE_LOADBAR_DIRT_ID:
		return {"PVZ", "IMAGE_LOADBAR_DIRT"};
	case IMAGE_LOADBAR_GRASS_ID:
		return {"PVZ", "IMAGE_LOADBAR_GRASS"};
	case IMAGE_PVZ_LOGO_ID:
		return {"PVZ", "IMAGE_PVZ_LOGO"};
	case IMAGE_REANIM_SODROLLCAP_ID:
		return {"PVZ", "IMAGE_REANIM_SODROLLCAP"};
	case FONT_BRIANNETOD16_ID:
		return {"PVZ", "FONT_BRIANNETOD16"};
	case SOUND_BUTTONCLICK_ID:
		return {"PVZ", "SOUND_BUTTONCLICK"};
	case SOUND_LOADINGBAR_FLOWER_ID:
		return {"PVZ", "SOUND_LOADINGBAR_FLOWER"};
	case SOUND_LOADINGBAR_ZOMBIE_ID:
		return {"PVZ", "SOUND_LOADINGBAR_ZOMBIE"};
	case FONT_IMAGE_HOUSEOFTERROR28_ID:
		return {"PVZ", "FONT_IMAGE_HOUSEOFTERROR28"};
	case FONT_HOUSEOFTERROR28_ID:
		return {"PVZ", "FONT_HOUSEOFTERROR28"};
	case FONT_HOUSEOFTERROR20_ID:
		return {"PVZ", "FONT_HOUSEOFTERROR20"};
	case FONT_HOUSEOFTERROR16_ID:
		return {"PVZ", "FONT_HOUSEOFTERROR16"};
	case FONT_TINYBOLD_ID:
		return {"PVZ", "FONT_TINYBOLD"};
	case FONT_CONTINUUMBOLD14_ID:
		return {"PVZ", "FONT_CONTINUUMBOLD14"};
	case FONT_CONTINUUMBOLD14OUTLINE_ID:
		return {"PVZ", "FONT_CONTINUUMBOLD14OUTLINE"};
	case FONT_DWARVENTODCRAFT12_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT12"};
	case FONT_DWARVENTODCRAFT15_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT15"};
	case FONT_DWARVENTODCRAFT18_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT18"};
	case FONT_DWARVENTODCRAFT18BRIGHTGREENINSET_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT18BRIGHTGREENINSET"};
	case FONT_DWARVENTODCRAFT18GREENINSET_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT18GREENINSET"};
	case FONT_DWARVENTODCRAFT18YELLOW_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT18YELLOW"};
	case FONT_DWARVENTODCRAFT24_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT24"};
	case FONT_DWARVENTODCRAFT36BRIGHTGREENINSET_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT36BRIGHTGREENINSET"};
	case FONT_DWARVENTODCRAFT36GREENINSET_ID:
		return {"PVZ", "FONT_DWARVENTODCRAFT36GREENINSET"};
	case FONT_PICO129_ID:
		return {"PVZ", "FONT_PICO129"};
	case FONT_BRIANNETOD12_ID:
		return {"PVZ", "FONT_BRIANNETOD12"};
	case IMAGE_EDITBOX_ID:
		return {"PVZ", "IMAGE_EDITBOX"};
	case IMAGE_DIALOG_TOPLEFT_ID:
		return {"PVZ", "IMAGE_DIALOG_TOPLEFT"};
	case IMAGE_DIALOG_TOPMIDDLE_ID:
		return {"PVZ", "IMAGE_DIALOG_TOPMIDDLE"};
	case IMAGE_DIALOG_TOPRIGHT_ID:
		return {"PVZ", "IMAGE_DIALOG_TOPRIGHT"};
	case IMAGE_DIALOG_CENTERLEFT_ID:
		return {"PVZ", "IMAGE_DIALOG_CENTERLEFT"};
	case IMAGE_DIALOG_CENTERMIDDLE_ID:
		return {"PVZ", "IMAGE_DIALOG_CENTERMIDDLE"};
	case IMAGE_DIALOG_CENTERRIGHT_ID:
		return {"PVZ", "IMAGE_DIALOG_CENTERRIGHT"};
	case IMAGE_DIALOG_BOTTOMLEFT_ID:
		return {"PVZ", "IMAGE_DIALOG_BOTTOMLEFT"};
	case IMAGE_DIALOG_BOTTOMMIDDLE_ID:
		return {"PVZ", "IMAGE_DIALOG_BOTTOMMIDDLE"};
	case IMAGE_DIALOG_BOTTOMRIGHT_ID:
		return {"PVZ", "IMAGE_DIALOG_BOTTOMRIGHT"};
	case IMAGE_DIALOG_BIGBOTTOMLEFT_ID:
		return {"PVZ", "IMAGE_DIALOG_BIGBOTTOMLEFT"};
	case IMAGE_DIALOG_BIGBOTTOMMIDDLE_ID:
		return {"PVZ", "IMAGE_DIALOG_BIGBOTTOMMIDDLE"};
	case IMAGE_DIALOG_BIGBOTTOMRIGHT_ID:
		return {"PVZ", "IMAGE_DIALOG_BIGBOTTOMRIGHT"};
	case IMAGE_DIALOG_HEADER_ID:
		return {"PVZ", "IMAGE_DIALOG_HEADER"};
	case IMAGE_BUTTON_LEFT_ID:
		return {"PVZ", "IMAGE_BUTTON_LEFT"};
	case IMAGE_BUTTON_MIDDLE_ID:
		return {"PVZ", "IMAGE_BUTTON_MIDDLE"};
	case IMAGE_BUTTON_RIGHT_ID:
		return {"PVZ", "IMAGE_BUTTON_RIGHT"};
	case IMAGE_BUTTON_DOWN_LEFT_ID:
		return {"PVZ", "IMAGE_BUTTON_DOWN_LEFT"};
	case IMAGE_BUTTON_DOWN_MIDDLE_ID:
		return {"PVZ", "IMAGE_BUTTON_DOWN_MIDDLE"};
	case IMAGE_BUTTON_DOWN_RIGHT_ID:
		return {"PVZ", "IMAGE_BUTTON_DOWN_RIGHT"};
	case IMAGE_SEEDCHOOSER_BACKGROUND_ID:
		return {"PVZ", "IMAGE_SEEDCHOOSER_BACKGROUND"};
	case IMAGE_SEEDCHOOSER_BUTTON_ID:
		return {"PVZ", "IMAGE_SEEDCHOOSER_BUTTON"};
	case IMAGE_SEEDCHOOSER_BUTTON_DISABLED_ID:
		return {"PVZ", "IMAGE_SEEDCHOOSER_BUTTON_DISABLED"};
	case IMAGE_SEEDCHOOSER_BUTTON_GLOW_ID:
		return {"PVZ", "IMAGE_SEEDCHOOSER_BUTTON_GLOW"};
	case IMAGE_SEEDCHOOSER_BUTTON2_ID:
		return {"PVZ", "IMAGE_SEEDCHOOSER_BUTTON2"};
	case IMAGE_SEEDCHOOSER_BUTTON2_GLOW_ID:
		return {"PVZ", "IMAGE_SEEDCHOOSER_BUTTON2_GLOW"};
	case IMAGE_SEEDCHOOSER_IMITATERADDON_ID:
		return {"PVZ", "IMAGE_SEEDCHOOSER_IMITATERADDON"};
	case IMAGE_SEEDS_ID:
		return {"PVZ", "IMAGE_SEEDS"};
	case IMAGE_SEEDPACKET_LARGER_ID:
		return {"PVZ", "IMAGE_SEEDPACKET_LARGER"};
	case IMAGE_SEEDPACKETSILHOUETTE_ID:
		return {"PVZ", "IMAGE_SEEDPACKETSILHOUETTE"};
	case IMAGE_FLAGMETER_ID:
		return {"PVZ", "IMAGE_FLAGMETER"};
	case IMAGE_FLAGMETERLEVELPROGRESS_ID:
		return {"PVZ", "IMAGE_FLAGMETERLEVELPROGRESS"};
	case IMAGE_FLAGMETERPARTS_ID:
		return {"PVZ", "IMAGE_FLAGMETERPARTS"};
	case IMAGE_TROPHY_ID:
		return {"PVZ", "IMAGE_TROPHY"};
	case IMAGE_TROPHY_HI_RES_ID:
		return {"PVZ", "IMAGE_TROPHY_HI_RES"};
	case IMAGE_MINIGAME_TROPHY_ID:
		return {"PVZ", "IMAGE_MINIGAME_TROPHY"};
	case IMAGE_ZOMBIE_NOTE_SMALL_ID:
		return {"PVZ", "IMAGE_ZOMBIE_NOTE_SMALL"};
	case IMAGE_TACO_ID:
		return {"PVZ", "IMAGE_TACO"};
	case IMAGE_CARKEYS_ID:
		return {"PVZ", "IMAGE_CARKEYS"};
	case IMAGE_ALMANAC_ID:
		return {"PVZ", "IMAGE_ALMANAC"};
	case IMAGE_ICON_POOLCLEANER_ID:
		return {"PVZ", "IMAGE_ICON_POOLCLEANER"};
	case IMAGE_ICON_ROOFCLEANER_ID:
		return {"PVZ", "IMAGE_ICON_ROOFCLEANER"};
	case IMAGE_ICON_RAKE_ID:
		return {"PVZ", "IMAGE_ICON_RAKE"};
	case IMAGE_BRAIN_ID:
		return {"PVZ", "IMAGE_BRAIN"};
	case IMAGE_MONEYBAG_ID:
		return {"PVZ", "IMAGE_MONEYBAG"};
	case IMAGE_MONEYBAG_HI_RES_ID:
		return {"PVZ", "IMAGE_MONEYBAG_HI_RES"};
	case IMAGE_CHOCOLATE_ID:
		return {"PVZ", "IMAGE_CHOCOLATE"};
	case IMAGE_OPTIONS_BACKTOGAMEBUTTON0_ID:
		return {"PVZ", "IMAGE_OPTIONS_BACKTOGAMEBUTTON0"};
	case IMAGE_OPTIONS_BACKTOGAMEBUTTON2_ID:
		return {"PVZ", "IMAGE_OPTIONS_BACKTOGAMEBUTTON2"};
	case IMAGE_OPTIONS_CHECKBOX0_ID:
		return {"PVZ", "IMAGE_OPTIONS_CHECKBOX0"};
	case IMAGE_OPTIONS_CHECKBOX1_ID:
		return {"PVZ", "IMAGE_OPTIONS_CHECKBOX1"};
	case IMAGE_OPTIONS_MENUBACK_ID:
		return {"PVZ", "IMAGE_OPTIONS_MENUBACK"};
	case IMAGE_OPTIONS_SLIDERKNOB2_ID:
		return {"PVZ", "IMAGE_OPTIONS_SLIDERKNOB2"};
	case IMAGE_OPTIONS_SLIDERSLOT_ID:
		return {"PVZ", "IMAGE_OPTIONS_SLIDERSLOT"};
	case IMAGE_SELECTORSCREEN_HELP1_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_HELP1"};
	case IMAGE_SELECTORSCREEN_HELP2_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_HELP2"};
	case IMAGE_SELECTORSCREEN_OPTIONS1_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_OPTIONS1"};
	case IMAGE_SELECTORSCREEN_OPTIONS2_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_OPTIONS2"};
	case IMAGE_SELECTORSCREEN_QUIT1_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_QUIT1"};
	case IMAGE_SELECTORSCREEN_QUIT2_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_QUIT2"};
	case IMAGE_SELECTORSCREEN_ALMANAC_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_ALMANAC"};
	case IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT"};
	case IMAGE_SELECTORSCREEN_STORE_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_STORE"};
	case IMAGE_SELECTORSCREEN_STOREHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_STOREHIGHLIGHT"};
	case IMAGE_SELECTORSCREEN_LEVELNUMBERS_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_LEVELNUMBERS"};
	case IMAGE_SELECTORSCREEN_ZENGARDEN_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_ZENGARDEN"};
	case IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT"};
	case IMAGE_STORE_SPEECHBUBBLE_ID:
		return {"PVZ", "IMAGE_STORE_SPEECHBUBBLE"};
	case IMAGE_STORE_SPEECHBUBBLE2_ID:
		return {"PVZ", "IMAGE_STORE_SPEECHBUBBLE2"};
	case IMAGE_SELECTORSCREEN_ACHIEVEMENTS_BG_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_ACHIEVEMENTS_BG"};
	case IMAGE_SELECTORSCREEN_MOREWAYSTOPLAY_BG_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_MOREWAYSTOPLAY_BG"};
	case IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL"};
	case IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL_PRESS_ID:
		return {"PVZ", "IMAGE_SELECTORSCREEN_ACHIEVEMENTS_PEDESTAL_PRESS"};
	case IMAGE_ACHEESEMENTS_BEJEWELED_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_BEJEWELED"};
	case IMAGE_ACHEESEMENTS_BOOKWORM_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_BOOKWORM"};
	case IMAGE_ACHEESEMENTS_CHINA_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_CHINA"};
	case IMAGE_ACHEESEMENTS_CHUZZLE_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_CHUZZLE"};
	case IMAGE_ACHEESEMENTS_HOLE_TILE_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_HOLE_TILE"};
	case IMAGE_ACHEESEMENTS_PEGGLE_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_PEGGLE"};
	case IMAGE_ACHEESEMENTS_PIPE_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_PIPE"};
	case IMAGE_ACHEESEMENTS_ZUMA_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_ZUMA"};
	case IMAGE_ACHEESEMENTS_ICONS_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_ICONS"};
	case IMAGE_ACHEESEMENTS_BACK_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_BACK_HIGHLIGHT"};
	case IMAGE_QUICKPLAY_MINIGAMES_BUTTON_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_MINIGAMES_BUTTON"};
	case IMAGE_QUICKPLAY_MINIGAMES_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_MINIGAMES_BUTTON_HIGHLIGHT"};
	case IMAGE_QUICKPLAY_MINIGAMES_CLOUD_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_MINIGAMES_CLOUD"};
	case IMAGE_QUICKPLAY_PUZZLES_BUTTON_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_PUZZLES_BUTTON"};
	case IMAGE_QUICKPLAY_PUZZLES_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_PUZZLES_BUTTON_HIGHLIGHT"};
	case IMAGE_QUICKPLAY_PUZZLES_CLOUD_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_PUZZLES_CLOUD"};
	case IMAGE_QUICKPLAY_SURVIVAL_BUTTON_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_SURVIVAL_BUTTON"};
	case IMAGE_QUICKPLAY_SURVIVAL_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_SURVIVAL_BUTTON_HIGHLIGHT"};
	case IMAGE_QUICKPLAY_SURVIVAL_CLOUD_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_SURVIVAL_CLOUD"};
	case IMAGE_QUICKPLAY_BACK_BUTTON_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_BACK_BUTTON"};
	case IMAGE_QUICKPLAY_BACK_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_QUICKPLAY_BACK_BUTTON_HIGHLIGHT"};
	case IMAGE_ACHEESEMENTS_MORE_ROCK_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_MORE_ROCK"};
	case IMAGE_ACHEESEMENTS_MORE_BUTTON_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_MORE_BUTTON"};
	case IMAGE_ACHEESEMENTS_MORE_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_MORE_BUTTON_HIGHLIGHT"};
	case IMAGE_ACHEESEMENTS_TOP_BUTTON_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_TOP_BUTTON"};
	case IMAGE_ACHEESEMENTS_TOP_BUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ACHEESEMENTS_TOP_BUTTON_HIGHLIGHT"};
	case IMAGE_SHOVEL_ID:
		return {"PVZ", "IMAGE_SHOVEL"};
	case IMAGE_SHOVEL_HI_RES_ID:
		return {"PVZ", "IMAGE_SHOVEL_HI_RES"};
	case IMAGE_TOMBSTONES_ID:
		return {"PVZ", "IMAGE_TOMBSTONES"};
	case IMAGE_TOMBSTONE_MOUNDS_ID:
		return {"PVZ", "IMAGE_TOMBSTONE_MOUNDS"};
	case IMAGE_NIGHT_GRAVE_GRAPHIC_ID:
		return {"PVZ", "IMAGE_NIGHT_GRAVE_GRAPHIC"};
	case IMAGE_CRATER_ID:
		return {"PVZ", "IMAGE_CRATER"};
	case IMAGE_CRATER_FADING_ID:
		return {"PVZ", "IMAGE_CRATER_FADING"};
	case IMAGE_CRATER_ROOF_CENTER_ID:
		return {"PVZ", "IMAGE_CRATER_ROOF_CENTER"};
	case IMAGE_CRATER_ROOF_LEFT_ID:
		return {"PVZ", "IMAGE_CRATER_ROOF_LEFT"};
	case IMAGE_CRATER_WATER_DAY_ID:
		return {"PVZ", "IMAGE_CRATER_WATER_DAY"};
	case IMAGE_CRATER_WATER_NIGHT_ID:
		return {"PVZ", "IMAGE_CRATER_WATER_NIGHT"};
	case IMAGE_COBCANNON_TARGET_ID:
		return {"PVZ", "IMAGE_COBCANNON_TARGET"};
	case IMAGE_COBCANNON_POPCORN_ID:
		return {"PVZ", "IMAGE_COBCANNON_POPCORN"};
	case IMAGE_FERTILIZER_ID:
		return {"PVZ", "IMAGE_FERTILIZER"};
	case IMAGE_WATERINGCAN_ID:
		return {"PVZ", "IMAGE_WATERINGCAN"};
	case IMAGE_WATERINGCANGOLD_ID:
		return {"PVZ", "IMAGE_WATERINGCANGOLD"};
	case IMAGE_PHONOGRAPH_ID:
		return {"PVZ", "IMAGE_PHONOGRAPH"};
	case IMAGE_BEGHOULED_TWIST_OVERLAY_ID:
		return {"PVZ", "IMAGE_BEGHOULED_TWIST_OVERLAY"};
	case IMAGE_ZEN_GOLDTOOLRETICLE_ID:
		return {"PVZ", "IMAGE_ZEN_GOLDTOOLRETICLE"};
	case IMAGE_ZEN_GARDENGLOVE_ID:
		return {"PVZ", "IMAGE_ZEN_GARDENGLOVE"};
	case IMAGE_ZEN_MONEYSIGN_ID:
		return {"PVZ", "IMAGE_ZEN_MONEYSIGN"};
	case IMAGE_ZEN_NEXTGARDEN_ID:
		return {"PVZ", "IMAGE_ZEN_NEXTGARDEN"};
	case IMAGE_ZEN_WHEELBARROW_ID:
		return {"PVZ", "IMAGE_ZEN_WHEELBARROW"};
	case IMAGE_ZENSHOPBUTTON_ID:
		return {"PVZ", "IMAGE_ZENSHOPBUTTON"};
	case IMAGE_ZENSHOPBUTTON_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_ZENSHOPBUTTON_HIGHLIGHT"};
	case IMAGE_PRESENT_ID:
		return {"PVZ", "IMAGE_PRESENT"};
	case IMAGE_PRESENTOPEN_ID:
		return {"PVZ", "IMAGE_PRESENTOPEN"};
	case IMAGE_SUNFLOWER_TROPHY_ID:
		return {"PVZ", "IMAGE_SUNFLOWER_TROPHY"};
	case IMAGE_SLOTMACHINE_OVERLAY_ID:
		return {"PVZ", "IMAGE_SLOTMACHINE_OVERLAY"};
	case IMAGE_SCARY_POT_ID:
		return {"PVZ", "IMAGE_SCARY_POT"};
	case IMAGE_BUG_SPRAY_ID:
		return {"PVZ", "IMAGE_BUG_SPRAY"};
	case IMAGE_PLANTSPEECHBUBBLE_ID:
		return {"PVZ", "IMAGE_PLANTSPEECHBUBBLE"};
	case IMAGE_WATERDROP_ID:
		return {"PVZ", "IMAGE_WATERDROP"};
	case IMAGE_TREEFOOD_ID:
		return {"PVZ", "IMAGE_TREEFOOD"};
	case IMAGE_PACKET_PLANTS_ID:
		return {"PVZ", "IMAGE_PACKET_PLANTS"};
	case IMAGE_ZEN_NEED_ICONS_ID:
		return {"PVZ", "IMAGE_ZEN_NEED_ICONS"};
	case IMAGE_PROJECTILEPEA_ID:
		return {"PVZ", "IMAGE_PROJECTILEPEA"};
	case IMAGE_PROJECTILESNOWPEA_ID:
		return {"PVZ", "IMAGE_PROJECTILESNOWPEA"};
	case IMAGE_PROJECTILECACTUS_ID:
		return {"PVZ", "IMAGE_PROJECTILECACTUS"};
	case IMAGE_DIRTSMALL_ID:
		return {"PVZ", "IMAGE_DIRTSMALL"};
	case IMAGE_DIRTBIG_ID:
		return {"PVZ", "IMAGE_DIRTBIG"};
	case IMAGE_ROCKSMALL_ID:
		return {"PVZ", "IMAGE_ROCKSMALL"};
	case IMAGE_WATERPARTICLE_ID:
		return {"PVZ", "IMAGE_WATERPARTICLE"};
	case IMAGE_WHITEWATER_ID:
		return {"PVZ", "IMAGE_WHITEWATER"};
	case IMAGE_WHITEWATER_SHADOW_ID:
		return {"PVZ", "IMAGE_WHITEWATER_SHADOW"};
	case IMAGE_MELONPULT_PARTICLES_ID:
		return {"PVZ", "IMAGE_MELONPULT_PARTICLES"};
	case IMAGE_WINTERMELON_PARTICLES_ID:
		return {"PVZ", "IMAGE_WINTERMELON_PARTICLES"};
	case IMAGE_PROJECTILE_STAR_ID:
		return {"PVZ", "IMAGE_PROJECTILE_STAR"};
	case IMAGE_SEEDBANK_ID:
		return {"PVZ", "IMAGE_SEEDBANK"};
	case IMAGE_CONVEYORBELT_BACKDROP_ID:
		return {"PVZ", "IMAGE_CONVEYORBELT_BACKDROP"};
	case IMAGE_CONVEYORBELT_ID:
		return {"PVZ", "IMAGE_CONVEYORBELT"};
	case IMAGE_SHOVELBANK_ID:
		return {"PVZ", "IMAGE_SHOVELBANK"};
	case IMAGE_SUNBANK_ID:
		return {"PVZ", "IMAGE_SUNBANK"};
	case IMAGE_COINBANK_ID:
		return {"PVZ", "IMAGE_COINBANK"};
	case IMAGE_POOL_ID:
		return {"PVZ", "IMAGE_POOL"};
	case IMAGE_POOL_NIGHT_ID:
		return {"PVZ", "IMAGE_POOL_NIGHT"};
	case IMAGE_POOL_BASE_ID:
		return {"PVZ", "IMAGE_POOL_BASE"};
	case IMAGE_POOL_BASE_NIGHT_ID:
		return {"PVZ", "IMAGE_POOL_BASE_NIGHT"};
	case IMAGE_POOL_SHADING_ID:
		return {"PVZ", "IMAGE_POOL_SHADING"};
	case IMAGE_POOL_SHADING_NIGHT_ID:
		return {"PVZ", "IMAGE_POOL_SHADING_NIGHT"};
	case IMAGE_POOL_CAUSTIC_EFFECT_ID:
		return {"PVZ", "IMAGE_POOL_CAUSTIC_EFFECT"};
	case IMAGE_PLANTSHADOW_ID:
		return {"PVZ", "IMAGE_PLANTSHADOW"};
	case IMAGE_PLANTSHADOW2_ID:
		return {"PVZ", "IMAGE_PLANTSHADOW2"};
	case IMAGE_PEA_SHADOWS_ID:
		return {"PVZ", "IMAGE_PEA_SHADOWS"};
	case IMAGE_WALLNUT_BOWLINGSTRIPE_ID:
		return {"PVZ", "IMAGE_WALLNUT_BOWLINGSTRIPE"};
	case IMAGE_ICE_ID:
		return {"PVZ", "IMAGE_ICE"};
	case IMAGE_ICE_CAP_ID:
		return {"PVZ", "IMAGE_ICE_CAP"};
	case IMAGE_ICE_SPARKLES_ID:
		return {"PVZ", "IMAGE_ICE_SPARKLES"};
	case IMAGE_IMITATERSEED_ID:
		return {"PVZ", "IMAGE_IMITATERSEED"};
	case IMAGE_ALMANAC_IMITATER_ID:
		return {"PVZ", "IMAGE_ALMANAC_IMITATER"};
	case IMAGE_IMITATERSEEDDISABLED_ID:
		return {"PVZ", "IMAGE_IMITATERSEEDDISABLED"};
	case IMAGE_ICETRAP_ID:
		return {"PVZ", "IMAGE_ICETRAP"};
	case IMAGE_ICETRAP2_ID:
		return {"PVZ", "IMAGE_ICETRAP2"};
	case IMAGE_ICETRAP_PARTICLES_ID:
		return {"PVZ", "IMAGE_ICETRAP_PARTICLES"};
	case IMAGE_ZOMBIE_BOBSLED1_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOBSLED1"};
	case IMAGE_ZOMBIE_BOBSLED2_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOBSLED2"};
	case IMAGE_ZOMBIE_BOBSLED3_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOBSLED3"};
	case IMAGE_ZOMBIE_BOBSLED4_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOBSLED4"};
	case IMAGE_ZOMBIE_BOBSLED_INSIDE_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOBSLED_INSIDE"};
	case IMAGE_BUNGEECORD_ID:
		return {"PVZ", "IMAGE_BUNGEECORD"};
	case IMAGE_BUNGEETARGET_ID:
		return {"PVZ", "IMAGE_BUNGEETARGET"};
	case IMAGE_SPOTLIGHT_ID:
		return {"PVZ", "IMAGE_SPOTLIGHT"};
	case IMAGE_SPOTLIGHT2_ID:
		return {"PVZ", "IMAGE_SPOTLIGHT2"};
	case IMAGE_WHITEPIXEL_ID:
		return {"PVZ", "IMAGE_WHITEPIXEL"};
	case IMAGE_ZOMBIEPOLEVAULTERHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEPOLEVAULTERHEAD"};
	case IMAGE_ZOMBIEFOOTBALLHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEFOOTBALLHEAD"};
	case IMAGE_POOLSPARKLY_ID:
		return {"PVZ", "IMAGE_POOLSPARKLY"};
	case IMAGE_WALLNUTPARTICLESSMALL_ID:
		return {"PVZ", "IMAGE_WALLNUTPARTICLESSMALL"};
	case IMAGE_WALLNUTPARTICLESLARGE_ID:
		return {"PVZ", "IMAGE_WALLNUTPARTICLESLARGE"};
	case IMAGE_PEA_SPLATS_ID:
		return {"PVZ", "IMAGE_PEA_SPLATS"};
	case IMAGE_STAR_PARTICLES_ID:
		return {"PVZ", "IMAGE_STAR_PARTICLES"};
	case IMAGE_STAR_SPLATS_ID:
		return {"PVZ", "IMAGE_STAR_SPLATS"};
	case IMAGE_PEA_PARTICLES_ID:
		return {"PVZ", "IMAGE_PEA_PARTICLES"};
	case IMAGE_SNOWPEA_SPLATS_ID:
		return {"PVZ", "IMAGE_SNOWPEA_SPLATS"};
	case IMAGE_SNOWPEA_PARTICLES_ID:
		return {"PVZ", "IMAGE_SNOWPEA_PARTICLES"};
	case IMAGE_SNOWPEA_PUFF_ID:
		return {"PVZ", "IMAGE_SNOWPEA_PUFF"};
	case IMAGE_SNOWFLAKES_ID:
		return {"PVZ", "IMAGE_SNOWFLAKES"};
	case IMAGE_POTATOMINE_PARTICLES_ID:
		return {"PVZ", "IMAGE_POTATOMINE_PARTICLES"};
	case IMAGE_PUFFSHROOM_PUFF1_ID:
		return {"PVZ", "IMAGE_PUFFSHROOM_PUFF1"};
	case IMAGE_ZAMBONISMOKE_ID:
		return {"PVZ", "IMAGE_ZAMBONISMOKE"};
	case IMAGE_ZOMBIEDANCERHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEDANCERHEAD"};
	case IMAGE_ZOMBIEBALLOONHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEBALLOONHEAD"};
	case IMAGE_ZOMBIEIMPHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEIMPHEAD"};
	case IMAGE_ZOMBIEDIGGERHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEDIGGERHEAD"};
	case IMAGE_ZOMBIEDIGGERARM_ID:
		return {"PVZ", "IMAGE_ZOMBIEDIGGERARM"};
	case IMAGE_ZOMBIEDOLPHINRIDERHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEDOLPHINRIDERHEAD"};
	case IMAGE_ZOMBIEPOGO_ID:
		return {"PVZ", "IMAGE_ZOMBIEPOGO"};
	case IMAGE_ZOMBIEBACKUPDANCERHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEBACKUPDANCERHEAD"};
	case IMAGE_ZOMBIEBOBSLEDHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEBOBSLEDHEAD"};
	case IMAGE_ZOMBIELADDERHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIELADDERHEAD"};
	case IMAGE_ZOMBIEYETIHEAD_ID:
		return {"PVZ", "IMAGE_ZOMBIEYETIHEAD"};
	case IMAGE_SEEDPACKETFLASH_ID:
		return {"PVZ", "IMAGE_SEEDPACKETFLASH"};
	case IMAGE_ZOMBIEJACKBOXARM_ID:
		return {"PVZ", "IMAGE_ZOMBIEJACKBOXARM"};
	case IMAGE_IMITATERCLOUDS_ID:
		return {"PVZ", "IMAGE_IMITATERCLOUDS"};
	case IMAGE_IMITATERPUFFS_ID:
		return {"PVZ", "IMAGE_IMITATERPUFFS"};
	case IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES"};
	case IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES"};
	case IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES"};
	case IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES_ID:
		return {"PVZ", "IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES"};
	case IMAGE_DOOMSHROOM_EXPLOSION_BASE_ID:
		return {"PVZ", "IMAGE_DOOMSHROOM_EXPLOSION_BASE"};
	case IMAGE_RAIN_ID:
		return {"PVZ", "IMAGE_RAIN"};
	case IMAGE_VASE_CHUNKS_ID:
		return {"PVZ", "IMAGE_VASE_CHUNKS"};
	case IMAGE_ZOMBOSS_PARTICLES_ID:
		return {"PVZ", "IMAGE_ZOMBOSS_PARTICLES"};
	case IMAGE_AWARDPICKUPGLOW_ID:
		return {"PVZ", "IMAGE_AWARDPICKUPGLOW"};
	case IMAGE_ZOMBIE_SEAWEED_ID:
		return {"PVZ", "IMAGE_ZOMBIE_SEAWEED"};
	case IMAGE_PINATA_ID:
		return {"PVZ", "IMAGE_PINATA"};
	case IMAGE_ZOMBIEFUTUREGLASSES_ID:
		return {"PVZ", "IMAGE_ZOMBIEFUTUREGLASSES"};
	case IMAGE_DUST_PUFFS_ID:
		return {"PVZ", "IMAGE_DUST_PUFFS"};
	case IMAGE_REANIM_WALLNUT_BODY_ID:
		return {"PVZ", "IMAGE_REANIM_WALLNUT_BODY"};
	case IMAGE_REANIM_WALLNUT_CRACKED1_ID:
		return {"PVZ", "IMAGE_REANIM_WALLNUT_CRACKED1"};
	case IMAGE_REANIM_WALLNUT_CRACKED2_ID:
		return {"PVZ", "IMAGE_REANIM_WALLNUT_CRACKED2"};
	case IMAGE_REANIM_TALLNUT_CRACKED1_ID:
		return {"PVZ", "IMAGE_REANIM_TALLNUT_CRACKED1"};
	case IMAGE_REANIM_TALLNUT_CRACKED2_ID:
		return {"PVZ", "IMAGE_REANIM_TALLNUT_CRACKED2"};
	case IMAGE_REANIM_PUMPKIN_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_PUMPKIN_DAMAGE1"};
	case IMAGE_REANIM_PUMPKIN_DAMAGE3_ID:
		return {"PVZ", "IMAGE_REANIM_PUMPKIN_DAMAGE3"};
	case IMAGE_REANIM_ZOMBIE_CONE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CONE1"};
	case IMAGE_REANIM_ZOMBIE_CONE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CONE2"};
	case IMAGE_REANIM_ZOMBIE_CONE3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CONE3"};
	case IMAGE_REANIM_ZOMBIE_BUCKET1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BUCKET1"};
	case IMAGE_REANIM_ZOMBIE_BUCKET2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BUCKET2"};
	case IMAGE_REANIM_ZOMBIE_BUCKET3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BUCKET3"};
	case IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT"};
	case IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2"};
	case IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3"};
	case IMAGE_REANIM_ZOMBIE_SCREENDOOR1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_SCREENDOOR1"};
	case IMAGE_REANIM_ZOMBIE_SCREENDOOR2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_SCREENDOOR2"};
	case IMAGE_REANIM_ZOMBIE_SCREENDOOR3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_SCREENDOOR3"};
	case IMAGE_REANIM_ZOMBIE_FLAG1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_FLAG1"};
	case IMAGE_REANIM_ZOMBIE_FLAG3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_FLAG3"};
	case IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET"};
	case IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2"};
	case IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3"};
	case IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND"};
	case IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER"};
	case IMAGE_REANIM_ZOMBIE_PAPER_PAPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_PAPER2"};
	case IMAGE_REANIM_ZOMBIE_PAPER_PAPER3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_PAPER3"};
	case IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD"};
	case IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT"};
	case IMAGE_REANIM_COIN_SILVER_DOLLAR_ID:
		return {"PVZ", "IMAGE_REANIM_COIN_SILVER_DOLLAR"};
	case IMAGE_REANIM_COIN_GOLD_DOLLAR_ID:
		return {"PVZ", "IMAGE_REANIM_COIN_GOLD_DOLLAR"};
	case IMAGE_REANIM_DIAMOND_ID:
		return {"PVZ", "IMAGE_REANIM_DIAMOND"};
	case IMAGE_REANIM_COINGLOW_ID:
		return {"PVZ", "IMAGE_REANIM_COINGLOW"};
	case IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_HAND_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_HAND"};
	case IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DISCO_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_BACKUP_INNERARM_HAND_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BACKUP_INNERARM_HAND"};
	case IMAGE_REANIM_ZOMBIE_BACKUP_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BACKUP_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_OUTERARM_HAND_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_OUTERARM_HAND"};
	case IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE"};
	case IMAGE_REANIM_ZOMBIE_IMP_ARM2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_IMP_ARM2"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE"};
	case IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE"};
	case IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2"};
	case IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND"};
	case IMAGE_REANIM_ZOMBIE_JACKBOX_BOX_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_JACKBOX_BOX"};
	case IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2"};
	case IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED"};
	case IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL"};
	case IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE"};
	case IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE"};
	case IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL"};
	case IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL"};
	case IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE"};
	case IMAGE_REANIM_ZOMBIE_LADDER_1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_1"};
	case IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_LADDER_5_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_5"};
	case IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL"};
	case IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1"};
	case IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2"};
	case IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE"};
	case IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE"};
	case IMAGE_REANIM_CABBAGEPULT_CABBAGE_ID:
		return {"PVZ", "IMAGE_REANIM_CABBAGEPULT_CABBAGE"};
	case IMAGE_REANIM_CORNPULT_KERNAL_ID:
		return {"PVZ", "IMAGE_REANIM_CORNPULT_KERNAL"};
	case IMAGE_REANIM_CORNPULT_BUTTER_ID:
		return {"PVZ", "IMAGE_REANIM_CORNPULT_BUTTER"};
	case IMAGE_REANIM_CORNPULT_BUTTER_SPLAT_ID:
		return {"PVZ", "IMAGE_REANIM_CORNPULT_BUTTER_SPLAT"};
	case IMAGE_REANIM_MELONPULT_MELON_ID:
		return {"PVZ", "IMAGE_REANIM_MELONPULT_MELON"};
	case IMAGE_REANIM_WINTERMELON_PROJECTILE_ID:
		return {"PVZ", "IMAGE_REANIM_WINTERMELON_PROJECTILE"};
	case IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE"};
	case IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT"};
	case IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1"};
	case IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2"};
	case IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3"};
	case IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4"};
	case IMAGE_REANIM_GARLIC_BODY2_ID:
		return {"PVZ", "IMAGE_REANIM_GARLIC_BODY2"};
	case IMAGE_REANIM_GARLIC_BODY3_ID:
		return {"PVZ", "IMAGE_REANIM_GARLIC_BODY3"};
	case IMAGE_REANIM_COBCANNON_COB_ID:
		return {"PVZ", "IMAGE_REANIM_COBCANNON_COB"};
	case IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2"};
	case IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND"};
	case IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD"};
	case IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON"};
	case IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT"};
	case IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON"};
	case IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT"};
	case IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON"};
	case IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT"};
	case IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON"};
	case IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT"};
	case IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON"};
	case IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT"};
	case IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS"};
	case IMAGE_REANIM_SELECTORSCREEN_WOODSIGN3_PRESS_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_WOODSIGN3_PRESS"};
	case IMAGE_REANIM_SELECTORSCREEN_BG_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_BG"};
	case IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW"};
	case IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW_ID:
		return {"PVZ", "IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW"};
	case IMAGE_REANIM_TREE_BG_ID:
		return {"PVZ", "IMAGE_REANIM_TREE_BG"};
	case IMAGE_REANIM_POT_TOP_DARK_ID:
		return {"PVZ", "IMAGE_REANIM_POT_TOP_DARK"};
	case IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE_ID:
		return {"PVZ", "IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE"};
	case IMAGE_REANIM_STINKY_TURN3_ID:
		return {"PVZ", "IMAGE_REANIM_STINKY_TURN3"};
	case IMAGE_REANIM_CRAZYDAVE_MOUTH1_ID:
		return {"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH1"};
	case IMAGE_REANIM_CRAZYDAVE_MOUTH4_ID:
		return {"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH4"};
	case IMAGE_REANIM_CRAZYDAVE_MOUTH5_ID:
		return {"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH5"};
	case IMAGE_REANIM_CRAZYDAVE_MOUTH6_ID:
		return {"PVZ", "IMAGE_REANIM_CRAZYDAVE_MOUTH6"};
	case IMAGE_REANIM_ZOMBIE_MUSTACHE2_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_MUSTACHE2"};
	case IMAGE_REANIM_ZOMBIE_MUSTACHE3_ID:
		return {"PVZ", "IMAGE_REANIM_ZOMBIE_MUSTACHE3"};
	case SOUND_ACHIEVEMENT_ID:
		return {"PVZ", "SOUND_ACHIEVEMENT"};
	case SOUND_AWOOGA_ID:
		return {"PVZ", "SOUND_AWOOGA"};
	case SOUND_BLEEP_ID:
		return {"PVZ", "SOUND_BLEEP"};
	case SOUND_BUZZER_ID:
		return {"PVZ", "SOUND_BUZZER"};
	case SOUND_CHOMP_ID:
		return {"PVZ", "SOUND_CHOMP"};
	case SOUND_CHOMP2_ID:
		return {"PVZ", "SOUND_CHOMP2"};
	case SOUND_CHOMPSOFT_ID:
		return {"PVZ", "SOUND_CHOMPSOFT"};
	case SOUND_EVILLAUGH_ID:
		return {"PVZ", "SOUND_EVILLAUGH"};
	case SOUND_FLOOP_ID:
		return {"PVZ", "SOUND_FLOOP"};
	case SOUND_FROZEN_ID:
		return {"PVZ", "SOUND_FROZEN"};
	case SOUND_GULP_ID:
		return {"PVZ", "SOUND_GULP"};
	case SOUND_GROAN_ID:
		return {"PVZ", "SOUND_GROAN"};
	case SOUND_GROAN2_ID:
		return {"PVZ", "SOUND_GROAN2"};
	case SOUND_GROAN3_ID:
		return {"PVZ", "SOUND_GROAN3"};
	case SOUND_GROAN4_ID:
		return {"PVZ", "SOUND_GROAN4"};
	case SOUND_GROAN5_ID:
		return {"PVZ", "SOUND_GROAN5"};
	case SOUND_GROAN6_ID:
		return {"PVZ", "SOUND_GROAN6"};
	case SOUND_LOSEMUSIC_ID:
		return {"PVZ", "SOUND_LOSEMUSIC"};
	case SOUND_MINDCONTROLLED_ID:
		return {"PVZ", "SOUND_MINDCONTROLLED"};
	case SOUND_PAUSE_ID:
		return {"PVZ", "SOUND_PAUSE"};
	case SOUND_PLANT_ID:
		return {"PVZ", "SOUND_PLANT"};
	case SOUND_PLANT2_ID:
		return {"PVZ", "SOUND_PLANT2"};
	case SOUND_POINTS_ID:
		return {"PVZ", "SOUND_POINTS"};
	case SOUND_SEEDLIFT_ID:
		return {"PVZ", "SOUND_SEEDLIFT"};
	case SOUND_SIREN_ID:
		return {"PVZ", "SOUND_SIREN"};
	case SOUND_SLURP_ID:
		return {"PVZ", "SOUND_SLURP"};
	case SOUND_SPLAT_ID:
		return {"PVZ", "SOUND_SPLAT"};
	case SOUND_SPLAT2_ID:
		return {"PVZ", "SOUND_SPLAT2"};
	case SOUND_SPLAT3_ID:
		return {"PVZ", "SOUND_SPLAT3"};
	case SOUND_SUKHBIR_ID:
		return {"PVZ", "SOUND_SUKHBIR"};
	case SOUND_SUKHBIR2_ID:
		return {"PVZ", "SOUND_SUKHBIR2"};
	case SOUND_SUKHBIR3_ID:
		return {"PVZ", "SOUND_SUKHBIR3"};
	case SOUND_SUKHBIR4_ID:
		return {"PVZ", "SOUND_SUKHBIR4"};
	case SOUND_SUKHBIR5_ID:
		return {"PVZ", "SOUND_SUKHBIR5"};
	case SOUND_SUKHBIR6_ID:
		return {"PVZ", "SOUND_SUKHBIR6"};
	case SOUND_TAP_ID:
		return {"PVZ", "SOUND_TAP"};
	case SOUND_TAP2_ID:
		return {"PVZ", "SOUND_TAP2"};
	case SOUND_THROW_ID:
		return {"PVZ", "SOUND_THROW"};
	case SOUND_THROW2_ID:
		return {"PVZ", "SOUND_THROW2"};
	case SOUND_BLOVER_ID:
		return {"PVZ", "SOUND_BLOVER"};
	case SOUND_WINMUSIC_ID:
		return {"PVZ", "SOUND_WINMUSIC"};
	case SOUND_LAWNMOWER_ID:
		return {"PVZ", "SOUND_LAWNMOWER"};
	case SOUND_BOING_ID:
		return {"PVZ", "SOUND_BOING"};
	case SOUND_JACKINTHEBOX_ID:
		return {"PVZ", "SOUND_JACKINTHEBOX"};
	case SOUND_DIAMOND_ID:
		return {"PVZ", "SOUND_DIAMOND"};
	case SOUND_DOLPHIN_APPEARS_ID:
		return {"PVZ", "SOUND_DOLPHIN_APPEARS"};
	case SOUND_DOLPHIN_BEFORE_JUMPING_ID:
		return {"PVZ", "SOUND_DOLPHIN_BEFORE_JUMPING"};
	case SOUND_POTATO_MINE_ID:
		return {"PVZ", "SOUND_POTATO_MINE"};
	case SOUND_ZAMBONI_ID:
		return {"PVZ", "SOUND_ZAMBONI"};
	case SOUND_BALLOON_POP_ID:
		return {"PVZ", "SOUND_BALLOON_POP"};
	case SOUND_THUNDER_ID:
		return {"PVZ", "SOUND_THUNDER"};
	case SOUND_ZOMBIESPLASH_ID:
		return {"PVZ", "SOUND_ZOMBIESPLASH"};
	case SOUND_BOWLING_ID:
		return {"PVZ", "SOUND_BOWLING"};
	case SOUND_BOWLINGIMPACT_ID:
		return {"PVZ", "SOUND_BOWLINGIMPACT"};
	case SOUND_BOWLINGIMPACT2_ID:
		return {"PVZ", "SOUND_BOWLINGIMPACT2"};
	case SOUND_GRAVEBUSTERCHOMP_ID:
		return {"PVZ", "SOUND_GRAVEBUSTERCHOMP"};
	case SOUND_GRAVEBUTTON_ID:
		return {"PVZ", "SOUND_GRAVEBUTTON"};
	case SOUND_LIMBS_POP_ID:
		return {"PVZ", "SOUND_LIMBS_POP"};
	case SOUND_PLANTERN_ID:
		return {"PVZ", "SOUND_PLANTERN"};
	case SOUND_POGO_ZOMBIE_ID:
		return {"PVZ", "SOUND_POGO_ZOMBIE"};
	case SOUND_SNOW_PEA_SPARKLES_ID:
		return {"PVZ", "SOUND_SNOW_PEA_SPARKLES"};
	case SOUND_PLANT_WATER_ID:
		return {"PVZ", "SOUND_PLANT_WATER"};
	case SOUND_ZOMBIE_ENTERING_WATER_ID:
		return {"PVZ", "SOUND_ZOMBIE_ENTERING_WATER"};
	case SOUND_ZOMBIE_FALLING_1_ID:
		return {"PVZ", "SOUND_ZOMBIE_FALLING_1"};
	case SOUND_ZOMBIE_FALLING_2_ID:
		return {"PVZ", "SOUND_ZOMBIE_FALLING_2"};
	case SOUND_PUFF_ID:
		return {"PVZ", "SOUND_PUFF"};
	case SOUND_FUME_ID:
		return {"PVZ", "SOUND_FUME"};
	case SOUND_HUGE_WAVE_ID:
		return {"PVZ", "SOUND_HUGE_WAVE"};
	case SOUND_SLOT_MACHINE_ID:
		return {"PVZ", "SOUND_SLOT_MACHINE"};
	case SOUND_COIN_ID:
		return {"PVZ", "SOUND_COIN"};
	case SOUND_ROLL_IN_ID:
		return {"PVZ", "SOUND_ROLL_IN"};
	case SOUND_DIGGER_ZOMBIE_ID:
		return {"PVZ", "SOUND_DIGGER_ZOMBIE"};
	case SOUND_HATCHBACK_CLOSE_ID:
		return {"PVZ", "SOUND_HATCHBACK_CLOSE"};
	case SOUND_HATCHBACK_OPEN_ID:
		return {"PVZ", "SOUND_HATCHBACK_OPEN"};
	case SOUND_KERNELPULT_ID:
		return {"PVZ", "SOUND_KERNELPULT"};
	case SOUND_KERNELPULT2_ID:
		return {"PVZ", "SOUND_KERNELPULT2"};
	case SOUND_ZOMBAQUARIUM_DIE_ID:
		return {"PVZ", "SOUND_ZOMBAQUARIUM_DIE"};
	case SOUND_BUNGEE_SCREAM_ID:
		return {"PVZ", "SOUND_BUNGEE_SCREAM"};
	case SOUND_BUNGEE_SCREAM2_ID:
		return {"PVZ", "SOUND_BUNGEE_SCREAM2"};
	case SOUND_BUNGEE_SCREAM3_ID:
		return {"PVZ", "SOUND_BUNGEE_SCREAM3"};
	case SOUND_BUTTER_ID:
		return {"PVZ", "SOUND_BUTTER"};
	case SOUND_JACK_SURPRISE_ID:
		return {"PVZ", "SOUND_JACK_SURPRISE"};
	case SOUND_JACK_SURPRISE2_ID:
		return {"PVZ", "SOUND_JACK_SURPRISE2"};
	case SOUND_NEWSPAPER_RARRGH_ID:
		return {"PVZ", "SOUND_NEWSPAPER_RARRGH"};
	case SOUND_NEWSPAPER_RARRGH2_ID:
		return {"PVZ", "SOUND_NEWSPAPER_RARRGH2"};
	case SOUND_NEWSPAPER_RIP_ID:
		return {"PVZ", "SOUND_NEWSPAPER_RIP"};
	case SOUND_SQUASH_HMM_ID:
		return {"PVZ", "SOUND_SQUASH_HMM"};
	case SOUND_SQUASH_HMM2_ID:
		return {"PVZ", "SOUND_SQUASH_HMM2"};
	case SOUND_VASE_BREAKING_ID:
		return {"PVZ", "SOUND_VASE_BREAKING"};
	case SOUND_POOL_CLEANER_ID:
		return {"PVZ", "SOUND_POOL_CLEANER"};
	case SOUND_MAGNETSHROOM_ID:
		return {"PVZ", "SOUND_MAGNETSHROOM"};
	case SOUND_LADDER_ZOMBIE_ID:
		return {"PVZ", "SOUND_LADDER_ZOMBIE"};
	case SOUND_GARGANTUAR_THUMP_ID:
		return {"PVZ", "SOUND_GARGANTUAR_THUMP"};
	case SOUND_BASKETBALL_ID:
		return {"PVZ", "SOUND_BASKETBALL"};
	case SOUND_FIREPEA_ID:
		return {"PVZ", "SOUND_FIREPEA"};
	case SOUND_IGNITE_ID:
		return {"PVZ", "SOUND_IGNITE"};
	case SOUND_IGNITE2_ID:
		return {"PVZ", "SOUND_IGNITE2"};
	case SOUND_READYSETPLANT_ID:
		return {"PVZ", "SOUND_READYSETPLANT"};
	case SOUND_DOOMSHROOM_ID:
		return {"PVZ", "SOUND_DOOMSHROOM"};
	case SOUND_EXPLOSION_ID:
		return {"PVZ", "SOUND_EXPLOSION"};
	case SOUND_FINALWAVE_ID:
		return {"PVZ", "SOUND_FINALWAVE"};
	case SOUND_REVERSE_EXPLOSION_ID:
		return {"PVZ", "SOUND_REVERSE_EXPLOSION"};
	case SOUND_RVTHROW_ID:
		return {"PVZ", "SOUND_RVTHROW"};
	case SOUND_SHIELDHIT_ID:
		return {"PVZ", "SOUND_SHIELDHIT"};
	case SOUND_SHIELDHIT2_ID:
		return {"PVZ", "SOUND_SHIELDHIT2"};
	case SOUND_BOSSEXPLOSION_ID:
		return {"PVZ", "SOUND_BOSSEXPLOSION"};
	case SOUND_CHERRYBOMB_ID:
		return {"PVZ", "SOUND_CHERRYBOMB"};
	case SOUND_BONK_ID:
		return {"PVZ", "SOUND_BONK"};
	case SOUND_SWING_ID:
		return {"PVZ", "SOUND_SWING"};
	case SOUND_RAIN_ID:
		return {"PVZ", "SOUND_RAIN"};
	case SOUND_LIGHTFILL_ID:
		return {"PVZ", "SOUND_LIGHTFILL"};
	case SOUND_PLASTICHIT_ID:
		return {"PVZ", "SOUND_PLASTICHIT"};
	case SOUND_PLASTICHIT2_ID:
		return {"PVZ", "SOUND_PLASTICHIT2"};
	case SOUND_JALAPENO_ID:
		return {"PVZ", "SOUND_JALAPENO"};
	case SOUND_BALLOONINFLATE_ID:
		return {"PVZ", "SOUND_BALLOONINFLATE"};
	case SOUND_BIGCHOMP_ID:
		return {"PVZ", "SOUND_BIGCHOMP"};
	case SOUND_MELONIMPACT_ID:
		return {"PVZ", "SOUND_MELONIMPACT"};
	case SOUND_MELONIMPACT2_ID:
		return {"PVZ", "SOUND_MELONIMPACT2"};
	case SOUND_PLANTGROW_ID:
		return {"PVZ", "SOUND_PLANTGROW"};
	case SOUND_SHOOP_ID:
		return {"PVZ", "SOUND_SHOOP"};
	case SOUND_TAPGLASS_ID:
		return {"PVZ", "SOUND_TAPGLASS"};
	case SOUND_JUICY_ID:
		return {"PVZ", "SOUND_JUICY"};
	case SOUND_COFFEE_ID:
		return {"PVZ", "SOUND_COFFEE"};
	case SOUND_WAKEUP_ID:
		return {"PVZ", "SOUND_WAKEUP"};
	case SOUND_LOWGROAN_ID:
		return {"PVZ", "SOUND_LOWGROAN"};
	case SOUND_LOWGROAN2_ID:
		return {"PVZ", "SOUND_LOWGROAN2"};
	case SOUND_PRIZE_ID:
		return {"PVZ", "SOUND_PRIZE"};
	case SOUND_YUCK_ID:
		return {"PVZ", "SOUND_YUCK"};
	case SOUND_YUCK2_ID:
		return {"PVZ", "SOUND_YUCK2"};
	case SOUND_GRASSSTEP_ID:
		return {"PVZ", "SOUND_GRASSSTEP"};
	case SOUND_SHOVEL_ID:
		return {"PVZ", "SOUND_SHOVEL"};
	case SOUND_COBLAUNCH_ID:
		return {"PVZ", "SOUND_COBLAUNCH"};
	case SOUND_WATERING_ID:
		return {"PVZ", "SOUND_WATERING"};
	case SOUND_POLEVAULT_ID:
		return {"PVZ", "SOUND_POLEVAULT"};
	case SOUND_GRAVESTONE_RUMBLE_ID:
		return {"PVZ", "SOUND_GRAVESTONE_RUMBLE"};
	case SOUND_DIRT_RISE_ID:
		return {"PVZ", "SOUND_DIRT_RISE"};
	case SOUND_FERTILIZER_ID:
		return {"PVZ", "SOUND_FERTILIZER"};
	case SOUND_PORTAL_ID:
		return {"PVZ", "SOUND_PORTAL"};
	case SOUND_BUGSPRAY_ID:
		return {"PVZ", "SOUND_BUGSPRAY"};
	case SOUND_SCREAM_ID:
		return {"PVZ", "SOUND_SCREAM"};
	case SOUND_PAPER_ID:
		return {"PVZ", "SOUND_PAPER"};
	case SOUND_MONEYFALLS_ID:
		return {"PVZ", "SOUND_MONEYFALLS"};
	case SOUND_IMP_ID:
		return {"PVZ", "SOUND_IMP"};
	case SOUND_IMP2_ID:
		return {"PVZ", "SOUND_IMP2"};
	case SOUND_HYDRAULIC_SHORT_ID:
		return {"PVZ", "SOUND_HYDRAULIC_SHORT"};
	case SOUND_HYDRAULIC_ID:
		return {"PVZ", "SOUND_HYDRAULIC"};
	case SOUND_GARGANTUDEATH_ID:
		return {"PVZ", "SOUND_GARGANTUDEATH"};
	case SOUND_CERAMIC_ID:
		return {"PVZ", "SOUND_CERAMIC"};
	case SOUND_BOSSBOULDERATTACK_ID:
		return {"PVZ", "SOUND_BOSSBOULDERATTACK"};
	case SOUND_CHIME_ID:
		return {"PVZ", "SOUND_CHIME"};
	case SOUND_CRAZYDAVESHORT1_ID:
		return {"PVZ", "SOUND_CRAZYDAVESHORT1"};
	case SOUND_CRAZYDAVESHORT2_ID:
		return {"PVZ", "SOUND_CRAZYDAVESHORT2"};
	case SOUND_CRAZYDAVESHORT3_ID:
		return {"PVZ", "SOUND_CRAZYDAVESHORT3"};
	case SOUND_CRAZYDAVELONG1_ID:
		return {"PVZ", "SOUND_CRAZYDAVELONG1"};
	case SOUND_CRAZYDAVELONG2_ID:
		return {"PVZ", "SOUND_CRAZYDAVELONG2"};
	case SOUND_CRAZYDAVELONG3_ID:
		return {"PVZ", "SOUND_CRAZYDAVELONG3"};
	case SOUND_CRAZYDAVEEXTRALONG1_ID:
		return {"PVZ", "SOUND_CRAZYDAVEEXTRALONG1"};
	case SOUND_CRAZYDAVEEXTRALONG2_ID:
		return {"PVZ", "SOUND_CRAZYDAVEEXTRALONG2"};
	case SOUND_CRAZYDAVEEXTRALONG3_ID:
		return {"PVZ", "SOUND_CRAZYDAVEEXTRALONG3"};
	case SOUND_CRAZYDAVECRAZY_ID:
		return {"PVZ", "SOUND_CRAZYDAVECRAZY"};
	case SOUND_PHONOGRAPH_ID:
		return {"PVZ", "SOUND_PHONOGRAPH"};
	case SOUND_DANCER_ID:
		return {"PVZ", "SOUND_DANCER"};
	case SOUND_FINALFANFARE_ID:
		return {"PVZ", "SOUND_FINALFANFARE"};
	case SOUND_CRAZYDAVESCREAM_ID:
		return {"PVZ", "SOUND_CRAZYDAVESCREAM"};
	case SOUND_CRAZYDAVESCREAM2_ID:
		return {"PVZ", "SOUND_CRAZYDAVESCREAM2"};
	default:
		return {};
	}
}
