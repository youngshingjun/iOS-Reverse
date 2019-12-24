/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>

@class NSThread, NSString, MailboxUid, InvocationQueue, MFError;

@interface ActivityMonitor : XXUnknownSuperclass {
	NSThread *_runningThread;	// 8 = 0x8
	NSString *_taskName;	// 12 = 0xc
	NSString *_displayName;	// 16 = 0x10
	NSString *_statusMessage;	// 20 = 0x14
	NSString *_descriptionString;	// 24 = 0x18
	InvocationQueue *_ourQueue;	// 28 = 0x1c
	double _percentDone;	// 32 = 0x20
	unsigned _key : 13;	// 40 = 0x28
	unsigned _canCancel : 1;	// 41 = 0x29
	unsigned _shouldCancel : 1;	// 41 = 0x29
	unsigned _isActive : 1;	// 41 = 0x29
	unsigned _changeCount : 8;	// 42 = 0x2a
	id _delegate;	// 44 = 0x2c
	id _target;	// 48 = 0x30
	MFError *_error;	// 52 = 0x34
	unsigned _expectedLength;	// 56 = 0x38
	unsigned _maxCount;	// 60 = 0x3c
	unsigned _currentCount;	// 64 = 0x40
	double _currentItemPercentDone;	// 68 = 0x44
	unsigned _supportsPerItemProgress : 1;	// 76 = 0x4c
	MailboxUid *_mailbox;	// 80 = 0x50
	double _lastTime;	// 84 = 0x54
	double _startTime;	// 92 = 0x5c
	BOOL _gotNewMessages;	// 100 = 0x64
}
@property(retain) MailboxUid *mailbox;	// G=0x16989; S=0x11de1; @synthesize=_mailbox
@property(retain) NSString *statusMessage;	// G=0x754f5; S=0x755d5; converted property
@property(assign) double percentDone;	// G=0x74589; S=0x754d1; converted property
@property(assign) unsigned expectedLength;	// G=0x745a1; S=0x194a1; converted property
@property(retain) NSString *taskName;	// G=0x752e9; S=0xae51; converted property
@property(retain) NSString *displayName;	// G=0x75281; S=0x75169; converted property
@property(retain) id activityTarget;	// G=0x75051; S=0x750bd; converted property
@property(retain) id primaryTarget;	// G=0x74971; S=0x74a3d; converted property
@property(assign) BOOL canBeCancelled;	// G=0x745b1; S=0xaf4d; converted property
@property(assign) BOOL shouldCancel;	// G=0xbca5; S=0x1e889; converted property
@property(retain) MFError *error;	// G=0x12f35; S=0xbbe1; converted property
@property(readonly, assign) BOOL gotNewMessages;	// G=0x18a61; converted property
+ (id)currentMonitor;	// 0x11db5
+ (void)destroyMonitor;	// 0xf76d
- (id)init;	// 0xad9d
- (void)dealloc;	// 0x2419
- (BOOL)isActive;	// 0x74541
- (void)setDelegate:(id)delegate;	// 0x74555
- (void)cancelMessage;	// 0x1ec9d
- (void)postActivityStarting;	// 0xbc61
- (void)postActivityFinished:(id)finished;	// 0xf355
- (void)startActivity;	// 0xbadd
- (void)finishedActivity:(id)activity;	// 0xf25d
- (void)elevateDBPriority:(BOOL)priority;	// 0x194b1
- (void)notifyConnectionEstablished;	// 0x75825
- (id)userInfoForNotification;	// 0x1ea41
- (void)postDidChangeWithUserInfo:(id)post;	// 0x1ec51
- (void)_didChange;	// 0x1ea11
- (void)setMaxCount:(int)count;	// 0x757a1
- (void)setCurrentCount:(int)count;	// 0x7571d
- (void)setSupportsPerItemProgress:(BOOL)progress;	// 0x1696d
- (id)_ntsThrottledUserInfoDict;	// 0x75691
- (void)setPercentDoneOfCurrentItem:(double)currentItem;	// 0x7560d
- (void)reset;	// 0x167d5
- (void)setGotNewMessages;	// 0x74565
// converted property getter: - (BOOL)gotNewMessages;	// 0x18a61
- (int)changeCount;	// 0x74579
// converted property setter: - (void)setStatusMessage:(id)message;	// 0x755d5
- (void)setStatusMessage:(id)message percentDone:(double)done;	// 0x755b1
// converted property getter: - (id)statusMessage;	// 0x754f5
// converted property setter: - (void)setPercentDone:(double)done;	// 0x754d1
// converted property getter: - (double)percentDone;	// 0x74589
// converted property setter: - (void)setExpectedLength:(unsigned)length;	// 0x194a1
// converted property getter: - (unsigned)expectedLength;	// 0x745a1
- (id)description;	// 0x75351
// converted property getter: - (id)taskName;	// 0x752e9
// converted property setter: - (void)setTaskName:(id)name;	// 0xae51
// converted property getter: - (id)displayName;	// 0x75281
- (void)setDisplayName:(id)name maxCount:(int)count;	// 0x7517d
// converted property setter: - (void)setDisplayName:(id)name;	// 0x75169
// converted property setter: - (void)setActivityTarget:(id)target;	// 0x750bd
// converted property getter: - (id)activityTarget;	// 0x75051
- (BOOL)_lockedAddActivityTarget:(id)target;	// 0x74f89
- (void)addActivityTarget:(id)target;	// 0x74e89
- (void)addActivityTargets:(id)targets;	// 0x74d61
- (void)removeActivityTarget:(id)target;	// 0x74c09
// converted property setter: - (void)setPrimaryTarget:(id)target;	// 0x74a3d
// converted property getter: - (id)primaryTarget;	// 0x74971
- (id)activityTargets;	// 0x748a5
// converted property getter: - (BOOL)canBeCancelled;	// 0x745b1
// converted property setter: - (void)setCanBeCancelled:(BOOL)cancelled;	// 0xaf4d
// converted property getter: - (BOOL)shouldCancel;	// 0xbca5
// converted property setter: - (void)setShouldCancel:(BOOL)cancel;	// 0x1e889
- (void)cancel;	// 0x1e875
- (void)setInvocationQueue:(id)queue;	// 0x74865
- (int)acquireExclusiveAccessKey;	// 0x74801
- (void)relinquishExclusiveAccessKey:(int)key;	// 0x747a9
- (void)setStatusMessage:(id)message percentDone:(double)done withKey:(int)key;	// 0x7476d
- (void)setStatusMessage:(id)message withKey:(int)key;	// 0x74699
- (void)setPercentDone:(double)done withKey:(int)key;	// 0x745d5
// converted property getter: - (id)error;	// 0x12f35
// converted property setter: - (void)setError:(id)error;	// 0xbbe1
// declared property getter: - (id)mailbox;	// 0x16989
// declared property setter: - (void)setMailbox:(id)mailbox;	// 0x11de1
@end
