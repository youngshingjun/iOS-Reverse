/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADLightRig : XXUnknownSuperclass <NSCopying> {
@private
	OADRotation3D *mRotation;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mDirection;	// 12 = 0xc
}
@property(retain) id rotation;	// G=0x2ad72d; S=0x1cb9a9; converted property
@property(assign) int type;	// G=0x2ad73d; S=0x1cba41; converted property
@property(assign) int direction;	// G=0x2ad74d; S=0x1cbaa9; converted property
- (id)init;	// 0x1cb94d
- (void)dealloc;	// 0x1d0761
- (id)copyWithZone:(NSZone *)zone;	// 0x2adb31
// converted property getter: - (id)rotation;	// 0x2ad72d
// converted property setter: - (void)setRotation:(id)rotation;	// 0x1cb9a9
// converted property getter: - (int)type;	// 0x2ad73d
// converted property setter: - (void)setType:(int)type;	// 0x1cba41
// converted property getter: - (int)direction;	// 0x2ad74d
// converted property setter: - (void)setDirection:(int)direction;	// 0x1cbaa9
- (unsigned)hash;	// 0x2adae9
- (BOOL)isEqual:(id)equal;	// 0x2ada09
@end
