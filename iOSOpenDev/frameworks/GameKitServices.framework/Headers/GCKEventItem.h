/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GameKitServices-Structs.h>
#import <GameKitServices/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GCKEventItem : XXUnknownSuperclass {
@private
	XXStruct_jB8chB *_event;	// 4 = 0x4
	unsigned _pid;	// 8 = 0x8
}
@property(assign) XXStruct_jB8chB *event;	// G=0x19e69; S=0x19e79; @synthesize=_event
@property(assign) unsigned pid;	// G=0x19e49; S=0x19e59; @synthesize=_pid
- (id)init;	// 0x19eb9
- (id)initWithEvent:(XXStruct_jB8chB *)event remotePeer:(unsigned)peer;	// 0x19f11
- (void)dealloc;	// 0x19ee5
// declared property getter: - (unsigned)pid;	// 0x19e49
// declared property setter: - (void)setPid:(unsigned)pid;	// 0x19e59
// declared property getter: - (XXStruct_jB8chB *)event;	// 0x19e69
// declared property setter: - (void)setEvent:(XXStruct_jB8chB *)event;	// 0x19e79
@end
