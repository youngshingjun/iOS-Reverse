/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaEntityCellConfiguration.h>
#import <iPodUI/iPodUI-Structs.h>


@interface IUDetailedSearchResultCellConfiguration : IUMediaEntityCellConfiguration {
	int _groupingType;	// 100 = 0x64
}
+ (float)rowHeightForGlobalContext:(id)globalContext;	// 0x20795
- (void)reloadStrings;	// 0x20b85
- (void)reloadImages;	// 0x20ab9
- (void)reloadLayoutInformation;	// 0x208f1
- (void)configureForEntity:(id)entity query:(id)query entityIndex:(unsigned)index entityCount:(unsigned)count;	// 0x20895
- (id)fontForLabelAtIndex:(unsigned)index;	// 0x20831
- (id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;	// 0x207a9
- (CGSize)artworkSize;	// 0x2079d
- (id)init;	// 0x20765
@end
