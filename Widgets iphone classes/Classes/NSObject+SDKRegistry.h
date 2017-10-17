/*
 
 ************************************************************
 *  NSObject+SDKRegistry.h                                  *
 *  SDKRegistry                                             *
 *                                                          *
 *  Created by M. Rushizha on 06/05/2012.                   *
 *  Copyright (c) 2012 Learner's SDK. All rights reserved.  *
 *                                                          *
 ************************************************************
 
 PERMISSION NOTICE:  
 ------------------
 
 Permission is given to use this source code file without charge in any
 project, commercial or otherwise, entirely at your risk, with the condition
 that any redistribution (in part or whole) of source code must retain
 this copyright and permission notice. Attribution in compiled projects is
 appreciated but not required.
 
 If you have any comments or need me to create and share a running sample, 
 please mail me at: 
 
 learnsdk@gmail.com
 
 If you find this sample or any of my source code useful, please consider 
 donating to my PayPal account so that I can keep on providing you and
 others learners with more code snippets. Any amount is appreciated:
  
 http://bit.ly/IVGy0V
 
*/

#import <Foundation/Foundation.h>

@interface SDKRegistry : NSObject
{

}

#pragma mark - Defaults Writers

+ (NSString *)updateRegistryComponent:(NSString *)component withString:(NSString *)value;
+ (int64_t)updateRegistryComponent:(NSString *)component withInt64:(int64_t)value;
+ (double)updateRegistryComponent:(NSString *)component withDouble:(double)value;
+ (float)updateRegistryComponent:(NSString *)component withFloat:(float)value;
+ (int)updateRegistryComponent:(NSString *)component withInteger:(int)value;
+ (BOOL)updateRegistryComponent:(NSString *)component withBool:(BOOL)value;
+ (id)updateRegistryComponent:(NSString *)component withObject:(id)value;

#pragma mark - Defaults Readers

+ (NSString *)returnNSStringFromComponent:(NSString *)component;
+ (int64_t)returnInt64FromComponent:(NSString *)component;
+ (double)returnDoubleFromComponent:(NSString *)component;
+ (float)returnFloatFromComponent:(NSString *)component;
+ (BOOL)returnBoolFromComponent:(NSString *)component;
+ (int)returnIntFromComponent:(NSString *)component;
+ (id)returnObjectFromComponent:(NSString *)component;

#pragma mark - Defaults Utilities

+ (BOOL)objectExistsForKeyValue:(NSString *)value;
+ (void)removeObjectForKeyValue:(NSString *)value;

@end
