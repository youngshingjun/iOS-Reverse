/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/XXUnknownSuperclass.h>
#import <WebKit/WebPluginManualLoader.h>
#import <WebKit/WebPluginContainerCheckController.h>

@class WAKView, NSMutableArray, WebDataSource, NSMutableSet;

@interface WebPluginController : XXUnknownSuperclass <WebPluginManualLoader, WebPluginContainerCheckController> {
@private
	WAKView *_documentView;	// 4 = 0x4
	WebDataSource *_dataSource;	// 8 = 0x8
	NSMutableArray *_views;	// 12 = 0xc
	BOOL _started;	// 16 = 0x10
	NSMutableSet *_checksInProgress;	// 20 = 0x14
	NSMutableArray *_viewsNotInDocument;	// 24 = 0x18
}
+ (id)plugInViewWithArguments:(id)arguments fromPluginPackage:(id)pluginPackage;	// 0x24199
+ (void)addPlugInView:(id)view;	// 0x2441d
+ (BOOL)isPlugInView:(id)view;	// 0x22d41
+ (void)pluginViewHidden:(id)hidden;	// 0x6cef1
- (id)initWithDocumentView:(id)documentView;	// 0xa931
- (void)setDataSource:(id)source;	// 0xaea1
- (void)dealloc;	// 0x28ab1
- (BOOL)plugInsAreRunning;	// 0x6d759
- (id)superlayerForPluginView:(id)pluginView;	// 0x6d719
- (void)stopOnePlugin:(id)plugin;	// 0x260f9
- (void)stopOnePluginForPageCache:(id)pageCache;	// 0x277ad
- (void)destroyOnePlugin:(id)plugin;	// 0x26255
- (void)startAllPlugins;	// 0xdc2d
- (void)stopAllPlugins;	// 0x28881
- (void)stopPluginsForPageCache;	// 0x276b1
- (void)restorePluginsFromCache;	// 0x6d5f1
- (void)pluginViewCreated:(id)created;	// 0x24475
- (void)addPlugin:(id)plugin;	// 0x24581
- (void)destroyPlugin:(id)plugin;	// 0x26025
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)loadRequest;	// 0x6d5b1
- (void)_cancelOutstandingChecks;	// 0x28989
- (void)destroyAllPlugins;	// 0x286fd
- (BOOL)processingUserGesture;	// 0x6d559
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)loadRequest inFrame:(id)frame resultObject:(id)object selector:(SEL)selector;	// 0x6d4e5
- (void)webPlugInContainerLoadRequest:(id)containerLoadRequest inFrame:(id)frame;	// 0x6d2d1
- (void)webPlugInContainerWillShowFullScreenForView:(id)webPlugInContainer;	// 0x6d281
- (void)webPlugInContainerDidHideFullScreenForView:(id)webPlugInContainer;	// 0x6d231
- (void)webPlugInContainerShowStatus:(id)containerShowStatus;	// 0x6d1d1
- (void)showStatus:(id)status;	// 0x6d1c1
- (id)webFrame;	// 0x24379
- (id)webView;	// 0x248c1
- (id)URLPolicyCheckReferrer;	// 0x6d169
- (void)pluginView:(id)view receivedResponse:(id)response;	// 0x6cfbd
- (void)pluginView:(id)view receivedData:(id)data;	// 0x6cf81
- (void)pluginView:(id)view receivedError:(id)error;	// 0x6cf45
- (void)pluginViewFinishedLoading:(id)loading;	// 0x6cf0d
- (void)_webPluginContainerSetMediaPlayerProxy:(id)proxy forElement:(id)element;	// 0x243c1
- (void)_webPluginContainerPostMediaPlayerNotification:(int)notification forElement:(id)element;	// 0x24ff9
@end
