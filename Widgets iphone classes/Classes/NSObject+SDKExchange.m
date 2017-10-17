/*
 
 ************************************************************
 *  NSObject+SDKExchange.m                                  *
 *  SDKExchange                                             *
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

#import "NSObject+SDKExchange.h"
#import "NSObject+SDKDatabase.h"

#import "Sqlite.h"

@implementation SDKExchange

+ (float)updateExchangeRatesForCurrencyWithCode:(NSString *)mm_code
{
    /*Updates the database with new exchange rates.*/
    
    SDKDatabase *database = [[[SDKDatabase alloc] init] autorelease];
    SDKExchange *exchange = [[[self alloc] init] autorelease];
    float mm_rate = [exchange calculateNewRateForCurrencyWithCode:mm_code];
    
    [database updateRateCurrencyWithCode:mm_code withRate:mm_rate];
    
    return mm_rate;
}

- (float)calculateNewRateForCurrencyWithCode:(NSString *)mm_code
{
    /*Calculates new dummy exchange rates.*/
    /*Should be replaced with a method that retrieves*/
    /*exchange rates from a live update server eg. xe.com*/
    
    if ([mm_code isEqualToString:@"AFN"]) return (arc4random() % 32)/1000.0f; 
    if ([mm_code isEqualToString:@"ALL"]) return (arc4random() % 10)/1000.0f; 
    if ([mm_code isEqualToString:@"ALG"]) return (arc4random() % 12)/1000.0f; 
    if ([mm_code isEqualToString:@"AOA"]) return (arc4random() % 5)/1000.0f; 
    if ([mm_code isEqualToString:@"AUD"]) return (arc4random() % 351)/1000.0f; 
    if ([mm_code isEqualToString:@"BSD"]) return (arc4random() % 45)/1000.0f; 
    if ([mm_code isEqualToString:@"BHD"]) return (arc4random() % 40)/1000.0f; 
    if ([mm_code isEqualToString:@"BDT"]) return (arc4random() % 81)/1000.0f; 
    if ([mm_code isEqualToString:@"BBD"]) return (arc4random() % 35)/1000.0f; 
    if ([mm_code isEqualToString:@"BYR"]) return (arc4random() % 78)/1000.0f; 
    if ([mm_code isEqualToString:@"BZD"]) return (arc4random() % 96)/1000.0f; 
    if ([mm_code isEqualToString:@"BMD"]) return (arc4random() % 47)/1000.0f; 
    if ([mm_code isEqualToString:@"BTN"]) return (arc4random() % 78)/1000.0f; 
    if ([mm_code isEqualToString:@"BOB"]) return (arc4random() % 10)/1000.0f; 
    if ([mm_code isEqualToString:@"BAM"]) return (arc4random() % 40)/1000.0f; 
    if ([mm_code isEqualToString:@"BWP"]) return (arc4random() % 74)/1000.0f; 
    if ([mm_code isEqualToString:@"BRL"]) return (arc4random() % 85)/1000.0f; 
    if ([mm_code isEqualToString:@"GBP"]) return (arc4random() % 2000)/1000.0f;   
    if ([mm_code isEqualToString:@"BND"]) return (arc4random() % 54)/1000.0f; 
    if ([mm_code isEqualToString:@"BGN"]) return (arc4random() % 85)/1000.0f; 
    if ([mm_code isEqualToString:@"MMK"]) return (arc4random() % 144)/1000.0f; 
    if ([mm_code isEqualToString:@"BIF"]) return (arc4random() % 24)/1000.0f; 
    if ([mm_code isEqualToString:@"KHR"]) return (arc4random() % 84)/1000.0f; 
    if ([mm_code isEqualToString:@"CAD"]) return (arc4random() % 1780)/1000.0f; 
    if ([mm_code isEqualToString:@"CVE"]) return (arc4random() % 84)/1000.0f; 
    if ([mm_code isEqualToString:@"KYD"]) return (arc4random() % 984)/1000.0f; 
    if ([mm_code isEqualToString:@"XAF"]) return (arc4random() % 140)/1000.0f; 
    if ([mm_code isEqualToString:@"CLP"]) return (arc4random() % 444)/1000.0f; 
    if ([mm_code isEqualToString:@"CNY"]) return (arc4random() % 540)/1000.0f; 
    if ([mm_code isEqualToString:@"COP"]) return (arc4random() % 154)/1000.0f; 
    if ([mm_code isEqualToString:@"KMF"]) return (arc4random() % 410)/1000.0f; 
    if ([mm_code isEqualToString:@"CDF"]) return (arc4random() % 18)/1000.0f; 
    if ([mm_code isEqualToString:@"CRC"]) return (arc4random() % 98)/1000.0f; 
    if ([mm_code isEqualToString:@"XPF"]) return (arc4random() % 70)/1000.0f; 
    if ([mm_code isEqualToString:@"HRK"]) return (arc4random() % 99)/1000.0f; 
    if ([mm_code isEqualToString:@"CUP"]) return (arc4random() % 710)/1000.0f; 
    if ([mm_code isEqualToString:@"CZK"]) return (arc4random() % 801)/1000.0f; 
    if ([mm_code isEqualToString:@"DKK"]) return (arc4random() % 88)/1000.0f; 
    if ([mm_code isEqualToString:@"DJF"]) return (arc4random() % 54)/1000.0f; 
    if ([mm_code isEqualToString:@"DOP"]) return (arc4random() % 41)/1000.0f; 
    if ([mm_code isEqualToString:@"XCD"]) return (arc4random() % 84)/1000.0f; 
    if ([mm_code isEqualToString:@"EGP"]) return (arc4random() % 78)/1000.0f; 
    if ([mm_code isEqualToString:@"ERN"]) return (arc4random() % 170)/1000.0f; 
    if ([mm_code isEqualToString:@"ETB"]) return (arc4random() % 16)/1000.0f; 
    if ([mm_code isEqualToString:@"EUR"]) return (arc4random() % 1980)/1000.0f; 
    if ([mm_code isEqualToString:@"FKP"]) return (arc4random() % 41)/1000.0f; 
    if ([mm_code isEqualToString:@"FJD"]) return (arc4random() % 38)/1000.0f; 
    if ([mm_code isEqualToString:@"GMD"]) return (arc4random() % 14)/1000.0f; 
    if ([mm_code isEqualToString:@"GEL"]) return (arc4random() % 74)/1000.0f; 
    if ([mm_code isEqualToString:@"GHS"]) return (arc4random() % 65)/1000.0f; 
    if ([mm_code isEqualToString:@"GIP"]) return (arc4random() % 84)/1000.0f; 
    if ([mm_code isEqualToString:@"GTQ"]) return (arc4random() % 18)/1000.0f; 
    if ([mm_code isEqualToString:@"GNF"]) return (arc4random() % 7)/1000.0f; 
    if ([mm_code isEqualToString:@"GYD"]) return (arc4random() % 9)/1000.0f; 
    if ([mm_code isEqualToString:@"HTG"]) return (arc4random() % 11)/1000.0f; 
    if ([mm_code isEqualToString:@"HNL"]) return (arc4random() % 320)/1000.0f; 
    if ([mm_code isEqualToString:@"HKD"]) return (arc4random() % 998)/1000.0f; 
    if ([mm_code isEqualToString:@"HUF"]) return (arc4random() % 241)/1000.0f; 
    if ([mm_code isEqualToString:@"ISK"]) return (arc4random() % 201)/1000.0f; 
    if ([mm_code isEqualToString:@"INR"]) return (arc4random() % 74)/1000.0f; 
    if ([mm_code isEqualToString:@"IDR"]) return (arc4random() % 110)/1000.0f; 
    if ([mm_code isEqualToString:@"IRR"]) return (arc4random() % 214)/1000.0f; 
    if ([mm_code isEqualToString:@"IQD"]) return (arc4random() % 321)/1000.0f; 
    if ([mm_code isEqualToString:@"ILS"]) return (arc4random() % 401)/1000.0f; 
    if ([mm_code isEqualToString:@"JMD"]) return (arc4random() % 44)/1000.0f; 
    if ([mm_code isEqualToString:@"JPY"]) return (arc4random() % 2)/1000.0f; 
    if ([mm_code isEqualToString:@"JOD"]) return (arc4random() % 432)/1000.0f; 
    if ([mm_code isEqualToString:@"KZT"]) return (arc4random() % 322)/1000.0f; 
    if ([mm_code isEqualToString:@"KES"]) return (arc4random() % 52)/1000.0f; 
    if ([mm_code isEqualToString:@"KPW"]) return (arc4random() % 145)/1000.0f; 
    if ([mm_code isEqualToString:@"KRW"]) return (arc4random() % 300)/1000.0f; 
    if ([mm_code isEqualToString:@"KWD"]) return (arc4random() % 74)/1000.0f; 
    if ([mm_code isEqualToString:@"KGS"]) return (arc4random() % 66)/1000.0f; 
    if ([mm_code isEqualToString:@"LAK"]) return (arc4random() % 14)/1000.0f; 
    if ([mm_code isEqualToString:@"LVL"]) return (arc4random() % 74)/1000.0f; 
    if ([mm_code isEqualToString:@"LBP"]) return (arc4random() % 15)/1000.0f; 
    if ([mm_code isEqualToString:@"LSL"]) return (arc4random() % 95)/1000.0f; 
    if ([mm_code isEqualToString:@"LRD"]) return (arc4random() % 15)/1000.0f; 
    if ([mm_code isEqualToString:@"LYD"]) return (arc4random() % 77)/1000.0f;  
    if ([mm_code isEqualToString:@"LTL"]) return (arc4random() % 441)/1000.0f; 
    if ([mm_code isEqualToString:@"MOP"]) return (arc4random() % 51)/1000.0f; 
    if ([mm_code isEqualToString:@"MKD"]) return (arc4random() % 64)/1000.0f; 
    if ([mm_code isEqualToString:@"MGA"]) return (arc4random() % 44)/1000.0f; 
    if ([mm_code isEqualToString:@"MWK"]) return (arc4random() % 21)/1000.0f; 
    if ([mm_code isEqualToString:@"MYR"]) return (arc4random() % 20)/1000.0f; 
    if ([mm_code isEqualToString:@"MVR"]) return (arc4random() % 16)/1000.0f; 
    if ([mm_code isEqualToString:@"MRO"]) return (arc4random() % 4)/1000.0f; 
    if ([mm_code isEqualToString:@"MUR"]) return (arc4random() % 19)/1000.0f; 
    if ([mm_code isEqualToString:@"MXN"]) return (arc4random() % 75)/1000.0f; 
    if ([mm_code isEqualToString:@"MDL"]) return (arc4random() % 65)/1000.0f; 
    if ([mm_code isEqualToString:@"MNT"]) return (arc4random() % 35)/1000.0f; 
    if ([mm_code isEqualToString:@"MAD"]) return (arc4random() % 95)/1000.0f; 
    if ([mm_code isEqualToString:@"MZN"]) return (arc4random() % 15)/1000.0f; 
    if ([mm_code isEqualToString:@"NAD"]) return (arc4random() % 44)/1000.0f; 
    if ([mm_code isEqualToString:@"NPR"]) return (arc4random() % 47)/1000.0f; 
    if ([mm_code isEqualToString:@"NZD"]) return (arc4random() % 869)/1000.0f; 
    if ([mm_code isEqualToString:@"NIO"]) return (arc4random() % 75)/1000.0f; 
    if ([mm_code isEqualToString:@"NGN"]) return (arc4random() % 50)/1000.0f; 
    if ([mm_code isEqualToString:@"NOK"]) return (arc4random() % 88)/1000.0f; 
    if ([mm_code isEqualToString:@"OMR"]) return (arc4random() % 44)/1000.0f; 
    if ([mm_code isEqualToString:@"PAB"]) return (arc4random() % 23)/1000.0f; 
    if ([mm_code isEqualToString:@"PKR"]) return (arc4random() % 14)/1000.0f; 
    if ([mm_code isEqualToString:@"PGK"]) return (arc4random() % 14)/1000.0f; 
    if ([mm_code isEqualToString:@"PYG"]) return (arc4random() % 74)/1000.0f; 
    if ([mm_code isEqualToString:@"PEN"]) return (arc4random() % 47)/1000.0f; 
    if ([mm_code isEqualToString:@"PHP"]) return (arc4random() % 68)/1000.0f; 
    if ([mm_code isEqualToString:@"PLN"]) return (arc4random() % 41)/1000.0f; 
    if ([mm_code isEqualToString:@"QAR"]) return (arc4random() % 211)/1000.0f; 
    if ([mm_code isEqualToString:@"RON"]) return (arc4random() % 65)/1000.0f; 
    if ([mm_code isEqualToString:@"RUB"]) return (arc4random() % 154)/1000.0f; 
    if ([mm_code isEqualToString:@"RWF"]) return (arc4random() % 41)/1000.0f; 
    if ([mm_code isEqualToString:@"SHP"]) return (arc4random() % 65)/1000.0f; 
    if ([mm_code isEqualToString:@"SVC"]) return (arc4random() % 15)/1000.0f; 
    if ([mm_code isEqualToString:@"WST"]) return (arc4random() % 44)/1000.0f; 
    if ([mm_code isEqualToString:@"STD"]) return (arc4random() % 487)/1000.0f; 
    if ([mm_code isEqualToString:@"SAR"]) return (arc4random() % 450)/1000.0f; 
    if ([mm_code isEqualToString:@"RSD"]) return (arc4random() % 248)/1000.0f; 
    if ([mm_code isEqualToString:@"SCR"]) return (arc4random() % 341)/1000.0f; 
    if ([mm_code isEqualToString:@"SLL"]) return (arc4random() % 225)/1000.0f; 
    if ([mm_code isEqualToString:@"SGD"]) return (arc4random() % 254)/1000.0f; 
    if ([mm_code isEqualToString:@"SBD"]) return (arc4random() % 68)/1000.0f; 
    if ([mm_code isEqualToString:@"SOS"]) return (arc4random() % 25)/1000.0f; 
    if ([mm_code isEqualToString:@"ZAR"]) return (arc4random() % 815)/1000.0f; 
    if ([mm_code isEqualToString:@"LKR"]) return (arc4random() % 154)/1000.0f; 
    if ([mm_code isEqualToString:@"SDG"]) return (arc4random() % 102)/1000.0f; 
    if ([mm_code isEqualToString:@"SSP"]) return (arc4random() % 255)/1000.0f; 
    if ([mm_code isEqualToString:@"SRD"]) return (arc4random() % 104)/1000.0f; 
    if ([mm_code isEqualToString:@"SZL"]) return (arc4random() % 15)/1000.0f; 
    if ([mm_code isEqualToString:@"SEK"]) return (arc4random() % 580)/1000.0f; 
    if ([mm_code isEqualToString:@"CHF"]) return (arc4random() % 801)/1000.0f; 
    if ([mm_code isEqualToString:@"SYP"]) return (arc4random() % 447)/1000.0f; 
    if ([mm_code isEqualToString:@"TWD"]) return (arc4random() % 340)/1000.0f; 
    if ([mm_code isEqualToString:@"TJS"]) return (arc4random() % 110)/1000.0f; 
    if ([mm_code isEqualToString:@"TZS"]) return (arc4random() % 185)/1000.0f; 
    if ([mm_code isEqualToString:@"THB"]) return (arc4random() % 154)/1000.0f; 
    if ([mm_code isEqualToString:@"TOP"]) return (arc4random() % 125)/1000.0f; 
    if ([mm_code isEqualToString:@"TTD"]) return (arc4random() % 244)/1000.0f; 
    if ([mm_code isEqualToString:@"TND"]) return (arc4random() % 870)/1000.0f; 
    if ([mm_code isEqualToString:@"TRY"]) return (arc4random() % 430)/1000.0f;
    if ([mm_code isEqualToString:@"TMT"]) return (arc4random() % 512)/1000.0f; 
    if ([mm_code isEqualToString:@"UGX"]) return (arc4random() % 81)/1000.0f; 
    if ([mm_code isEqualToString:@"UAH"]) return (arc4random() % 250)/1000.0f; 
    if ([mm_code isEqualToString:@"AED"]) return (arc4random() % 540)/1000.0f; 
    if ([mm_code isEqualToString:@"UYU"]) return (arc4random() % 441)/1000.0f; 
    if ([mm_code isEqualToString:@"UZS"]) return (arc4random() % 147)/1000.0f; 
    if ([mm_code isEqualToString:@"VUV"]) return (arc4random() % 53)/1000.0f; 
    if ([mm_code isEqualToString:@"VEF"]) return (arc4random() % 850)/1000.0f; 
    if ([mm_code isEqualToString:@"VND"]) return (arc4random() % 56)/1000.0f; 
    if ([mm_code isEqualToString:@"YER"]) return (arc4random() % 18)/1000.0f; 
    if ([mm_code isEqualToString:@"XOF"]) return (arc4random() % 387)/1000.0f; 
    if ([mm_code isEqualToString:@"ZMK"]) return (arc4random() % 54)/1000.0f; 
    if ([mm_code isEqualToString:@"ZWD"]) return (arc4random() % 31)/1000.0f;

    if ([mm_code isEqualToString:@"USD"]) return 1.0f;             

    return 0.0f;
}

 
@end
