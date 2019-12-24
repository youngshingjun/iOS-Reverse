/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/XXUnknownSuperclass.h>
#import <CoreMediaStream/NSCoding.h>

@class NSData, NSString, NSArray, MSAsset;

@interface MSAssetCollection : XXUnknownSuperclass <NSCoding> {
@private
	NSString *_assetCollectionID;	// 4 = 0x4
	MSAsset *_masterAsset;	// 8 = 0x8
	NSArray *_derivedAssets;	// 12 = 0xc
	NSString *_fileName;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *fileName;	// G=0xd84d; S=0xd85d; @synthesize=_fileName
@property(retain, nonatomic) NSArray *derivedAssets;	// G=0xd385; S=0xd395; 
@property(readonly, assign, nonatomic) NSData *masterAssetHash;	// G=0xd35d; 
@property(retain, nonatomic) MSAsset *masterAsset;	// G=0xd819; S=0xd829; @synthesize=_masterAsset
@property(retain, nonatomic) NSString *assetCollectionID;	// G=0xd7e5; S=0xd7f5; @synthesize=_assetCollectionID
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0xd1fd
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name;	// 0xd1b5
// declared property setter: - (void)setFileName:(id)name;	// 0xd85d
// declared property getter: - (id)fileName;	// 0xd84d
// declared property setter: - (void)setMasterAsset:(id)asset;	// 0xd829
// declared property getter: - (id)masterAsset;	// 0xd819
// declared property setter: - (void)setAssetCollectionID:(id)anId;	// 0xd7f5
// declared property getter: - (id)assetCollectionID;	// 0xd7e5
- (id)initWithCoder:(id)coder;	// 0xd6f1
- (void)encodeWithCoder:(id)coder;	// 0xd631
- (BOOL)isEqual:(id)equal;	// 0xd591
- (id)description;	// 0xd48d
// declared property setter: - (void)setDerivedAssets:(id)assets;	// 0xd395
// declared property getter: - (id)derivedAssets;	// 0xd385
// declared property getter: - (id)masterAssetHash;	// 0xd35d
- (void)dealloc;	// 0xd2d5
- (id)initWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0xd245
@end
