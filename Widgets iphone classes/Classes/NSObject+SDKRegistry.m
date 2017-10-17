/*
 
 ************************************************************
 *  NSObject+SDKRegistry.m                                  *
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

#import "NSObject+SDKRegistry.h"

@implementation SDKRegistry : NSObject

/*Custom methods to ease the tasks of updating NSUserDefaults.*/

#pragma mark - Defaults Readers

+ (NSString *)returnNSStringFromComponent:(NSString *)component
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    return [defaults stringForKey:component];
}

+ (int64_t)returnInt64FromComponent:(NSString *)component
{    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    return [defaults integerForKey:component];
}

+ (double)returnDoubleFromComponent:(NSString *)component
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    return [defaults doubleForKey:component];
}

+ (float)returnFloatFromComponent:(NSString *)component
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    return [defaults floatForKey:component];
}

+ (BOOL)returnBoolFromComponent:(NSString *)component
{    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    return [defaults boolForKey:component];
}

+ (int)returnIntFromComponent:(NSString *)component
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    return [defaults integerForKey:component];
}

+ (id)returnObjectFromComponent:(NSString *)component
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    return [defaults objectForKey:component];
}

#pragma mark - Defaults Readers

+ (NSString *)updateRegistryComponent:(NSString *)component withString:(NSString *)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        
    [defaults setValue:value forKey:component];
    [defaults synchronize];
    
    return value;
}

+ (int64_t)updateRegistryComponent:(NSString *)component withInt64:(int64_t)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    [defaults setInteger:value forKey:component];
    [defaults synchronize];
    
    return value;
}

+ (double)updateRegistryComponent:(NSString *)component withDouble:(double)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    [defaults setDouble:value forKey:component];
    [defaults synchronize];
    
    return value;
}

+ (float)updateRegistryComponent:(NSString *)component withFloat:(float)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    [defaults setFloat:value forKey:component];
    [defaults synchronize];
    
    return value;
}

+ (int)updateRegistryComponent:(NSString *)component withInteger:(int)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    [defaults setInteger:value forKey:component];
    [defaults synchronize];
    
    return value;
}

+ (BOOL)updateRegistryComponent:(NSString *)component withBool:(BOOL)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    [defaults setBool:value forKey:component];
    [defaults synchronize];
    
    return value;    
}

+ (id)updateRegistryComponent:(NSString *)component withObject:(id)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    [defaults setObject:value forKey:component];
    [defaults synchronize];
    
    return value;    
}

#pragma mark - Defaults Utilities

+ (BOOL)objectExistsForKeyValue:(NSString *)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

    BOOL success = false;
    
    if ([defaults objectForKey:value]) success = true;
    
    return success;
}

+ (void)removeObjectForKeyValue:(NSString *)value
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    [defaults removeObjectForKey:value];
    [defaults synchronize];
}

@end
