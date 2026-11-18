#include "ReanimationType.h"

#include "Reanimator.h"
#include "../TodDebug.h"

ReanimationType::ReanimationType(
	const std::string &theModName,
	const std::string &theTypeName,
	const Attributes &theAttributes
)
	: BloomType(theModName, theTypeName),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
}

ReanimationType::operator OldReanimationType() const
{
	int aNumId = GetNumericalId();
	TOD_ASSERT(aNumId < OldReanimationType::NUM_REANIMS, "Unhandled modded ReanimationType");
	return (OldReanimationType)aNumId;
}

void ReanimationType::CopyFrom(const ReanimationType &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
}

void ReanimationType::Update(const LawnApp &theLawnApp)
{
	//goofy
	mAttributes = mAttributeBaseValues;
}

Reanimation *ReanimationType::Instantiate(void *theBuffer) const
{
	return new (theBuffer) Reanimation(*this);
}

Reanimation *ReanimationType::MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const
{
	return new (theDestinationBuffer) Reanimation(std::move(*reinterpret_cast<Reanimation *>(theSourceBuffer)));
}