/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EBFill.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EBFill : XXUnknownSuperclass {
}
+ (id)edFillFromXlXf:(XlXf *)xlXf edResources:(id)resources;	// 0xdfda9
+ (id)edFillFromXlDXf:(XlDXf *)xlDXf edResources:(id)resources;	// 0x10ee89
@end

@interface EBFill (Private)
+ (int)convertXlFillPatternEnumToED:(int)ed;	// 0xdff45
@end
