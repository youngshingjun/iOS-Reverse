/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/GQHTextSpan.h>


__attribute__((visibility("hidden")))
@interface GQHTextSpan : XXUnknownSuperclass {
}
+ (int)handleSpan:(id)span checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;	// 0x3a889
+ (int)handleTextList:(id)list checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;	// 0x3ab51
+ (int)handleTextListChild:(id)child outputBlanks:(BOOL)blanks state:(id)state;	// 0x3ae19
+ (int)handleTextBackgroundForStyle:(id)style destStyle:(id)style2 state:(id)state;	// 0x3aca1
+ (int)nonWhitespaceCount:(CFArrayRef)count;	// 0x3abed
@end

@interface GQHTextSpan (Private)
+ (int)handleTextMarker:(id)marker outputBlanks:(BOOL)blanks state:(id)state;	// 0x3b1f5
+ (int)handleAutoNumber:(id)number state:(id)state;	// 0x3b2dd
+ (int)handlePageStart:(id)start state:(id)state;	// 0x3a705
+ (int)handleAttachment:(id)attachment state:(id)state;	// 0x3a709
+ (int)handleContainerHint:(id)hint state:(id)state;	// 0x3a831
@end
