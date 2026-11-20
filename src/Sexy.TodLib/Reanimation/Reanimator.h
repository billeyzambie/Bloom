#ifndef __REANIMATION_H__
#define __REANIMATION_H__

#include "../../BloomLib/BloomDataArray.h"
#include "../FilterEffect.h"
#include "../../SexyAppFramework/SexyMatrix.h"
#include "ReanimationType.h"

#define MAX_REANIMATIONS_SIZE 1024U

using namespace Sexy;

class Reanimation;
class ReanimAtlas;
class AttacherInfo;
class AttachEffect;
class TodTriangleGroup;
class TodParticleSystem;
class ReanimationHolder;
class ReanimatorTransform;
class ReanimatorDefinition;
namespace Sexy
{
class Font;
class Image;
class Graphics;
class MemoryImage;
}; // namespace Sexy

constexpr const float DEFAULT_FIELD_PLACEHOLDER = -10000.0f;
constexpr const double SECONDS_PER_UPDATE = 0.01f;

enum ReanimFlags
{
	REANIM_NO_ATLAS,
	REANIM_FAST_DRAW_IN_SW_MODE
};

class ReanimatorTrack
{
  public:
	const char *mName;				  //+0x0：轨道名称
	ReanimatorTransform *mTransforms; //+0x4：每一帧的动画变换的数组
	int mTransformCount;			  //+0x8：动画变换数量，即帧数量

  public:
	ReanimatorTrack() : mName(""), mTransforms(nullptr), mTransformCount(0)
	{
	}
};

class ReanimatorDefinition
{
  public:
	ReanimatorTrack *mTracks;
	int mTrackCount;
	float mFPS;
	ReanimAtlas *mReanimAtlas;

  public:
	ReanimatorDefinition() : mTracks(nullptr), mTrackCount(0), mFPS(12.0f), mReanimAtlas(nullptr)
	{
	}
};
extern int gReanimatorDefCount;
extern ReanimatorDefinition *gReanimatorDefArray;

void BLOOM_API ReanimationFillInMissingData(float &thePrev, float &theValue);
void BLOOM_API ReanimationFillInMissingData(void *&thePrev, void *&theValue);
bool BLOOM_API ReanimationLoadDefinition(const ResourcePath &theFileName, ReanimatorDefinition *theDefinition);
void BLOOM_API ReanimationFreeDefinition(ReanimatorDefinition *theDefinition);
void BLOOM_API _cdecl ReanimatorEnsureDefinitionLoaded(const ReanimationType &theReanimType, bool theIsPreloading);
void BLOOM_API ReanimatorLoadDefinitions();
void BLOOM_API ReanimatorFreeDefinitions();

enum
{
	RENDER_GROUP_HIDDEN = -1,
	RENDER_GROUP_NORMAL = 0
};

constexpr const int NO_BASE_POSE = -2;

class ReanimatorFrameTime
{
  public:
	float mFraction;		 //+0x0：两帧之间已经过的比例
	int mAnimFrameBeforeInt; //+0x4：前一个整数帧
	int mAnimFrameAfterInt;	 //+0x8：后一个整数帧
};

class BLOOM_API ReanimatorTransform
{
  public:
	float mTransX;
	float mTransY;
	float mSkewX;
	float mSkewY;
	float mScaleX;
	float mScaleY;
	float mFrame;
	float mAlpha;
	Image *mImage;
	Font *mFont;
	const char *mText;

  public:
	ReanimatorTransform();
};

class BLOOM_API ReanimatorTrackInstance
{
  public:
	int mBlendCounter;
	int mBlendTime;
	ReanimatorTransform mBlendTransform;
	float mShakeOverride;
	float mShakeX;
	float mShakeY;
	AttachmentID mAttachmentID;
	Image *mImageOverride;
	int mRenderGroup;
	Color mTrackColor;
	bool mIgnoreClipRect;
	bool mTruncateDisappearingFrames;
	bool mIgnoreColorOverride;
	bool mIgnoreExtraAdditiveColor;

  public:
	ReanimatorTrackInstance();
};

class BLOOM_API Reanimation final
{
  public:
	typedef ReanimationType Type;
	typedef Type RegistryType;
	template <class T> using TypeT = Type;

	const ReanimationType &mType;
	ReanimatorDefinition *mDefinition;
	ReanimationHolder *mReanimationHolder;
	ReanimatorTrackInstance *mTrackInstances;

	float mAnimTime;
	float mAnimRate;
	ReanimLoopType mLoopType;
	bool mDead;
	int mFrameStart;
	int mFrameCount;
	int mFrameBasePose;
	SexyTransform2D mOverlayMatrix;
	Color mColorOverride;
	int mLoopCount;
	bool mIsAttachment;
	int mRenderOrder;
	Color mExtraAdditiveColor;
	bool mEnableExtraAdditiveDraw;
	Color mExtraOverlayColor;
	bool mEnableExtraOverlayDraw;
	float mLastFrameTime;
	FilterEffect mFilterEffect;

