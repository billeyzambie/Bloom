#include "HomingProjectileBehavior.h"
#include "Projectile.h"
#include "../Board.h"
#include "../../SexyAppFramework/SexyVector.h"

HomingProjectileBehavior::HomingProjectileBehavior(const ProjectileBehaviorType &theType)
	: ProjectileBehavior(theType) 
{
}

void HomingProjectileBehavior::DoImpact(DoImpactContext &theContext) 
{
	if (
		theContext.mTargetZombie 
		&& theContext.mTargetZombie->GetId() != mTargetZombieId
		&& mTargetZombieId != ZombieID::ZOMBIEID_NULL
	)
	{
		theContext.mCanceled = true;
		theContext.mShouldDie = false;
	}
}

void HomingProjectileBehavior::VirtualUpdate(Projectile &theProjectile) 
{
	if (mTargetZombieId == ZombieID::ZOMBIEID_NULL)
		return;
	theProjectile.mAttributes.mDamageRangeFlags |= GetBit(DamageRangeFlags::DAMAGES_GROUND);
	theProjectile.mAttributes.mDamageRangeFlags |= GetBit(DamageRangeFlags::DAMAGES_FLYING);

	bool aCanFindNew = mNumberOfTimesFoundNewTarget + 1 < mAttributes.mAbilityMax;

	Zombie *aZombie = theProjectile.mBoard->ZombieTryToGet(mTargetZombieId);
	if (!aZombie || aCanFindNew && !aZombie->mHasHead)
	{
		if (!aCanFindNew)
			return;
		
		GameObject *aProjectileOwner = theProjectile.mBoard->GameObjectTryToGet(theProjectile.mOwner);
		if (!aProjectileOwner)
			return;

		Plant *aPlant = aProjectileOwner->TryAsPlant();
		if (!aPlant)
			return;
		
		aZombie = aPlant->FindTargetZombie(aPlant->mRow);
		if (!aZombie || !aZombie->mHasHead)
			return;

		mTargetZombieId = aZombie->GetId();
		mNumberOfTimesFoundNewTarget++;
	}

	if (aZombie->EffectedByDamage(theProjectile.GetDamageRangeFlags()))
	{
		Rect aZombieRect = aZombie->GetZombieRect();
		SexyVector2 aTargetCenter(aZombie->ZombieTargetLeadX(0.0f), aZombieRect.mY + aZombieRect.mHeight / 2);
		SexyVector2 aProjectileCenter(theProjectile.mPosX + theProjectile.mWidth / 2, theProjectile.mPosY + theProjectile.mHeight / 2);
		SexyVector2 aToTarget = (aTargetCenter - aProjectileCenter).Normalize();
		SexyVector2 aMotion(theProjectile.mVelX, theProjectile.mVelY);

		aMotion += aToTarget * (0.001f * theProjectile.mProjectileAge);
		aMotion = aMotion.Normalize();
		aMotion *= mAttributes.mAbilityIntensity;

		theProjectile.mVelX = aMotion.x;
		theProjectile.mVelY = aMotion.y;
		theProjectile.mRotation = -atan2(theProjectile.mVelY, theProjectile.mVelX);
	}

}