//
//  TRLSDeviceController.h
//  TRLSLibrary
//
//  Created by Tiago Pitteri on 12/12/14.
//  Copyright (c) 2014 LBS Local. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FDXDeviceContainer.h"

@interface FDXDeviceController : NSObject

typedef void (^ TRLSDeviceControllerCallback)(NSError *error);
typedef void (^ TRLSDeviceControllerExistingDeviceCallback)(FDXDeviceContainer *device);

+ (FDXDeviceContainer *)getCurrentDevice;
+ (void)saveCurrentDevice:(FDXDeviceContainer *)deviceContainer;
+ (void)createOrUpdateDevice:(FDXDeviceContainer *)deviceContainer method:(NSString *)method callback:(TRLSDeviceControllerCallback)callback;
+ (void)updateDeviceToken:(NSString *)token callback:(TRLSDeviceControllerCallback)callback;
+ (void)uploadDevicePhotoContainer:(FDXDeviceContainer *)deviceContainer;
+ (void)saveDevicePhotoData:(NSData *)imageData;
+ (UIImage *)getDevicePhoto;
+ (void)getExistingDeviceFromServer:(NSString *)clientId clientSecret:(NSString *)clientSecret phone:(NSString *)phone callback:(TRLSDeviceControllerExistingDeviceCallback)callback;

@end