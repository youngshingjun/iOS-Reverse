/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/SAAceCommand.h>

@class NSArray;

@protocol SAClientBoundCommand <SAAceCommand>
@property(copy, nonatomic) NSArray *callbacks;
// declared property setter: - (void)setCallbacks:(id)callbacks;
// declared property getter: - (id)callbacks;
- (BOOL)requiresResponse;
@end
