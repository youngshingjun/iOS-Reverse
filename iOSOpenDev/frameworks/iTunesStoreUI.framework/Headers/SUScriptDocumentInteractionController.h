/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptDocumentInteractionController : SUScriptObject {
	SUScriptFunction *_cancelFunction;	// 36 = 0x24
	SUScriptFunction *_openWithFunction;	// 40 = 0x28
}
@property(copy) NSString *UTI;	// G=0xd0299; S=0xd0181; 
@property(retain) WebScriptObject *openWithFunction;	// G=0xcfee9; S=0xd005d; 
@property(retain) WebScriptObject *cancelFunction;	// G=0xcfe8d; S=0xcff39; 
+ (void)initialize;	// 0xd074d
+ (id)webScriptNameForSelector:(SEL)selector;	// 0xd0695
+ (id)webScriptNameForKey:(const char *)key;	// 0xd05f1
- (id)scriptAttributeKeys;	// 0xd06ed
- (id)attributeKeys;	// 0xd06dd
- (id)_openWithFunction;	// 0xd0591
- (id)_nativeObject;	// 0xd04cd
- (id)_nativeDocumentInteractionController;	// 0xd04a5
- (id)_cancelFunction;	// 0xd0445
// declared property getter: - (id)UTI;	// 0xd0299
// declared property setter: - (void)setUTI:(id)uti;	// 0xd0181
// declared property setter: - (void)setOpenWithFunction:(id)function;	// 0xd005d
// declared property setter: - (void)setCancelFunction:(id)function;	// 0xcff39
// declared property getter: - (id)openWithFunction;	// 0xcfee9
- (id)_className;	// 0xcfedd
// declared property getter: - (id)cancelFunction;	// 0xcfe8d
- (void)showOpenWithMenuFromNavigationItem:(id)navigationItem;	// 0xcfbdd
- (void)showOpenWithMenuFromDOMElement:(id)domelement;	// 0xcf6cd
- (void)dismissMenuAnimated:(id)animated;	// 0xcf5f5
- (void)dealloc;	// 0xcf565
@end
