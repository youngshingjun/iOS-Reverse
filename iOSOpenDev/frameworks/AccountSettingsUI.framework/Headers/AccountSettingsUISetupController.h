/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <AccountSettingsUI/XXUnknownSuperclass.h>

@class NSString;

@interface AccountSettingsUISetupController : XXUnknownSuperclass {
	unsigned _didAlreadyPopController : 1;	// 256 = 0x100
	unsigned _didAttemptFirstSyncSetup : 1;	// 256 = 0x100
	unsigned _forceMailSetup : 1;	// 256 = 0x100
	NSString *_emailEnteredByUser;	// 260 = 0x104
}
@property(retain, nonatomic) NSString *emailEnteredByUser;	// G=0x5175; S=0x56f1; @synthesize=_emailEnteredByUser
- (void)dealloc;	// 0x56a5
- (id)syncControllerSpecifierNamed:(id)named account:(id)account;	// 0x5185
- (void)forceMailSetup;	// 0x515d
- (void)controller:(id)controller finishedSetupWithAccount:(id)account;	// 0x528d
- (void)finishedAccountSetup;	// 0x55a5
- (void)_reallyFinishedAccountSetup;	// 0x55b5
// declared property getter: - (id)emailEnteredByUser;	// 0x5175
// declared property setter: - (void)setEmailEnteredByUser:(id)user;	// 0x56f1
@end
