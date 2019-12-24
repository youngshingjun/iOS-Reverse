/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class LBSGGeocodeRequest, LBSGCellularProfile, LBSGLocation;

@interface LBSGLocRequestElement : XXUnknownSuperclass {
	LBSGCellularProfile *_cellularProfile;	// 4 = 0x4
	LBSGLocation *_location;	// 8 = 0x8
	LBSGGeocodeRequest *_geocode;	// 12 = 0xc
}
@property(retain, nonatomic) LBSGGeocodeRequest *geocode;	// G=0x2f375; S=0x2f385; @synthesize=_geocode
@property(readonly, assign, nonatomic) BOOL hasGeocode;	// G=0x2ed81; 
@property(retain, nonatomic) LBSGLocation *location;	// G=0x2f341; S=0x2f351; @synthesize=_location
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x2ed69; 
@property(retain, nonatomic) LBSGCellularProfile *cellularProfile;	// G=0x2f30d; S=0x2f31d; @synthesize=_cellularProfile
@property(readonly, assign, nonatomic) BOOL hasCellularProfile;	// G=0x2ed51; 
// declared property setter: - (void)setGeocode:(id)geocode;	// 0x2f385
// declared property getter: - (id)geocode;	// 0x2f375
// declared property setter: - (void)setLocation:(id)location;	// 0x2f351
// declared property getter: - (id)location;	// 0x2f341
// declared property setter: - (void)setCellularProfile:(id)profile;	// 0x2f31d
// declared property getter: - (id)cellularProfile;	// 0x2f30d
- (void)writeTo:(id)to;	// 0x2f151
- (BOOL)readFrom:(id)from;	// 0x2eeb5
- (id)dictionaryRepresentation;	// 0x2ee09
- (id)description;	// 0x2ed99
// declared property getter: - (BOOL)hasGeocode;	// 0x2ed81
// declared property getter: - (BOOL)hasLocation;	// 0x2ed69
// declared property getter: - (BOOL)hasCellularProfile;	// 0x2ed51
- (void)dealloc;	// 0x2ece5
@end
