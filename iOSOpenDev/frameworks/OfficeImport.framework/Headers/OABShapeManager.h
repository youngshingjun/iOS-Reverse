/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABShapeBaseManager.h>
#import <OfficeImport/OABPropertiesManager.h>


__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
@private
	EshShape *mShape;	// 20 = 0x14
}
- (id)initWithShape:(EshShape *)shape masterShape:(EshShape *)shape2;	// 0xad51
- (id)initWithShape:(EshShape *)shape;	// 0x211825
- (BOOL)isFillOK;	// 0xc7179
- (BOOL)isStrokeOK;	// 0xc6d8d
- (BOOL)isShadowOK;	// 0x14d9a1
- (BOOL)isFilled;	// 0xb8c9
- (BOOL)isStroked;	// 0x7c755
- (BOOL)isShadowed;	// 0x7d435
- (BOOL)isTextPath;	// 0x7aab5
- (id)textPathUnicodeString;	// 0x17f521
- (int)textPathTextAlignment;	// 0x17f499
- (long)textPathFontSize;	// 0x17faa1
- (id)textPathFontFamily;	// 0x17f9e9
- (BOOL)textPathBold;	// 0x17fb15
- (BOOL)textPathItalic;	// 0x17fb89
- (BOOL)textPathUnderline;	// 0x2fcc71
- (BOOL)textPathSmallcaps;	// 0x17fbfd
- (BOOL)textPathStrikethrough;	// 0x2fcc21
- (BOOL)hidden;	// 0x83505
@end