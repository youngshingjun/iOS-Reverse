/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, NSURL, ICSUserAddress, NSString;

@interface ICSJournal : ICSComponent {
}
@property(retain) NSURL *url;	// @dynamic
@property(retain) NSString *uid;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(assign) int status;	// @dynamic
@property(assign) unsigned sequence;	// @dynamic
@property(retain) NSArray *rrule;	// @dynamic
@property(retain) ICSDate *recurrence_id;	// @dynamic
@property(retain) NSArray *rdate;	// @dynamic
@property(retain) ICSUserAddress *organizer;	// @dynamic
@property(retain) ICSDate *last_modified;	// @dynamic
@property(retain) NSArray *exrule;	// @dynamic
@property(retain) NSArray *exdate;	// @dynamic
@property(retain) ICSDate *dtstart;	// @dynamic
@property(retain) ICSDate *dtstamp;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) ICSDate *created;	// @dynamic
@property(assign) int classification;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) NSArray *attach;	// @dynamic
+ (id)name;	// 0xc7d5
- (BOOL)validate:(id *)validate;	// 0xc7e1
@end
