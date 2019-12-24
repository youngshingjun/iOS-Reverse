/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/XXUnknownSuperclass.h>


@interface AlbumSongListAggregateShuffleButton : XXUnknownSuperclass {
@private
	BOOL _highlightStateChangesDisallowedCount;	// 139 = 0x8b
	BOOL _highlightStateChangeWasSkipped;	// 140 = 0x8c
	BOOL _highlightStateSkipped;	// 141 = 0x8d
}
- (void)setHighlighted:(BOOL)highlighted;	// 0x113b9
- (void)_endDisallowingHighlightChangesForEventAfterDelay;	// 0x11359
- (void)_delayedEndDisallowingHighlightChangesForEvent;	// 0x11349
- (void)_endDisallowingHighlightChangesForEvent;	// 0x1131d
- (void)_beginDisallowingHighlightChangesForEvent;	// 0x112f1
- (void)endDisallowingHighlightChanges;	// 0x1129d
- (void)beginDisallowingHighlightChanges;	// 0x11271
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x111fd
- (CGRect)sloppyHitRect;	// 0x111b9
- (int)buttonType;	// 0x111b5
- (id)init;	// 0x10e79
@end
