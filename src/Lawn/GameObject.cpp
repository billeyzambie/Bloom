#include "GameObject.h"
#include "../LawnApp.h"

GameObjectID::GameObjectID() 
	: mID(0), mType(GameObjectType::OBJECT_TYPE_NONE)
{
}

GameObjectID::GameObjectID(PlantID thePlantID) 
	: mID(thePlantID), mType(GameObjectType::OBJECT_TYPE_PLANT)
{
}

GameObjectID::GameObjectID(ZombieID theZombieID) 
	: mID(theZombieID), mType(GameObjectType::OBJECT_TYPE_ZOMBIE)
{
}

GameObjectID::GameObjectID(ProjectileID theProjectileID) 
	: mID(theProjectileID), mType(GameObjectType::OBJECT_TYPE_PROJECTILE)
{
}

GameObjectID::GameObjectID(GridItemID theGridItemID) 
	: mID(theGridItemID), mType(GameObjectType::OBJECT_TYPE_GRID_ITEM)
{
}

GameObject::GameObject(GameObjectType theGameObjectType)
	: mGameObjectType(theGameObjectType)
{
	mApp = gLawnApp;
	mBoard = gLawnApp->mBoard;
	mX = 0;
	mY = 0;
	mWidth = 0;
	mHeight = 0;
	mVisible = true;
	mRow = -1;
	mRenderOrder = RenderLayer::RENDER_LAYER_TOP;
}

bool GameObject::BeginDraw(Graphics *g)
{
	if (!mVisible)
		return false;

	g->Translate(mX, mY);
	return true;
}

void GameObject::EndDraw(Graphics *g)
{
	g->Translate(-mX, -mY);
}

void GameObject::MakeParentGraphicsFrame(Graphics *g)
{
	g->Translate(-mX, -mY);
}

Plant *GameObject::TryAsPlant()
{
	if (mGameObjectType != GameObjectType::OBJECT_TYPE_PLANT)
		return nullptr;
	return (Plant *)this;
}

Zombie *GameObject::TryAsZombie()
{
	if (mGameObjectType != GameObjectType::OBJECT_TYPE_ZOMBIE)
		return nullptr;
	return (Zombie *)this;
}

Projectile *GameObject::TryAsProjectile()
{
	if (mGameObjectType != GameObjectType::OBJECT_TYPE_PROJECTILE)
		return nullptr;
	return (Projectile *)this;
}

GridItem *GameObject::TryAsGridItem()
{
	if (mGameObjectType != GameObjectType::OBJECT_TYPE_GRID_ITEM)
		return nullptr;
	return (GridItem *)this;
}