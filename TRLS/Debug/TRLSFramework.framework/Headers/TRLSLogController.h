//
//  TRLSLogController.h
//  TRLSLibrary
//
//  Created by Tiago Pitteri on 22/10/14.
//  Copyright (c) 2014 LBS Local. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TRLSLogController : NSObject

+ (void)eraseSavedLog;
+ (NSString *)getSavedLog;
+ (void)debugLog:(NSString *)message logType:(NSString *)logType;
+ (NSArray *)getLogTypeArray;

+ (BOOL)isLogTypeActivated:(NSString *)logType;
+ (void)setLogTypeEnabled:(NSString *)logType enabled:(BOOL)enabled;
+ (NSString *)getVisitsLogKey;
+ (NSString *)getTrackingLogKey;
+ (NSString *)getPositionLogKey;

@end