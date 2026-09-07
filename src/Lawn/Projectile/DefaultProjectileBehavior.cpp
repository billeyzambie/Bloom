#include "DefaultProjectileBehavior.h"
#include "ProjectileTypes.h"
#include "Projectile.h"
#include "../Board.h"
#include "../System/Damage.h"
#include "../../Sexy.TodLib/Attachment.h"
#include "../../Sexy.TodLib/Reanimator.h"
#include "../../Sexy.TodLib/TodParticle.h"
#include "../../LawnApp.h"

DefaultProjectileBehavior::DefaultProjectileBehavior(const ProjectileBehaviorType &theType)
	: ProjectileBehavior(theType)
{
}

void DefaultProjectileBehavior::VirtualUpdate(Projectile &theProjectile)
{
	int aTime = 20;
	if (mType != ProjectileTypes::PUFF 
		&& mType != ProjectileTypes::FIREBALL 
		&& mType != ProjectileTypes::STAR 
		&& mType != ProjectileTypes::BASKETBALL)
	{
		aTime = 0;
	}
	if (theProjectile.mProjectileAge > aTime)
	{
		theProjectile.mRenderOrder = Board::MakeRenderOrder(
			RenderLayer::RENDER_LAYER_PROJECTILE,
			theProjectile.mRow,
			0
		);
	}

	if (theProjectile.mClickBackoffCounter > 0)
	{
		theProjectile.mClickBackoffCounter--;
	}
	theProjectile.mRotation += theProjectile.mRotationSpeed;

	theProjectile.UpdateMotion();
	AttachmentUpdateAndMove(
		theProjectile.mAttachmentID,
		theProjectile.mPosX,
		theProjectile.mPosY + theProjectile.mPosZ
	);
}

