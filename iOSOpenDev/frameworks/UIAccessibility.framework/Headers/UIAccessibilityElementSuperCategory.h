/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIAccessibility/UIAccessibilityElementSuperCategory_super.h>
#import <UIAccessibility/UIAccessibilityElementSuperCategory.h>


@interface UIAccessibilityElementSuperCategory : UIAccessibilityElementSuperCategory_super {
}
+ (void)_initializeSafeCategory;	// 0xda41
@end

@interface UIAccessibilityElementSuperCategory (SuperCategory)
- (id)_accessibilityAutomaticIdentifier;	// 0xe1c9
- (void)accessibilityZoomOutAtPoint:(CGPoint)point;	// 0xe199
- (void)accessibilityZoomInAtPoint:(CGPoint)point;	// 0xe169
- (id)description;	// 0xe0cd
- (BOOL)_accessibilityProvidesOwnFrame;	// 0xe0c9
- (unsigned long long)accessibilityTraits;	// 0xe069
- (id)accessibilityValue;	// 0xe015
- (CGRect)accessibilityFrame;	// 0xdef5
- (id)accessibilityLanguage;	// 0xdea1
- (id)accessibilityHint;	// 0xde4d
- (id)accessibilityLabel;	// 0xddf9
- (CGPoint)accessibilityActivationPoint;	// 0xdd9d
- (BOOL)_accessibilitySupportsActivateAction;	// 0xdd49
- (void)accessibilityActivate;	// 0xdcf5
- (void)accessibilityElementDidLoseFocus;	// 0xdca1
- (void)accessibilityElementDidBecomeFocused;	// 0xdc4d
- (void)_accessibilitySetValue:(id)value;	// 0xdbf1
- (void)setAccessibilityContainer:(id)container;	// 0xdb91
- (void)dealloc;	// 0xdb35
- (id)initWithAccessibilityContainer:(id)accessibilityContainer;	// 0xda8d
- (id)init;	// 0xda5d
@end
