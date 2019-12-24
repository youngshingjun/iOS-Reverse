/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/XXUnknownSuperclass.h>

@class NSString;

@interface DAMailboxFetchSearchResultRequest : XXUnknownSuperclass {
	NSString *_longID;	// 4 = 0x4
	int _bodyFormat;	// 8 = 0x8
	int _maxSize;	// 12 = 0xc
}
@property(readonly, retain) NSString *longID;	// G=0xd77d; converted property
@property(readonly, assign) int bodyFormat;	// G=0xd78d; converted property
@property(readonly, assign) int maxSize;	// G=0xd79d; converted property
- (void)dealloc;	// 0xd995
- (id)description;	// 0xd90d
- (BOOL)isEqual:(id)equal;	// 0xd849
- (unsigned)hash;	// 0xd7ad
// converted property getter: - (int)maxSize;	// 0xd79d
// converted property getter: - (int)bodyFormat;	// 0xd78d
// converted property getter: - (id)longID;	// 0xd77d
- (id)initRequestForBodyFormat:(int)bodyFormat withLongID:(id)longID withBodySizeLimit:(int)bodySizeLimit;	// 0xd6fd
@end
