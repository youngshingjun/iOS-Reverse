/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/UITextFieldDelegate.h>

@class UITextField;
@protocol PLLibraryTableViewCellEditingDelegate;

@interface PLLibraryTableViewCell : XXUnknownSuperclass <UITextFieldDelegate> {
	UITextField *_editableText;	// 244 = 0xf4
	BOOL _allowsRename;	// 248 = 0xf8
	BOOL _cellEnabled;	// 249 = 0xf9
	id<PLLibraryTableViewCellEditingDelegate> _editingDelegate;	// 252 = 0xfc
}
@property(assign, nonatomic) id<PLLibraryTableViewCellEditingDelegate> editingDelegate;	// G=0x30c45; S=0x8aad; @synthesize=_editingDelegate
@property(assign, nonatomic) BOOL cellEnabled;	// G=0x30c35; S=0x8869; @synthesize=_cellEnabled
@property(readonly, assign, nonatomic, getter=isRenaming) BOOL renaming;	// G=0x2ffc5; 
@property(assign) BOOL allowsRename;	// G=0x30c25; S=0x8a9d; @synthesize=_allowsRename
+ (id)photoCountFormatter;	// 0x89f9
// declared property setter: - (void)setEditingDelegate:(id)delegate;	// 0x8aad
// declared property getter: - (id)editingDelegate;	// 0x30c45
// declared property getter: - (BOOL)cellEnabled;	// 0x30c35
// declared property setter: - (void)setAllowsRename:(BOOL)rename;	// 0x8a9d
// declared property getter: - (BOOL)allowsRename;	// 0x30c25
- (void)layoutSubviews;	// 0x8acd
- (CGPoint)destinationPointForMovePhotosAnimation;	// 0x30b51
- (void)animatePopRowWithDuration:(double)duration completion:(id)completion;	// 0x30645
- (CGRect)_editableFieldFrame;	// 0x30581
- (void)endRenaming;	// 0x30561
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x304f1
- (void)textFieldDidEndEditing:(id)textField;	// 0x304a1
- (void)textFieldDidBeginEditing:(id)textField;	// 0x30465
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x3044d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x8e1d
- (void)didTransitionToState:(unsigned)state;	// 0x303f1
- (void)willTransitionToState:(unsigned)state;	// 0x2fff9
// declared property getter: - (BOOL)isRenaming;	// 0x2ffc5
- (void)setText:(id)text photoCount:(int)count posterImage:(id)image;	// 0x88dd
// declared property setter: - (void)setCellEnabled:(BOOL)enabled;	// 0x8869
- (void)prepareForReuse;	// 0x2f691
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x86c5
@end
