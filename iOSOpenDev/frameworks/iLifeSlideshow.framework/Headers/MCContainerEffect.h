/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MCContainer.h>

@class NSSet, NSMutableDictionary, NSArray, NSDictionary, NSString, NSMutableSet, NSRecursiveLock;

@interface MCContainerEffect : MCContainer {
	NSMutableSet *mSlides;	// 28 = 0x1c
	NSRecursiveLock *mSlidesLock;	// 32 = 0x20
	NSArray *mCachedOrderedSlides;	// 36 = 0x24
	NSMutableSet *mTexts;	// 40 = 0x28
	NSRecursiveLock *mTextsLock;	// 44 = 0x2c
	NSArray *mCachedOrderedTexts;	// 48 = 0x30
	NSString *mEffectID;	// 52 = 0x34
	NSMutableDictionary *mEffectAttributes;	// 56 = 0x38
}
@property(copy) NSString *effectID;	// G=0x8a25; S=0x89fd; @synthesize=mEffectID
@property(copy) NSDictionary *effectAttributes;	// G=0x8b55; S=0x8a3d; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x9f39; 
@property(readonly, assign) NSArray *orderedSlides;	// G=0xb0dd; 
@property(readonly, assign) NSSet *texts;	// G=0xa07d; 
@property(readonly, assign) NSSet *slides;	// G=0xb221; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x8941
- (id)init;	// 0x8815
- (id)initFromScratchWithMontage:(id)montage;	// 0xbd49
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0xb951
- (void)demolish;	// 0xb5f1
- (id)imprint;	// 0xb349
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0xb2d1
// declared property getter: - (id)slides;	// 0xb221
// declared property getter: - (id)orderedSlides;	// 0xb0dd
- (unsigned)countOfSlides;	// 0xb081
- (id)slideAtIndex:(unsigned)index;	// 0xaf2d
- (id)addSlide;	// 0xaf01
- (id)addSlides:(int)slides;	// 0xad0d
- (id)insertSlideAtIndex:(int)index;	// 0xaab5
- (id)addSlideForAsset:(id)asset;	// 0xaa51
- (id)addSlidesForAssets:(id)assets;	// 0xaa1d
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0xa9cd
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0xa639
- (void)removeSlidesAtIndices:(id)indices;	// 0xa3fd
- (void)removeAllSlides;	// 0xa39d
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0xa12d
// declared property getter: - (id)texts;	// 0xa07d
// declared property getter: - (id)orderedTexts;	// 0x9f39
- (unsigned)countOfTexts;	// 0x9edd
- (id)textAtIndex:(unsigned)index;	// 0x9d89
- (id)addTextForAttributedString:(id)attributedString;	// 0x9d25
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x9cf1
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x9c7d
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x9c39
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x9be5
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x9829
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x97cd
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x93bd
- (void)removeTextsAtIndices:(id)indices;	// 0x911d
- (void)removeAllTexts;	// 0x90bd
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x8e4d
- (id)effectAttributeForKey:(id)key;	// 0x8d61
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x8c21
// declared property getter: - (id)effectAttributes;	// 0x8b55
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x8a3d
// declared property getter: - (id)effectID;	// 0x8a25
// declared property setter: - (void)setEffectID:(id)anId;	// 0x89fd
@end
