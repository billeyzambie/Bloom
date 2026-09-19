#include "ProjectileBehaviorTypes.h"
#include "ProjectileBehaviorType.h"
#include "../Registries.h"

#include "../Board.h"
#include "../../LawnApp.h"
#include "../Zombie.h"
#include "Projectile.h"
#include "ProjectileBehavior.h"
#include "ApplyButterProjectileBehavior.h"
#include "MainProjectileBehavior.h"
#include "SplashProjectileBehavior.h"
#include "FireProjectileBehavior.h"
#include "HomingProjectileBehavior.h"
#include "TestProjectileBehavior.h"

namespace ProjectileBehaviorTypes
{

const auto &MAIN = RegisterTypeOf<MainProjectileBehavior>("PVZ", "MAIN", {});

const auto &APPLY_BUTTER = RegisterTypeOf<ApplyButterProjectileBehavior>("PVZ", "APPLY_BUTTER", {});

const auto &MELON_SPLASH = RegisterTypeOf<SplashProjectileBehavior>(
	"PVZ", "MELON_SPLASH",
	{
		.mAbilityWidth = 60,
		.mAbilityHeight = 3,
		.mAbilityMax = 7,
		.mAbilityIntensity = 0.33f
	}
);

const auto &FIRE = RegisterTypeOf<FireProjectileBehavior>(
	"PVZ", "FIRE",
	{
		.mAbilityWidth = 100,
		.mAbilityHeight = 1,
		.mAbilityMax = 1,
		.mAbilityIntensity = 0.33f
	}
);

const auto &HOMING = RegisterTypeOf<HomingProjectileBehavior>(
	"PVZ", "HOMING",
	{
		.mAbilityMax = 1,
		.mAbilityIntensity = 2.0f
	}
);

const auto &TEST = RegisterTypeOf<TestProjectileBehavior>("PVZ", "TEST", {});

} // namespace ProjectileBehaviorTypes