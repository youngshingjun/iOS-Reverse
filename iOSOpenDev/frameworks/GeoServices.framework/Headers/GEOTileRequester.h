/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/XXUnknownSuperclass.h>

@class NSThread, GEOTileKeyList, NSString;
@protocol GEOTileRequesterDelegate;

@interface GEOTileRequester : XXUnknownSuperclass {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	id<GEOTileRequesterDelegate> _delegate;	// 8 = 0x8
	id _context;	// 12 = 0xc
	NSThread *_thread;	// 16 = 0x10
	NSString *_bundleIdentifier;	// 20 = 0x14
	NSString *_bundleVersion;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *bundleVersion;	// G=0xdf05; S=0xdf15; @synthesize=_bundleVersion
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0xded1; S=0xdee1; @synthesize=_bundleIdentifier
@property(retain, nonatomic) NSThread *thread;	// G=0xde69; S=0xde79; @synthesize=_thread
@property(retain, nonatomic) id context;	// G=0xde9d; S=0xdead; @synthesize=_context
@property(retain, nonatomic) id<GEOTileRequesterDelegate> delegate;	// G=0xde25; S=0xde35; @synthesize=_delegate
@property(readonly, assign, nonatomic) GEOTileKeyList *keyList;	// G=0xde59; @synthesize=_keyList
+ (id)hostname;	// 0xdd0d
+ (unsigned char)tileProviderIdentifier;	// 0xdd09
// declared property setter: - (void)setBundleVersion:(id)version;	// 0xdf15
// declared property getter: - (id)bundleVersion;	// 0xdf05
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0xdee1
// declared property getter: - (id)bundleIdentifier;	// 0xded1
// declared property setter: - (void)setContext:(id)context;	// 0xdead
// declared property getter: - (id)context;	// 0xde9d
// declared property setter: - (void)setThread:(id)thread;	// 0xde79
// declared property getter: - (id)thread;	// 0xde69
// declared property getter: - (id)keyList;	// 0xde59
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xde35
// declared property getter: - (id)delegate;	// 0xde25
- (void)dealloc;	// 0xdd79
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0xdd75
- (void)cancel;	// 0xdd71
- (void)start;	// 0xdd6d
- (id)initWithKeyList:(id)keyList;	// 0xdd19
@end
