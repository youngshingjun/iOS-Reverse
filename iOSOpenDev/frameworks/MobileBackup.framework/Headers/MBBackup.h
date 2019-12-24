/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/NSCopying.h>
#import <MobileBackup/NSCoding.h>
#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/XXUnknownSuperclass.h>

@class NSArray, NSString;

@interface MBBackup : XXUnknownSuperclass <NSCopying, NSCoding> {
	NSString *_backupUDID;	// 4 = 0x4
	NSString *_deviceClass;	// 8 = 0x8
	NSString *_productType;	// 12 = 0xc
	NSString *_hardwareModel;	// 16 = 0x10
	NSString *_marketingName;	// 20 = 0x14
	NSArray *_snapshots;	// 24 = 0x18
	BOOL _restoreSystemFiles;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *backupUDID;	// G=0x10785; @synthesize=_backupUDID
@property(readonly, assign, nonatomic) NSString *deviceClass;	// G=0x10775; @synthesize=_deviceClass
@property(readonly, assign, nonatomic) NSString *productType;	// G=0x10765; @synthesize=_productType
@property(readonly, assign, nonatomic) NSString *hardwareModel;	// G=0x10755; @synthesize=_hardwareModel
@property(readonly, assign, nonatomic) NSString *marketingName;	// G=0x10745; @synthesize=_marketingName
@property(readonly, assign, nonatomic) NSArray *snapshots;	// G=0x10735; @synthesize=_snapshots
@property(readonly, assign, nonatomic, getter=canRestoreSystemFiles) BOOL restoreSystemFiles;	// G=0x10725; @synthesize=_restoreSystemFiles
- (id)initWithBackupUDID:(id)backupUDID deviceClass:(id)aClass productType:(id)type hardwareModel:(id)model marketingName:(id)name snapshots:(id)snapshots restoreSystemFiles:(BOOL)files;	// 0x10795
- (id)initWithCoder:(id)coder;	// 0x10c29
- (void)encodeWithCoder:(id)coder;	// 0x10b11
- (void)dealloc;	// 0x10a61
- (id)copyWithZone:(NSZone *)zone;	// 0x109ad
- (BOOL)isEqual:(id)equal;	// 0x10969
- (id)description;	// 0x1088d
// declared property getter: - (BOOL)canRestoreSystemFiles;	// 0x10725
// declared property getter: - (id)snapshots;	// 0x10735
// declared property getter: - (id)marketingName;	// 0x10745
// declared property getter: - (id)hardwareModel;	// 0x10755
// declared property getter: - (id)productType;	// 0x10765
// declared property getter: - (id)deviceClass;	// 0x10775
// declared property getter: - (id)backupUDID;	// 0x10785
@end
