/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class ISReview;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {
	BOOL _backgroundReview;	// 60 = 0x3c
	ISReview *_review;	// 64 = 0x40
}
@property(retain) ISReview *review;	// G=0x1b3b1; S=0x1b3c5; @synthesize=_review
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;	// G=0x1b391; S=0x1b3a1; @synthesize=_backgroundReview
// declared property setter: - (void)setReview:(id)review;	// 0x1b3c5
// declared property getter: - (id)review;	// 0x1b3b1
// declared property setter: - (void)setBackgroundReview:(BOOL)review;	// 0x1b3a1
// declared property getter: - (BOOL)isBackgroundReview;	// 0x1b391
- (id)_httpBody;	// 0x1b171
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x1b035
- (void)run;	// 0x1ae4d
- (void)dealloc;	// 0x1ae01
@end
