/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSString, SSItemArtworkImage, NSDictionary;

@interface SUItemContentRating : XXUnknownSuperclass <NSCopying> {
@private
	NSDictionary *_dictionary;	// 4 = 0x4
	int _rank;	// 8 = 0x8
	NSString *_ratingDescription;	// 12 = 0xc
	NSString *_ratingLabel;	// 16 = 0x10
	int _ratingSystem;	// 20 = 0x14
	SSItemArtworkImage *_ratingSystemLogo;	// 24 = 0x18
	BOOL _shouldHideWhenRestricted;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0xa91f1; S=0xa9201; @synthesize=_shouldHideWhenRestricted
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0xa8f9d; 
@property(copy, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0xa91bd; S=0xa91cd; @synthesize=_ratingSystemLogo
@property(assign, nonatomic) int ratingSystem;	// G=0xa919d; S=0xa91ad; @synthesize=_ratingSystem
@property(copy, nonatomic) NSString *ratingLabel;	// G=0xa9169; S=0xa9179; @synthesize=_ratingLabel
@property(copy, nonatomic) NSString *ratingDescription;	// G=0xa9135; S=0xa9145; @synthesize=_ratingDescription
@property(assign, nonatomic) int rank;	// G=0xa9115; S=0xa9125; @synthesize=_rank
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0xa8f6d; 
+ (int)ratingSystemFromString:(id)string;	// 0xa8f25
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0xa9201
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0xa91f1
// declared property setter: - (void)setRatingSystemLogo:(id)logo;	// 0xa91cd
// declared property getter: - (id)ratingSystemLogo;	// 0xa91bd
// declared property setter: - (void)setRatingSystem:(int)system;	// 0xa91ad
// declared property getter: - (int)ratingSystem;	// 0xa919d
// declared property setter: - (void)setRatingLabel:(id)label;	// 0xa9179
// declared property getter: - (id)ratingLabel;	// 0xa9169
// declared property setter: - (void)setRatingDescription:(id)description;	// 0xa9145
// declared property getter: - (id)ratingDescription;	// 0xa9135
// declared property setter: - (void)setRank:(int)rank;	// 0xa9125
// declared property getter: - (int)rank;	// 0xa9115
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0xa9105
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0xa90f9
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0xa90e1
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0xa90d1
- (id)valueForProperty:(id)property;	// 0xa9089
// declared property getter: - (BOOL)isRestricted;	// 0xa8f9d
// declared property getter: - (BOOL)isExplicitContent;	// 0xa8f6d
- (id)copyWithZone:(NSZone *)zone;	// 0xa8e31
- (void)dealloc;	// 0xa8da9
- (id)initWithDictionary:(id)dictionary;	// 0xa8a89
@end
