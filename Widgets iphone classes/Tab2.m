//
//  Tab2.m
//  Widgets iphone
//
//  Created by JUULLLIIIIAAAAANNNNNN on 2/25/13.
//
//

#import "Tab2.h"

@interface Tab2 ()

@end

@implementation Tab2
@synthesize Tab2viewController;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    //[self.mainView makeKeyAndVisible];

}
@end
