/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CPColorPalettizer.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface CPColorPalettizer : XXUnknownSuperclass {
@private
	tagOctree *m_pTree;	// 4 = 0x4
	bool isDefaultPaletteSize;	// 8 = 0x8
}
- (id)initWitMaxPaletteSize:(unsigned)size;	// 0x2c9f35
- (id)initWitDefaultPaletteSize;	// 0x2ca6f1
- (void)dealloc;	// 0x2ca6a1
- (bool)addNSColor:(id)color;	// 0x2ca5e5
- (bool)addQuadColor:(tagRgbQuad)color;	// 0x2ca525
- (void)createPalette;	// 0x2ca4ed
- (unsigned)paletteColorCount;	// 0x2c9e71
- (id)getPaletteDataRaw;	// 0x2ca3dd
- (id)getPngPaletteData;	// 0x2ca281
- (id)getPaletteData;	// 0x2ca0f1
- (int)paletteIndexFromNSColor:(id)nscolor;	// 0x2ca03d
- (int)paletteIndexFromQuadColor:(tagRgbQuad)quadColor;	// 0x2c9fa1
@end

@interface CPColorPalettizer (Private)
- (int)createOctree:(tagOctree **)octree maxPaletteSize:(unsigned short)size;	// 0x2ca809
- (int)deleteOctree:(tagOctree *)octree;	// 0x2caa21
- (int)createNodeOctree:(tagOctreeNode **)octree parent:(tagOctreeNode *)parent;	// 0x2ca8b5
- (int)deleteNodeOctree:(tagOctreeNode *)octree;	// 0x2caa8d
- (int)deleteListOctree:(tagLevelItem *)octree;	// 0x2caae1
- (int)addPixelToOctree:(tagOctree *)octree pixel:(tagRgbQuad)pixel;	// 0x2ca8dd
- (int)reduceOctree:(tagOctree *)octree;	// 0x2cab11
- (unsigned short)getPaletteFromOctree:(tagOctreeNode *)octree paletteEntry:(tagRgbQuad *)entry index:(unsigned short)index;	// 0x2ca759
- (int)rgbToIndexOctree:(tagOctree *)indexOctree source:(tagRgbQuad)source destination:(char *)destination;	// 0x2c9e9d
@end
