#include "Registries.h"

namespace Registries
{

const std::array<IRegistry *, NUM_REGISTRIES> REGISTRIES = {
	&REANIMATIONS,
	&PROJECTILE_BEHAVIORS,
	&PROJECTILES,
	&PLANTS,
	&STORE_ITEM_GROUPS,
	&STORE_ITEMS
};

}