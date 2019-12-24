/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EDProtection : XXUnknownSuperclass <NSCopying> {
@private
	bool mHidden;	// 4 = 0x4
	bool mLocked;	// 5 = 0x5
}
+ (id)protectionWithHidden:(bool)hidden locked:(bool)locked;	// 0xe0101
- (id)init;	// 0xe018d
- (id)initWithHidden:(bool)hidden locked:(bool)locked;	// 0xe0151
- (id)copyWithZone:(NSZone *)zone;	// 0x1f9c3d
- (BOOL)isEqualToProtection:(id)protection;	// 0x1fab21
- (BOOL)isEqual:(id)equal;	// 0x1faac5
- (unsigned)hash;	// 0x251e1d
- (bool)isHidden;	// 0x251dfd
- (bool)isLocked;	// 0x251e0d
@end
