/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UIViewController, SUOverlayTransition;

@interface SUOverlayAction : XXUnknownSuperclass {
	int _animationCount;	// 4 = 0x4
	UIViewController *_otherViewController;	// 8 = 0x8
	SUOverlayTransition *_transition;	// 12 = 0xc
	int _type;	// 16 = 0x10
	UIViewController *_viewController;	// 20 = 0x14
}
@property(retain, nonatomic) UIViewController *viewController;	// G=0x646c9; S=0x646d9; @synthesize=_viewController
@property(retain, nonatomic) SUOverlayTransition *transition;	// G=0x64695; S=0x646a5; @synthesize=_transition
@property(retain, nonatomic) UIViewController *otherViewController;	// G=0x64661; S=0x64671; @synthesize=_otherViewController
@property(assign, nonatomic) int animationCount;	// G=0x64641; S=0x64651; @synthesize=_animationCount
@property(assign, nonatomic) int actionType;	// G=0x64621; S=0x64631; @synthesize=_type
// declared property setter: - (void)setViewController:(id)controller;	// 0x646d9
// declared property getter: - (id)viewController;	// 0x646c9
// declared property setter: - (void)setTransition:(id)transition;	// 0x646a5
// declared property getter: - (id)transition;	// 0x64695
// declared property setter: - (void)setOtherViewController:(id)controller;	// 0x64671
// declared property getter: - (id)otherViewController;	// 0x64661
// declared property setter: - (void)setAnimationCount:(int)count;	// 0x64651
// declared property getter: - (int)animationCount;	// 0x64641
// declared property setter: - (void)setActionType:(int)type;	// 0x64631
// declared property getter: - (int)actionType;	// 0x64621
- (void)dealloc;	// 0x6458d
@end
