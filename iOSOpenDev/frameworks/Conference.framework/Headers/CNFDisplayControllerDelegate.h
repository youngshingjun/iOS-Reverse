/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */




@protocol CNFDisplayControllerDelegate <NSObject>
- (void)conferenceDisplayController:(id)controller endCallWithReason:(unsigned)reason;
@optional
- (BOOL)isOutgoingInvitation;
- (BOOL)isInPhoneCall;
- (id)originationURL;
- (void)conferenceDisplayController:(id)controller cancelCallFailureRecoveryWithReason:(unsigned)reason;
- (void)conferenceDisplayController:(id)controller retryVideoConferenceInvitationWithReason:(unsigned)reason;
- (void)conferenceDisplayController:(id)controller muteConferenceWithReason:(unsigned)reason;
- (void)conferenceDisplayController:(id)controller cameraToggleWithReason:(unsigned)reason;
- (BOOL)auxiliaryAudioRoutesAvailable;
- (void)conferenceDisplayController:(id)controller didFinishAnimatingCallEndWithReason:(unsigned)reason;
- (void)conferenceDisplayController:(id)controller endWithReason:(unsigned)reason;
- (void)conferenceDisplayControllerEndedWhileSuspending:(id)suspending;
@end

