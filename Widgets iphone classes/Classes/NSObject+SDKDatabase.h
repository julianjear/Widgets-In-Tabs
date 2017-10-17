/*
 
 ************************************************************
 *  NSObject+SDKDatabase.h                                  *
 *  SDKDatabase                                             *
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

@interface SDKDatabase : NSObject
{   
    double rate;
    
    NSString *code;
    NSString *name;
    NSString *symbol;
}

@property (assign) BOOL success;

@property (assign) double rate;

@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *symbol;

+ (void)createCurrencies;

- (NSArray *)executeSqlQuery:(NSString *)sqlQuery;

- (BOOL)databaseExistsCheck;

- (BOOL)insertCurrencyWithCode:(NSString *)mm_code
                          name:(NSString *)mm_name
                        symbol:(NSString *)mm_symbol
                          rate:(float)mm_rate;

- (BOOL)updateRateCurrencyWithCode:(NSString *)mm_code
                          withRate:(float)mm_rate;

@end