  public:
	Reanimation(const ReanimationType &theType);
	~Reanimation();

	void ReanimationInitialize(float theX, float theY, ReanimatorDefinition *theDefinition);
	void ReanimationInitializeType(float theX, float theY);
	void Sync(BoundedSync &theSync);
	void ReanimationDie();
	void Update();
	void Draw(Graphics *g);
	void DrawRenderGroup(Graphics *g, int theRenderGroup);
	bool DrawTrack(Graphics *g, int theTrackIndex, int theRenderGroup, TodTriangleGroup *theTriangleGroup);
	void GetCurrentTransform(int theTrackIndex, ReanimatorTransform *theTransformCurrent);
	void GetTransformAtTime(int theTrackIndex, ReanimatorTransform *theTransform, ReanimatorFrameTime *theFrameTime);
	void GetFrameTime(ReanimatorFrameTime *theFrameTime);
	int FindTrackIndex(const char *theTrackName);
	void AttachToAnotherReanimation(Reanimation *theAttachReanim, const char *theTrackName);
	void GetAttachmentOverlayMatrix(int theTrackIndex, SexyTransform2D &theOverlayMatrix);
	void SetFramesForLayer(const char *theTrackName);
	static void MatrixFromTransform(const ReanimatorTransform &theTransform, SexyMatrix3 &theMatrix);
	bool TrackExists(const char *theTrackName);
	void StartBlend(int theBlendTime);
	void SetShakeOverride(const char *theTrackName, float theShakeAmount);
	void SetPosition(float theX, float theY);
	void OverrideScale(float theScaleX, float theScaleY);
	float GetTrackVelocity(const char *theTrackName);
	void SetImageOverride(const char *theTrackName, Image *theImage);
	Image *GetImageOverride(const char *theTrackName);
	void ShowOnlyTrack(const char *theTrackName);
	void GetTrackMatrix(int theTrackIndex, SexyTransform2D &theMatrix);
	void AssignRenderGroupToTrack(const char *theTrackName, int theRenderGroup);
	void AssignRenderGroupToPrefix(const char *theTrackName, int theRenderGroup);
	void PropogateColorToAttachments();
	bool ShouldTriggerTimedEvent(float theEventTime);
	void TodTriangleGroupDraw(Graphics *g, TodTriangleGroup *theTriangleGroup)
	{
		;
	}
	Image *GetCurrentTrackImage(const char *theTrackName);
	AttachEffect *AttachParticleToTrack(const char *theTrackName,
										TodParticleSystem *theParticleSystem,
										float thePosX,
										float thePosY);
	void GetTrackBasePoseMatrix(int theTrackIndex, SexyTransform2D &theBasePosMatrix);
	bool IsTrackShowing(const char *theTrackName);
	void SetTruncateDisappearingFrames(const char *theTrackName = nullptr,
												  bool theTruncateDisappearingFrames = false);
	void PlayReanim(const char *theTrackName,
							   ReanimLoopType theLoopType,
							   int theBlendTime,
							   float theAnimRate);
	void ReanimationDelete();
	ReanimatorTrackInstance *GetTrackInstanceByName(const char *theTrackName);
	void GetFramesForLayer(const char *theTrackName, int &theFrameStart, int &theFrameCount);
	void UpdateAttacherTrack(int theTrackIndex);
	static void ParseAttacherTrack(const ReanimatorTransform &theTransform, AttacherInfo &theAttacherInfo);
	void AttacherSynchWalkSpeed(int theTrackIndex, Reanimation *theAttachReanim, AttacherInfo &theAttacherInfo);
	bool IsAnimPlaying(const char *theTrackName);
	void SetBasePoseFromAnim(const char *theTrackName);
	void ReanimBltMatrix(Graphics *g,
						 Image *theImage,
						 SexyMatrix3 &theTransform,
						 const Rect &theClipRect,
						 const Color &theColor,
						 int theDrawMode,
						 const Rect &theSrcRect);
	Reanimation *FindSubReanim(const ReanimationType &theReanimType);
};

void ReanimationCreateAtlas(ReanimatorDefinition *theDefinition, const ReanimationType &theReanimationType);
void ReanimationPreload(const ReanimationType &theReanimationType);
void BlendTransform(ReanimatorTransform *theResult,
					const ReanimatorTransform &theTransform1,
					const ReanimatorTransform &theTransform2,
					float theBlendFactor);

class BLOOM_API ReanimationHolder
{
  public:
	BloomDataArray<Reanimation> mReanimations;

  public:
	ReanimationHolder()
	{
		;
	}
	~ReanimationHolder();

	void InitializeHolder();
	void DisposeHolder();
	Reanimation *AllocReanimation(float theX, float theY, int theRenderOrder, const ReanimationType &theReanimationType);
};

#endif
