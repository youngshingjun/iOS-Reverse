/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSThread;

__attribute__((visibility("hidden")))
@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {
	NSThread *_thread;	// 8 = 0x8
	BOOL _immediateForMatchingThread;	// 12 = 0xc
}
- (void)forwardInvocation:(id)invocation;	// 0xa039
- (void)dealloc;	// 0x9fed
- (id)initWithTarget:(id)target thread:(id)thread immediateForMatchingThread:(BOOL)matchingThread;	// 0x9f65
@end
