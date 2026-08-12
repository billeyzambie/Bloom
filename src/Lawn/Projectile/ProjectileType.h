#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/PatchHolder.h"
#include "../BloomLib/EventList.h"
#include "../BloomLib/ImageGetter.h"

#include "../ConstEnums.h"
#include "../Resources.h"

namespace Sexy
{
class Image;
class Graphics;
} // namespace Sexy

class LawnApp;
class PlayerInfo;
class StoreScreen;

class StoreItem;
class StoreItemGroup;

class BLOOM_API ProjectileType : public BloomType
{
  public:
	struct Attributes
	{
		Sexy::Image *mImageOverride = nullptr;
		float mScale = 1;
		int mDamage = 20;
	};
	struct ModifierContext
	{
		const ProjectileType &mType;
		const LawnApp &mLawnApp;
		const PlayerInfo &mPlayerInfo;
		Attributes &mAttributes;
	};
	PatchHolder<ProjectileType> *mPatchHolder;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;
	EventList<ModifierContext> mModifiers;
	ImageGetter mBaseImage;

  public:
	ProjectileType(const std::string &theModName, const std::string &theTypeName, const Attributes &theAttributes);
	operator OldProjectileType() const;
	virtual void CopyFrom(const ProjectileType &theOther);
	void Update(const LawnApp &theLawnApp);
};

typedef ProjectileType::Attributes ProjectileAttributes;
typedef ProjectileType::ModifierContext ProjectileModifierContext;