#pragma once

#include "NamespacedString.h"

namespace Sexy
{

class Image;

}

class BLOOM_API ImageGetter
{
  private:
	mutable Sexy::Image *mImage = nullptr;
	mutable ResourceId mImageId;
	mutable bool mSupplied = false;

  public:
	ImageGetter(ResourceId theImageId);
	ImageGetter(std::string_view theNamespace, std::string_view theBarePath);
	ImageGetter();
	ImageGetter(const ImageGetter &theCopied);
	ImageGetter(ImageGetter &&theMoved) noexcept;
	ImageGetter &operator=(const ImageGetter &theCopied);
	ImageGetter &operator=(ImageGetter &&theMoved) noexcept;
	const ResourceId &GetResourceId() const;
	void TrySupply() const;
	void Supply() const;
	Sexy::Image *Get() const;
	Sexy::Image *TryGet() const;
	Sexy::Image *operator->() const;
	operator Sexy::Image *() const &;
	operator Sexy::Image *() && = delete;
};