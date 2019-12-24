/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/SPSearchResult.h>


@class NSString;

@interface ExtendedSearchResult : NSObject <SPSearchResult> {
	void *_content;	// 4 = 0x4
	unsigned _domain;	// 8 = 0x8
	unsigned _resultDomain;	// 12 = 0xc
	NSString *_resultDisplayID;	// 16 = 0x10
	NSString *_query;	// 20 = 0x14
}
- (int)domain;	// 0xbf7d
- (int)resultDomain;	// 0xbf6d
- (const char *)URLUTF8String;	// 0xbded
- (unsigned long long)identifier;	// 0xbd7d
- (const char *)auxiliarySubtitleUTF8String;	// 0xbd51
- (const char *)auxiliaryTitleUTF8String;	// 0xbd25
- (const char *)summaryUTF8String;	// 0xbcf9
- (const char *)subtitleUTF8String;	// 0xbccd
- (const char *)titleUTF8String;	// 0xbca1
- (const char *)resultDisplayIdentifierUTF8String;	// 0xbc81
- (void)dealloc;	// 0xbc0d
- (id)initWithContent:(void *)content inDomain:(unsigned)domain withResultDomain:(unsigned)resultDomain resultDisplayIdentifier:(id)identifier query:(id)query;	// 0xbb59
- (id)initWithContent:(void *)content inDomain:(unsigned)domain query:(id)query;	// 0xbac5
@end
