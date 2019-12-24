/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>
#import <AppStoreUI/AppStoreUI-Structs.h>

@class UIImage, NSString, NSArray;

@interface ASApplicationInfoListingViewItem : XXUnknownSuperclass {
	UIImage *_image;	// 4 = 0x4
	CGSize _imageSize;	// 8 = 0x8
	NSString *_label;	// 16 = 0x10
	CGSize _labelSize;	// 20 = 0x14
	NSArray *_values;	// 28 = 0x1c
	float _valueHeight;	// 32 = 0x20
	float _valueWidth;	// 36 = 0x24
	unsigned _isCompact : 1;	// 40 = 0x28
	unsigned _wrapsIfNecessary : 1;	// 40 = 0x28
}
@property(assign, nonatomic) float valueWidth;	// G=0xefe5; S=0xee19; @synthesize=_valueWidth
@property(retain, nonatomic) NSArray *values;	// G=0xefd5; S=0xedc5; @synthesize=_values
@property(assign, nonatomic) BOOL wrapsIfNecessary;	// G=0xef31; S=0xee39; 
@property(readonly, assign, nonatomic) int type;	// G=0xeec9; 
@property(readonly, assign, nonatomic) BOOL shouldCompact;	// G=0xee85; 
@property(readonly, assign, nonatomic) CGSize labelSize;	// G=0xefb9; @synthesize=_labelSize
@property(retain, nonatomic) NSString *label;	// G=0xefa9; S=0xed21; @synthesize=_label
@property(assign, nonatomic) CGSize imageSize;	// G=0xef79; S=0xef95; @synthesize=_imageSize
@property(retain, nonatomic) UIImage *image;	// G=0xef45; S=0xef55; @synthesize=_image
@property(readonly, assign, nonatomic) float height;	// G=0xea25; 
@property(assign, nonatomic, getter=isCompact) BOOL compact;	// G=0xed0d; S=0xee61; 
@property(readonly, assign, nonatomic) NSString *combinedValues;	// G=0xe9f1; 
// declared property getter: - (float)valueWidth;	// 0xefe5
// declared property getter: - (id)values;	// 0xefd5
// declared property getter: - (CGSize)labelSize;	// 0xefb9
// declared property getter: - (id)label;	// 0xefa9
// declared property setter: - (void)setImageSize:(CGSize)size;	// 0xef95
// declared property getter: - (CGSize)imageSize;	// 0xef79
// declared property setter: - (void)setImage:(id)image;	// 0xef55
// declared property getter: - (id)image;	// 0xef45
// declared property getter: - (BOOL)wrapsIfNecessary;	// 0xef31
// declared property getter: - (int)type;	// 0xeec9
// declared property getter: - (BOOL)shouldCompact;	// 0xee85
// declared property setter: - (void)setCompact:(BOOL)compact;	// 0xee61
// declared property setter: - (void)setWrapsIfNecessary:(BOOL)necessary;	// 0xee39
// declared property setter: - (void)setValueWidth:(float)width;	// 0xee19
// declared property setter: - (void)setValues:(id)values;	// 0xedc5
// declared property setter: - (void)setLabel:(id)label;	// 0xed21
// declared property getter: - (BOOL)isCompact;	// 0xed0d
// declared property getter: - (float)height;	// 0xea25
// declared property getter: - (id)combinedValues;	// 0xe9f1
- (void)dealloc;	// 0xe965
- (id)initWithLabel:(id)label values:(id)values;	// 0xe91d
@end
