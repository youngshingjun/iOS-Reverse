/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSString, ISOperation;

@interface SUBackgroundTaskOperation : XXUnknownSuperclass {
	ISOperation *_operation;	// 60 = 0x3c
	NSString *_permissionIdentifier;	// 64 = 0x40
	unsigned _taskIdentifier;	// 68 = 0x44
}
@property(readonly, assign) NSString *permissionIdentifier;	// G=0xa1cf5; 
@property(readonly, assign) ISOperation *operation;	// G=0xa1cbd; 
- (void)_takeBackgroundAssertion;	// 0xa1f99
- (void)_removeBackgroundAssertion;	// 0xa1ef5
- (void)_cancelBackgroundAssertion;	// 0xa1ec5
- (void)run;	// 0xa1d2d
// declared property getter: - (id)permissionIdentifier;	// 0xa1cf5
// declared property getter: - (id)operation;	// 0xa1cbd
- (void)dealloc;	// 0xa1c5d
- (id)initWithOperation:(id)operation identifier:(id)identifier;	// 0xa1bcd
@end
