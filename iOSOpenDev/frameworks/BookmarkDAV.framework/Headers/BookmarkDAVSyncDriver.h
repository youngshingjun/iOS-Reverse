/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <BookmarkDAV/BookmarkDAV-Structs.h>
#import <BookmarkDAV/BookmarkDAVSyncDriver.h>
#import <BookmarkDAV/XXUnknownSuperclass.h>
#import <BookmarkDAV/CoreDAVLocalDBTreeInfoProvider.h>
#import <BookmarkDAV/CoreDAVDeleteTaskDelegate.h>
#import <BookmarkDAV/CoreDAVGetAccountPropertiesTaskGroupDelegate.h>
#import <BookmarkDAV/CoreDAVContainerInfoTaskGroupDelegate.h>

@class BookmarkDAVSyncData, NSDictionary, NSMutableSet, NSURL, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface BookmarkDAVSyncDriver : XXUnknownSuperclass <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate> {
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 4 = 0x4
	id<CoreDAVTaskManager> _taskManager;	// 8 = 0x8
	NSMutableSet *_outstandingTaskGroups;	// 12 = 0xc
	id _getAccountPropertiesHandler;	// 16 = 0x10
	id _syncHandler;	// 20 = 0x14
	void *_changeToken;	// 24 = 0x18
	NSURL *_homeURL;	// 28 = 0x1c
	NSString *_pushKey;	// 32 = 0x20
	NSDictionary *_pushTransport;	// 36 = 0x24
	id _openDBBlock;	// 40 = 0x28
	id _getDBBlock;	// 44 = 0x2c
	id _saveDBBlock;	// 48 = 0x30
	id _closeDBBlock;	// 52 = 0x34
	BookmarkDAVSyncData *_topLevelSyncData;	// 56 = 0x38
	id _registerForPush;	// 60 = 0x3c
	BOOL _forceSafariOrdering;	// 64 = 0x40
	BOOL _forceSave;	// 65 = 0x41
}
@property(readonly, assign) BookmarkDAVSyncData *topLevelSyncData;	// G=0x5091; 
@property(copy) id syncHandler;	// G=0x8ad5; S=0x8ae9; @synthesize=_syncHandler
@property(copy) id getAccountPropertiesHandler;	// G=0x8a9d; S=0x8ab1; @synthesize=_getAccountPropertiesHandler
@property(retain) NSURL *homeURL;	// G=0x89e5; S=0x89f9; @synthesize=_homeURL
@property(retain) NSDictionary *pushTransport;	// G=0x8a55; S=0x8a69; @synthesize=_pushTransport
@property(retain) NSString *pushKey;	// G=0x8a1d; S=0x8a31; @synthesize=_pushKey
@property(readonly, assign) unsigned outstandingActionCount;	// G=0x89c5; 
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x8a8d; @synthesize=_accountInfoProvider
// declared property setter: - (void)setSyncHandler:(id)handler;	// 0x8ae9
// declared property getter: - (id)syncHandler;	// 0x8ad5
// declared property setter: - (void)setGetAccountPropertiesHandler:(id)handler;	// 0x8ab1
// declared property getter: - (id)getAccountPropertiesHandler;	// 0x8a9d
// declared property getter: - (id)accountInfoProvider;	// 0x8a8d
// declared property setter: - (void)setPushTransport:(id)transport;	// 0x8a69
// declared property getter: - (id)pushTransport;	// 0x8a55
// declared property setter: - (void)setPushKey:(id)key;	// 0x8a31
// declared property getter: - (id)pushKey;	// 0x8a1d
// declared property setter: - (void)setHomeURL:(id)url;	// 0x89f9
// declared property getter: - (id)homeURL;	// 0x89e5
// declared property getter: - (unsigned)outstandingActionCount;	// 0x89c5
- (void)notePutToURL:(id)url withDataPayload:(id)dataPayload finishedWithIgnoredError:(id)ignoredError;	// 0x8751
- (void)recursiveContainerSyncTask:(id)task completedFullSyncWithNewCTag:(id)newCTag newPTag:(id)tag newSyncToken:(id)token error:(id)error;	// 0x8311
- (void)recursiveContainerSyncTask:(id)task completedSyncOfFolderWithURL:(id)url newCTag:(id)tag newPTag:(id)tag4 addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x8109
- (void)recursiveContainerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x8055
- (void)_handleAddsOrModifies:(id)modifies removes:(id)removes;	// 0x7f15
- (void)recursiveContainerSyncTask:(id)task receivedAddedOrModifiedFolder:(id)folder;	// 0x7ca9
- (void)_makeFolderFromContainer:(id)container;	// 0x7acd
- (void)_makeBookmarkFromDAVNode:(id)davnode;	// 0x7961
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url;	// 0x7889
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x7671
- (id)copyLocalETagsForURLs:(id)urls;	// 0x7371
- (BOOL)getCTag:(id *)tag pTag:(id *)tag2 forFolderWithURL:(id)url;	// 0x7209
- (void)syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler;	// 0x71e5
- (void)_syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler skipAddChanges:(BOOL)changes;	// 0x60f1
- (void)_setChildrenOrder:(id)order forFolderURL:(id)folderURL;	// 0x5ef1
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)serverOrder inParentWithURL:(id)url;	// 0x5e59
- (id)_dbRelativeString:(id)string;	// 0x5e11
- (int)_serverOrderForChange:(void *)change;	// 0x5ccd
- (void)_setServerIdOnItem:(void *)item isBookmark:(BOOL)bookmark;	// 0x5c09
- (id)_copyDAVFolderFromFolderRef:(void *)folderRef;	// 0x5af5
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)bookmarkRef;	// 0x59fd
- (void)getAccountPropertiesWithCompletionHandler:(id)completionHandler;	// 0x593d
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x53c5
- (void)getAccountPropertiesTask:(id)task completedWithError:(id)error;	// 0x51fd
- (void)_closeDBAndSave:(BOOL)save;	// 0x5165
- (void)_saveDB;	// 0x50f9
// declared property getter: - (id)topLevelSyncData;	// 0x5091
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)success error:(id)error;	// 0x5065
- (void)dealloc;	// 0x4f65
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager openDBBlock:(id)block getDBBlock:(id)block4 saveDBBlock:(id)block5 closeDBBlock:(id)block6 registerForPush:(id)push forceSafariOrdering:(BOOL)ordering;	// 0x4e31
@end

