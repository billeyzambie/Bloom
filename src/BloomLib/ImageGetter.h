#pragma once

#include "NamespacedString.h"

namespace Sexy
{

class Image;

}

class ImageGetter
{
  private:
	mutable Sexy::Image *mImage = nullptr;
	ResourceId mImageId;
	mutable bool mSupplied = false;

  public:
	ImageGetter(ResourceId theImageId);
	ImageGetter(std::string_view theNamespace, std::string_view theBarePath);
	ImageGetter();
	void TrySupply() const;
	void Supply() const;
	Sexy::Image *Get() const;
	Sexy::Image *TryGet() const;
	Sexy::Image *operator->() const;
	operator Sexy::Image *() const;
};