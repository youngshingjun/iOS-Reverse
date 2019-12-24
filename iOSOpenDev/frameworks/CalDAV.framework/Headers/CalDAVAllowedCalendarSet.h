/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class NSMutableSet;

@interface CalDAVAllowedCalendarSet : XXUnknownSuperclass {
	NSMutableSet *_componentSets;	// 24 = 0x18
}
+ (BOOL)allowedCalendars:(id)calendars contains:(id)contains;	// 0x1f3b9
- (id)copyParseRules;	// 0x1f165
- (id)init;	// 0x1f271
- (void)dealloc;	// 0x1f36d
- (id)componentsAsString;	// 0x1f529
- (id)description;	// 0x1f4a5
- (void)addCompSet:(id)set;	// 0x1f2ad
- (id)childrenToWrite;	// 0x1f319
@end
