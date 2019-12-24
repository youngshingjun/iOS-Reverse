/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/UIDocumentInteractionControllerDelegate.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UIDocumentInteractionController;

@interface SUDocumentInteractionSession : XXUnknownSuperclass <UIDocumentInteractionControllerDelegate> {
	id _completionHandler;	// 4 = 0x4
	UIDocumentInteractionController *_documentInteractionController;	// 8 = 0x8
}
@property(copy, nonatomic) id completionHandler;	// G=0x89955; S=0x89965; @synthesize=_completionHandler
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x89965
// declared property getter: - (id)completionHandler;	// 0x89955
- (void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;	// 0x898f5
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;	// 0x898a9
- (void)cancel;	// 0x89829
- (void)dealloc;	// 0x897b1
- (id)initWithDocumentInteractionController:(id)documentInteractionController;	// 0x89745
@end
