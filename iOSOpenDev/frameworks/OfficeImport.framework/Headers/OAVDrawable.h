/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface OAVDrawable : XXUnknownSuperclass {
}
+ (xmlDoc *)vmlDocumentFromPart:(id)part;	// 0x1c66fd
+ (id)readDrawableFromNode:(xmlNode *)node inNamespace:(id)aNamespace state:(id)state;	// 0x19a399
+ (id)readDrawablesFromParent:(xmlNode *)parent inNamespace:(id)aNamespace state:(id)state;	// 0x19a311
+ (void)readFromDrawable:(xmlNode *)drawable toDrawable:(id)drawable2 state:(id)state;	// 0x19ad29
+ (CGRect)readCoordBounds:(xmlNode *)bounds;	// 0x201f65
@end