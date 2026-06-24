#ifndef __DIALOGLISTENER_H__
#define __DIALOGLISTENER_H__

#include "../BloomLib/Bloom.h"

namespace Sexy
{

class BLOOM_API DialogListener
{
  public:
	virtual void DialogButtonPress(int theDialogId, int theButtonId)
	{
	}
	virtual void DialogButtonDepress(int theDialogId, int theButtonId)
	{
	}
};

} // namespace Sexy

#endif // __DIALOGLISTENER_H__