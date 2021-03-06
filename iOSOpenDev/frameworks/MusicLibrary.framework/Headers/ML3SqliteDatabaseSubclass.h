/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/MusicLibrary-Structs.h>



@protocol ML3SqliteDatabaseSubclass <NSObject>
+ (BOOL)migrateFromVersion:(int)version outUserVersion:(int *)version2 usingHandle:(sqlite3 *)handle;
+ (int)userVersionCurrent;
+ (id)allSchemaSQL;
+ (id)databasePath;
@optional
+ (void)registerFunctionsOnHandle:(sqlite3 *)handle;
+ (void)limitCacheSize:(sqlite3 *)size;
+ (BOOL)attachAuxiliaryDatabases:(sqlite3 *)databases;
- (void)reconnectBackgroundDatabaseContext;
- (void)reconnectMainDatabaseContext;
@end
