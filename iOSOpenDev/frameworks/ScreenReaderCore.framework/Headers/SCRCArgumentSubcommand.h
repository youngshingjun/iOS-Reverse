/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/XXUnknownSuperclass.h>

@class NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : XXUnknownSuperclass {
	NSString *_subcommandName;	// 4 = 0x4
	NSMutableArray *_optionArray;	// 8 = 0x8
}
@property(readonly, retain) NSString *subcommandName;	// G=0x75f9; converted property
@property(readonly, retain) NSMutableArray *optionArray;	// G=0x7609; converted property
+ (id)subcommandWithName:(id)name;	// 0x76c1
- (id)initWithName:(id)name;	// 0x7625
- (void)dealloc;	// 0x3b6d
- (void)addOptions;	// 0x75f5
- (BOOL)isEqual:(id)equal;	// 0x79e5
- (unsigned)hash;	// 0x79c5
- (int)compare:(id)compare;	// 0x797d
// converted property getter: - (id)subcommandName;	// 0x75f9
// converted property getter: - (id)optionArray;	// 0x7609
- (id)formattedHelpHeader;	// 0x7619
- (id)formattedHelpFooter;	// 0x761d
- (void)addOption:(id)option argument:(id)argument target:(id)target action:(SEL)action argumentDescription:(id)description required:(BOOL)required;	// 0x7859
- (int)run;	// 0x7621
- (void)stop;	// 0x42dd
- (void)showHelp;	// 0x7855
- (id)description;	// 0x770d
@end