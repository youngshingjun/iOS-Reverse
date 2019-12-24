/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/XXUnknownSuperclass.h>


@interface GEOVoltaireRasterTileTrafficSegment : XXUnknownSuperclass {
	XXStruct_K5nmsA *_vertices;	// 4 = 0x4
	int _vertexCount;	// 8 = 0x8
	BOOL _hasSpeed;	// 12 = 0xc
	int _speed;	// 16 = 0x10
	BOOL _hasWidth;	// 20 = 0x14
	int _width;	// 24 = 0x18
}
@property(assign, nonatomic) int width;	// G=0x286b9; S=0x2861d; @synthesize=_width
@property(assign, nonatomic) BOOL hasWidth;	// G=0x28689; S=0x28699; @synthesize=_hasWidth
@property(assign, nonatomic) int speed;	// G=0x286a9; S=0x285f1; @synthesize=_speed
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x28669; S=0x28679; @synthesize=_hasSpeed
@property(readonly, assign, nonatomic) int vertexCount;	// G=0x28659; @synthesize=_vertexCount
@property(readonly, assign, nonatomic) XXStruct_K5nmsA *vertices;	// G=0x28649; @synthesize=_vertices
// declared property getter: - (int)width;	// 0x286b9
// declared property getter: - (int)speed;	// 0x286a9
// declared property setter: - (void)setHasWidth:(BOOL)width;	// 0x28699
// declared property getter: - (BOOL)hasWidth;	// 0x28689
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x28679
// declared property getter: - (BOOL)hasSpeed;	// 0x28669
// declared property getter: - (int)vertexCount;	// 0x28659
// declared property getter: - (XXStruct_K5nmsA *)vertices;	// 0x28649
// declared property setter: - (void)setWidth:(int)width;	// 0x2861d
// declared property setter: - (void)setSpeed:(int)speed;	// 0x285f1
- (void)setVertices:(XXStruct_K5nmsA *)vertices count:(int)count;	// 0x2859d
@end