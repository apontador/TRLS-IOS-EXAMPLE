//
//  TRLSMessageController.h
//  TRLSLibrary
//
//  Created by Tiago Pitteri on 22/10/14.
//  Copyright (c) 2014 LBS Local. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FDXMessageContainer.h"
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface FDXMessageController : NSObject


//+ (void)markMessageAsReceived:(FDXMessageContainer *)messageContainer;
+ (void)showMessage:(NSString *)messageId messageContent:(NSString *)messageContent showLoadingView:(BOOL)showLoadingView showAlert:(BOOL)showAlert;

@end
