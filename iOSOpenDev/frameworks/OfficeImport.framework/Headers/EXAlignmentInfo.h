/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EXAlignmentInfo.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EXAlignmentInfo : XXUnknownSuperclass {
}
+ (id)edAlignmentInfoFromXmlAlignmentInfoElement:(xmlNode *)xmlAlignmentInfoElement state:(id)state;	// 0x1a43a5
+ (id)edAlignmentInfoFromVmlAlignmentInfoElement:(xmlNode *)vmlAlignmentInfoElement state:(id)state;	// 0x20ef25
@end

@interface EXAlignmentInfo (Private)
+ (int)edHorizontalAlignFromHorizontalAlignString:(id)horizontalAlignString;	// 0x1a45ed
+ (int)edVerticalAlignFromVerticalAlignString:(id)verticalAlignString;	// 0x1a455d
@end
