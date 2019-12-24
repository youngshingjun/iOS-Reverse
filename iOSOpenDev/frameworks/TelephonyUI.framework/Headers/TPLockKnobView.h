/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/XXUnknownSuperclass.h>

@class TPBottomLockBar, UIAlphaAnimation;

@interface TPLockKnobView : XXUnknownSuperclass {
	TPBottomLockBar *_track;	// 52 = 0x34
	UIAlphaAnimation *_animation;	// 56 = 0x38
	float _centerDelta;	// 60 = 0x3c
	BOOL _tracking;	// 64 = 0x40
}
- (id)initWithImage:(id)image;	// 0x7a89
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x8031
- (void)setLockView:(id)view;	// 0x6619
- (void)dealloc;	// 0x8005
- (BOOL)shouldBeginTracking:(id)tracking;	// 0x7f61
- (void)beginTracking:(id)tracking;	// 0x7e41
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x68cd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x7ba1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x7ad1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x6905
@end
