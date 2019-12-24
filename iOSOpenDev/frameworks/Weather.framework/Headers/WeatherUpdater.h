/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <Weather/WeatherXMLHTTPRequest.h>
#import <Weather/Weather-Structs.h>

@class NSMutableArray;
@protocol WeatherUpdaterDelegate;

@interface WeatherUpdater : WeatherXMLHTTPRequest {
	NSMutableArray *_updatingCities;	// 16 = 0x10
	NSMutableArray *_pendingCities;	// 20 = 0x14
	id<WeatherUpdaterDelegate> _delegate;	// 24 = 0x18
}
- (BOOL)isDataValid:(id)valid;	// 0x7e21
- (void)parsedResultCity:(id)city;	// 0x7e25
- (void)failCity:(id)city;	// 0x7e29
- (void)setDelegate:(id)delegate;	// 0x7e2d
- (id)init;	// 0x94dd
- (void)dealloc;	// 0x7e3d
- (void)_updateNextPendingCity;	// 0x941d
- (void)addCityToPendingQueue:(id)pendingQueue;	// 0x93d5
- (void)_failed:(int)failed;	// 0x9315
- (void)processDocument:(xmlDoc *)document;	// 0x809d
- (void)loadRequestURL:(id)url parameters:(id)parameters;	// 0x7fc9
- (void)didProcessDocument;	// 0x7f69
- (void)failWithError:(id)error;	// 0x7f01
- (BOOL)isUpdatingCity:(id)city;	// 0x7eb1
@end