void DefaultProjectileBehavior::DoImpact(DoImpactContext &theImpactContext)
{
	Zombie *aZombie = theImpactContext.mTargetZombie;
	Projectile &aProjectile = theImpactContext.mProjectile;

	aProjectile.PlayImpactSound(aZombie);

	if (aProjectile.IsSplashDamage(aZombie))
	{
		if (mType == ProjectileTypes::FIREBALL && aZombie)
		{
			aZombie->RemoveColdEffects();
		}

		aProjectile.DoSplashDamage(aZombie);
	}
	else if (aZombie)
	{
		Damage aDamage = Damage::FromProjectile(
			&aProjectile,
			aProjectile.mAttributes.mDamage, 
			aProjectile.GetDamageFlags(aZombie)
		);
		aZombie->TakeDamage(aDamage);
	}

	float aLastPosX = aProjectile.mPosX - aProjectile.mVelX;
	float aLastPosY = aProjectile.mPosY + aProjectile.mPosZ - aProjectile.mVelY - aProjectile.mVelZ;
	ParticleEffect aEffect = ParticleEffect::PARTICLE_NONE;
	float aSplatPosX = aProjectile.mPosX + 12.0f;
	float aSplatPosY = aProjectile.mPosY + 12.0f;
	if (aProjectile.mType == ProjectileTypes::MELON)
	{
		aProjectile.mApp->AddTodParticle(
			aLastPosX + 30.0f,
			aLastPosY + 30.0f,
			aProjectile.mRenderOrder + 1,
			ParticleEffect::PARTICLE_MELONSPLASH
		);
	}
	else if (mType == ProjectileTypes::WINTERMELON)
	{
		aProjectile.mApp->AddTodParticle(
			aLastPosX + 30.0f,
			aLastPosY + 30.0f, 
			aProjectile.mRenderOrder + 1,
			ParticleEffect::PARTICLE_WINTERMELON
		);
	}
	else if (mType == ProjectileTypes::COBBIG)
	{
		int aRenderOrder = Board::MakeRenderOrder(
			RenderLayer::RENDER_LAYER_GROUND,
			aProjectile.mCobTargetRow,
			2
		);

		aProjectile.mApp->AddTodParticle(aProjectile.mPosX + 80.0f, aProjectile.mPosY + 40.0f, aRenderOrder, ParticleEffect::PARTICLE_BLASTMARK);
		aProjectile.mApp->AddTodParticle(aProjectile.mPosX + 80.0f, aProjectile.mPosY + 40.0f, aProjectile.mRenderOrder + 1, ParticleEffect::PARTICLE_POPCORNSPLASH);
		aProjectile.mApp->PlaySample(SOUND_DOOMSHROOM);
		aProjectile.mBoard->ShakeBoard(3, -4);
	}
	else if (mType == ProjectileTypes::SNOWPEA)
	{
		aSplatPosX -= 15.0f;
		aEffect = ParticleEffect::PARTICLE_SNOWPEA_SPLAT;
	}
	else if (mType == ProjectileTypes::FIREBALL)
	{
		if (aProjectile.IsSplashDamage(aZombie))
		{
			Reanimation *aFireReanim = aProjectile.mApp->AddReanimation(
				aProjectile.mPosX + 38.0f,
				aProjectile.mPosY - 20.0f,
				aProjectile.mRenderOrder + 1,
				ReanimationType::REANIM_JALAPENO_FIRE
			);
			aFireReanim->mAnimTime = 0.25f;
			aFireReanim->mAnimRate = 24.0f;
			aFireReanim->OverrideScale(0.7f, 0.4f);
		}
	}
	else if (mType == ProjectileTypes::STAR)
	{
		aEffect = ParticleEffect::PARTICLE_STAR_SPLAT;
	}
	else if (mType == ProjectileTypes::PUFF)
	{
		aSplatPosX -= 20.0f;
		aEffect = ParticleEffect::PARTICLE_PUFF_SPLAT;
	}
	else if (mType == ProjectileTypes::CABBAGE)
	{
		aSplatPosX = aLastPosX - 38.0f;
		aSplatPosY = aLastPosY + 23.0f;
		aEffect = ParticleEffect::PARTICLE_CABBAGE_SPLAT;
	}
	else if (mType == ProjectileTypes::BUTTER)
	{
		aSplatPosX = aLastPosX - 20.0f;
		aSplatPosY = aLastPosY + 63.0f;
		aEffect = ParticleEffect::PARTICLE_BUTTER_SPLAT;
	}
	else
	{
		aSplatPosX -= 15.0f;
		aEffect = ParticleEffect::PARTICLE_PEA_SPLAT;
	}

	if (aEffect != ParticleEffect::PARTICLE_NONE)
	{
		TodParticleSystem *aParticle;

		if (aZombie)
		{
			float aPosX = aSplatPosX + 52.0f - aZombie->mX;
			float aPosY = aSplatPosY - aZombie->mY;
			if (aZombie->mZombiePhase == ZombiePhase::PHASE_SNORKEL_WALKING_IN_POOL ||
				aZombie->mZombiePhase == ZombiePhase::PHASE_DOLPHIN_WALKING_IN_POOL)
			{
				aPosY += 60.0f;
			}
			if (aProjectile.mMotionType == ProjectileMotion::MOTION_BACKWARDS)
			{
				aPosX -= 80.0f;
			}
			else if (aProjectile.mPosX > aZombie->mX + 40 &&
					 aProjectile.mMotionType != ProjectileMotion::MOTION_LOBBED)
			{
				aPosX -= 60.0f;
			}

			aPosY = ClampFloat(aPosY, 20.0f, 100.0f);
			aParticle = aZombie->AddAttachedParticle(aPosX, aPosY, aEffect);
		}
		else
		{
			aParticle = aProjectile.mApp->AddTodParticle(aSplatPosX, aSplatPosY, aProjectile.mRenderOrder + 1, aEffect);
		}

		if (aEffect == ParticleEffect::PARTICLE_PEA_SPLAT && mType != ProjectileTypes::PEA)
		{
			for (TodListNode<ParticleEmitterID> *aNode = aParticle->mEmitterList.mHead; aNode != nullptr;
				 aNode = aNode->mNext)
			{
				TodParticleEmitter *anEmitter =
					aParticle->mParticleHolder->mEmitters.DataArrayGet((unsigned int)aNode->mValue);

				anEmitter->mImageOverride = aProjectile.GetImage();
				anEmitter->mScaleOverride = 0.33f;
			}
		}
	}
}
