/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */



@protocol CertInfoTrustDescription;

@interface CertInfoCertificateListController : NSObject {
	id<CertInfoTrustDescription> _description;	// 168 = 0xa8
}
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x7c05
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x7b5d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x7a99
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x7a91
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x7a8d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x7a6d
- (void)dealloc;	// 0x7a21
- (id)initWithTrustDescription:(id)trustDescription;	// 0x795d
@end
