#pragma once

#include "../Lawn/Plant.h"
#include "../Lawn/Zombie.h"

struct PlantEatenContext
{
	bool mCanceled;
	Plant *mEatenPlant;
	Zombie *mEaterZombie;
};