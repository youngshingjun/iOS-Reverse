/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (ISAdditions)
+ (id)unescapedStringForString:(id)string;	// 0x5181
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x5085
+ (id)escapedStringForString:(id)string;	// 0x5045
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x4edd
- (void)enumerateQueryWithBlock:(id)block;	// 0x5935
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x58a9
- (id)schemeSwizzledURL;	// 0x56b1
- (BOOL)isSafeExternalURL;	// 0x5509
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x5209
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x51cd
@end

@interface XXUnknownSuperclass (ISAdditions)
- (id)copyUTF8StringOfLength:(unsigned)length;	// 0x5af1
@end

@interface XXUnknownSuperclass (ISInvocationAdditions)
- (id)mainThreadProxy;	// 0x7229
- (id)delayedProxy:(double)proxy;	// 0x71c1
- (id)blockingMainThreadProxy;	// 0x7161
@end

@interface XXUnknownSuperclass (ISURLBagAdditions)
- (id)sanitizedURL;	// 0xe3c5
@end

@interface XXUnknownSuperclass (ISAdditions)
- (BOOL)isFatalError;	// 0x1281d
- (BOOL)isEqual:(id)equal compareUserInfo:(BOOL)info;	// 0x12651
- (id)errorBySettingFatalError:(BOOL)error;	// 0x12619
@end

@interface XXUnknownSuperclass (ISAdditions)
+ (BOOL)_storeMovePath:(id)path toPath:(id)path2;	// 0x1b4cd
+ (BOOL)ensureDirectoryExists:(id)exists;	// 0x1b441
+ (id)cacheDirectoryPathWithName:(id)name;	// 0x1b3e9
@end

@interface XXUnknownSuperclass (ISAdditions)
- (long long)maxExpectedContentLength;	// 0x213b9
- (id)_iTunesStore_valueForHTTPHeader:(id)httpheader;	// 0x21369
- (BOOL)getAppleMaxAge:(double *)age;	// 0x21315
- (double)expirationInterval;	// 0x21289
- (id)expirationDate;	// 0x21235
- (id)_dateFromExpires;	// 0x211ed
- (BOOL)_getCacheControlMaxAge:(double *)age;	// 0x21085
@end

@interface XXUnknownSuperclass (ISAdditions)
- (id)allHeaderFields;	// 0x21451
- (int)statusCode;	// 0x2144d
- (long long)maxExpectedContentLength;	// 0x2143d
@end

@interface XXUnknownSuperclass (ISAdditions)
+ (id)pathForITunesStoreResource:(id)itunesStoreResource ofType:(id)type;	// 0x26441
@end
