#pragma once
#include <stdlib.h>
#include "../Lawn/LawnCommon.h"
#include "../SexyAppFramework/Common.h"
#include "../SexyAppFramework/ResourceManager.h"
#include "TodDebug.h"

#include "../BloomLib/Bloom.h"

struct TodAllocator;
namespace Sexy
{
class Graphics;
class SexyMatrix;
class SexyVector2;
}; // namespace Sexy

using namespace Sexy;

#define D3DIMAGEFLAG_SANDING 0x1000
#define DEG_TO_RAD(deg) ((deg) * 0.017453292f)
#define RAD_TO_DEG(rad) ((rad) * 57.29578f)

// #################################################################################################### //

struct BLOOM_API TodWeightedArray
{
	uintptr_t mItem;
	int mWeight;
};

struct BLOOM_API TodWeightedGridArray
{
	int mX;
	int mY;
	int mWeight;
};

class BLOOM_API TodSmoothArray
{
  public:
	uintptr_t mItem;
	float mWeight;
	float mLastPicked;
	float mSecondLastPicked;
};

template <typename T> T TodPickFromArray(const T *theArray, int theCount)
{
	TOD_ASSERT(theCount > 0);
	return theArray[Sexy::Rand(theCount)];
}

BLOOM_API uintptr_t TodPickFromWeightedArray(const TodWeightedArray *theArray, int theCount);
BLOOM_API TodWeightedArray *TodPickArrayItemFromWeightedArray(const TodWeightedArray *theArray, int theCount);
BLOOM_API TodWeightedGridArray *TodPickFromWeightedGridArray(const TodWeightedGridArray *theArray, int theCount);
BLOOM_API float TodCalcSmoothWeight(float aWeight, float aLastPicked, float aSecondLastPicked);
BLOOM_API void TodUpdateSmoothArrayPick(TodSmoothArray *theArray, int theCount, int thePickIndex);
BLOOM_API uintptr_t TodPickFromSmoothArray(TodSmoothArray *theArray, int theCount);

// #################################################################################################### //

class BLOOM_API TodResourceManager : public ResourceManager
{
  public:
	bool FindFontId(Font *theFont, ResourceId *theId);
	bool FindImageId(Image *theImage, ResourceId *theId);
	void AddImageToMap(SharedImageRef *theImage, const ResourcePath &thePath, const ResourceId &theId);
	bool TodLoadNextResource();
	bool TodLoadResources(const std::string &theGroup);
};

BLOOM_API bool TodLoadResources(const std::string &theGroup);
BLOOM_API bool TodLoadNextResource();
BLOOM_API void TodAddImageToMap(SharedImageRef *theImage, const ResourcePath &thePath, const ResourceId &theId);
BLOOM_API bool TodFindImageId(Image *theImage, ResourceId *theId);
BLOOM_API bool TodFindFontId(Font *theFont, ResourceId *theId);

// #################################################################################################### //

BLOOM_API float TodCurveQuad(float theTime);
BLOOM_API float TodCurveInvQuad(float theTime);
BLOOM_API float TodCurveS(float theTime);
BLOOM_API float TodCurveInvQuadS(float theTime);
BLOOM_API float TodCurveBounce(float theTime);
BLOOM_API float TodCurveQuadS(float theTime);
BLOOM_API float TodCurveCubic(float theTime);
BLOOM_API float TodCurveInvCubic(float theTime);
BLOOM_API float TodCurveCubicS(float theTime);
BLOOM_API float TodCurvePoly(float theTime, float thePoly);
BLOOM_API float TodCurveInvPoly(float theTime, float thePoly);
BLOOM_API float TodCurvePolyS(float theTime, float thePoly);
BLOOM_API float TodCurveCircle(float theTime);
BLOOM_API float TodCurveInvCircle(float theTime);
BLOOM_API float TodCurveEvaluate(float theTime, float thePositionStart, float thePositionEnd, TodCurves theCurve);
BLOOM_API float TodCurveEvaluateClamped(float theTime, float thePositionStart, float thePositionEnd, TodCurves theCurve);
BLOOM_API float TodAnimateCurveFloatTime(float theTimeStart,
							   float theTimeEnd,
							   float theTimeAge,
							   float thePositionStart,
							   float thePositionEnd,
							   TodCurves theCurve);
BLOOM_API float TodAnimateCurveFloat(
	int theTimeStart, int theTimeEnd, int theTimeAge, float thePositionStart, float thePositionEnd, TodCurves theCurve);
BLOOM_API int TodAnimateCurve(
	int theTimeStart, int theTimeEnd, int theTimeAge, int thePositionStart, int thePositionEnd, TodCurves theCurve);

BLOOM_API void TodScaleTransformMatrix(SexyMatrix3 &m, float x, float y, float theScaleX, float theScaleY);
BLOOM_API void TodScaleRotateTransformMatrix(SexyMatrix3 &m, float x, float y, float rad, float theScaleX, float theScaleY);
BLOOM_API void SexyMatrix3ExtractScale(const SexyMatrix3 &m, float &theScaleX, float &theScaleY);
BLOOM_API void SexyMatrix3Translation(SexyMatrix3 &m, float x, float y);
BLOOM_API void SexyMatrix3Transpose(const SexyMatrix3 &m, SexyMatrix3 &r);					  // r = m ^ T
BLOOM_API void SexyMatrix3Inverse(const SexyMatrix3 &m, SexyMatrix3 &r);						  // r = m ^ -1
BLOOM_API void SexyMatrix3Multiply(SexyMatrix3 &m, const SexyMatrix3 &l, const SexyMatrix3 &r); // m = l ¡Á r
BLOOM_API bool TodIsPointInPolygon(const SexyVector2 *thePolygonPoint,
						 int theNumberPolygonPoints,
						 const SexyVector2 &theCheckPoint);

