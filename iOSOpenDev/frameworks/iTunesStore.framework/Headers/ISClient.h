/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/XXUnknownSuperclass.h>

@class NSString, NSLock;

@interface ISClient : XXUnknownSuperclass {
	NSString *_appleClientApplication;	// 4 = 0x4
	NSString *_appleClientVersions;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSLock *_lock;	// 16 = 0x10
	NSString *_partnerHeader;	// 20 = 0x14
	NSString *_userAgent;	// 24 = 0x18
}
@property(copy) NSString *partnerHeader;	// G=0x12e19; S=0x12f8d; 
@property(copy) NSString *identifier;	// G=0x12d65; S=0x12f09; 
@property(readonly, assign) NSString *appleClientVersions;	// G=0x12ad5; 
@property(copy) NSString *userAgent;	// G=0x1317d; S=0x130f9; 
@property(copy) NSString *appleClientApplication;	// G=0x12a65; S=0x12e85; 
+ (id)currentClient;	// 0x129e9
- (void)_softwareMapInvalidatedNotification:(id)notification;	// 0x1321d
- (id)localStoreFrontID;	// 0x131e9
// declared property getter: - (id)userAgent;	// 0x1317d
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x130f9
// declared property setter: - (void)setPartnerHeader:(id)header;	// 0x12f8d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x12f09
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x12e85
// declared property getter: - (id)partnerHeader;	// 0x12e19
// declared property getter: - (id)identifier;	// 0x12d65
// declared property getter: - (id)appleClientVersions;	// 0x12ad5
// declared property getter: - (id)appleClientApplication;	// 0x12a65
- (void)dealloc;	// 0x1290d
- (id)init;	// 0x1285d
@end
