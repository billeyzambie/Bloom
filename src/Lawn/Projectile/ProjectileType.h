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

class Projectile;
class ProjectileBehaviorType;

template <class T> class RegistryTypeHolder;

class BLOOM_API ProjectileType : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = 240;

	struct Attributes
	{
		Sexy::Image *mImageOverride = nullptr;
		float mVisualScale = 1.0f;
		float mShadowOffsetX = 0.0f;
		float mShadowScale = 1.0f;
		int mWidth = 40;
		int mHeight = 40;
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
	const ProjectileBehaviorType *mBehaviorType = nullptr;

	ProjectileType(const std::string &theModName, const std::string &theTypeName, const Attributes &theAttributes);
	operator OldProjectileType() const;
	virtual void CopyFrom(const ProjectileType &theOther);
	void Update(const LawnApp &theLawnApp);
	Projectile *Instantiate(void *theBuffer) const;
};

typedef ProjectileType::Attributes ProjectileAttributes;
typedef ProjectileType::ModifierContext ProjectileModifierContext;