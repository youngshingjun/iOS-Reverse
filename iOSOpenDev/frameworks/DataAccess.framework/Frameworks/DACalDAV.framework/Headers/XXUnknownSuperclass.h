/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (CALExtensions)
- (BOOL)isNull;	// 0x13001
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)ellipsisString;	// 0x13031
@end

@interface XXUnknownSuperclass (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x130ad
- (id)stringByEncodingSlashes;	// 0x13065
@end

@interface XXUnknownSuperclass (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x132a1
- (BOOL)isPathToICalBookmark;	// 0x13231
- (BOOL)isPathToBackupFile;	// 0x131f1
- (BOOL)isPathToICalData;	// 0x131b1
- (BOOL)isPathToVCalData;	// 0x1312d
- (BOOL)isPathToAppleScript;	// 0x130ed
@end

@interface XXUnknownSuperclass (CalendarExtensions)
- (void)searchAndReplaceInString:(id)string withString:(id)string2;	// 0x13419
- (void)replaceOccurrencesOfString:(id)string withString:(id)string2;	// 0x133d9
- (void)searchAndReplaceSet:(id)set withString:(id)string;	// 0x13331
@end

@interface XXUnknownSuperclass (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x13a01
- (BOOL)hasPrefixCaseInsensitive:(id)insensitive;	// 0x13ab9
- (id)safeFilename;	// 0x13a45
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x138bd
- (id)unquote;	// 0x1380d
- (id)trimChar:(unsigned short)aChar;	// 0x137dd
- (id)trimFirstChar:(unsigned short)aChar;	// 0x1378d
- (id)trimFinalChar:(unsigned short)aChar;	// 0x1372d
- (id)trimCommas;	// 0x13705
- (id)trimFirstComma;	// 0x136b9
- (id)trimFinalComma;	// 0x1365d
- (id)trimWhiteSpace;	// 0x13615
- (id)quote;	// 0x13565
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)convertFromBinaryXML:(id)binaryXML;	// 0x13ca9
+ (id)convertFromXML:(id)xml;	// 0x13c2d
- (id)dictionaryFromChanges:(id)changes;	// 0x13dbd
- (id)deepCopy;	// 0x13cd9
- (id)convertToBinaryXML;	// 0x13c5d
- (id)convertToXML;	// 0x13be1
- (id)mutableCopyWithElementsCopy;	// 0x13b01
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)convertFromXML:(id)xml;	// 0x140d1
- (BOOL)containsObject:(id)object matchingComparison:(SEL)comparison;	// 0x14275
- (unsigned)indexOfObject:(id)object matchingComparison:(SEL)comparison;	// 0x14209
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x141e5
- (id)deepCopy;	// 0x14101
- (id)convertToXML;	// 0x14085
- (id)descriptionByPointer;	// 0x13fbd
- (id)allObjectsWithClass:(Class)aClass;	// 0x13f1d
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)nonRetainingSet;	// 0x14339
- (id)allObjectsWithClass:(Class)aClass;	// 0x14299
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)nonRetainingArray;	// 0x144ed
- (void)applySelector:(SEL)selector withObject:(id)object;	// 0x14479
- (void)applySelector:(SEL)selector;	// 0x14465
- (void)removeAllObjectsWithClass:(Class)aClass;	// 0x14389
@end

@interface XXUnknownSuperclass (CALExtensions)
- (BOOL)isEqualToURL:(id)url;	// 0x147b5
- (id)serverURL;	// 0x146d1
- (id)lastRawPathComponent;	// 0x146a9
- (id)unquotedPassword;	// 0x1467d
- (id)queryParameters;	// 0x1453d
@end

@interface XXUnknownSuperclass (CALExtensions)
+ (id)nonRetainingKeyDictionary;	// 0x14df9
+ (id)nonRetainingKeyAndValueDictionary;	// 0x14d79
+ (id)nonRetainingDictionary;	// 0x14cfd
+ (id)newDictionaryKeyString;	// 0x14be1
@end

@interface XXUnknownSuperclass (CALExtensions)
- (BOOL)fastWriteToFile:(id)file;	// 0x14e75
@end

@interface XXUnknownSuperclass (CALExtensions)
- (BOOL)iCalIsEqualToError:(id)error;	// 0x14ef5
@end

@interface XXUnknownSuperclass (CalNSStringEmailAddressAdditions)
- (id)stringRemovingMailto;	// 0x15509
- (id)stringAddingMailto;	// 0x154c9
- (BOOL)resemblesEmailAddress;	// 0x15409
- (BOOL)hasMailto;	// 0x153e9
@end

@interface XXUnknownSuperclass (CalDAVChildExtension)
- (BOOL)isCalDAVChildAccount;	// 0x1a431
@end
