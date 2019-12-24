/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSString, NSURL;

@interface SUItemLink : XXUnknownSuperclass <NSCopying> {
@private
	int _linkTarget;	// 4 = 0x4
	int _linkType;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSURL *_url;	// 16 = 0x10
}
@property(retain, nonatomic) NSURL *URL;	// G=0xa7ab9; S=0xa7ac9; @synthesize=_url
@property(copy, nonatomic) NSString *title;	// G=0xa7a85; S=0xa7a95; @synthesize=_title
@property(assign, nonatomic) int linkType;	// G=0xa7a65; S=0xa7a75; @synthesize=_linkType
@property(assign, nonatomic) int linkTarget;	// G=0xa7a45; S=0xa7a55; @synthesize=_linkTarget
// declared property setter: - (void)setURL:(id)url;	// 0xa7ac9
// declared property getter: - (id)URL;	// 0xa7ab9
// declared property setter: - (void)setTitle:(id)title;	// 0xa7a95
// declared property getter: - (id)title;	// 0xa7a85
// declared property setter: - (void)setLinkType:(int)type;	// 0xa7a75
// declared property getter: - (int)linkType;	// 0xa7a65
// declared property setter: - (void)setLinkTarget:(int)target;	// 0xa7a55
// declared property getter: - (int)linkTarget;	// 0xa7a45
- (id)copyWithZone:(NSZone *)zone;	// 0xa79a1
- (void)dealloc;	// 0xa7941
@end
