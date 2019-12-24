/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/AppStoreUI-Structs.h>


@protocol ADDataStoreConsumer
- (void)distributionReceived:(XXStruct_j7IYfC *)received withDaysSince1970:(int)daysSince1970 forKey:(id)key;
- (void)scalarReceived:(long long)received withDaysSince1970:(int)daysSince1970 forKey:(id)key;
- (BOOL)shouldCancelQuery;
@end
