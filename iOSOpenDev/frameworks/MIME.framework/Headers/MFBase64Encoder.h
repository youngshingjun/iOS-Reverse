/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/MFBaseFilterDataConsumer.h>


@interface MFBase64Encoder : MFBaseFilterDataConsumer {
	char *_table;	// 12 = 0xc
	unsigned _left;	// 16 = 0x10
	unsigned char _leftovers[3];	// 20 = 0x14
	unsigned _line;	// 24 = 0x18
	unsigned _lineBreak;	// 28 = 0x1c
	BOOL _padChar;	// 32 = 0x20
}
@property(assign, nonatomic) unsigned lineBreak;	// G=0x25015; S=0x25025; @synthesize=_lineBreak
@property(assign, nonatomic) BOOL padChar;	// G=0x24ff5; S=0x25005; @synthesize=_padChar
@property(assign, nonatomic) BOOL allowSlash;	// G=0x24fd1; S=0x24fa1; 
- (id)initWithConsumers:(id)consumers;	// 0x250b9
- (int)appendData:(id)data;	// 0x253f5
- (void)done;	// 0x25125
// declared property setter: - (void)setAllowSlash:(BOOL)slash;	// 0x24fa1
// declared property getter: - (BOOL)allowSlash;	// 0x24fd1
- (void)setStandardLineBreak;	// 0x25111
// declared property getter: - (BOOL)padChar;	// 0x24ff5
// declared property setter: - (void)setPadChar:(BOOL)aChar;	// 0x25005
// declared property getter: - (unsigned long)lineBreak;	// 0x25015
// declared property setter: - (void)setLineBreak:(unsigned long)aBreak;	// 0x25025
@end