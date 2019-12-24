/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/NSColorStub.h>


@interface NSColorStub (EDColorAdditions)
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0xd8bf9
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x1d8b15
@end

@interface NSColorStub (WBColorAdditions)
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x13b049
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x26c8e5
- (CsColour)csColour;	// 0x26c861
- (EshColor)eshColor;	// 0x26c899
@end

@interface NSColorStub (OAAdditions)
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x2ad4f1
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x2ad569
- (CsColour)csColour;	// 0x2ad46d
- (EshColor)eshColor;	// 0x2ad4a5
@end

@interface NSColorStub (MFColour)
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x97061
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x1c07a5
@end

@interface NSColorStub (CPColorAdditions)
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x2cb4a9
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x2cb521
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x2cb5a5
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0xe15b9
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x2cb281
+ (id)stringForColor:(id)color;	// 0x2cb629
- (tagRgbQuad)ttColor;	// 0xce8f5
- (id)rgbColor;	// 0xce9bd
- (id)solidColoredBitmap:(CGSize)bitmap;	// 0x2cb279
- (id)solidColoredPngImage;	// 0x2cb27d
- (unsigned long)toBGR;	// 0x2cb6ed
- (id)colorWithTintValue:(double)tintValue;	// 0x1d1545
- (id)colorWithShadeValue:(double)shadeValue;	// 0x1bbf9d
@end
