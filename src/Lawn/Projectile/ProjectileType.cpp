#include "ProjectileType.h"
#include "Projectile.h"
#include "../LawnApp.h"
#include "../Sexy.TodLib/TodDebug.h"

ProjectileType::ProjectileType(const std::string &theModName, const std::string &theTypeName,
							   const ProjectileAttributes &theAttributes)
	: BloomType(theModName, theTypeName),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
}

ProjectileType::operator OldProjectileType() const
{
	int aNumId = GetNumericalId();
	TOD_ASSERT(aNumId < OldProjectileType::NUM_PROJECTILES, "Unhandled modded ProjectileType");
	return (OldProjectileType)aNumId;
}

void ProjectileType::CopyFrom(const ProjectileType &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
	mModifiers = theOther.mModifiers;
}

void ProjectileType::Update(const LawnApp &theLawnApp)
{
	mAttributes = mAttributeBaseValues;

	ProjectileModifierContext aContext{*this, theLawnApp, *theLawnApp.mPlayerInfo, mAttributes};

	mModifiers.Fire(aContext);
}

Projectile* ProjectileType::Instantiate(void* theBuffer) const
{
	return new (theBuffer) Projectile(*this);
}