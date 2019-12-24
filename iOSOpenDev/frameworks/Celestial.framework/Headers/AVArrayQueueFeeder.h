/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {
@private
	NSMutableArray *_items;	// 4 = 0x4
}
- (id)init;	// 0x16519
- (id)initWithArray:(id)array;	// 0x16845
- (void)dealloc;	// 0x167f9
- (id)itemForIndex:(unsigned)index;	// 0x167b9
- (unsigned)itemCount;	// 0x167a9
- (unsigned)numberOfPaths;	// 0x16789
- (id)pathAtIndex:(unsigned)index;	// 0x166d1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x16691
- (void)removeObjectAtIndex:(unsigned)index;	// 0x16651
- (void)shuffleWithCurrentIndex:(unsigned)currentIndex;	// 0x1657d
@end
