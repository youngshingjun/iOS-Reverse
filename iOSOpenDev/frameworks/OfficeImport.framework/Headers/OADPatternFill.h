/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

__attribute__((visibility("hidden")))
@interface OADPatternFill : OADFill {
@private
	OADColor *mFgColor;	// 12 = 0xc
	BOOL mIsFgColorOverridden;	// 16 = 0x10
	OADColor *mBgColor;	// 20 = 0x14
	BOOL mIsBgColorOverridden;	// 24 = 0x18
	OADPattern *mPattern;	// 28 = 0x1c
	BOOL mIsPatternOverridden;	// 32 = 0x20
}
@property(retain) id fgColor;	// G=0x2a2909; S=0x1d90d1; converted property
@property(retain) id bgColor;	// G=0x2a2971; S=0x1d9121; converted property
@property(retain) id pattern;	// G=0x2a29d9; S=0x1d9081; converted property
+ (id)defaultProperties;	// 0x1d8ec9
- (id)copyWithZone:(NSZone *)zone;	// 0x2a27b9
- (void)dealloc;	// 0x1d94cd
- (id)initWithDefaults;	// 0x1d8f11
- (void)setParent:(id)parent;	// 0x1d9171
// converted property getter: - (id)fgColor;	// 0x2a2909
// converted property setter: - (void)setFgColor:(id)color;	// 0x1d90d1
- (BOOL)isFgColorOverridden;	// 0x2a2939
// converted property getter: - (id)bgColor;	// 0x2a2971
// converted property setter: - (void)setBgColor:(id)color;	// 0x1d9121
- (BOOL)isBgColorOverridden;	// 0x2a29a1
// converted property getter: - (id)pattern;	// 0x2a29d9
// converted property setter: - (void)setPattern:(id)pattern;	// 0x1d9081
- (BOOL)isPatternOverridden;	// 0x2a2a09
- (void)setColor:(id)color;	// 0x2a2a41
- (void)setStyleColor:(id)color;	// 0x2a2a51
- (unsigned)hash;	// 0x2a2c9d
- (BOOL)isEqual:(id)equal;	// 0x1d92f9
- (id)namedImageDataWithBlipCollection:(id)blipCollection;	// 0x2a2ac9
@end
