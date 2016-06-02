//
//  TRLSMessageDefs.h
//  TRLSFramework
//
//  Created by Rodrigo on 06/05/16.
//  Copyright © 2016 LBS Local. All rights reserved.
//

#ifndef TRLSMessageDefs_h
#define TRLSMessageDefs_h

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 667.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IPHONE_6P_ZOOM (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)

#define IS_SIMULATOR ([[[UIDevice currentDevice] model] rangeOfString:@"Simulator"].location != NSNotFound)

#define TRLSPrimaryColor [UIColor colorWithRed:218.0/255.0 green:1.0/255.0 blue:10.0/255.0 alpha:1]
#define TRLSSecondColor [UIColor colorWithRed:104.0/255.0 green:111.0/255.0 blue:121.0/255.0 alpha:1.0]
#define TRLSPrimaryFont [UIFont systemFontOfSize:20.0]
#define TRLSSecondFont [UIFont systemFontOfSize:14.0 weight:UIFontWeightSemibold]

#define ANINATION_SPEED .25

#define kTRLSTitleColor @"TRLSTitleColor"
#define kTRLSTextColor @"TRLSTextColor"
#define kTRLSButtonTextColor @"TRLSButtonTextColor"
#define kTRLSButtonBackgroundColor @"TRLSButtonBackgroundColor"
#define kTRLSBackgroundColor @"TRLSBackgroundColor"
#define kTRLSTitleFont @"TRLSTitleFont"
#define kTTRLSTextFont @"TRLSTextFont"
#define kTRLSButtonTextFont @"TRLSButtonTextFont"

#endif /* TRLSMessageDefs_h */
