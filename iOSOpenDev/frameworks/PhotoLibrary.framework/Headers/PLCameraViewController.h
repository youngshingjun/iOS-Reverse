/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>

@class PLCameraView, PLSyncProgressView;

@interface PLCameraViewController : XXUnknownSuperclass {
	PLCameraView *_cameraView;	// 152 = 0x98
	PLSyncProgressView *_rebuildProgressView;	// 156 = 0x9c
	BOOL _ignoreAppearCallbacks;	// 160 = 0xa0
}
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x50531
- (void)viewDidAppear:(BOOL)view;	// 0x504f9
- (void)viewWillDisappear:(BOOL)view;	// 0x504ad
- (void)dealloc;	// 0x50449
- (BOOL)_displaysFullScreen;	// 0x50445
@end
