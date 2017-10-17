//
//  FlipsideViewController.m
//  Widgets iphone
//
//  Created by Admin on 7/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "FlipsideViewController.h"
@interface FlipsideViewController ()

@end

@implementation FlipsideViewController
@synthesize weatherUpdate;
@synthesize test;
@synthesize weatherView;
@synthesize weatherLabel;
@synthesize switchSeconds;
@synthesize switch24hours;
@synthesize segLanguage;
@synthesize segTemperature;
@synthesize viewAbout;
@synthesize viewFlip;

@synthesize delegate = _delegate;
//@synthesize weatherUpdate;
//@synthesize weatherVal;
- (IBAction)switches:(id)sender {
      AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    if (switch24hours.on) {
        mainDelegate.str24HRS =@"Yes";
    }
    else {
        mainDelegate.str24HRS =@"No";
    }
    if (switchSeconds.on) {
        mainDelegate.strSeconds =@"Yes";
    }
    else {
        mainDelegate.strSeconds =@"No";
    }

    NSUserDefaults *userPreferences = [NSUserDefaults standardUserDefaults];
    [userPreferences setBool:switch24hours.on forKey:@"stateOfSwitchstr24HRS"];
    NSUserDefaults *userPreferences1 = [NSUserDefaults standardUserDefaults];
    [userPreferences1 setBool:switchSeconds.on forKey:@"stateOfSwitchstrSeconds"];

 //[[NSUserDefaults standardUserDefaults] setObject:mainDelegate.str24HRS forKey:@"str24HRSSave"];
   // [[NSUserDefaults standardUserDefaults] setObject:mainDelegate.strSeconds forKey:@"strSecondsSave"];

}
- (IBAction)About:(id)sender {
[UIView beginAnimations:nil context:nil];
[UIView setAnimationDuration:1.25];
[UIView setAnimationCurve:UIViewAnimationTransitionNone];
[UIView setAnimationTransition:UIViewAnimationTransitionNone forView:self.view cache:YES];
[self.view insertSubview:viewAbout atIndex:0];
 //   viewFlip.hidden = true;
    viewAbout.hidden = false;
    [self.view bringSubviewToFront:(UIView *)viewAbout];

//[self clearCurrentView];
[UIView commitAnimations];
}
- (IBAction)AboutBack:(id)sender{
    [UIView beginAnimations:nil context:nil];
    [UIView setAnimationDuration:1.25];
    [UIView setAnimationCurve:UIViewAnimationTransitionNone];
    [UIView setAnimationTransition:UIViewAnimationTransitionNone forView:self.view cache:YES];
   // [self.view insertSubview:viewFlip atIndex:0];
  //  viewFlip.hidden = false;
    viewAbout.hidden = true;
    [self.view bringSubviewToFront:(UIView *)viewFlip];

}
- (IBAction)JearSite:(id)sender{
    NSURL *url = [ [ NSURL alloc ] initWithString: @"http://www.jeardev.com" ];
    [[UIApplication sharedApplication] openURL:url];
    [url release];
}

- (IBAction)segmentAction:(id)sender {
    AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];

    
    if( [segTemperature selectedSegmentIndex] == 0 )
    {
        mainDelegate.stringSegTemperature =@"F";
    }
    if( [segTemperature selectedSegmentIndex] == 1 )
    {
        mainDelegate.stringSegTemperature =@"C";

    }

    
}
- (void)viewDidLoad
{
    
    NSUserDefaults *userPreferences = [NSUserDefaults standardUserDefaults];
    [switch24hours setOn:[userPreferences boolForKey:@"stateOfSwitchstr24HRS"]];
    NSUserDefaults *userPreferences1 = [NSUserDefaults standardUserDefaults];
    [switchSeconds setOn:[userPreferences1 boolForKey:@"stateOfSwitchstrSeconds"]];
 /*   NSString *savedStr24HRS = [[NSUserDefaults standardUserDefaults] stringForKey:@"str24HRSSave"];
    NSString *savedStrSeconds = [[NSUserDefaults standardUserDefaults] stringForKey:@"strSecondsSave"];
    [super viewDidLoad];
    if ([savedStr24HRS isEqualToString:@"Yes"]) {
        [switch24hours setOn:YES animated:NO];
    } else {
        [switch24hours setOn:NO animated:NO];
        
    }
    if ([savedStrSeconds isEqualToString:@"Yes"]) {
        [switchSeconds setOn:YES animated:NO];
    } else {
        [switchSeconds setOn:NO animated:NO];
        
    }
  */

 //   [NSTimer scheduledTimerWithTimeInterval:1.00 target:self selector:@selector(CheckSwitches) userInfo:nil repeats:YES];
 //   [NSTimer scheduledTimerWithTimeInterval:1.00 target:self selector:@selector(CheckSegments) userInfo:nil repeats:YES];


 
    
	// Do any additional setup after loading the view, typically from a nib.
   // FlipsideViewController *second = [[FlipsideViewController alloc] init];
   // test =@"heellloo";
   // NSString *stringToAppend;
   /* NSString *newURLAsString = [NSString stringWithFormat:@"http://www.weather.com/weather/right-now/78504"];
    NSLog(@"%@", newURLAsString);
    NSURL *newURL = [NSURL URLWithString:newURLAsString];
    
    [weatherView loadRequest:[NSURLRequest requestWithURL:newURL cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:60.0]];*/

}
- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    NSLog(@"v");
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
  //  AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
  //  mainDelegate.weatherVal = weatherUpdate.text;
  //  mainDelegate.weatherValH = weatherUpdate.text;

    [self.delegate flipsideViewControllerDidFinish:self];
  //  NSString *stringToAppend = mainDelegate.weatherVal;
   // NSString *newURLAsStringHL = [NSString stringWithFormat:@"http://www.weather.com/weather/5-day/%@",stringToAppend];

   
   // NSLog(@"%@", newURLAsString);
   

  /*  [weatherView loadRequest:[NSURLRequest requestWithURL:newURL cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:60.0]];*/

    /*NSURLRequest *theRequest=[NSURLRequest requestWithURL:newURL
     cachePolicy:NSURLRequestUseProtocolCachePolicy
     timeoutInterval:60.0];
     [weatherView loadRequest:[NSURLRequest requestWithURL:newURL cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:60.0]];*/
    //[weatherView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"http://facebook.com%@"]]];

   

}

@end
