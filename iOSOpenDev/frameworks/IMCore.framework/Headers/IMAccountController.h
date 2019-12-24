/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMAccountController.h>


@class NSMutableArray, NSArray, NSMutableDictionary;

@interface IMAccountController : NSObject {
	NSMutableArray *_accounts;	// 4 = 0x4
	NSMutableDictionary *_accountMap;	// 8 = 0x8
	BOOL _isReadOnly;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id bestAccountForStatus;	// G=0x2b199; 
@property(readonly, assign, nonatomic) NSMutableArray *_accounts;	// G=0x2a0b9; 
@property(readonly, assign, nonatomic) NSArray *connectedAccounts;	// G=0x2a1c9; 
@property(readonly, assign, nonatomic) NSArray *activeAccounts;	// G=0x2a0c9; 
@property(readonly, assign, nonatomic) NSArray *accounts;	// G=0x2b1d1; @synthesize=_accounts
@property(readonly, assign, nonatomic) int numberOfAccounts;	// G=0x5ed5; 
@property(assign) BOOL readOnly;	// G=0x6279; S=0x14cd9; converted property
+ (id)bestAccountFromAccounts:(id)accounts;	// 0x2afad
+ (id)sharedInstance;	// 0x2955
// declared property getter: - (id)accounts;	// 0x2b1d1
// declared property getter: - (id)bestAccountForStatus;	// 0x2b199
- (BOOL)canActivateAccounts:(id)accounts;	// 0x2aee9
- (BOOL)canActivateAccount:(id)account;	// 0x6fc9
- (BOOL)accountConnected:(id)connected;	// 0x14455
- (BOOL)accountConnecting:(id)connecting;	// 0x15775
- (BOOL)activateAndHandleReconnectAccount:(id)account;	// 0x14681
- (BOOL)activateAndHandleReconnectAccounts:(id)accounts;	// 0x2adcd
- (BOOL)activateAccount:(id)account force:(BOOL)force locally:(BOOL)locally;	// 0x6f59
- (BOOL)activateAccount:(id)account force:(BOOL)force;	// 0x146c1
- (BOOL)activateAccount:(id)account;	// 0x2adad
- (BOOL)activateAccount:(id)account locally:(BOOL)locally;	// 0x6f39
- (BOOL)activateAccounts:(id)accounts;	// 0x2ad8d
- (BOOL)activateAccounts:(id)accounts force:(BOOL)force locally:(BOOL)locally;	// 0x2a969
- (BOOL)deactivateAccount:(id)account withDisable:(BOOL)disable;	// 0x2a925
- (BOOL)deactivateAccounts:(id)accounts;	// 0x2a90d
- (BOOL)deactivateAccount:(id)account;	// 0x2a8f5
- (BOOL)deactivateAccounts:(id)accounts withDisable:(BOOL)disable;	// 0x2a611
- (BOOL)deleteAccount:(id)account locally:(BOOL)locally;	// 0x2a309
- (BOOL)deleteAccount:(id)account;	// 0x2a2f1
- (BOOL)addAccount:(id)account atIndex:(int)index locally:(BOOL)locally;	// 0x5ef5
- (BOOL)addAccount:(id)account atIndex:(int)index;	// 0x2a2cd
- (BOOL)addAccount:(id)account locally:(BOOL)locally;	// 0x5e99
- (BOOL)addAccount:(id)account;	// 0x152e9
- (void)_activeAccountChanged:(id)changed;	// 0x2a2c9
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x14cd9
// converted property getter: - (BOOL)readOnly;	// 0x6279
- (BOOL)accountActive:(id)active;	// 0x6fa1
- (BOOL)canDeleteAccount:(id)account;	// 0x143e1
- (id)connectedAccountsWithCapability:(unsigned long long)capability;	// 0x180c9
- (id)accountsWithCapability:(unsigned long long)capability;	// 0x181d9
- (id)connectedAccountsForService:(id)service;	// 0x12479
- (id)activeAccountsForService:(id)service;	// 0x30ed
- (id)accountsForService:(id)service;	// 0x3221
// declared property getter: - (id)connectedAccounts;	// 0x2a1c9
// declared property getter: - (id)activeAccounts;	// 0x2a0c9
// declared property getter: - (id)_accounts;	// 0x2a0b9
// declared property getter: - (int)numberOfAccounts;	// 0x5ed5
- (id)accountAtIndex:(int)index;	// 0x13ce1
- (id)accountForUniqueID:(id)uniqueID;	// 0x3d09
- (void)dealloc;	// 0x29f81
- (id)init;	// 0x29b9
- (void)autoLogin;	// 0x29ea9
- (BOOL)retainWeakReference;	// 0x29ea5
- (BOOL)allowsWeakReference;	// 0x29ea1
@end

@interface IMAccountController (QuickAccountAccess)
@property(readonly, assign, nonatomic) id jabberAccount;	// G=0x2b429; 
@property(readonly, assign, nonatomic) id aimAccount;	// G=0x2b3ed; 
@property(readonly, assign, nonatomic) id mostLoggedInAccount;	// G=0x2b32d; 
// declared property getter: - (id)jabberAccount;	// 0x2b429
// declared property getter: - (id)aimAccount;	// 0x2b3ed
// declared property getter: - (id)mostLoggedInAccount;	// 0x2b32d
- (id)anyConnectedAccountForService:(id)service;	// 0x2b319
- (id)anyActiveAccountForService:(id)service;	// 0x2b305
- (id)anyAccountForService:(id)service;	// 0x17c31
- (id)anyConnectedAccountForService:(id)service withLogin:(id)login;	// 0x17d4d
- (id)anyActiveAccountForService:(id)service withLogin:(id)login;	// 0x17e7d
- (id)anyAccountForService:(id)service withLogin:(id)login;	// 0x17c45
- (id)anyAccountForService:(id)service login:(id)login guid:(id)guid;	// 0x2b1e1
@end
