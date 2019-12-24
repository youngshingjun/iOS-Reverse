/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/XXUnknownSuperclass.h>

@class NSMutableDictionary, ASAccount;

@interface ASFolderHierarchy : XXUnknownSuperclass {
	ASAccount *_account;	// 4 = 0x4
	NSMutableDictionary *_folderCache;	// 8 = 0x8
	NSMutableDictionary *_folderByIdCache;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(retain) id folderIdsThatExternalClientsCareAbout;	// G=0x4859d; S=0x486f5; converted property
@property(retain) NSMutableDictionary *folderCache;	// G=0x47115; S=0x48461; converted property
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x484a5
+ (id)_folderCacheFilenameWithId:(id)anId;	// 0x46f11
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;	// 0x487a9
// converted property setter: - (void)setFolderIdsThatExternalClientsCareAbout:(id)about;	// 0x486f5
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x485d1
// converted property getter: - (id)folderIdsThatExternalClientsCareAbout;	// 0x4859d
// converted property setter: - (void)setFolderCache:(id)cache;	// 0x48461
- (void)_setFolderCache:(id)cache;	// 0x48239
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;	// 0x480f5
- (void)blowAwayFolderCache;	// 0x480c5
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;	// 0x48069
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)about;	// 0x47d8d
- (id)_pathForFolder:(id)folder usingCache:(id)cache foldersById:(id)anId;	// 0x47af1
- (id)foldersUnderFolderWithID:(id)anId;	// 0x479a5
- (void)_setFolderPathsFromCurrentCache;	// 0x477b5
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)about;	// 0x47795
- (id)_savedFolderPathsThatExternalClientsCareAbout;	// 0x47775
- (void)clearLocalCache;	// 0x47725
- (id)foldersTag;	// 0x476f1
- (id)folders;	// 0x476bd
- (id)folderForID:(id)anId;	// 0x4767d
// converted property getter: - (id)folderCache;	// 0x47115
- (void)_setFolderByIdCacheFromCurrentCache;	// 0x46fbd
- (id)_folderCacheFilename;	// 0x46f75
- (void)setDelegate:(id)delegate;	// 0x46f01
- (void)dealloc;	// 0x46ea1
- (id)description;	// 0x46e45
- (id)initWithAccount:(id)account;	// 0x46d69
@end
