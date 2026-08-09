#ifndef __SEXY_RESOURCEMANAGER_H__
#define __SEXY_RESOURCEMANAGER_H__

#include "Common.h"
#include "Image.h"
#include "SexyAppBase.h"
#include <string>
#include <map>
#include "../BloomLib/NamespacedString.h"

namespace ImageLib
{
class Image;
};

namespace Sexy
{

class XMLParser;
class XMLElement;
class Image;
class SoundInstance;
class SexyAppBase;
class Font;

typedef std::map<std::string, std::string> StringToStringMap;
typedef std::map<SexyString, SexyString> XMLParamMap;

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
class BLOOM_API ResourceManager
{
  public:
	enum ResType
	{
		ResType_Image,
		ResType_Sound,
		ResType_Font
	};

	struct BLOOM_API BaseRes
	{
		ResType mType;
		ResourceId mId;
		ResourceId mResGroup;
		ResourcePath mPath;
		XMLParamMap mXMLAttributes;
		bool mFromProgram;

		virtual ~BaseRes()
		{
		}
		virtual void DeleteResource()
		{
		}
	};

	struct BLOOM_API ImageRes : public BaseRes
	{
		SharedImageRef mImage;
		ResourcePath mAlphaImage;
		ResourcePath mAlphaGridImage;
		std::string mVariant;
		bool mAutoFindAlpha;
		bool mPalletize;
		bool mA4R4G4B4;
		bool mA8R8G8B8;
		bool mDDSurface;
		bool mPurgeBits;
		bool mMinimizeSubdivisions;
		int mRows;
		int mCols;
		uint32_t mAlphaColor;
		AnimInfo mAnimInfo;

		ImageRes()
		{
			mType = ResType_Image;
		}
		virtual void DeleteResource();
	};

	struct BLOOM_API SoundRes : public BaseRes
	{
		int mSoundId;
		double mVolume;
		int mPanning;

		SoundRes()
		{
			mType = ResType_Sound;
		}
		virtual void DeleteResource();
	};

	struct BLOOM_API FontRes : public BaseRes
	{
		Font *mFont;
		Image *mImage;
		ResourcePath mImagePath;
		std::string mTags;

		// For SysFonts
		bool mSysFont;
		bool mBold;
		bool mItalic;
		bool mUnderline;
		bool mShadow;
		int mSize;

		FontRes()
		{
			mType = ResType_Font;
		}
		virtual void DeleteResource();
	};

	struct ResourceIdLessNoCase
	{
		bool operator()(const ResourceId &s1, const ResourceId &s2) const
		{
			return stricmp(s1.CStr(), s2.CStr()) < 0;
		}
	};

	typedef std::map<ResourceId, BaseRes *> ResMap;
	typedef std::list<BaseRes *> ResList;
	typedef std::map<ResourceId, ResList, ResourceIdLessNoCase> ResGroupMap;
  protected:

	std::set<ResourceId, ResourceIdLessNoCase> mLoadedGroups;

	ResMap mImageMap;
	ResMap mSoundMap;
	ResMap mFontMap;

	XMLParser *mXMLParser;
	std::string mError;
	bool mHasFailed;
	SexyAppBase *mApp;
	ResourceId mCurResGroup;
	ResourcePath mDefaultPath;
	ResourceId mDefaultIdPrefix;
	bool mAllowMissingProgramResources;
	bool mAllowAlreadyDefinedResources; // for reparsing file while running
	bool mHadAlreadyDefinedError;

	ResGroupMap mResGroupMap;
	ResList *mCurResGroupList;
	ResList::iterator mCurResGroupListItr;

	bool Fail(const std::string &theErrorText);

	virtual bool ParseCommonResource(XMLElement &theElement, BaseRes *theRes, ResMap &theMap);
	virtual bool ParseSoundResource(XMLElement &theElement);
	virtual bool ParseImageResource(XMLElement &theElement);
	virtual bool ParseFontResource(XMLElement &theElement);
	virtual bool ParseSetDefaults(XMLElement &theElement, const std::string &theNamespace);
	virtual bool ParseResources(const std::string &theNamespace);

	bool DoParseResources(const std::string &theNamespace);
	void DeleteMap(ResMap &theMap);
	virtual void DeleteResources(ResMap &theMap, const ResourceId &theGroup);

	bool LoadAlphaGridImage(ImageRes *theRes, GPUImage *theImage);
	bool LoadAlphaImage(ImageRes *theRes, GPUImage *theImage);
	virtual bool DoLoadImage(ImageRes *theRes);
	virtual bool DoLoadFont(FontRes *theRes);
	virtual bool DoLoadSound(SoundRes *theRes);

	int GetNumResources(const ResourceId &theGroup, ResMap &theMap);

  public:
	ResourceManager(SexyAppBase *theApp);
	virtual ~ResourceManager();

	bool ParseResourcesFile(const ResourcePath &theFilePath);
	//Add additional resources/overwrite resources
	bool AddResourcesFile(const ResourcePath &theFilePath);
	bool ReparseResourcesFile(const ResourcePath &theFilePath);

	std::string GetErrorText();
	bool HadError();
	bool IsGroupLoaded(const ResourceId &theGroup);

	int GetNumImages(const ResourceId &theGroup);
	int GetNumSounds(const ResourceId &theGroup);
	int GetNumFonts(const ResourceId &theGroup);
	int GetNumResources(const ResourceId &theGroup);

	virtual bool LoadNextResource();
	virtual void ResourceLoadedHook(BaseRes *theRes);

	virtual void StartLoadResources(const ResourceId &theGroup);
	virtual bool LoadResources(const ResourceId &theGroup);

	bool ReplaceImage(const ResourceId &theId, Image *theImage);
	bool ReplaceSound(const ResourceId &theId, int theSound);
	bool ReplaceFont(const ResourceId &theId, Font *theFont);

	void DeleteImage(const ResourceId &theName);
	SharedImageRef LoadImage(const ResourceId &theName);

	void DeleteFont(const ResourceId &theName);
	Font *LoadFont(const ResourceId &theName);

	SharedImageRef GetImage(const ResourceId &theId);
	int GetSound(const ResourceId &theId);
	Font *GetFont(const ResourceId &theId);

	// Returns all the XML attributes associated with the image
	const XMLParamMap &GetImageAttributes(const ResourceId &theId);

	// These throw a ResourceManagerException if the resource is not found
	virtual SharedImageRef GetImageThrow(const ResourceId &theId);
	virtual int GetSoundThrow(const ResourceId &theId);
	virtual Font *GetFontThrow(const ResourceId &theId);

	void SetAllowMissingProgramImages(bool allow);

	virtual void DeleteResources(const ResourceId &theGroup);
	void DeleteExtraImageBuffers(const ResourceId &theGroup);

	const ResList *GetCurResGroupList()
	{
		return mCurResGroupList;
	}
	ResourceId GetCurResGroup()
	{
		return mCurResGroup;
	}
	void DumpCurResGroup(std::string &theDestStr);

	const ResMap &GetImageMap();
	const ResMap &GetSoundMap();
	const ResMap &GetFontMap();
};

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
struct BLOOM_API ResourceManagerException : public std::exception
{
	std::string what;
	ResourceManagerException(const std::string &theWhat) : what(theWhat)
	{
	}
};

} // namespace Sexy

#endif //__PROPERTIESPARSER_H__
