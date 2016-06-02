//
//  TRLSMessageView.h
//  TRLSLibrary
//
//  Created by Tiago Pitteri on 22/10/14.
//  Copyright (c) 2014 LBS Local. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FDXMessageContainer.h"
#import <CoreLocation/CoreLocation.h>
#import "FDXLocationController.h"

@interface FDXMessageView : UIView

- (void)buildLayout:(FDXMessageContainer *)messageContainer superview:(UIView *)superview;


@end