/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
 */




@interface MFAPOPAuthScheme : NSObject {
}
+ (void)load;	// 0x7ce1
- (BOOL)supportsAccountType:(id)type;	// 0x7a01
- (Class)connectionClassForAccountClass:(Class)accountClass;	// 0x7a39
- (Class)authenticatorClass;	// 0x79e5
- (BOOL)hasEncryption;	// 0x79e9
- (BOOL)requiresPassword;	// 0x79ed
- (id)name;	// 0x79f1
- (id)humanReadableName;	// 0x7d2d
- (BOOL)canAuthenticateAccountClass:(Class)aClass connection:(id)connection;	// 0x7d51
@end
