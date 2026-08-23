#include "ProjectileTypes.h"
#include "ProjectileType.h"
#include "../Registries.h"

namespace ProjectileTypes
{

const auto &PEA = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mDamage = 20;
	auto *aProjectileType = new ProjectileType("PVZ", "PEA", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_PROJECTILEPEA"};
	return aProjectileType;
});

const auto &SNOWPEA = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = -1.0f;
	anAttributes.mShadowScale = 1.3f;
	anAttributes.mDamage = 20;
	auto *aProjectileType = new ProjectileType("PVZ", "SNOWPEA", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_PROJECTILESNOWPEA"};
	return aProjectileType;
});

const auto &CABBAGE = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mShadowScale = 1.6f;
	anAttributes.mDamage = 40;
	auto *aProjectileType = new ProjectileType("PVZ", "CABBAGE", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_REANIM_CABBAGEPULT_CABBAGE"};
	return aProjectileType;
});

const auto &MELON = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mShadowScale = 1.6f;
	anAttributes.mDamage = 80;
	auto *aProjectileType = new ProjectileType("PVZ", "MELON", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_REANIM_MELONPULT_MELON"};
	return aProjectileType;
});

const auto &PUFF = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mDamage = 20;
	auto *aProjectileType = new ProjectileType("PVZ", "PUFF", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_PUFFSHROOM_PUFF1"};
	return aProjectileType;
});

const auto &WINTERMELON = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mShadowScale = 1.6f;
	anAttributes.mDamage = 80;
	auto *aProjectileType = new ProjectileType("PVZ", "WINTERMELON", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_REANIM_WINTERMELON_PROJECTILE"};
	return aProjectileType;
});

const auto &FIREBALL = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowScale = 1.4f;
	anAttributes.mDamage = 40;
	auto *aProjectileType = new ProjectileType("PVZ", "FIREBALL", anAttributes);
	return aProjectileType;
});

const auto &STAR = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 7.0f;
	anAttributes.mDamage = 20;
	auto *aProjectileType = new ProjectileType("PVZ", "STAR", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_PROJECTILE_STAR"};
	return aProjectileType;
});

const auto &SPIKE = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mDamage = 20;
	auto *aProjectileType = new ProjectileType("PVZ", "SPIKE", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_PROJECTILECACTUS"};
	return aProjectileType;
});

const auto &BASKETBALL = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mVisualScale = 1.1f;
	anAttributes.mDamage = 75;
	auto *aProjectileType = new ProjectileType("PVZ", "BASKETBALL", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL"};
	return aProjectileType;
});

const auto &KERNEL = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mShadowScale = 1.6f;
	anAttributes.mVisualScale = 0.95f;
	anAttributes.mDamage = 20;
	auto *aProjectileType = new ProjectileType("PVZ", "KERNEL", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_REANIM_CORNPULT_KERNAL"};

	return aProjectileType;
});

const auto &COBBIG = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 57.0f;
	anAttributes.mShadowScale = 1.0f;
	anAttributes.mVisualScale = 0.9f;
	anAttributes.mDamage = 300;
	auto *aProjectileType = new ProjectileType("PVZ", "COBBIG", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_REANIM_COBCANNON_COB"};
	return aProjectileType;
});

const auto &BUTTER = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mShadowScale = 1.6f;
	anAttributes.mVisualScale = 0.8f;
	anAttributes.mDamage = 40;
	auto *aProjectileType = new ProjectileType("PVZ", "BUTTER", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_REANIM_CORNPULT_BUTTER"};
	return aProjectileType;
});

const auto &ZOMBIE_PEA = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mDamage = 20;
	auto *aProjectileType = new ProjectileType("PVZ", "ZOMBIE_PEA", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_PROJECTILEPEA"};
	return aProjectileType;
});

#ifdef INCLUDE_CUSTOM_PROJECTILE_TEST
const auto &CUSTOM_TEST = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mShadowOffsetX = 3.0f;
	anAttributes.mDamage = 40;
	auto *aProjectileType = new ProjectileType("PVZ", "CUSTOM_TEST", anAttributes);
	aProjectileType->mBaseImage = {"PVZ", "IMAGE_BRAIN"};
	return aProjectileType;
});
#endif

} // namespace ProjectileTypes