/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */




@protocol ADCacheSubscriber <NSObject>
- (double)timeRemaining;
- (BOOL)isInWindow;
- (BOOL)isVisible;
- (id)uniqueIdentifier;
- (void)cacheFailedToLoadBanner:(id)loadBanner withError:(id)error;
- (void)cacheLoadedBannerData:(id)data;
- (void)cacheWillLoadBannerData;
@end

