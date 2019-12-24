/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */




@protocol PBRequesterDelegate <NSObject>
@optional
- (void)requester:(id)requester didFailWithError:(id)error;
- (void)requesterDidCancel:(id)requester;
- (void)requesterDidFinish:(id)requester;
- (void)requester:(id)requester didReceiveResponse:(id)response forRequest:(id)request;
@end

