/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/WDParagraphProperties.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class WDDocument, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDParagraphProperties : XXUnknownSuperclass <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mCharacterPropertiesOverridden : 1;	// 12 = 0xc
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_oPtw4B *mOriginalProperties;	// 16 = 0x10
	XXStruct_oPtw4B *mTrackedProperties;	// 20 = 0x14
}
@property(retain) id characterProperties;	// G=0x946e9; S=0x13443d; converted property
@property(assign) int resolveMode;	// G=0x18e63d; S=0x11e829; converted property
@property(retain) id baseStyle;	// G=0x93025; S=0x12c315; converted property
@property(retain) id tableStyle;	// G=0x28e025; S=0x199649; converted property
@property(assign, getter=isPageBreakBefore) BOOL pageBreakBefore;	// G=0x28e181; S=0x11e8c1; converted property
@property(assign) unsigned char listLevel;	// G=0xa0d05; S=0x11ea49; converted property
@property(retain) id list;	// G=0xa0e61; S=0x290c2d; converted property
@property(assign) int listIndex;	// G=0xa0c2d; S=0x11ebb1; converted property
@property(assign) XXStruct_BOQfuC dropCap;	// G=0x28e2e9; S=0x11ed15; converted property
@property(assign) long width;	// G=0x1b2911; S=0x11ee91; converted property
@property(assign) long height;	// G=0x28e455; S=0x11eff5; converted property
@property(assign) int heightRule;	// G=0x28e5ad; S=0x11f15d; converted property
@property(assign) long verticalSpace;	// G=0x28e70d; S=0x11f2bd; converted property
@property(assign) long horizontalSpace;	// G=0x28e869; S=0x11f419; converted property
@property(assign) BOOL wrap;	// G=0x28e9c5; S=0x11f575; converted property
@property(assign) int horizontalAnchor;	// G=0x143621; S=0x11f6dd; converted property
@property(assign) int verticalAnchor;	// G=0x1b27dd; S=0x11f83d; converted property
@property(assign) long horizontalPosition;	// G=0x1b2879; S=0x11f99d; converted property
@property(assign) long verticalPosition;	// G=0x1c2b9d; S=0x11faf9; converted property
@property(assign) BOOL wrapCode;	// G=0x28eb29; S=0x17baf5; converted property
@property(assign) BOOL anchorLock;	// G=0x28ec89; S=0x11fc55; converted property
@property(assign) unsigned short spaceBefore;	// G=0xa0779; S=0x120b4d; converted property
@property(assign) BOOL spaceBeforeAuto;	// G=0x28f4b1; S=0x120cad; converted property
@property(assign) unsigned short spaceAfter;	// G=0xa06dd; S=0x120e15; converted property
@property(assign) BOOL spaceAfterAuto;	// G=0x28f615; S=0x120f75; converted property
@property(assign) short lineSpacing;	// G=0x1434c9; S=0x1210dd; converted property
@property(assign) int lineSpacingRule;	// G=0x18e541; S=0x12123d; converted property
@property(assign) short leftIndent;	// G=0xa05a5; S=0x12139d; converted property
@property(assign) short rightIndent;	// G=0x143d21; S=0x1214fd; converted property
@property(assign) short firstLineIndent;	// G=0xa0641; S=0x12165d; converted property
@property(assign) int justification;	// G=0x137099; S=0x1217bd; converted property
@property(assign) unsigned short outlineLevel;	// G=0x28f779; S=0x12ceb5; converted property
@property(assign) BOOL keepNextParagraphTogether;	// G=0x28f8d9; S=0x12d015; converted property
@property(assign) BOOL keepLinesTogether;	// G=0x28fa3d; S=0x15059d; converted property
@property(assign) BOOL suppressAutoHyphens;	// G=0x28fba1; S=0x121a95; converted property
@property(assign) BOOL suppressLineNumbers;	// G=0x28fd05; S=0x12191d; converted property
@property(assign) BOOL widowControl;	// G=0x28fe65; S=0x121bfd; converted property
@property(assign) int tabStopAddedCount;	// G=0x290b5d; S=0x12d339; converted property
@property(assign) int tabStopDeletedPositionCount;	// G=0x2908b1; S=0x12d49d; converted property
@property(assign) unsigned short tablePart;	// G=0x28ffcd; S=0x1fc6d5; converted property
@property(assign) int formattingChanged;	// G=0x29012d; S=0x1e9fb9; converted property
- (id)initWithDocument:(id)document;	// 0x11e781
- (void)dealloc;	// 0xa25cd
- (id)document;	// 0xa0e21
// converted property getter: - (id)characterProperties;	// 0x946e9
- (id)mutableCharacterProperties;	// 0x196c19
// converted property setter: - (void)setCharacterProperties:(id)properties;	// 0x13443d
- (BOOL)isCharacterPropertiesOverridden;	// 0xa1f09
- (void)clearChararacterProperties;	// 0x292599
- (BOOL)isAnythingOverridden;	// 0x29249d
// converted property getter: - (int)resolveMode;	// 0x18e63d
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x11e829
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x290c69
// converted property getter: - (id)baseStyle;	// 0x93025
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x12c315
- (BOOL)isBaseStyleOverridden;	// 0x92f61
- (void)clearBaseStyle;	// 0x12ccc1
// converted property getter: - (id)tableStyle;	// 0x28e025
// converted property setter: - (void)setTableStyle:(id)style;	// 0x199649
- (BOOL)isTableStyleOverridden;	// 0x28e0bd
// converted property getter: - (BOOL)isPageBreakBefore;	// 0x28e181
// converted property setter: - (void)setPageBreakBefore:(BOOL)before;	// 0x11e8c1
- (BOOL)isPageBreakBeforeOverridden;	// 0x28e225
// converted property getter: - (unsigned char)listLevel;	// 0xa0d05
// converted property setter: - (void)setListLevel:(unsigned char)level;	// 0x11ea49
- (BOOL)isListLevelOverridden;	// 0x93e5d
// converted property getter: - (id)list;	// 0xa0e61
// converted property setter: - (void)setList:(id)list;	// 0x290c2d
- (BOOL)isListOverridden;	// 0x290c15
// converted property getter: - (int)listIndex;	// 0xa0c2d
// converted property setter: - (void)setListIndex:(int)index;	// 0x11ebb1
- (BOOL)isListIndexOverridden;	// 0x93d99
// converted property getter: - (XXStruct_BOQfuC)dropCap;	// 0x28e2e9
// converted property setter: - (void)setDropCap:(XXStruct_BOQfuC)cap;	// 0x11ed15
- (BOOL)isDropCapOverridden;	// 0x28e391
// converted property getter: - (long)width;	// 0x1b2911
// converted property setter: - (void)setWidth:(long)width;	// 0x11ee91
- (BOOL)isWidthOverridden;	// 0x143b79
// converted property getter: - (long)height;	// 0x28e455
// converted property setter: - (void)setHeight:(long)height;	// 0x11eff5
- (BOOL)isHeightOverridden;	// 0x28e4ed
// converted property getter: - (int)heightRule;	// 0x28e5ad
// converted property setter: - (void)setHeightRule:(int)rule;	// 0x11f15d
- (BOOL)isHeightRuleOverridden;	// 0x28e649
// converted property getter: - (long)verticalSpace;	// 0x28e70d
// converted property setter: - (void)setVerticalSpace:(long)space;	// 0x11f2bd
- (BOOL)isVerticalSpaceOverridden;	// 0x28e7a5
// converted property getter: - (long)horizontalSpace;	// 0x28e869
// converted property setter: - (void)setHorizontalSpace:(long)space;	// 0x11f419
- (BOOL)isHorizontalSpaceOverridden;	// 0x28e901
// converted property getter: - (BOOL)wrap;	// 0x28e9c5
// converted property setter: - (void)setWrap:(BOOL)wrap;	// 0x11f575
- (BOOL)isWrapOverridden;	// 0x28ea65
// converted property getter: - (int)horizontalAnchor;	// 0x143621
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x11f6dd
- (BOOL)isHorizontalAnchorOverridden;	// 0x92671
// converted property getter: - (int)verticalAnchor;	// 0x1b27dd
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x11f83d
- (BOOL)isVerticalAnchorOverridden;	// 0x92735
// converted property getter: - (long)horizontalPosition;	// 0x1b2879
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x11f99d
- (BOOL)isHorizontalPositionOverridden;	// 0x927f9
// converted property getter: - (long)verticalPosition;	// 0x1c2b9d
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x11faf9
- (BOOL)isVerticalPositionOverridden;	// 0x928bd
// converted property getter: - (BOOL)wrapCode;	// 0x28eb29
// converted property setter: - (void)setWrapCode:(BOOL)code;	// 0x17baf5
- (BOOL)isWrapCodeOverridden;	// 0x28ebc5
// converted property getter: - (BOOL)anchorLock;	// 0x28ec89
// converted property setter: - (void)setAnchorLock:(BOOL)lock;	// 0x11fc55
- (BOOL)isAnchorLockOverridden;	// 0x28ed29
- (id)topBorder;	// 0x28eded
- (id)mutableTopBorder;	// 0x11fdbd
- (BOOL)isTopBorderOverridden;	// 0x28ee85
- (id)leftBorder;	// 0x28ef49
- (id)mutableLeftBorder;	// 0x11ffad
- (BOOL)isLeftBorderOverridden;	// 0x28efdd
- (id)bottomBorder;	// 0x142835
- (id)mutableBottomBorder;	// 0x12019d
- (BOOL)isBottomBorderOverridden;	// 0x93ff9
- (id)rightBorder;	// 0x28f09d
- (id)mutableRightBorder;	// 0x12038d
- (BOOL)isRightBorderOverridden;	// 0x28f135
- (id)betweenBorder;	// 0x28f1f9
- (id)mutableBetweenBorder;	// 0x12057d
- (BOOL)isBetweenBorderOverridden;	// 0x28f291
- (id)barBorder;	// 0x28f355
- (id)mutableBarBorder;	// 0x12076d
- (BOOL)isBarBorderOverridden;	// 0x28f3ed
- (id)shading;	// 0x142bd9
- (id)mutableShading;	// 0x12095d
- (BOOL)isShadingOverridden;	// 0x940bd
// converted property getter: - (unsigned short)spaceBefore;	// 0xa0779
// converted property setter: - (void)setSpaceBefore:(unsigned short)before;	// 0x120b4d
- (BOOL)isSpaceBeforeOverridden;	// 0x93901
// converted property getter: - (BOOL)spaceBeforeAuto;	// 0x28f4b1
// converted property setter: - (void)setSpaceBeforeAuto:(BOOL)auto;	// 0x120cad
- (BOOL)isSpaceBeforeAutoOverridden;	// 0x28f551
// converted property getter: - (unsigned short)spaceAfter;	// 0xa06dd
// converted property setter: - (void)setSpaceAfter:(unsigned short)after;	// 0x120e15
- (BOOL)isSpaceAfterOverridden;	// 0x9383d
// converted property getter: - (BOOL)spaceAfterAuto;	// 0x28f615
// converted property setter: - (void)setSpaceAfterAuto:(BOOL)auto;	// 0x120f75
- (BOOL)isSpaceAfterAutoOverridden;	// 0x28f6b5
// converted property getter: - (short)lineSpacing;	// 0x1434c9
// converted property setter: - (void)setLineSpacing:(short)spacing;	// 0x1210dd
- (BOOL)isLineSpacingOverridden;	// 0x939c5
// converted property getter: - (int)lineSpacingRule;	// 0x18e541
// converted property setter: - (void)setLineSpacingRule:(int)rule;	// 0x12123d
- (BOOL)isLineSpacingRuleOverridden;	// 0x18e47d
// converted property getter: - (short)leftIndent;	// 0xa05a5
// converted property setter: - (void)setLeftIndent:(short)indent;	// 0x12139d
- (BOOL)isLeftIndentOverridden;	// 0x93b4d
// converted property getter: - (short)rightIndent;	// 0x143d21
// converted property setter: - (void)setRightIndent:(short)indent;	// 0x1214fd
- (BOOL)isRightIndentOverridden;	// 0x93c11
// converted property getter: - (short)firstLineIndent;	// 0xa0641
// converted property setter: - (void)setFirstLineIndent:(short)indent;	// 0x12165d
- (BOOL)isFirstLineIndentOverridden;	// 0x93cd5
// converted property getter: - (int)justification;	// 0x137099
// converted property setter: - (void)setJustification:(int)justification;	// 0x1217bd
- (BOOL)isJustificationOverridden;	// 0x93a89
// converted property getter: - (unsigned short)outlineLevel;	// 0x28f779
// converted property setter: - (void)setOutlineLevel:(unsigned short)level;	// 0x12ceb5
- (BOOL)isOutlineLevelOverridden;	// 0x28f815
// converted property getter: - (BOOL)keepNextParagraphTogether;	// 0x28f8d9
// converted property setter: - (void)setKeepNextParagraphTogether:(BOOL)together;	// 0x12d015
- (BOOL)isKeepNextParagraphTogetherOverridden;	// 0x28f979
// converted property getter: - (BOOL)keepLinesTogether;	// 0x28fa3d
// converted property setter: - (void)setKeepLinesTogether:(BOOL)together;	// 0x15059d
- (BOOL)isKeepLinesTogetherOverridden;	// 0x28fadd
// converted property getter: - (BOOL)suppressAutoHyphens;	// 0x28fba1
// converted property setter: - (void)setSuppressAutoHyphens:(BOOL)hyphens;	// 0x121a95
- (BOOL)isSuppressAutoHyphensOverridden;	// 0x28fc41
// converted property getter: - (BOOL)suppressLineNumbers;	// 0x28fd05
// converted property setter: - (void)setSuppressLineNumbers:(BOOL)numbers;	// 0x12191d
- (BOOL)isSuppressLineNumbersOverridden;	// 0x28fda1
// converted property getter: - (BOOL)widowControl;	// 0x28fe65
// converted property setter: - (void)setWidowControl:(BOOL)control;	// 0x121bfd
- (BOOL)isWidowControlOverridden;	// 0x28ff09
// converted property getter: - (int)tabStopAddedCount;	// 0x290b5d
// converted property setter: - (void)setTabStopAddedCount:(int)count;	// 0x12d339
- (XXStruct_M9LKhA *)tabStopAddedAt:(int)at;	// 0x290a8d
- (void)addTabStopAdded:(XXStruct_M9LKhA *)added;	// 0x12d199
- (void)removeTabStopAddedWithPosition:(short)position;	// 0x290969
// converted property getter: - (int)tabStopDeletedPositionCount;	// 0x2908b1
// converted property setter: - (void)setTabStopDeletedPositionCount:(int)count;	// 0x12d49d
- (short)tabStopDeletedPositionAt:(int)at;	// 0x2907f1
- (void)addTabStopDeletedPosition:(short)position;	// 0x13bef5
// converted property getter: - (unsigned short)tablePart;	// 0x28ffcd
// converted property setter: - (void)setTablePart:(unsigned short)part;	// 0x1fc6d5
- (BOOL)isTablePartOverridden;	// 0x290069
// converted property getter: - (int)formattingChanged;	// 0x29012d
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x1e9fb9
- (BOOL)isFormattingChangedOverridden;	// 0x2901c9
- (id)copyWithZone:(NSZone *)zone;	// 0x290605
- (void)copyPropertiesInto:(id)into;	// 0x2902d5
@end

@interface WDParagraphProperties (Private)
- (BOOL)isAnythingOverriddenIn:(XXStruct_M0DnwB *)anIn;	// 0x29028d
@end
