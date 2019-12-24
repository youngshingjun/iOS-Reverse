/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */




@interface PCLogging : NSObject {
}
+ (void)initialize;	// 0xc571
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0xbb91
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format;	// 0xc549
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format arguments:(void *)arguments;	// 0xc16d
+ (void)logKeepAliveInterval:(double)interval forServiceIdentifier:(id)serviceIdentifier;	// 0xbbdd
+ (id)logFileDirectory;	// 0xc141
+ (id)_stringWithCurrentTime;	// 0xc0e5
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0xbe15
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0xbbb5
+ (void)enableFileLogging:(BOOL)logging;	// 0xbbc9
+ (void)enableLoggingForCustomHandler:(id)customHandler;	// 0xbce5
@end
