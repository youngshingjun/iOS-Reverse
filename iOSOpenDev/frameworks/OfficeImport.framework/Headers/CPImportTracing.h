/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CPTracing.h>


__attribute__((visibility("hidden")))
@interface CPImportTracing : CPTracing {
@private
	long mReadingOpstat;	// 8 = 0x8
	long mProcessorOpstat;	// 12 = 0xc
	long mImportingOpstat;	// 16 = 0x10
}
- (id)initWithFilename:(id)filename;	// 0x2ced39
- (void)dealloc;	// 0x2cee29
- (void)startReading;	// 0x2cee09
- (void)stopReading;	// 0x2cede9
- (void)startProcessors;	// 0x2cedc9
- (void)stopProcessors;	// 0x2ceda9
- (void)startImporting;	// 0x2ced89
- (void)stopImporting;	// 0x2ced69
@end