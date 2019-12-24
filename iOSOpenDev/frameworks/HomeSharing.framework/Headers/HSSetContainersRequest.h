/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>


@interface HSSetContainersRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId itemIDs:(id)ids;	// 0xf219
- (id)_bodyDataForContainerID:(unsigned)containerID itemIDs:(id)ids;	// 0xf305
- (id)canonicalResponseForResponse:(id)response;	// 0xf26d
- (id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId itemIDs:(id)ids;	// 0xf151
@end
