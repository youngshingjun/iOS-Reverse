/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/AppStoreUI-Structs.h>
#import <AppStoreUI/XXUnknownSuperclass.h>

@class SUTableCell, SUItemLink, NSString, ASApplicationPageCellConfiguration;

@interface ASApplicationPageCell : XXUnknownSuperclass {
	SUTableCell *_cell;	// 72 = 0x48
	ASApplicationPageCellConfiguration *_configuration;	// 76 = 0x4c
	SUItemLink *_itemLink;	// 80 = 0x50
}
@property(copy, nonatomic) NSString *value;	// G=0xf5b9; S=0xf56d; 
@property(readonly, assign, nonatomic) float labelWidth;	// G=0xf341; 
@property(assign, nonatomic) float labelColumnWidth;	// G=0xf321; S=0xf49d; 
@property(copy, nonatomic) NSString *label;	// G=0xf301; S=0xf451; 
@property(copy, nonatomic) SUItemLink *itemLink;	// G=0xf2c9; S=0xf38d; 
+ (id)backgroundColorForIndex:(unsigned)index;	// 0xf259
- (void)sizeToFit;	// 0xf76d
- (void)setSelected:(BOOL)selected;	// 0xf759
- (void)setHighlighted:(BOOL)highlighted;	// 0xf6e1
- (void)setBackgroundColor:(id)color;	// 0xf699
- (void)layoutSubviews;	// 0xf63d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0xf5d9
// declared property getter: - (id)value;	// 0xf5b9
// declared property setter: - (void)setValue:(id)value;	// 0xf56d
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0xf4e9
// declared property setter: - (void)setLabelColumnWidth:(float)width;	// 0xf49d
// declared property setter: - (void)setLabel:(id)label;	// 0xf451
// declared property setter: - (void)setItemLink:(id)link;	// 0xf38d
// declared property getter: - (float)labelWidth;	// 0xf341
// declared property getter: - (float)labelColumnWidth;	// 0xf321
// declared property getter: - (id)label;	// 0xf301
// declared property getter: - (id)itemLink;	// 0xf2c9
- (void)dealloc;	// 0xf1e5
- (id)initWithFrame:(CGRect)frame;	// 0xeff5
@end
