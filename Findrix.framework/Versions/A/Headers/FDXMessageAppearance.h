//
//  TRLSMessageAppearance.h
//  TRLSFramework
//
//  Created by Rodrigo on 09/05/16.
//  Copyright © 2016 LBS Local. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FDXMessageAppearance : NSObject

+ (void)setTitleColor:(UIColor *)color;
+ (void)setTextColor:(UIColor *)color;
+ (void)setButtonTextColor:(UIColor *)color;
+ (void)setTitleFont:(UIFont *)font;
+ (void)setTextFont:(UIFont *)font;
+ (void)setButtonTextFont:(UIFont *)font;
+ (void)setButtonBackgroundColor:(UIColor *)color;
+ (void)setBackgroundColor:(UIColor *)color;

+ (UIColor *)getTitleColor;
+ (UIColor *)getTextColor;
+ (UIColor *)getButtonTextColor;
+ (UIFont *)getTitleFont;
+ (UIFont *)getTextFont;
+ (UIFont *)getButtonTextFont;
+ (UIColor *)getButtonBackgroundColor;
+ (UIColor *)getBackgroundColor;

@end
