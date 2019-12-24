/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */




@interface IMHandleRegistrar : NSObject {
	id _internal;	// 4 = 0x4
}
@property(assign, nonatomic) int nameStyle;	// G=0xb981; S=0x32121; 
+ (id)sharedInstance;	// 0x1b2d
- (void)_clearAccountSiblingsForGUID:(id)guid;	// 0x3353d
- (id)_existingAccountSiblingsForHandle:(id)handle;	// 0x33251
- (id)_accountSiblingsForHandle:(id)handle;	// 0x32f65
- (void)_accountsChanged:(id)changed;	// 0x32f15
- (void)_dumpOutAllIMHandlesForAccount:(id)account;	// 0x32da9
- (void)_dumpOutAllIMHandles;	// 0x32d55
- (void)imHandleInfoChanged:(id)changed;	// 0xbc81
- (void)rebuildUniqueNameMap;	// 0x32d41
- (void)_rebuildUniqueNameMapWithStyleChange:(BOOL)styleChange;	// 0x32491
- (void)reassessIMHandleForUniqueName:(id)uniqueName;	// 0xb37d
- (void)reassessIMHandleForUniqueName:(id)uniqueName rebuild:(BOOL)rebuild;	// 0xb391
- (id)candidateUniqueNamesForIMHandle:(id)imhandle;	// 0x321d1
- (id)allIMHandles;	// 0x321b1
- (id)siblingsForIMHandle:(id)imhandle;	// 0x12c55
- (void)clearSiblingCacheForIMHandle:(id)imhandle;	// 0x3219d
- (void)unregisterIMHandle:(id)handle;	// 0x159d9
- (void)clearNameReservationsForObject:(id)object;	// 0x15ef5
- (void)registerIMHandle:(id)handle;	// 0xa009
- (void)_clearSiblingsCacheForIMHandle:(id)imhandle rebuildAfter:(BOOL)after;	// 0x15d95
- (void)_buildSiblingsForIMHandle:(id)imhandle;	// 0x12d29
- (void)_emptySiblingCacheForIMHandleGUID:(id)imhandleGUID;	// 0xa1fd
// declared property setter: - (void)setNameStyle:(int)style;	// 0x32121
// declared property getter: - (int)nameStyle;	// 0xb981
- (void)dealloc;	// 0x320a1
- (id)init;	// 0x1b91
- (BOOL)retainWeakReference;	// 0x3209d
- (BOOL)allowsWeakReference;	// 0x32099
- (void)_addressBookChanged;	// 0x31ddd
@end
