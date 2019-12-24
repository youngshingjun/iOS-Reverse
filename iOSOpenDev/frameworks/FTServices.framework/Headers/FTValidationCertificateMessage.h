/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTMessage.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTServices-Structs.h>

@class NSData;

@interface FTValidationCertificateMessage : FTMessage <NSCopying> {
	NSData *_responseCertificateData;	// 4 = 0x4
	NSData *_pushToken;	// 8 = 0x8
}
@property(copy) NSData *pushToken;	// G=0x2fbd1; S=0x2fbe5; @synthesize=_pushToken
@property(copy) NSData *responseCertificateData;	// G=0x2fb99; S=0x2fbad; @synthesize=_responseCertificateData
// declared property setter: - (void)setPushToken:(id)token;	// 0x2fbe5
// declared property getter: - (id)pushToken;	// 0x2fbd1
// declared property setter: - (void)setResponseCertificateData:(id)data;	// 0x2fbad
// declared property getter: - (id)responseCertificateData;	// 0x2fb99
- (void)handleResponseDictionary:(id)dictionary;	// 0x2fb2d
- (id)additionalMessageHeaders;	// 0x2fab1
- (id)messageBody;	// 0x2fa6d
- (id)requiredKeys;	// 0x2fa29
- (id)bagKey;	// 0x2fa1d
- (int)responseCommand;	// 0x2fa19
- (int)command;	// 0x2fa15
- (BOOL)wantsHTTPGet;	// 0x2fa11
- (BOOL)wantsBinaryPush;	// 0x2fa0d
- (BOOL)wantsCompressedBody;	// 0x2fa09
- (BOOL)wantsHTTPHeaders;	// 0x2fa05
- (BOOL)wantsBagKey;	// 0x2fa01
- (id)copyWithZone:(NSZone *)zone;	// 0x2f981
- (void)dealloc;	// 0x2f921
- (id)init;	// 0x2f8a1
@end
