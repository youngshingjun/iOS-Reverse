/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GMMPixelPoint : XXUnknownSuperclass {
	int _pixelX;	// 4 = 0x4
	int _pixelY;	// 8 = 0x8
	int _zoomLevel;	// 12 = 0xc
}
@property(assign, nonatomic) int zoomLevel;	// G=0x155d5; S=0x155e5; @synthesize=_zoomLevel
@property(assign, nonatomic) int pixelY;	// G=0x155b5; S=0x155c5; @synthesize=_pixelY
@property(assign, nonatomic) int pixelX;	// G=0x15595; S=0x155a5; @synthesize=_pixelX
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x155e5
// declared property getter: - (int)zoomLevel;	// 0x155d5
// declared property setter: - (void)setPixelY:(int)y;	// 0x155c5
// declared property getter: - (int)pixelY;	// 0x155b5
// declared property setter: - (void)setPixelX:(int)x;	// 0x155a5
// declared property getter: - (int)pixelX;	// 0x15595
- (void)writeTo:(id)to;	// 0x15535
- (BOOL)readFrom:(id)from;	// 0x15425
- (id)dictionaryRepresentation;	// 0x1534d
- (id)description;	// 0x152dd
- (void)dealloc;	// 0x152b1
@end
