#import "../Types.h"
#import "UIKitTypes.h"

NSData *UIImagePNGRepresentation(UIImage *image);
NSData *UIImageJPEGRepresentation(UIImage *image, CGFloat compressionQuality);

UIImage *UIGraphicsGetImageFromCurrentImageContext(void);

CGRect UIRectCenteredAboutPoint(CGRect, CGPoint, CGFloat, CGFloat);
CGRect UIRectCenteredAboutPointScale(CGRect, CGPoint);

CGPoint UIRectGetCenter(CGRect rect);

CGFloat UIRoundToScale(CGFloat, CGFloat);
CGFloat UIFloorToScale(CGFloat, CGFloat);
CGFloat UICeilToScale(CGFloat, CGFloat);
CGFloat UIFloorToViewScale(CGFloat);
CGFloat UIRoundToViewScale(CGFloat);
CGFloat UICeilToViewScale(CGFloat);
CGFloat UIFloorToScreenScale(CGFloat);
CGFloat UIRoundToScreenScale(CGFloat);
CGFloat UICeilToScreenScale(CGFloat);
CGFloat UIAnimationDragCoefficient(void);

CGAffineTransform UIIntegralTransform(CGAffineTransform t);

CGContextRef UIGraphicsGetCurrentContext(void);

void UIRectFill(CGRect rect);
void UIRectFillUsingBlendMode(CGRect rect, CGBlendMode blendMode);
void UIRectClip(CGRect rect);
void UIGraphicsPushContext(CGContextRef context);
void UIGraphicsPopContext(void);
void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsBeginImageContext(CGSize size);
void UIGraphicsEndImageContext(void);

int UIApplicationMain(int argc, char **argv, NSString *principalClassName, NSString *delegateClassName);

BOOL UIContentSizeCategoryIsAccessibilityCategory(UIContentSizeCategory category);

bool __UIApplicationLinkedOnOrAfter(NSInteger);