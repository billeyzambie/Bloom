#include "../../BloomLib/Bloom.h"

class GameObject;
class Projectile;

enum class ZombieDamageType
{
	BODY,
	SHIELD,
	HELMET,
	FLYING
};

struct BLOOM_API Damage
{
  private:
	Damage(
		int theAmount, unsigned int theFlags, 
		GameObject *theDamager, Projectile *theDamagerProjectile
	);

  public:
	int mAmount;
	unsigned int mFlags;
	GameObject *mDamager;
	Projectile *mDamagerProjectile;
	ZombieDamageType mZombieDamageType = ZombieDamageType::BODY;

	GameObject *GetDirectDamager() const;

	static Damage DirectlyFrom(GameObject *theDamager, int theAmount, unsigned int theFlags);
	static Damage FromProjectile(Projectile *theDamagerProjectile, int theAmount, unsigned int theFlags);
	static Damage FromNowhere(int theAmount, unsigned int theFlags);
};