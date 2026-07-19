#include "Registries.h"

namespace Registries
{
const std::array<IRegistry *, NUM_REGISTRIES> REGISTRIES = {&STORE_ITEM_GROUPS, &STORE_ITEMS};
}