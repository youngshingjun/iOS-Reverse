/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class OADSubBlip;

__attribute__((visibility("hidden")))
@interface OADBlip : XXUnknownSuperclass {
@private
	unsigned mReferenceCount;	// 4 = 0x4
	OADSubBlip *mMainSubBlip;	// 8 = 0x8
	OADSubBlip *mAltSubBlip;	// 12 = 0xc
}
@property(retain) id mainSubBlip;	// G=0x95389; S=0xbd815; converted property
@property(retain) id altSubBlip;	// G=0x199c19; S=0x1494d9; converted property
+ (id)pathExtensionForBlipType:(int)blipType;	// 0x29ce29
- (void)dealloc;	// 0x909a1
// converted property getter: - (id)mainSubBlip;	// 0x95389
// converted property setter: - (void)setMainSubBlip:(id)blip;	// 0xbd815
// converted property getter: - (id)altSubBlip;	// 0x199c19
// converted property setter: - (void)setAltSubBlip:(id)blip;	// 0x1494d9
- (unsigned *)referenceCount;	// 0xbd859
- (unsigned)hash;	// 0x29d6a9
- (BOOL)isEqual:(id)equal;	// 0x29d625
@end
