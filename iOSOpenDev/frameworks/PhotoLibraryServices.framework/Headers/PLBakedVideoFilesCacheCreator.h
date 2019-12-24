/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPhotoBakedThumbnailsDelegate.h>
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLCachedFilesManagerPlugin.h>
#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@class NSMutableDictionary, PLPhotoLibrary, NSLock;

@interface PLBakedVideoFilesCacheCreator : XXUnknownSuperclass <PLPhotoBakedThumbnailsDelegate, PLCachedFilesManagerPlugin> {
	BOOL _cancelPostProcessing;	// 4 = 0x4
	NSLock *_cancellationLock;	// 8 = 0x8
	NSMutableDictionary *_optionsDictionary;	// 12 = 0xc
@private
	PLPhotoLibrary *photoLibrary;	// 16 = 0x10
}
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary;	// G=0xb729; S=0xb739; @synthesize
// declared property setter: - (void)setPhotoLibrary:(id)library;	// 0xb739
// declared property getter: - (id)photoLibrary;	// 0xb729
- (void)_removeOldAlbumVideosBakedThumbnails;	// 0xb459
- (id)_pathToVideosMetadataFile;	// 0xb405
- (void)_createNewVideoCachedFiles;	// 0xb135
- (void)_garbageCollectCachedFiles;	// 0xad7d
- (void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;	// 0xad61
- (void)createBakedThumbnailsForVideo:(id)video;	// 0xab51
- (void)_addBakedThumbnailsForVideo:(id)video toCollection:(id)collection sourceFormat:(int)format bakedFormats:(id)formats;	// 0xab4d
- (void)cancel;	// 0xab01
- (BOOL)recreateCachedFilesIfNecessary;	// 0xaa61
- (void)dealloc;	// 0xa9c9
- (id)initWithPhotoLibrary:(id)photoLibrary;	// 0xa935
@end
