#include "ProjectileTypes.h"
#include "ProjectileType.h"
#include "../Registries.h"

namespace ProjectileTypes
{

const auto &PEA = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_PROJECTILEPEA"};
	anAttributes.mDamage = 20;
	auto *aStoreItemType = new ProjectileType("PVZ", "PEA", anAttributes);
	return aStoreItemType;
});

const auto &SNOWPEA = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_PROJECTILESNOWPEA"};
	anAttributes.mDamage = 20;
	auto *aStoreItemType = new ProjectileType("PVZ", "SNOWPEA", anAttributes);
	return aStoreItemType;
});

const auto &CABBAGE = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_REANIM_CABBAGEPULT_CABBAGE"};
	anAttributes.mDamage = 40;
	auto *aStoreItemType = new ProjectileType("PVZ", "CABBAGE", anAttributes);
	return aStoreItemType;
});

const auto &MELON = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_REANIM_MELONPULT_MELON"};
	anAttributes.mDamage = 80;
	auto *aStoreItemType = new ProjectileType("PVZ", "MELON", anAttributes);
	return aStoreItemType;
});

const auto &PUFF = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_PUFFSHROOM_PUFF1"};
	anAttributes.mDamage = 20;
	auto *aStoreItemType = new ProjectileType("PVZ", "PUFF", anAttributes);
	return aStoreItemType;
});

const auto &WINTERMELON = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_REANIM_WINTERMELON_PROJECTILE"};
	anAttributes.mDamage = 80;
	auto *aStoreItemType = new ProjectileType("PVZ", "WINTERMELON", anAttributes);
	return aStoreItemType;
});

const auto &FIREBALL = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {};
	anAttributes.mDamage = 40;
	auto *aStoreItemType = new ProjectileType("PVZ", "FIREBALL", anAttributes);
	return aStoreItemType;
});

const auto &STAR = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_PROJECTILE_STAR"};
	anAttributes.mDamage = 20;
	auto *aStoreItemType = new ProjectileType("PVZ", "STAR", anAttributes);
	return aStoreItemType;
});

const auto &SPIKE = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_PROJECTILECACTUS"};
	anAttributes.mDamage = 20;
	auto *aStoreItemType = new ProjectileType("PVZ", "SPIKE", anAttributes);
	return aStoreItemType;
});

const auto &BASKETBALL = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL"};
	anAttributes.mScale = 1.1f;
	anAttributes.mDamage = 75;
	auto *aStoreItemType = new ProjectileType("PVZ", "BASKETBALL", anAttributes);
	return aStoreItemType;
});

const auto &KERNEL = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_REANIM_CORNPULT_KERNAL"};
	anAttributes.mScale = 0.95f;
	anAttributes.mDamage = 20;
	auto *aStoreItemType = new ProjectileType("PVZ", "KERNEL", anAttributes);
	return aStoreItemType;
});

const auto &COBBIG = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_PROJECTILEPEA"};
	anAttributes.mScale = 0.9f;
	anAttributes.mDamage = 300;
	auto *aStoreItemType = new ProjectileType("PVZ", "COBBIG", anAttributes);
	return aStoreItemType;
});

const auto &BUTTER = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_REANIM_CORNPULT_BUTTER"};
	anAttributes.mScale = 0.8f;
	anAttributes.mDamage = 40;
	auto *aStoreItemType = new ProjectileType("PVZ", "BUTTER", anAttributes);
	return aStoreItemType;
});

const auto &ZOMBIE_PEA = Registries::PROJECTILES.Register([]() {
	ProjectileAttributes anAttributes;
	anAttributes.mImage = {"PVZ", "IMAGE_PROJECTILEPEA"};
	anAttributes.mDamage = 20;
	auto *aStoreItemType = new ProjectileType("PVZ", "ZOMBIE_PEA", anAttributes);
	return aStoreItemType;
});

} // namespace ProjectileTypes