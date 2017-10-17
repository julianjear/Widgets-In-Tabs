//
//  AppDelegate.h
//  Widgets iphone
//
//  Created by Admin on 7/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationGetter.h"

@class MainViewController;
@class Tab2;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
    MainViewController *mainContorller;
    Tab2 * Tab2viewController;

    NSString *weatherVal;
    NSString *weatherValH;
    NSString *weatherValL;
    NSString *city;
    NSString *condition;

 
    NSString *str24HRS;
    NSString *strSeconds;
    NSString *strTemperatureDegrees;

    NSString *stringParser1;
    NSString *stringParser2;
    NSString *stringParser3;
    NSString *stringParser4;
    NSString *stringParser5;
    NSString *stringParser6;
    NSString *stringParser7;
    NSString *stringParser8;
    NSString *stringParser9;
    NSString *stringParser10;
    NSString *stringParser11;
    NSString *stringParser12;
    NSString *stringParser13;
    NSString *stringParser14;
    NSString *stringParser15;
    NSString *stringParser16;
    NSString *stringParser17;
    NSString *stringParser18;
    NSString *stringParser19;
    NSString *stringParser20;
    NSString *stringTest1;
    NSString *stringTest2;

 //   int *i;
    
    NSString *stringSwitchSeconds;
    NSString *stringSwitch24hours;
    NSString *stringSegTemperature;
    NSString *stringSegLanguage;

    UIWindow *window;

    NSURL *newURLZ;
    NSURL *newURLZH;
   // CLLocation *lastKnownLocation;
    NSString *global1;

  //  IBOutlet UIWebView *weatherView;

}
@property (nonatomic, retain) IBOutlet Tab2 *Tab2viewController;

@property (nonatomic, retain) NSString *stringSwitchSeconds;
@property (nonatomic, retain) NSString *stringSwitch24hours;
@property (nonatomic, retain) NSString *stringSegTemperature;
@property (nonatomic, retain) NSString *stringSegLanguage;

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) NSString *weatherVal;
@property (nonatomic, retain) NSString *weatherValH;
@property (nonatomic, retain) NSString *weatherValL;
@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *condition;

@property (nonatomic, retain) NSString *strSeconds;
@property (nonatomic, retain) NSString *str24HRS;
@property (nonatomic, retain) NSString *strTemperatureDegrees;

@property (nonatomic, retain) NSString *stringParser1;
@property (nonatomic, retain) NSString *stringParser2;
@property (nonatomic, retain) NSString *stringParser3;
@property (nonatomic, retain) NSString *stringParser4;
@property (nonatomic, retain) NSString *stringParser5;
@property (nonatomic, retain) NSString *stringParser6;
@property (nonatomic, retain) NSString *stringParser7;
@property (nonatomic, retain) NSString *stringParser8;
@property (nonatomic, retain) NSString *stringParser9;
@property (nonatomic, retain) NSString *stringParser10;
@property (nonatomic, retain) NSString *stringParser11;
@property (nonatomic, retain) NSString *stringParser12;
@property (nonatomic, retain) NSString *stringParser13;
@property (nonatomic, retain) NSString *stringParser14;
@property (nonatomic, retain) NSString *stringParser15;
@property (nonatomic, retain) NSString *stringParser16;
@property (nonatomic, retain) NSString *stringParser17;
@property (nonatomic, retain) NSString *stringParser18;
@property (nonatomic, retain) NSString *stringParser19;
@property (nonatomic, retain) NSString *stringParser20;
@property (nonatomic, retain) NSString *stringTest1;
@property (nonatomic, retain) NSString *stringTest2;
//@property (nonatomic, retain) int *i;

//@property (nonatomic, retain) CLLocation *lastKnownLocation;

@property (strong, nonatomic, getter=theNewTitle) NSURL *newURLZ;
@property (strong, nonatomic, getter=theNewTitle) NSURL *newURLZH;
@property (nonatomic, retain) NSString *global1;

//@property (nonatomic, retain) UIWebView *weatherView;

@property (strong, nonatomic) MainViewController *mainViewController;

@end
