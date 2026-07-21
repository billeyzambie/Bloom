#include "BloomUtil.h"

std::string CreateAllUppercase(std::string theString)
{
	for (char &aChar : theString)
	{
		if (aChar >= 'a' && aChar <= 'z')
			aChar += 'A' - 'a';
	}

	return theString;
}
