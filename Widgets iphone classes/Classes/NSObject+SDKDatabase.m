/*
 
 ************************************************************
 *  NSObject+SDKDatabase.m                                  *
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

#import "NSObject+SDKDatabase.h"
#import "NSObject+SDKRegistry.h"

#import "Sqlite.h"

@implementation SDKDatabase

@synthesize success;

@synthesize rate;

@synthesize code;
@synthesize name;
@synthesize symbol;

#pragma mark - Exchange Rates Edit Methods

+ (void)createCurrencies
{
    /*Creates currency accounts in the database.*/
    /*Note all currency rates are set to 0.0f*/
    
    SDKDatabase *database = [[[self alloc] init] autorelease];
   
    [database insertCurrencyWithCode:@"AFN" name:@"Afghan Afghani" symbol:@"A" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ALL" name:@"Albanian Leke" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ALG" name:@"Algerian Dinar" symbol:@"d" rate:0.0f]; 
    [database insertCurrencyWithCode:@"AOA" name:@"Angolan Kwanza" symbol:@"Kz" rate:0.0f]; 
    [database insertCurrencyWithCode:@"AUD" name:@"Austrialian Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BSD" name:@"Bahamian Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BHD" name:@"Bahraini Dinar" symbol:@"d" rate:0.0f];
    [database insertCurrencyWithCode:@"BDT" name:@"Bangladeshi Taka" symbol:@"T" rate:0.0f];
    [database insertCurrencyWithCode:@"BBD" name:@"Barbadian Dollar" symbol:@"$" rate:0.0f];
    [database insertCurrencyWithCode:@"BYR" name:@"Belarusian Ruble" symbol:@"R" rate:0.0f];
    [database insertCurrencyWithCode:@"BZD" name:@"Belize Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BMD" name:@"Bermudian Dollar" symbol:@"$" rate:0.0f];
    [database insertCurrencyWithCode:@"BTN" name:@"Bhutanese Ngultrum" symbol:@"N" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BOB" name:@"Bolivian Boliviano" symbol:@"B" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BAM" name:@"Bosnia and Herzegovina CM" symbol:@"M" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BWP" name:@"Botswana Pula" symbol:@"P" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BRL" name:@"Brazilian Real" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"GBP" name:@"British Pound Sterling" symbol:@"Pd." rate:0.0f];   
    [database insertCurrencyWithCode:@"BND" name:@"Brunei Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BGN" name:@"Bulgarian Lev" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MMK" name:@"Burmese Kyat" symbol:@"K" rate:0.0f]; 
    [database insertCurrencyWithCode:@"BIF" name:@"Burundian Franc" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KHR" name:@"Cambodian Riel" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"CAD" name:@"Canadian Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"CVE" name:@"Cape Verdean Escudo" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KYD" name:@"Cayman Islands Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"XAF" name:@"Central African CFA Franc" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"CLP" name:@"Chilean Peso" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"CNY" name:@"Chinese Yuan" symbol:@"Y" rate:0.0f]; 
    [database insertCurrencyWithCode:@"COP" name:@"Colombian Peso" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KMF" name:@"Comorian Franc" symbol:@"F" rate:0.0f];
    [database insertCurrencyWithCode:@"CDF" name:@"Congolese Franc" symbol:@"F" rate:0.0f];
    [database insertCurrencyWithCode:@"CRC" name:@"Costa Rican Colón" symbol:@"C" rate:0.0f]; 
    [database insertCurrencyWithCode:@"XPF" name:@"CFP Franc" symbol:@"F" rate:0.0f];
    [database insertCurrencyWithCode:@"HRK" name:@"Croatian Kuna" symbol:@"k" rate:0.0f];
    [database insertCurrencyWithCode:@"CUP" name:@"Cuban Peso" symbol:@"$" rate:0.0f];
    [database insertCurrencyWithCode:@"CZK" name:@"Czech Koruna" symbol:@"K" rate:0.0f]; 
    [database insertCurrencyWithCode:@"DKK" name:@"Danish Krone" symbol:@"k" rate:0.0f];
    [database insertCurrencyWithCode:@"DJF" name:@"Djiboutian Franc" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"DOP" name:@"Dominican Peso" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"XCD" name:@"East Caribbean Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"EGP" name:@"Egypt Pound" symbol:@"Pd." rate:0.0f];
    [database insertCurrencyWithCode:@"ERN" name:@"Eritrean Nakfa" symbol:@"N" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ETB" name:@"Ethopian Birr" symbol:@"B" rate:0.0f]; 
    [database insertCurrencyWithCode:@"EUR" name:@"European Euro" symbol:@"Eu." rate:0.0f]; 
    [database insertCurrencyWithCode:@"FKP" name:@"Falkland Islands Pound" symbol:@"Pd." rate:0.0f]; 
    [database insertCurrencyWithCode:@"FJD" name:@"Fijian Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"GMD" name:@"Gambian Dalasi" symbol:@"D" rate:0.0f]; 
    [database insertCurrencyWithCode:@"GEL" name:@"Georgian Lari" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"GHS" name:@"Ghana Cedi" symbol:@"C" rate:0.0f];
    [database insertCurrencyWithCode:@"GIP" name:@"Gibraltar Pound" symbol:@"Pd." rate:0.0f]; 
    [database insertCurrencyWithCode:@"GTQ" name:@"Guatemalan Quetzal" symbol:@"Q" rate:0.0f]; 
    [database insertCurrencyWithCode:@"GNF" name:@"Guinean Franc" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"GYD" name:@"Guyanese Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"HTG" name:@"Haitian Gourde" symbol:@"G" rate:0.0f]; 
    [database insertCurrencyWithCode:@"HNL" name:@"Honduran Lempira" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"HKD" name:@"Hong Kong Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"HUF" name:@"Hungarian Forint" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ISK" name:@"Icelandic Krona" symbol:@"k" rate:0.0f]; 
    [database insertCurrencyWithCode:@"INR" name:@"Indian Rupee" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"IDR" name:@"Indonesian Rupiah" symbol:@"Rp" rate:0.0f]; 
    [database insertCurrencyWithCode:@"IRR" name:@"Iranian Rial" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"IQD" name:@"Iraqi Dinar" symbol:@"d" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ILS" name:@"Israeli Shekel" symbol:@"S" rate:0.0f]; 
    [database insertCurrencyWithCode:@"JMD" name:@"Jamaican Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"JPY" name:@"Japanese Yen" symbol:@"Yn." rate:0.0f]; 
    [database insertCurrencyWithCode:@"JOD" name:@"Jordanian Dinar" symbol:@"d" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KZT" name:@"Kazakhstani Tenge" symbol:@"T" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KES" name:@"Kenyan Shilling" symbol:@"S" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KPW" name:@"Korean Won, North" symbol:@"W" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KRW" name:@"Korean Won, South" symbol:@"W" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KWD" name:@"Kuwaiti Dinar" symbol:@"d" rate:0.0f]; 
    [database insertCurrencyWithCode:@"KGS" name:@"Kyrgyzstani Som" symbol:@"S" rate:0.0f]; 
    [database insertCurrencyWithCode:@"LAK" name:@"Lao Kip" symbol:@"K" rate:0.0f]; 
    [database insertCurrencyWithCode:@"LVL" name:@"Latvian Lats" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"LBP" name:@"Lebanese Pound" symbol:@"Pd." rate:0.0f];
    [database insertCurrencyWithCode:@"LSL" name:@"Lesotho Loti" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"LRD" name:@"Liberian Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"LYD" name:@"Libyan Dinar" symbol:@"d" rate:0.0f];  
    [database insertCurrencyWithCode:@"LTL" name:@"Lithuanian Litas" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MOP" name:@"Macanese Pataca" symbol:@"P" rate:0.0f];
    [database insertCurrencyWithCode:@"MKD" name:@"Macedonian Denar" symbol:@"D" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MGA" name:@"Malagasy Ariary" symbol:@"A" rate:0.0f];
    [database insertCurrencyWithCode:@"MWK" name:@"Malawian Kwacha" symbol:@"K" rate:0.0f];
    [database insertCurrencyWithCode:@"MYR" name:@"Malaysian Ringgit" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MVR" name:@"Maldivian Rufiyaa" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MRO" name:@"Mauritanian Ouguiya" symbol:@"U" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MUR" name:@"Mauritian Rupee" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MXN" name:@"Mexican Peso" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MDL" name:@"Moldovan Leu" symbol:@"L" rate:0.0f];
    [database insertCurrencyWithCode:@"MNT" name:@"Mongolian Togrog" symbol:@"T" rate:0.0f];
    [database insertCurrencyWithCode:@"MAD" name:@"Moroccan Dirham" symbol:@"D" rate:0.0f]; 
    [database insertCurrencyWithCode:@"MZN" name:@"Mozambican Metical" symbol:@"M" rate:0.0f]; 
    [database insertCurrencyWithCode:@"NAD" name:@"Namibian Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"NPR" name:@"Nepalese Rupee" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"NZD" name:@"New Zealand Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"NIO" name:@"Nicaraguan Cordoba" symbol:@"C$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"NGN" name:@"Nigerian Naira" symbol:@"N" rate:0.0f]; 
    [database insertCurrencyWithCode:@"NOK" name:@"Norwegian Krone" symbol:@"k" rate:0.0f]; 
    [database insertCurrencyWithCode:@"OMR" name:@"Omani Rial" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"PAB" name:@"Panamanian Balboa" symbol:@"B" rate:0.0f]; 
    [database insertCurrencyWithCode:@"PKR" name:@"Pakistani Rupee" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"PGK" name:@"Papua New Guinean Kina" symbol:@"K" rate:0.0f]; 
    [database insertCurrencyWithCode:@"PYG" name:@"Paraguayan Guaraní" symbol:@"G" rate:0.0f]; 
    [database insertCurrencyWithCode:@"PEN" name:@"Peruvian Nuevo Sol" symbol:@"ns" rate:0.0f]; 
    [database insertCurrencyWithCode:@"PHP" name:@"Philippine Peso" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"PLN" name:@"Polish Zloty" symbol:@"Z" rate:0.0f]; 
    [database insertCurrencyWithCode:@"QAR" name:@"Qatari Riyal" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"RON" name:@"Romanian Leu" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"RUB" name:@"Russian Ruble" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"RWF" name:@"Rwandan Franc" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SHP" name:@"Saint Helena Pound" symbol:@"Pd." rate:0.0f]; 
    [database insertCurrencyWithCode:@"SVC" name:@"Salvadoran Colon" symbol:@"C" rate:0.0f]; 
    [database insertCurrencyWithCode:@"WST" name:@"Samoan Tala" symbol:@"T" rate:0.0f]; 
    [database insertCurrencyWithCode:@"STD" name:@"Sao Tome and Principe Dobra" symbol:@"Db" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SAR" name:@"Saudi Riyal" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"RSD" name:@"Serbian Dinar" symbol:@"d" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SCR" name:@"Seychellois Rupee" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SLL" name:@"Sierra Leonean Leone" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SGD" name:@"Singapore Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SBD" name:@"Solomon Islands Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SOS" name:@"Somali Shilling" symbol:@"S" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ZAR" name:@"South African Rand" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"LKR" name:@"Sri Lankan Rupee" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SDG" name:@"Sudanese Pound, North" symbol:@"Pd." rate:0.0f]; 
    [database insertCurrencyWithCode:@"SSP" name:@"Sudanese Pound, South" symbol:@"Pd." rate:0.0f]; 
    [database insertCurrencyWithCode:@"SRD" name:@"Surinamese Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SZL" name:@"Swazi Lilangeni" symbol:@"L" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SEK" name:@"Swedish Krona" symbol:@"k" rate:0.0f]; 
    [database insertCurrencyWithCode:@"CHF" name:@"Swiss Franc" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"SYP" name:@"Syrian Pound" symbol:@"Pd." rate:0.0f]; 
    [database insertCurrencyWithCode:@"TWD" name:@"Taiwan Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"TJS" name:@"Tajikistani Somoni" symbol:@"ЅМ" rate:0.0f]; 
    [database insertCurrencyWithCode:@"TZS" name:@"Tanzanian Shilling" symbol:@"S" rate:0.0f]; 
    [database insertCurrencyWithCode:@"THB" name:@"Thai Baht" symbol:@"B" rate:0.0f]; 
    [database insertCurrencyWithCode:@"TOP" name:@"Tongan Pa'anga" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"TTD" name:@"Trinidad and Tobago Dollar" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"TND" name:@"Tunisian Dinar" symbol:@"d" rate:0.0f]; 
    [database insertCurrencyWithCode:@"TRY" name:@"Turkish Lira" symbol:@"l" rate:0.0f];
    [database insertCurrencyWithCode:@"TMT" name:@"Turkmenistani Manat" symbol:@"m" rate:0.0f]; 
    [database insertCurrencyWithCode:@"UGX" name:@"Ugandan Shilling" symbol:@"S" rate:0.0f]; 
    [database insertCurrencyWithCode:@"UAH" name:@"Ukrainian Hryvnia" symbol:@"H" rate:0.0f]; 
    [database insertCurrencyWithCode:@"AED" name:@"United Arab Emirates Dirham" symbol:@"D" rate:0.0f]; 
    [database insertCurrencyWithCode:@"USD" name:@"United States Dollar" symbol:@"$" rate:0.0f];             
    [database insertCurrencyWithCode:@"UYU" name:@"Uruguayan Peso" symbol:@"$" rate:0.0f]; 
    [database insertCurrencyWithCode:@"UZS" name:@"Uzbekistani Som" symbol:@"S" rate:0.0f]; 
    [database insertCurrencyWithCode:@"VUV" name:@"Vanuatu Vatu" symbol:@"Vt" rate:0.0f]; 
    [database insertCurrencyWithCode:@"VEF" name:@"Venezuelan Bolivar" symbol:@"B" rate:0.0f]; 
    [database insertCurrencyWithCode:@"VND" name:@"Vietnamese Dong" symbol:@"D" rate:0.0f]; 
    [database insertCurrencyWithCode:@"YER" name:@"Yemeni Rial" symbol:@"R" rate:0.0f]; 
    [database insertCurrencyWithCode:@"XOF" name:@"West African CFA Franc" symbol:@"F" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ZMK" name:@"Zambian Kwacha" symbol:@"K" rate:0.0f]; 
    [database insertCurrencyWithCode:@"ZWD" name:@"Zimbabwean Dollar" symbol:@"$" rate:0.0f];
    
    [SDKRegistry updateRegistryComponent:@"FromCurrencySymbol" withString:@"$"];
    [SDKRegistry updateRegistryComponent:@"FromCurrencyCode" withString:@"USD"];
    [SDKRegistry updateRegistryComponent:@"FromCurrencyName" withString:@"UNITED STATES DOLLAR"];
    
    [SDKRegistry updateRegistryComponent:@"ToCurrencySymbol" withString:@"£"];
    [SDKRegistry updateRegistryComponent:@"ToCurrencyCode" withString:@"GBP"];
    [SDKRegistry updateRegistryComponent:@"ToCurrencyName" withString:@"BRITISH POUND STERLING"];
}

#pragma mark - SQLite Functions

- (BOOL)databaseExistsCheck
{
    /*Check to see if the SQLite database instance exists.*/
    /*If not, a new instance will be created and populated.*/
    
	NSFileManager *fileManager = [NSFileManager defaultManager];
	NSError *error;
	
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
	
    NSString *docs = [paths objectAtIndex:0];
	NSString *storePath = [docs stringByAppendingPathComponent:@"mm_currency.sqlite"];
	
    NSString *defaultStorePath = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"mm_currency.sqlite"];
    
    [SDKRegistry updateRegistryComponent:@"sqliteStore" withString:storePath];
    [self setSuccess:YES];
    
    if (![fileManager fileExistsAtPath:[SDKRegistry returnNSStringFromComponent:@"sqliteStore"]]){
		if ([fileManager copyItemAtPath:defaultStorePath toPath:storePath error:&error]){
            Sqlite *sqlitedb = [[Sqlite alloc] init];
            
            if (![sqlitedb open:[SDKRegistry returnNSStringFromComponent:@"sqliteStore"]]) return NO;
            
            NSLog(@"Initial creation of writable database (%@) from resources database (%@)", storePath, defaultStorePath);
            
            [sqlitedb executeNonQuery:@"CREATE TABLE Currencies (mm_code VARCHAR PRIMARY KEY NOT NULL, mm_name VARCHAR NOT NULL, mm_symbol VARCHAR NOT NULL, mm_rate FLOAT NOT NULL DEFAULT 0);"];
            
            [sqlitedb executeNonQuery:@"DELETE FROM Currencies;"];
            [sqlitedb release];
            
            [SDKDatabase createCurrencies];
        }else{
            NSLog(@"Error Occurred: %@", error.description);
            [self setSuccess:NO];
        }
	}
    
    return success;
}

- (BOOL)insertCurrencyWithCode:(NSString *)mm_code
                          name:(NSString *)mm_name
                        symbol:(NSString *)mm_symbol
                          rate:(float)mm_rate
{
    /*Inserts new currency accounts during database population.*/
    
    if (!mm_code || mm_code == @"") return NO;
    
    Sqlite *sqlitedb = [[Sqlite alloc] init];
    
    if (![sqlitedb open:[SDKRegistry returnNSStringFromComponent:@"sqliteStore"]]) return NO;

    [self setSuccess:[sqlitedb executeNonQuery:@"INSERT INTO Currencies (mm_code, mm_name, mm_symbol, mm_rate) VALUES (?, ?, ?, ?);",
                      [NSString stringWithString:mm_code],
                      [NSString stringWithString:mm_name],
                      [NSString stringWithString:mm_symbol],
                      [NSNumber numberWithFloat:mm_rate]]];
    
    [sqlitedb release];
    
    return self.success;
}

- (BOOL)updateRateCurrencyWithCode:(NSString *)mm_code withRate:(float)mm_rate
{
    /*Updates currency Exchange Rates.*/
    
    if (!mm_code || mm_code == @"") return NO;
    
    Sqlite *sqlitedb = [[Sqlite alloc] init];
    
    if (![sqlitedb open:[SDKRegistry returnNSStringFromComponent:@"sqliteStore"]]) return NO;
    
    [self setSuccess:[sqlitedb executeNonQuery:@"UPDATE Currencies SET mm_rate = ? WHERE mm_code = ?;",
                      [NSNumber numberWithFloat:mm_rate],
                      [NSString stringWithString:mm_code]]];
    
    [sqlitedb release];
    
    return success;
}

- (NSArray *)executeSqlQuery:(NSString *)sqlQuery
{
    if (!sqlQuery || sqlQuery == @"") return NO;
    
    Sqlite *sqlitedb = [[[Sqlite alloc] init] autorelease];
    
    if (![sqlitedb open:[SDKRegistry returnNSStringFromComponent:@"sqliteStore"]]) return NO;
    
    return [sqlitedb executeQuery:sqlQuery];
}

- (void)dealloc
{
    [code release]; 
	[name release]; 
    [symbol release]; 
    
	[super dealloc];
}

@end
