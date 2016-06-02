//
//  TRLSSettingsController.h
//  TRLSLibrary
//
//  Created by Tiago Pitteri on 22/10/14.
//  Copyright (c) 2014 LBS Local. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FDXSettingsContainer.h"

@interface FDXSettingsController : NSObject

typedef void (^ TRLSSettingsCallback)();

+ (FDXSettingsContainer *)getSettingsContainer;
+ (void)updateSettings:(TRLSSettingsCallback)callback;
+ (NSString *)getInstallationId;

@end