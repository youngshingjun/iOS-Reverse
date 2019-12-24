/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */



@class UIBarButtonItem, UITableViewCell;
@protocol CertInfoTrustDescription, CertInfoTrustSummaryControllerDelegate;

@interface CertInfoTrustSummaryController : NSObject {
	id<CertInfoTrustDescription> _description;	// 168 = 0xa8
	id<CertInfoTrustSummaryControllerDelegate> _delegate;	// 172 = 0xac
	UIBarButtonItem *_doneButton;	// 176 = 0xb0
	UITableViewCell *_headerCell;	// 180 = 0xb4
	UITableViewCell *_descriptionCell;	// 184 = 0xb8
	unsigned _showsDoneButton : 1;	// 188 = 0xbc
}
@property(assign, nonatomic) BOOL showsDoneButton;	// G=0x5af9; S=0x59d5; 
@property(assign, nonatomic) id<CertInfoTrustSummaryControllerDelegate> delegate;	// G=0x6235; S=0x6245; @synthesize=_delegate
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x6245
// declared property getter: - (id)delegate;	// 0x6235
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x6231
- (id)_descriptionCell;	// 0x6179
- (id)_headerCell;	// 0x6019
- (id)_cellForReuseIdentifier:(id)reuseIdentifier;	// 0x5ebd
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x5df5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x5cb1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x5c41
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x5c3d
- (void)viewDidAppear:(BOOL)view;	// 0x5bed
- (void)_actionButtonPressed:(id)pressed;	// 0x5b9d
- (void)_doneButtonPressed:(id)pressed;	// 0x5b4d
- (void)setActionButtonTitle:(id)title destructive:(BOOL)destructive animated:(BOOL)animated;	// 0x5b0d
// declared property getter: - (BOOL)showsDoneButton;	// 0x5af9
// declared property setter: - (void)setShowsDoneButton:(BOOL)button;	// 0x59d5
- (void)dealloc;	// 0x594d
- (id)initWithTrustDescription:(id)trustDescription;	// 0x57f9
@end
