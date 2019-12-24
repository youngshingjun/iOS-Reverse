/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDocument.h>

@class WDListTable, NSMutableArray, OADBackground, WDFontTable, WDRevisionAuthorTable, WDText, NSDate, OADTheme, WDStyleSheet, WDListDefinitionTable, NSString;

__attribute__((visibility("hidden")))
@interface WDDocument : OCDDocument {
@private
	WDStyleSheet *mStyleSheet;	// 20 = 0x14
	WDFontTable *mFontTable;	// 24 = 0x18
	WDListDefinitionTable *mListDefinitionTable;	// 28 = 0x1c
	WDRevisionAuthorTable *mRevisionAuthorTable;	// 32 = 0x20
	WDListTable *mListTable;	// 36 = 0x24
	NSMutableArray *mSections;	// 40 = 0x28
	unsigned short mDefaultTabWidth;	// 44 = 0x2c
	WDText *mImageBulletText;	// 48 = 0x30
	WDText *mFootnoteSeparator;	// 52 = 0x34
	WDText *mFootnoteContinuationSeparator;	// 56 = 0x38
	WDText *mFootnoteContinuationNotice;	// 60 = 0x3c
	WDText *mEndnoteSeparator;	// 64 = 0x40
	WDText *mEndnoteContinuationSeparator;	// 68 = 0x44
	WDText *mEndnoteContinuationNotice;	// 72 = 0x48
	int mFootnoteNumberFormat;	// 76 = 0x4c
	int mEndnoteNumberFormat;	// 80 = 0x50
	int mFootnotePosition;	// 84 = 0x54
	int mEndnotePosition;	// 88 = 0x58
	int mFootnoteRestart;	// 92 = 0x5c
	int mEndnoteRestart;	// 96 = 0x60
	unsigned short mFootnoteNumberingStart;	// 100 = 0x64
	int mGutterPosition;	// 104 = 0x68
	NSString *mOleFilename;	// 108 = 0x6c
	short mZoomPercentage;	// 112 = 0x70
	NSString *mVersion;	// 116 = 0x74
	unsigned mMirrorMargins : 1;	// 120 = 0x78
	unsigned mBorderSurroundHeader : 1;	// 120 = 0x78
	unsigned mBorderSurroundFooter : 1;	// 120 = 0x78
	unsigned mAutoHyphenate : 1;	// 120 = 0x78
	unsigned mEvenAndOddHeaders : 1;	// 120 = 0x78
	unsigned mGraphicsInHeaderFooter : 1;	// 120 = 0x78
	unsigned mBookFold : 1;	// 120 = 0x78
	unsigned mShowMarkup : 1;	// 120 = 0x78
	unsigned mShowComments : 1;	// 121 = 0x79
	unsigned mTrackChanges : 1;	// 121 = 0x79
	unsigned mShowRevisionMarksOnScreen : 1;	// 121 = 0x79
	unsigned mShowInsertionsAndDeletions : 1;	// 121 = 0x79
	unsigned mShowFormatting : 1;	// 121 = 0x79
	unsigned mShowOutline : 1;	// 121 = 0x79
	NSMutableArray *mDocumentImages;	// 124 = 0x7c
	NSMutableArray *mChangeTrackingEditDates;	// 128 = 0x80
	NSMutableArray *mChangeTrackingEditAuthors;	// 132 = 0x84
	NSDate *mCreationDate;	// 136 = 0x88
	NSMutableArray *mImageBullets;	// 140 = 0x8c
	int mZIndexTotalForMainText;	// 144 = 0x90
	int mZIndexTotalForHeaderFooterText;	// 148 = 0x94
	OADBackground *mDocumentBackground;	// 152 = 0x98
	OADTheme *mTheme;	// 156 = 0x9c
}
@property(assign) BOOL mirrorMargins;	// G=0x28be21; S=0x124211; converted property
@property(assign) BOOL borderSurroundHeader;	// G=0x28be3d; S=0x12422d; converted property
@property(assign) BOOL borderSurroundFooter;	// G=0x28be59; S=0x12424d; converted property
@property(assign) BOOL graphicsInHeaderFooter;	// G=0x28be75; S=0x28be91; converted property
@property(assign) unsigned short defaultTabWidth;	// G=0xa0c1d; S=0x12426d; converted property
@property(assign) BOOL autoHyphenate;	// G=0x28beb1; S=0x12427d; converted property
@property(assign) BOOL evenAndOddHeaders;	// G=0x28becd; S=0x12429d; converted property
@property(assign) int footnoteNumberFormat;	// G=0x28bee9; S=0x1242dd; converted property
@property(assign) int endnoteNumberFormat;	// G=0x28bef9; S=0x1242ed; converted property
@property(assign) int footnotePosition;	// G=0x28bf09; S=0x1242bd; converted property
@property(assign) int endnotePosition;	// G=0x28bf19; S=0x1242cd; converted property
@property(assign) int footnoteRestart;	// G=0x28bf29; S=0x1242fd; converted property
@property(assign) int endnoteRestart;	// G=0x28bf39; S=0x12430d; converted property
@property(assign) unsigned short footnoteNumberingStart;	// G=0x28bf49; S=0x12431d; converted property
@property(assign) int gutterPosition;	// G=0x28bf59; S=0x12432d; converted property
@property(retain) id oleFilename;	// G=0x1c2b8d; S=0x124519; converted property
@property(assign) BOOL bookFold;	// G=0x28bf69; S=0x12433d; converted property
@property(assign) short zoomPercentage;	// G=0x28bf85; S=0x12435d; converted property
@property(retain) id version;	// G=0x28bfa1; S=0x28c6e1; converted property
@property(assign) BOOL showMarkup;	// G=0x28bfb1; S=0x1241d9; converted property
@property(assign) BOOL showComments;	// G=0x28bfc5; S=0x1241f5; converted property
@property(assign) BOOL trackChanges;	// G=0x28bfe1; S=0x124159; converted property
@property(assign) BOOL showRevisionMarksOnScreen;	// G=0x28bffd; S=0x124179; converted property
@property(assign) BOOL showInsertionsAndDeletions;	// G=0x28c019; S=0x124199; converted property
@property(assign) BOOL showFormatting;	// G=0x28c035; S=0x1241b9; converted property
@property(assign) BOOL showOutline;	// G=0x28c051; S=0x12436d; converted property
@property(retain) id creationDate;	// G=0x28c08d; S=0x28c615; converted property
@property(retain) id documentBackground;	// G=0x28c0ad; S=0x1396ad; converted property
@property(assign) int zIndexTotalForMainText;	// G=0x28c0bd; S=0x1397b9; converted property
@property(assign) int zIndexTotalForHeaderFooterText;	// G=0x28c0cd; S=0x1397d9; converted property
+ (int)thumbnailCutOff;	// 0x28be19
- (id)init;	// 0x11b98d
- (void)dealloc;	// 0xa210d
- (id)styleSheet;	// 0x124ce9
- (id)fontTable;	// 0x11c8bd
- (id)sections;	// 0x13600d
- (int)sectionCount;	// 0x135f05
- (id)sectionAt:(int)at;	// 0x9f589
- (id)lastSection;	// 0x196c85
- (id)addSection;	// 0x130071
// converted property getter: - (BOOL)mirrorMargins;	// 0x28be21
// converted property setter: - (void)setMirrorMargins:(BOOL)margins;	// 0x124211
// converted property getter: - (BOOL)borderSurroundHeader;	// 0x28be3d
// converted property setter: - (void)setBorderSurroundHeader:(BOOL)header;	// 0x12422d
// converted property getter: - (BOOL)borderSurroundFooter;	// 0x28be59
// converted property setter: - (void)setBorderSurroundFooter:(BOOL)footer;	// 0x12424d
// converted property getter: - (BOOL)graphicsInHeaderFooter;	// 0x28be75
// converted property setter: - (void)setGraphicsInHeaderFooter:(BOOL)headerFooter;	// 0x28be91
// converted property getter: - (unsigned short)defaultTabWidth;	// 0xa0c1d
// converted property setter: - (void)setDefaultTabWidth:(unsigned short)width;	// 0x12426d
// converted property getter: - (BOOL)autoHyphenate;	// 0x28beb1
// converted property setter: - (void)setAutoHyphenate:(BOOL)hyphenate;	// 0x12427d
// converted property getter: - (BOOL)evenAndOddHeaders;	// 0x28becd
// converted property setter: - (void)setEvenAndOddHeaders:(BOOL)headers;	// 0x12429d
- (id)footnoteSeparator;	// 0x135221
- (id)footnoteContinuationSeparator;	// 0x135345
- (id)footnoteContinuationNotice;	// 0x135355
- (id)endnoteSeparator;	// 0x135365
- (id)endnoteContinuationSeparator;	// 0x135375
- (id)endnoteContinuationNotice;	// 0x135385
// converted property getter: - (int)footnoteNumberFormat;	// 0x28bee9
// converted property setter: - (void)setFootnoteNumberFormat:(int)format;	// 0x1242dd
// converted property getter: - (int)endnoteNumberFormat;	// 0x28bef9
// converted property setter: - (void)setEndnoteNumberFormat:(int)format;	// 0x1242ed
// converted property getter: - (int)footnotePosition;	// 0x28bf09
// converted property setter: - (void)setFootnotePosition:(int)position;	// 0x1242bd
// converted property getter: - (int)endnotePosition;	// 0x28bf19
// converted property setter: - (void)setEndnotePosition:(int)position;	// 0x1242cd
// converted property getter: - (int)footnoteRestart;	// 0x28bf29
// converted property setter: - (void)setFootnoteRestart:(int)restart;	// 0x1242fd
// converted property getter: - (int)endnoteRestart;	// 0x28bf39
// converted property setter: - (void)setEndnoteRestart:(int)restart;	// 0x12430d
// converted property getter: - (unsigned short)footnoteNumberingStart;	// 0x28bf49
// converted property setter: - (void)setFootnoteNumberingStart:(unsigned short)start;	// 0x12431d
- (id)listDefinitionTable;	// 0x12daf5
- (int)listDefinitionCount;	// 0x28c8f9
- (id)listDefinitionAt:(int)at;	// 0x28c8d5
- (id)listDefinitionWithId:(int)anId;	// 0x1903e1
- (id)addListDefinition;	// 0x28c8b5
- (id)listTable;	// 0xa0e31
- (int)listCount;	// 0x28c895
- (id)listAt:(int)at;	// 0x28c871
- (id)addList:(id)list;	// 0x28c84d
// converted property getter: - (int)gutterPosition;	// 0x28bf59
// converted property setter: - (void)setGutterPosition:(int)position;	// 0x12432d
// converted property getter: - (id)oleFilename;	// 0x1c2b8d
// converted property setter: - (void)setOleFilename:(id)filename;	// 0x124519
// converted property getter: - (BOOL)bookFold;	// 0x28bf69
// converted property setter: - (void)setBookFold:(BOOL)fold;	// 0x12433d
// converted property getter: - (short)zoomPercentage;	// 0x28bf85
// converted property setter: - (void)setZoomPercentage:(short)percentage;	// 0x12435d
- (id)applicationName;	// 0x28bf95
- (id)imageBulletWithCharacterOffset:(int)characterOffset;	// 0x15a405
- (id)addImageBulletText;	// 0x15a249
- (id)imageBulletParagraph;	// 0x1fd7a5
- (id)imageBullets;	// 0x12dae5
- (void)addImageBullets;	// 0x28c721
// converted property getter: - (id)version;	// 0x28bfa1
// converted property setter: - (void)setVersion:(id)version;	// 0x28c6e1
- (id)revisionAuthorTable;	// 0x12e795
- (int)revisionAuthorCount;	// 0x28c6c1
- (id)revisionAuthorAt:(int)at;	// 0x28c69d
- (int)revisionAuthorAddLookup:(id)lookup;	// 0x28c679
- (void)addRevisionAuthor:(id)author;	// 0x28c655
// converted property getter: - (BOOL)showMarkup;	// 0x28bfb1
// converted property setter: - (void)setShowMarkup:(BOOL)markup;	// 0x1241d9
// converted property getter: - (BOOL)showComments;	// 0x28bfc5
// converted property setter: - (void)setShowComments:(BOOL)comments;	// 0x1241f5
// converted property getter: - (BOOL)trackChanges;	// 0x28bfe1
// converted property setter: - (void)setTrackChanges:(BOOL)changes;	// 0x124159
// converted property getter: - (BOOL)showRevisionMarksOnScreen;	// 0x28bffd
// converted property setter: - (void)setShowRevisionMarksOnScreen:(BOOL)screen;	// 0x124179
// converted property getter: - (BOOL)showInsertionsAndDeletions;	// 0x28c019
// converted property setter: - (void)setShowInsertionsAndDeletions:(BOOL)deletions;	// 0x124199
// converted property getter: - (BOOL)showFormatting;	// 0x28c035
// converted property setter: - (void)setShowFormatting:(BOOL)formatting;	// 0x1241b9
// converted property getter: - (BOOL)showOutline;	// 0x28c051
// converted property setter: - (void)setShowOutline:(BOOL)outline;	// 0x12436d
- (void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;	// 0x1bd789
- (id)changeTrackingEditDates;	// 0x28c06d
- (id)changeTrackingEditAuthors;	// 0x28c07d
// converted property getter: - (id)creationDate;	// 0x28c08d
// converted property setter: - (void)setCreationDate:(id)date;	// 0x28c615
- (id)imageBulletText;	// 0x28c09d
// converted property setter: - (void)setDocumentBackground:(id)background;	// 0x1396ad
// converted property getter: - (id)documentBackground;	// 0x28c0ad
- (id)theme;	// 0x136d01
- (void)removeEmptySections;	// 0x28c581
// converted property getter: - (int)zIndexTotalForMainText;	// 0x28c0bd
// converted property setter: - (void)setZIndexTotalForMainText:(int)mainText;	// 0x1397b9
// converted property getter: - (int)zIndexTotalForHeaderFooterText;	// 0x28c0cd
// converted property setter: - (void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;	// 0x1397d9
- (id)sectionIterator;	// 0x28c559
- (id)newSectionIterator;	// 0x28c515
- (id)mainBlocksIterator;	// 0x28c4ed
- (id)newMainBlocksIterator;	// 0x28c491
- (id)mainRunsIterator;	// 0x28c469
- (id)newMainRunsIterator;	// 0x28c40d
- (id)footnoteIterator;	// 0x28c3e5
- (id)newFootnoteIterator;	// 0x28c389
- (id)endnoteIterator;	// 0x28c361
- (id)newEndnoteIterator;	// 0x28c305
- (id)annotationIterator;	// 0x28c2dd
- (id)newAnnotationIterator;	// 0x28c281
- (id)footnoteBlockIterator;	// 0x28c259
- (id)newFootnoteBlockIterator;	// 0x28c1fd
- (id)endnoteBlockIterator;	// 0x28c1d5
- (id)newEndnoteBlockIterator;	// 0x28c179
- (id)annotationBlockIterator;	// 0x28c151
- (id)newAnnotationBlockIterator;	// 0x28c0f5
- (BOOL)isFromBinary;	// 0x28c0dd
@end
