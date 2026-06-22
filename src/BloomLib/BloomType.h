#pragma once

class BloomType
{
  public:
	
	virtual ~BloomType()
	{
	}
	virtual void CopyFrom(const BloomType & theOther) = 0;
	BloomType &operator=(const BloomType &youForgotTheAmpersandAfterTheAuto) = delete;
};