@interface BookmarkDAVSyncDriver (BulkUploadSupport)
- (void)_finishInitialSyncShouldPushChanges:(BOOL)_finishInitialSync;	// 0xab65
- (BOOL)_applyReturnedBookmarks:(id)bookmarks withPushedBookmarks:(CFArrayRef)pushedBookmarks;	// 0xa801
- (BOOL)_applyReturnedFolders:(id)folders parentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders topmostFolders:(CFArrayRef)folders3 postedToURL:(id)url;	// 0xa389
- (BOOL)_matchParsedFolders:(id)folders toPushedFolders:(CFDictionaryRef)pushedFolders unmatchedParsedFolders:(id)folders3 parsedSetsOfChildrenFoldersByParentURL:(id)childrenFoldersByParentURL arraysOfChildrenByNameByParent:(CFDictionaryRef)childrenByNameByParent;	// 0x9f55
- (void)_setRootCTag:(id)tag rootSyncToken:(id)token knownOrderings:(id)orderings;	// 0x9d19
- (BOOL)_applyUnmatchedParsedFolders:(id)folders;	// 0x9825
- (void)_removeTempIdsFromFoldersInDict:(CFDictionaryRef)dict;	// 0x9799
- (id)_bookmarkXBELDataForBookmarkChanges:(CFArrayRef)bookmarkChanges pushedBookmarks:(CFArrayRef)bookmarks maxResources:(int)resources maxSize:(int)size;	// 0x93a5
- (id)_folderXBELDataForTopmostFolderChanges:(CFArrayRef)topmostFolderChanges foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders pushedTopmostFolders:(CFArrayRef)folders maxResources:(int)resources maxSize:(int)size;	// 0x9245
- (BOOL)_addChange:(void *)change toData:(id)data numActionsP:(int *)p runningSizeP:(int *)p4 maxResources:(int)resources maxSize:(int)size foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders;	// 0x8cbd
- (BOOL)_handleErrorItem:(id)item forBAItem:(void *)baitem;	// 0x8b0d
@end
