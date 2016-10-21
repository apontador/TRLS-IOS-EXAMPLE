//
//  TRLSDevice.h
//  TRLSLibrary
//
//  Created by Tiago Pitteri on 12/12/14.
//  Copyright (c) 2014 LBS Local. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FDXDeviceContainer : NSObject

- (id)initWithInstallationId:(NSString *)installationId userId:(NSString *)userId deviceType:(NSString *)deviceType token:(NSString *)token photo:(UIImage *)photo timezone:(NSString *)timezone locale:(NSString *)locale version:(NSString *)version model:(NSString *)model;
- (BOOL)equals:(FDXDeviceContainer *)otherDevice;

@property (nonatomic, strong) NSString *installationId;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *deviceType;
@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) NSData *imageData;
@property (nonatomic, strong) NSString *photoUrl;
@property (nonatomic, strong) NSString *timezone;
@property (nonatomic, strong) NSString *locale;
@property (nonatomic, strong) NSString *version;
@property (nonatomic, strong) NSString *model;

@end
