#include "BillDebug.h"
#include "Events.h"
#include "../LawnApp.h"
#include "../Lawn/Board.h"
#include "../Sexy.TodLib/TodFoley.h"
#include <iostream>

void OnGameStart()
{
	Events::Subscribe(+[](GameObjectHurtBeforeContext &theContext) {
		Plant *aPlant = theContext.mHurtGameObject.TryAsPlant();
		if (aPlant && aPlant->mSeedType == SeedType::SEED_PEASHOOTER)
			theContext.mCanceled = true;
	});
	/*Events::Subscribe(+[](PlantEatenContext &theContext) {
		auto *aPlant = theContext.mEatenPlant;

		int aPosX = aPlant->mX + aPlant->mWidth / 2;
		int aPosY = aPlant->mY + aPlant->mHeight / 2;
		int aDamageRangeFlags = aPlant->GetDamageRangeFlags(PlantWeapon::WEAPON_PRIMARY);

		aPlant->mApp->PlayFoley(FoleyType::FOLEY_CHERRYBOMB);
		aPlant->mApp->PlayFoley(FoleyType::FOLEY_JUICY);

		aPlant->mBoard->KillAllZombiesInRadius(aPlant->mRow, aPosX, aPosY, 115, 1, true, aDamageRangeFlags);

		aPlant->mApp->AddTodParticle(aPosX, aPosY, (int)RenderLayer::RENDER_LAYER_TOP, ParticleEffect::PARTICLE_POWIE);
		aPlant->mBoard->ShakeBoard(3, -4);

		aPlant->Die();
	});*/
}

void Quack()
{
	std::cout << "Quack!" << std::endl;
}