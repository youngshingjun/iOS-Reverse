/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/AppStoreUI-Structs.h>
#import <AppStoreUI/XXUnknownSuperclass.h>

@class UIImage, UIBezierPath;

@interface ASButtonCellConfiguration : XXUnknownSuperclass {
	UIImage *_normalButtonImage;	// 68 = 0x44
	UIImage *_selectedButtonImage;	// 72 = 0x48
	UIBezierPath *_selectionClipPath;	// 76 = 0x4c
}
+ (float)rowHeightForContext:(id)context representedObject:(id)object;	// 0x6771
- (CGRect)_frameForImage:(id)image;	// 0x6e31
- (void)reloadStrings;	// 0x6db5
- (void)reloadLayoutInformation;	// 0x6c85
- (void)reloadImages;	// 0x6a79
- (id)fontForLabelAtIndex:(unsigned)index;	// 0x6a25
- (void)drawWithModifiers:(unsigned)modifiers;	// 0x67d1
- (id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;	// 0x679d
- (void)dealloc;	// 0x66dd
- (id)init;	// 0x665d
@end
