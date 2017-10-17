//
//  AppDelegate.m
//  Widgets iphone
//
//  Created by Admin on 7/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "AppDelegate.h"
#import "LocationGetter.h"
#import "MainViewController.h"

@implementation AppDelegate

@synthesize window;
@synthesize mainViewController = _mainViewController;
@synthesize weatherVal;
@synthesize city;
@synthesize condition;
@synthesize global1;

@synthesize str24HRS;
@synthesize strTemperatureDegrees;
@synthesize strSeconds;

@synthesize stringParser1;
@synthesize stringParser2;
@synthesize stringParser3;
@synthesize stringParser4;
@synthesize stringParser5;
@synthesize stringParser6;
@synthesize stringParser7;
@synthesize stringParser8;
@synthesize stringParser9;
@synthesize stringParser10;
@synthesize stringParser11;
@synthesize stringParser12;
@synthesize stringParser13;
@synthesize stringParser14;
@synthesize stringParser15;
@synthesize stringParser16;
@synthesize stringParser17;
@synthesize stringParser18;
@synthesize stringParser19;
@synthesize stringParser20;
@synthesize stringTest1;
@synthesize stringTest2;
//@synthesize i;

@synthesize weatherValH;
@synthesize weatherValL;
@synthesize newURLZ;
@synthesize newURLZH;
//@synthesize lastKnownLocation;

//@synthesize weatherView;
//#pragma mark -
//#pragma mark Application lifecycle
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    /*UIActivityIndicatorView *spinner = [[[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhiteLarge] autorelease];
	spinner.center = CGPointMake(self.mainViewController.view.frame.size.width / 2, self.mainViewController.view.frame.size.height / 2);
    [spinner startAnimating];
    
    [mainContorller.view addSubview:spinner];
    
    // get our physical location
  //  LocationGetter *locationGetter = [[LocationGetter alloc] init];
   // locationGetter.delegate = self;
   // [locationGetter startUpdates];
    
    // Add the view controller's view to the window and display.
    [window addSubview:mainContorller.view];
    [window makeKeyAndVisible];*/
    
    //return YES;

    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.mainViewController = [[MainViewController alloc] initWithNibName:@"MainViewController" bundle:nil];
    self.window.rootViewController = self.mainViewController;
    [self.window makeKeyAndVisible];
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}
//# pragma mark -
//# pragma mark LocationGetter Delegate Methods

/*- (void)newPhysicalLocation:(CLLocation *)location {
    
    // Store for later use
    self.lastKnownLocation = location;
    
    // Remove spinner from view
    for (UIView *v in [self.mainViewController.view subviews])
    {
        if ([v class] == [UIActivityIndicatorView class])
        {
            [v removeFromSuperview];
            break;
        }
    }
    
    // Alert user
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Location Found" message:[NSString stringWithFormat:@"Found physical location.  %f %f", self.lastKnownLocation.coordinate.latitude, self.lastKnownLocation.coordinate.longitude] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles: nil];
    [alert show];
    [alert release];
}
#pragma mark -
#pragma mark Memory management

- (void)dealloc {
    [lastKnownLocation release];
    [mainContorller release];
    [window release];
    [super dealloc];
}



 */




@end
