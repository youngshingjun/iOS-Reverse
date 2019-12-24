/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface PBHeadersFooters : XXUnknownSuperclass {
}
+ (id)headersFootersContainerWithSlideContainer:(id)slideContainer state:(id)state;	// 0x836dd
+ (PptHeadersFootersAtom *)headersFootersAtomWithHeadersFootersContainer:(id)headersFootersContainer;	// 0x83771
+ (id)readStringWithInstance:(int)instance fromContainer:(id)container;	// 0x842b5
+ (void)readHeaderFooterTextFromHeadersFootersContainer:(id)headersFootersContainer toPlaceholderShape:(id)placeholderShape;	// 0x84001
+ (void)addCopyOfHeaderFooterPlaceholderOfType:(int)type toDrawables:(id)drawables slideBase:(id)base headersFootersContainer:(id)container state:(id)state;	// 0x8389d
+ (void)readHeadersFootersTextToSlideMasterDrawables:(id)slideMasterDrawables state:(id)state;	// 0xc2c79
+ (void)readHeadersFootersToSlideLayout:(id)slideLayout drawables:(id)drawables state:(id)state;	// 0xc4aa9
+ (void)readHeadersFootersFromSlideContainer:(id)slideContainer toSlide:(id)slide drawables:(id)drawables state:(id)state;	// 0x83639
@end
