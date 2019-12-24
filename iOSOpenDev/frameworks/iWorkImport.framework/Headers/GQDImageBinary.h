/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDImageBinary.h>


__attribute__((visibility("hidden")))
@interface GQDImageBinary : XXUnknownSuperclass {
@private
	CGSize mSize;	// 4 = 0x4
	CFStringRef mPath;	// 12 = 0xc
	CFURLRef mAbsoluteUrl;	// 16 = 0x10
	int mResourceType;	// 20 = 0x14
}
- (void)dealloc;	// 0xb635
- (CGSize)size;	// 0xb4f1
- (CFURLRef)absoluteUrlForState:(id)state;	// 0xb529
- (int)resourceType;	// 0xb509
- (CFStringRef)relativePath;	// 0xb519
@end

@interface GQDImageBinary (Private)
- (int)readDataAttributesFromReader:(xmlTextReader *)reader;	// 0xb711
@end
