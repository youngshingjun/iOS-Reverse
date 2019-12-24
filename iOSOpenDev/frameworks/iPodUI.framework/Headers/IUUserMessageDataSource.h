/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/IUMediaDataSource.h>

@class NSURL, NSString, UIImage;

@interface IUUserMessageDataSource : IUMediaDataSource {
	UIEdgeInsets _edgeInsets;	// 28 = 0x1c
	UIImage *_image;	// 44 = 0x2c
	NSString *_messageSubtitle;	// 48 = 0x30
	NSString *_messageTitle;	// 52 = 0x34
	NSURL *_findContentURL;	// 56 = 0x38
	BOOL _showStrings;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) BOOL showStrings;	// G=0x4d8b5; @synthesize=_showStrings
@property(retain, nonatomic) NSURL *findContentURL;	// G=0x4d881; S=0x4d891; @synthesize=_findContentURL
@property(retain, nonatomic) NSString *messageSubtitle;	// G=0x4d829; S=0x4d839; @synthesize=_messageSubtitle
@property(retain, nonatomic) NSString *messageTitle;	// G=0x4d735; S=0x4d85d; @synthesize=_messageTitle
@property(retain, nonatomic) UIImage *image;	// G=0x4d7b5; S=0x4d7c5; @synthesize=_image
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x4d7e9; S=0x4d80d; @synthesize=_edgeInsets
// declared property getter: - (BOOL)showStrings;	// 0x4d8b5
// declared property setter: - (void)setFindContentURL:(id)url;	// 0x4d891
// declared property getter: - (id)findContentURL;	// 0x4d881
// declared property setter: - (void)setMessageTitle:(id)title;	// 0x4d85d
// declared property setter: - (void)setMessageSubtitle:(id)subtitle;	// 0x4d839
// declared property getter: - (id)messageSubtitle;	// 0x4d829
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x4d80d
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x4d7e9
// declared property setter: - (void)setImage:(id)image;	// 0x4d7c5
// declared property getter: - (id)image;	// 0x4d7b5
// declared property getter: - (id)messageTitle;	// 0x4d735
- (BOOL)isRestorableNavigationPathNode;	// 0x4d731
- (void)dealloc;	// 0x4d685
- (id)initForVideo;	// 0x4d46d
- (id)initForMusic;	// 0x4d1c1
- (id)init;	// 0x4d16d
@end
