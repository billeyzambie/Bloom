#include "ImageGetter.h"
#include "../LawnApp.h"
#include "../Resources.h"
#include "../Sexy.TodLib/TodDebug.h"
#include "../SexyAppFramework/ResourceManager.h"

ImageGetter::ImageGetter(ResourceId theImageId) 
	: mImageId(std::move(theImageId))
{
	if (mImageId.IsEmpty())
		mSupplied = true;
}

ImageGetter::ImageGetter(std::string_view theNamespace, std::string_view theBarePath) 
	: mImageId(theNamespace, theBarePath)
{
	if (mImageId.IsEmpty())
		mSupplied = true;
}

ImageGetter::ImageGetter() 
	: mSupplied(true)
{
}

ImageGetter::ImageGetter(const ImageGetter &theCopied)
	: mSupplied(theCopied.mSupplied), mImage(theCopied.mImage)
{
	if (!mSupplied)
		mImageId = theCopied.mImageId;
}

ImageGetter::ImageGetter(ImageGetter &&theMoved) noexcept
	: mImageId(std::move(theMoved.mImageId)), mSupplied(theMoved.mSupplied), mImage(theMoved.mImage)
{
	theMoved.mImageId = {};
	theMoved.mSupplied = true;
	theMoved.mImage = nullptr;
}

ImageGetter &ImageGetter::operator=(const ImageGetter &theCopied)
{
	if (!theCopied.mSupplied && mSupplied && mImageId == theCopied.mImageId)
	{
		theCopied.mImage = mImage;
		theCopied.mSupplied = true;
	}

	mSupplied = theCopied.mSupplied;
	mImage = theCopied.mImage;
	if (!mSupplied)
		mImageId = theCopied.mImageId;

	return *this;
}

ImageGetter &ImageGetter::operator=(ImageGetter &&theMoved) noexcept
{
	mImageId = std::move(theMoved.mImageId);
	mSupplied = theMoved.mSupplied;
	mImage = theMoved.mImage;

	theMoved.mImageId = {};
	theMoved.mSupplied = true;
	theMoved.mImage = nullptr;

	return *this;
}

const ResourceId &ImageGetter::GetResourceId() const
{
	if (mImage != nullptr && mImageId.IsEmpty())
		mImageId = Sexy::GetIdByImage(mImage);

	return mImageId;
}

void ImageGetter::TrySupply() const
{
	try
	{
		mImage = gLawnApp->mResourceManager->GetImageThrow(mImageId);
	}
	catch (ResourceManagerException &theException)
	{
		TOD_ASSERT(false, theException.what.c_str());
	}
	if (mImage)
		mSupplied = true;
}

void ImageGetter::Supply() const
{
	TrySupply();
	TOD_ASSERT(mSupplied);
}

Sexy::Image *ImageGetter::Get() const
{
	if (!mSupplied)
		Supply();
	return mImage;
}

Sexy::Image *ImageGetter::TryGet() const
{
	if (!mSupplied)
		TrySupply();
	return mImage;
}

Sexy::Image *ImageGetter::operator->() const
{
	return Get();
}

ImageGetter::operator Sexy::Image *() const &
{
	return Get();
}