/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UISlider;

@interface SUDownloadCellProgressBar : XXUnknownSuperclass {
	UISlider *_slider;	// 48 = 0x30
	int _style;	// 52 = 0x34
}
@property(assign, nonatomic) float value;	// G=0xd7bad; S=0xd7b81; 
@property(readonly, assign, nonatomic) int style;	// G=0xd7f4d; @synthesize=_style
// declared property getter: - (int)style;	// 0xd7f4d
- (id)_slider;	// 0xd7ef9
- (id)_newSliderWithEmptyImage:(id)emptyImage fullImage:(id)image;	// 0xd7dd5
- (id)_newSliderForTable;	// 0xd7d51
- (id)_newSliderForGrid;	// 0xd7ccd
- (void)sizeToFit;	// 0xd7c39
- (void)layoutSubviews;	// 0xd7bd5
// declared property getter: - (float)value;	// 0xd7bad
// declared property setter: - (void)setValue:(float)value;	// 0xd7b81
- (void)dealloc;	// 0xd7b35
- (id)initWithStyle:(int)style;	// 0xd7acd
@end
