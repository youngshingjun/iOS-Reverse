/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/GQDBGPresentation.h>
#import <iWorkImport/GQDRoot.h>
#import <iWorkImport/iWorkImport-Structs.h>


__attribute__((visibility("hidden")))
@interface GQDBGPresentation : GQDRoot {
@private
	CFArrayRef mThemes;	// 36 = 0x24
	CGSize mSlideSize;	// 40 = 0x28
	BOOL mIsOldAssetNameMapInitialized;	// 48 = 0x30
	CFDictionaryRef mOldAssetNameMap;	// 52 = 0x34
}
+ (void)initialize;	// 0x4509
+ (xmlNs *)appNamespace;	// 0x430d
+ (id)parseNumberOutOfBasename:(id)basename returningNumber:(int *)number;	// 0x43e9
- (id)init;	// 0x4391
- (void)dealloc;	// 0x4cfd
- (CFArrayRef)themes;	// 0x431d
- (void)addTheme:(id)theme;	// 0x4ce9
- (CGSize)slideSize;	// 0x432d
- (void)loadAppBundleResourceToColorMap;	// 0x4915
- (id)colorForMissingAppBundleResource:(CFStringRef)missingAppBundleResource processorBundle:(CFBundleRef)bundle;	// 0x4749
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x464d
- (void)initializeAppBundleResourcesUrl;	// 0x4345
@end

@interface GQDBGPresentation (Private)
- (CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)path processorBundle:(CFBundleRef)bundle;	// 0x4d59
@end
