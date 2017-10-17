//
//  FlipsideViewController.h
//  Widgets iphone
//
//  Created by Admin on 7/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@class FlipsideViewController;
@class MainViewController;
@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController {
    IBOutlet UITextField *weatherUpdate;
    IBOutlet UILabel *test;
    IBOutlet UIWebView *weatherView;
    IBOutlet UILabel *weatherLabel;
    IBOutlet UIView *viewAbout;
    IBOutlet UIView *viewFlip;

    // SETTINGS //
    IBOutlet UISwitch *switchSeconds;
    IBOutlet UISwitch *switch24hours;
    IBOutlet UISegmentedControl *segTemperature;
    IBOutlet UISegmentedControl *segLanguage;

    // SETTINGS //

       }


@property (assign, nonatomic) id <FlipsideViewControllerDelegate> delegate;
@property (nonatomic, retain) UITextField *weatherUpdate;
@property (nonatomic, retain) UILabel *test;
@property (nonatomic, retain) UIWebView *weatherView;
@property (nonatomic, retain) UILabel *weatherLabel;

@property (nonatomic, retain) UIView *viewAbout;
@property (nonatomic, retain) UIView *viewFlip;

@property (nonatomic, retain) UISwitch *switchSeconds;
@property (nonatomic, retain) UISwitch *switch24hours;
@property (nonatomic, retain) UISegmentedControl *segTemperature;
@property (nonatomic, retain) UISegmentedControl *segLanguage;



- (IBAction)done:(id)sender;
- (IBAction)switches:(id)sender;
- (IBAction)segmentAction:(id)sender;
- (IBAction)About:(id)sender;
- (IBAction)AboutBack:(id)sender;
- (IBAction)JearSite:(id)sender;

@end