BLOOM_API void TodDrawString(Graphics *g,
				   const SexyString &theText,
				   int thePosX,
				   int thePosY,
				   Font *theFont,
				   const Color &theColor,
				   DrawStringJustification theJustification);
BLOOM_API void TodDrawStringMatrix(
	Graphics *g, const Font *theFont, const SexyMatrix3 &theMatrix, const SexyString &theString, const Color &theColor);
BLOOM_API void TodDrawImageScaledF(Graphics *g, Image *theImage, float thePosX, float thePosY, float theScaleX, float theScaleY);
BLOOM_API void TodDrawImageCenterScaledF(
	Graphics *g, Image *theImage, float thePosX, float thePosY, float theScaleX, float theScaleY);
BLOOM_API void TodDrawImageCelF(Graphics *g, Image *theImageStrip, float thePosX, float thePosY, int theCelCol, int theCelRow);
BLOOM_API void TodDrawImageCelScaled(Graphics *g,
						   Image *theImageStrip,
						   int thePosX,
						   int thePosY,
						   int theCelCol,
						   int theCelRow,
						   float theScaleX,
						   float theScaleY);
BLOOM_API void TodDrawImageCelScaledF(Graphics *g,
							Image *theImageStrip,
							float thePosX,
							float thePosY,
							int theCelCol,
							int theCelRow,
							float theScaleX,
							float theScaleY);
BLOOM_API void TodDrawImageCelCenterScaledF(Graphics *g, Image *theImageStrip, float thePosX, float thePosY, int theCelCol, int theCelRow, float theScaleX, float theScaleY);
BLOOM_API void TodBltMatrix(Graphics *g,
				  Image *theImage,
				  const SexyMatrix3 &theTransform,
				  const Rect &theClipRect,
				  const Color &theColor,
				  int theDrawMode,
				  const Rect &theSrcRect);
BLOOM_API void TodMarkImageForSanding(Image *theImage);
BLOOM_API void TodSandImageIfNeeded(Image *theImage);
BLOOM_API void FixPixelsOnAlphaEdgeForBlending(Image *theImage);
BLOOM_API uint32_t AverageNearByPixels(MemoryImage *theImage, uint32_t *thePixel, int x, int y);
BLOOM_API void Tod_SWTri_AddAllDrawTriFuncs();

BLOOM_API SexyString TodReplaceString(const SexyString &theText,
							const SexyString &theStringToFind,
							const SexyString &theStringToSubstitute);
BLOOM_API SexyString TodReplaceNumberString(const SexyString &theText, const SexyString &theStringToFind, int theNumber);
BLOOM_API int TodSnprintf(char *theBuffer, int theSize, const char *theFormat, ...);
BLOOM_API int TodVsnprintf(char *theBuffer, int theSize, const char *theFormat, va_list theArgList);

BLOOM_API TodAllocator *FindGlobalAllocator(int theSize);
BLOOM_API void FreeGlobalAllocators();

BLOOM_API SexyString TodGetCurrentLevelName();
BLOOM_API bool TodHasUsedCheatKeys();
BLOOM_API bool TodAppCloseRequest();

//====================================================================================================//
BLOOM_API int RandRangeInt(int theMin, int theMax);
BLOOM_API float RandRangeFloat(float theMin, float theMax);
inline char ClampByte(char theNum, char theMin, char theMax)
{
	return theNum <= theMin ? theMin : theNum >= theMax ? theMax : theNum;
}
inline int ClampInt(int theNum, int theMin, int theMax)
{
	return theNum <= theMin ? theMin : theNum >= theMax ? theMax : theNum;
}
inline float ClampFloat(float theNum, float theMin, float theMax)
{
	return theNum <= theMin ? theMin : theNum >= theMax ? theMax : theNum;
}
inline float Distance2D(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
inline float FloatLerp(float theStart, float theEnd, float theFactor)
{
	return theStart + theFactor * (theEnd - theStart);
}
inline int FloatRoundToInt(float theFloatValue)
{
	return theFloatValue > 0 ? theFloatValue + 0.5f : theFloatValue - 0.5f;
}
inline bool FloatApproxEqual(float theFloatVal1, float theFloatVal2)
{
	return fabs(theFloatVal1 - theFloatVal2) < FLT_EPSILON;
}

BLOOM_API Color GetFlashingColor(int theCounter, int theFlashTime);
BLOOM_API int ColorComponentMultiply(int theColor1, int theColor2);
BLOOM_API Color ColorsMultiply(const Color &theColor1, const Color &theColor2);
BLOOM_API Color ColorAdd(const Color &theColor1, const Color &theColor2);

inline unsigned int GetBit(int theIdx)
{
	return 1 << theIdx;
}

inline void SetBit(unsigned int &theNum, int theIdx, bool theValue = true)
{
	if (theValue)
		theNum |= 1 << theIdx;
	else
		theNum &= ~(1 << theIdx);
}
inline bool TestBit(unsigned int theNum, int theIdx)
{
	return theNum & (1 << theIdx);
}
//#define SetBit(num, idx, val) { if (val) (num) |= 1 << (idx); else (num) &= ~(1 << (idx)); }
//#define TestBit(num, idx) ((num) & (1 - (idx)))