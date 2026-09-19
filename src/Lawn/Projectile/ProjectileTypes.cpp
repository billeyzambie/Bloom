#include "ProjectileTypes.h"
#include "ProjectileBehaviorTypes.h"
#include "Projectile.h"
#include "../Registries.h"
#include "../../Sexy.TodLib/TodCommon.h"

namespace ProjectileTypes
{

const auto &PEA = RegisterTypeOf<Projectile>(
	"PVZ", "PEA",
	{
		.mShadowOffsetX = 3.0f,
		.mDamage = 20
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_PROJECTILEPEA"};
	}
);

const auto &SNOWPEA = RegisterTypeOf<Projectile>(
	"PVZ", "SNOWPEA",
	{
		.mShadowOffsetX = -1.0f,
		.mShadowScale = 1.3f,
		.mDamage = 20
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_PROJECTILESNOWPEA"};
		SetBit(theAttributes.mDamageFlags, (int)DamageFlags::DAMAGE_FREEZE, true);
	}
);

const auto &CABBAGE = RegisterTypeOf<Projectile>(
	"PVZ", "CABBAGE",
	{
		.mShadowOffsetX = 3.0f,
		.mShadowScale = 1.6f,
		.mDamage = 40
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_REANIM_CABBAGEPULT_CABBAGE"};
	}
);

const auto &MELON = RegisterTypeOf<Projectile>(
	"PVZ", "MELON",
	{
		.mShadowOffsetX = 3.0f,
		.mShadowScale = 1.6f,
		.mDamage = 80
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_REANIM_MELONPULT_MELON"};
		theType.mBehaviorTypes.Add(ProjectileBehaviorTypes::MELON_SPLASH);
	}
);

const auto &PUFF = RegisterTypeOf<Projectile>(
	"PVZ", "PUFF",
	{
		.mDamage = 20
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_PUFFSHROOM_PUFF1"};
	}
);

const auto &WINTERMELON = RegisterTypeOf<Projectile>(
	"PVZ", "WINTERMELON",
	{
		.mShadowOffsetX = 3.0f,
		.mShadowScale = 1.6f,
		.mDamage = 80
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		SetBit(theAttributes.mDamageFlags, (int)DamageFlags::DAMAGE_FREEZE, true);
		theType.mBaseImage = {"PVZ", "IMAGE_REANIM_WINTERMELON_PROJECTILE"};
		theType.mBehaviorTypes.Add(ProjectileBehaviorTypes::MELON_SPLASH);
	}
);

const auto &FIREBALL = RegisterTypeOf<Projectile>(
	"PVZ", "FIREBALL",
	{
		.mShadowScale = 1.4f,
		.mDamage = 40
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBehaviorTypes.Add(ProjectileBehaviorTypes::FIRE);
	}
);

const auto &STAR = RegisterTypeOf<Projectile>(
	"PVZ", "STAR",
	{
		.mShadowOffsetX = 7.0f,
		.mDamage = 20
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_PROJECTILE_STAR"};
	}
);

const auto &SPIKE = RegisterTypeOf<Projectile>(
	"PVZ", "SPIKE",
	{
		.mDamage = 20
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_PROJECTILECACTUS"};
		theType.mBehaviorTypes.Add(
			ProjectileBehaviorTypes::HOMING,
			ListInsertion<ProjectileBehaviorType>::Before(ProjectileBehaviorTypes::MAIN)
		);
	}
);

const auto &BASKETBALL = RegisterTypeOf<Projectile>(
	"PVZ", "BASKETBALL",
	{
		.mVisualScale = 1.1f,
		.mDamage = 75
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL"};
	}
);

const auto &KERNEL = RegisterTypeOf<Projectile>(
	"PVZ", "KERNEL",
	{
		.mVisualScale = 0.95f,
		.mShadowOffsetX = 3.0f,
		.mShadowScale = 1.6f,
		.mDamage = 20
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_REANIM_CORNPULT_KERNAL"};
	}
);

const auto &COBBIG = RegisterTypeOf<Projectile>(
	"PVZ", "COBBIG",
	{
		.mVisualScale = 0.9f,
		.mShadowOffsetX = 57.0f,
		.mShadowScale = 1.0f,
		.mWidth = 162,
		.mHeight = 78,
		.mDamage = 300,
		.mDamageRangeFlags =
			GetBit(DamageRangeFlags::DAMAGES_GROUND) | GetBit(DamageRangeFlags::DAMAGES_FLYING) |
			GetBit(DamageRangeFlags::DAMAGES_DOG) | GetBit(DamageRangeFlags::DAMAGES_SUBMERGED) |
			GetBit(DamageRangeFlags::DAMAGES_DYING) | GetBit(DamageRangeFlags::DAMAGES_UNDERGROUND) |
			GetBit(DamageRangeFlags::DAMAGES_OFF_GROUND)
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_REANIM_COBCANNON_COB"};
	}
);

const auto &BUTTER = RegisterTypeOf<Projectile>(
	"PVZ", "BUTTER",
	{
		.mVisualScale = 0.8f,
		.mShadowOffsetX = 3.0f,
		.mShadowScale = 1.6f,
		.mDamage = 40
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_REANIM_CORNPULT_BUTTER"};
		theType.mBehaviorTypes.Add(ProjectileBehaviorTypes::APPLY_BUTTER);
	}
);

const auto &ZOMBIE_PEA = RegisterTypeOf<Projectile>(
	"PVZ", "ZOMBIE_PEA",
	{
		.mShadowOffsetX = 3.0f,
		.mDamage = 20
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_PROJECTILEPEA"};
	}
);

#ifdef INCLUDE_CUSTOM_PROJECTILE_TEST
const auto &CUSTOM_TEST = RegisterTypeOf<Projectile>(
	"PVZ", "CUSTOM_TEST",
	{
		.mShadowOffsetX = 3.0f,
		.mDamage = 30
	},
	[](ProjectileType &theType, ProjectileAttributes &theAttributes)
	{
		theType.mBaseImage = {"PVZ", "IMAGE_BRAIN"};
		theType.mBehaviorTypes.Add(
			ProjectileBehaviorTypes::TEST,
			ListInsertion<ProjectileBehaviorType>::Before(ProjectileBehaviorTypes::MAIN)
		);
	}
);
#endif

} // namespace ProjectileTypes