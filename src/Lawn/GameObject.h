#pragma once

#include "../ConstEnums.h"
#include "../SexyAppFramework/Graphics.h"
#include "Bloom.h"

using namespace Sexy;

class LawnApp;
class Board;
class Plant;
class Zombie;
class Projectile;
class GridItem;

struct BLOOM_API GameObjectID
{
	int mID;
	GameObjectType mType;
	GameObjectID();
	GameObjectID(PlantID thePlantID);
	GameObjectID(ZombieID theZombieID);
	GameObjectID(ProjectileID theProjectileID);
	GameObjectID(GridItemID theGridItemID);
};

class BLOOM_API GameObject
{
  public:
	LawnApp *mApp;
	Board *mBoard;
	int mX;
	int mY;
	int mWidth;
	int mHeight;
	bool mVisible;
	int mRow;
	int mRenderOrder;
	const GameObjectType mGameObjectType;

  public:
	GameObject(GameObjectType theGameObjectType);
	/// @brief Begin the drawing a GameObject by translating the Graphics object by it's X and Y values
	/// @return True if it began to draw it, False if it was invisible
	bool BeginDraw(Graphics *g);
	/// @brief End the drawing a GameObject by translating the Graphics object by the negative of it's X and Y values
	void EndDraw(Graphics *g);
	/// @brief Frame the Graphics object relative to the GameObject (???)
	void MakeParentGraphicsFrame(Graphics *g);

	Plant *TryAsPlant();
	Zombie *TryAsZombie();
	Projectile *TryAsProjectile();
	GridItem *TryAsGridItem();
};
