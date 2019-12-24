/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/ASStructuredPageViewController.h>
#import <AppStoreUI/ISURLOperationDelegate.h>

@class ASScreenshotsViewController, ASApplicationPageView;

@interface ASSoftwarePageViewController : ASStructuredPageViewController <ISURLOperationDelegate> {
	ASApplicationPageView *_pageView;	// 260 = 0x104
	ASScreenshotsViewController *_screenshotsController;	// 264 = 0x108
}
- (void)_updatePageView;	// 0x1abf5
- (id)_tellAFriendSubject;	// 0x1ab99
- (id)_tellAFriendBody;	// 0x1aae1
- (void)_showTellAFriendMailCompose;	// 0x1a1fd
- (void)_reloadAfterRestrictionsChanged;	// 0x1a171
- (void)_pushStorePageWithURL:(id)url;	// 0x1a0c1
- (id)_newContentRatingOperationForContentRating:(id)contentRating;	// 0x19f51
- (id)_newApplicationIconOperationForItemImage:(id)itemImage;	// 0x19d71
- (id)_itemArtworkImage;	// 0x19c59
- (void)_delayedClearSelection;	// 0x19c05
- (id)_contentRatingImageURL;	// 0x19bbd
- (id)_contentRatingImage;	// 0x19ad9
- (BOOL)_canDisplayPage:(id)page error:(id *)error;	// 0x19a91
- (id)_applicationIconURL;	// 0x19a69
- (id)_applicationIcon;	// 0x199a9
- (id)_activeItem;	// 0x19989
- (void)_restrictionsChangedNotification:(id)notification;	// 0x19961
- (void)tellAFriendButtonWasTapped:(id)tapped;	// 0x1988d
- (void)reportAProblemButtonWasTapped:(id)tapped;	// 0x1982d
- (void)moreInfoCellWasTapped:(id)tapped;	// 0x197b1
- (void)cellWasTapped:(id)tapped forUserAgreement:(id)userAgreement;	// 0x1972d
- (void)buttonWasTapped:(id)tapped forReviews:(id)reviews;	// 0x19719
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x19649
- (void)viewDidAppear:(BOOL)view;	// 0x19605
- (void)viewWillAppear:(BOOL)view;	// 0x195b1
- (void)reloadWithStorePage:(id)storePage forURL:(id)url;	// 0x19405
- (void)reloadForChangedRowCount:(int)changedRowCount;	// 0x192c9
- (id)newTermsAndConditionsFooter;	// 0x192c5
- (id)newTableView;	// 0x19189
- (id)newDataSource;	// 0x19025
- (void)loadView;	// 0x18e21
- (id)copyDefaultScriptProperties;	// 0x18da1
- (void)dealloc;	// 0x18cbd
- (id)init;	// 0x18bfd
@end