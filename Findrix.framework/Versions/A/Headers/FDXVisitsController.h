//
//  TRLSVisitsController.h
//  TRLSLibrary
//
//  Created by Tiago Pitteri on 22/10/14.
//  Copyright (c) 2014 LBS Local. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface FDXVisitsController : NSObject<CLLocationManagerDelegate>

typedef void (^ TRLSVisitRequestCallback)();
typedef void (^ TRLSUpdateLocationCallback)(BOOL didUpdateLocation);

@property (nonatomic, strong) TRLSVisitRequestCallback errorRequestCallback;

- (void)startVisitsMonitoring;
- (void)getAndSendLocation:(BOOL)updatePosition checkErrorList:(BOOL)checkErrorList callback:(TRLSUpdateLocationCallback)callback;

@end