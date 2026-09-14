#include "SplashProjectileBehavior.h"
#include "ProjectileTypes.h"
#include "Projectile.h"
#include "../Board.h"
#include "../System/Damage.h"
#include "../../LawnApp.h"

SplashProjectileBehavior::SplashProjectileBehavior(const ProjectileBehaviorType &theType)
	: ProjectileBehavior(theType)
{
}

void SplashProjectileBehavior::DoImpact(DoImpactContext &theContext)
{
	Zombie *aZombie = theContext.mTargetZombie;
	Projectile &aProjectile = theContext.mProjectile;

	if (aZombie && IsSplashDamage(aProjectile, *aZombie))
	{
		if (aProjectile.mType == ProjectileTypes::FIREBALL && aZombie)
		{
			aZombie->RemoveColdEffects();
		}

		DoSplashDamage(aProjectile, *aZombie);
	}
}

bool SplashProjectileBehavior::IsSplashDamage(Projectile &theProjectile, Zombie &theCentralTarget)
{
	return mAttributes.mAbilityEnabled;

	//if (mType == ProjectileTypes::FIREBALL && theZombie.IsFireResistant())
	//	return false;
	//
	//return mType == ProjectileTypes::MELON || mType == ProjectileTypes::WINTERMELON ||
	//	   mType == ProjectileTypes::FIREBALL;
}

bool SplashProjectileBehavior::IsZombieHitBySplash(Projectile &theProjectile, Zombie &theTarget)
{
	Rect aProjectileRect = theProjectile.GetProjectileRect();
	if (mType == ProjectileTypes::FIREBALL)
	{
		aProjectileRect.mWidth = 100;
	}

	int aRowDeviation = theTarget.mRow - theProjectile.mRow;
	Rect aZombieRect = theTarget.GetZombieRect();
	if (theTarget.IsFireResistant() && mType == ProjectileTypes::FIREBALL)
	{
		return false;
	}

	if (theTarget.mZombieType == ZombieType::ZOMBIE_BOSS)
	{
		aRowDeviation = 0;
	}
	if (theProjectile.mType == ProjectileTypes::FIREBALL)
	{
		if (aRowDeviation != 0)
		{
			return false;
		}
	}
	else if (aRowDeviation > 1 || aRowDeviation < -1)
	{
		return false;
	}

	return theTarget.EffectedByDamage((unsigned int)theProjectile.mDamageRangeFlags) &&
		   GetRectXOverlap(aProjectileRect, aZombieRect) >= 0;
}

void SplashProjectileBehavior::DoSplashDamage(Projectile &theProjectile, Zombie &theCentralTarget)
{
	int aZombiesGetSplashed = 0;
	Zombie *aZombie = nullptr;
	while (theProjectile.mBoard->IterateZombies(aZombie))
	{
		if (aZombie != &theCentralTarget && IsZombieHitBySplash(theProjectile, theCentralTarget))
		{
			aZombiesGetSplashed++;
		}
	}

	int aOriginalDamage = theProjectile.mAttributes.mDamage;
	int aSplashDamage = theProjectile.mAttributes.mDamage / 3;
	int aMaxSplashDamageAmount = aSplashDamage * 7;
	if (theProjectile.mType == ProjectileTypes::FIREBALL)
	{
		aMaxSplashDamageAmount = aOriginalDamage;
	}
	int aSplashDamageAmount = aSplashDamage * aZombiesGetSplashed;
	if (aSplashDamageAmount > aMaxSplashDamageAmount)
	{
		//aSplashDamage *= aMaxSplashDamageAmount / aSplashDamage;
		aSplashDamage = aOriginalDamage * aMaxSplashDamageAmount / (aSplashDamageAmount * 3);
		aSplashDamage = std::max(aSplashDamage, 1);
	}

	aZombie = nullptr;
	while (theProjectile.mBoard->IterateZombies(aZombie))
	{
		if (IsZombieHitBySplash(theProjectile, *aZombie))
		{
			unsigned int aDamageFlags = theProjectile.GetDamageFlags(aZombie);
			if (aZombie == &theCentralTarget)
			{
				//Damage aDamage = Damage::FromProjectile(&theProjectile, aOriginalDamage, aDamageFlags);
				//aZombie->TakeDamage(aDamage);
				//TODO: damage the zombie's body/shield instead of its shield/body
			}
			else
			{
				Damage aDamage = Damage::FromProjectile(&theProjectile, aSplashDamage, aDamageFlags);
				aZombie->TakeDamage(aDamage);
			}
		}
	}
}