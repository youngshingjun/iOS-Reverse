/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSURLRequestProperties.h>

@class NSDictionary, NSData, NSArray, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}
@property(copy) NSArray *URLs;	// S=0x2d209; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x2d129; @dynamic
@property(assign) int URLBagType;	// S=0x2d0a9; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x2d025; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x2cf45; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x2c8a1; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x2c65d; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x2cb5d; @dynamic
@property(retain) NSURL *URL;	// S=0x2caf9; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x2ca19; @dynamic
@property(assign) double timeoutInterval;	// S=0x2c981; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x2c81d; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x2c73d; @dynamic
@property(copy) NSData *HTTPBody;	// S=0x2c57d; @dynamic
@property(assign) long long expectedContentLength;	// S=0x2c4e5; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x2c405; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x2c385; @dynamic
@property(assign) int allowedRetryCount;	// S=0x2c305; @dynamic
// declared property setter: - (void)setURLs:(id)urls;	// 0x2d209
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x2d129
// declared property setter: - (void)setURLBagType:(int)type;	// 0x2d0a9
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x2d025
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x2cf45
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x2cdc1
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x2cc3d
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x2cb5d
// declared property setter: - (void)setURL:(id)url;	// 0x2caf9
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x2ca19
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x2c981
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x2c8a1
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x2c81d
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x2c73d
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x2c65d
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x2c57d
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x2c4e5
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x2c405
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x2c385
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x2c305
- (id)copyWithZone:(NSZone *)zone;	// 0x2c2f5
@end
