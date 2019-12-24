/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIWordSearchOperation.h>

@class NSString, NSArray;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {
	NSString *_inputString;	// 16 = 0x10
	NSArray *_results;	// 20 = 0x14
	id _target;	// 24 = 0x18
	SEL _action;	// 28 = 0x1c
	BOOL _withPrediction;	// 32 = 0x20
	NSArray *_geometryModelData;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *inputString;	// G=0x30ec9; @synthesize=_inputString
@property(retain, nonatomic) NSArray *results;	// G=0x30eb9; S=0x311cd; @synthesize=_results
@property(readonly, retain, nonatomic) id target;	// G=0x30ea9; @synthesize=_target
@property(readonly, assign, nonatomic) NSArray *geometryModelData;	// G=0x30e99; @synthesize=_geometryModelData
@property(readonly, assign, nonatomic) SEL action;	// G=0x30e89; @synthesize=_action
@property(readonly, assign, nonatomic) BOOL withPrediction;	// G=0x30e79; @synthesize=_withPrediction
- (id)initWithTIWordSearch:(id)tiwordSearch inputString:(id)string withPrediction:(BOOL)prediction target:(id)target action:(SEL)action geometryModelData:(id)data;	// 0x31101
- (void)dealloc;	// 0x31315
- (void)completeSearchOnMainThreadWithResults:(id)results;	// 0x312b9
- (void)perform;	// 0x311f5
// declared property getter: - (BOOL)withPrediction;	// 0x30e79
// declared property getter: - (SEL)action;	// 0x30e89
// declared property getter: - (id)geometryModelData;	// 0x30e99
// declared property getter: - (id)target;	// 0x30ea9
// declared property getter: - (id)results;	// 0x30eb9
// declared property setter: - (void)setResults:(id)results;	// 0x311cd
// declared property getter: - (id)inputString;	// 0x30ec9
@end
