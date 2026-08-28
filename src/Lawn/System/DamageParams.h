#include "../../BloomLib/Bloom.h"

class Plant;
class Zombie;
class Projectile;

enum class ZombieDamageType
{
	BODY,
	SHIELD,
	HELMET,
	FLYING
};

struct BLOOM_API DamageParams
{
  private:
	DamageParams(
		int theAmount, unsigned int theFlags, Plant *theDamagerPlant, 
		Zombie *theDamagerZombie, Projectile *theDamagerProjectile
	);

  public:
	int mAmount;
	unsigned int mFlags;
	Plant *mDamagerPlant;
	Zombie *mDamagerZombie;
	Projectile *mDamagerProjectile;
	ZombieDamageType mZombieDamageType = ZombieDamageType::BODY;

	static DamageParams DirectlyFromPlant(int theAmount, unsigned int theFlags, Plant *theDamagerPlant);
	static DamageParams DirectlyFromZombie(int theAmount, unsigned int theFlags, Zombie *theDamagerZombie);
	static DamageParams FromPlantProjectile(
		int theAmount, unsigned int theFlags,
		Plant *theDamagerPlant, Projectile *theDamagerProjectile
	);
	static DamageParams FromZombieProjectile(
		int theAmount, unsigned int theFlags,
		Zombie *theDamagerZombie, Projectile *theDamagerProjectile
	);
	static DamageParams FromNowhere(int theAmount, unsigned int theFlags);
};