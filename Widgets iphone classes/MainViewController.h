//
//  MainViewController.h
//  Widgets iphone
//
//  Created by Admin on 7/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "FlipsideViewController.h"
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>


#import <QuartzCore/CALayer.h>
#import "MapKit/MapKit.h"
//#import "ICB_WeatherConditions.h"
#import "LocationGetter.h"
#import "AppDelegate.h"
#import "APIWunder.h"
#import "XMLParser.h"
#import "Tweet.h"
#import "ViewController.h"
//#import "GADBannerView.h"
#import <iAd/iAd.h>
#import <AudioToolbox/AudioToolbox.h>
#import <MessageUI/MessageUI.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <Security/Security.h>
#import <CoreText/CoreText.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import "GADBannerView.h"


@class MainViewController;


@interface MainViewController : UIViewController <FlipsideViewControllerDelegate,CLLocationManagerDelegate, UITableViewDelegate, UITableViewDataSource, ADBannerViewDelegate> {
    GADBannerView *bannerView_;
    

      // CURRENCY EXCHANGE //
    // CURRENCY EXCHANGE //
    IBOutlet UIView *viewHelpTab;

    IBOutlet UIButton *btnInvisibleTab1;
    IBOutlet UIButton *btnInvisibleTab2;
    IBOutlet UIButton *btnInvisibleTab3;
    IBOutlet UIButton *btnInvisibleTab4;
    IBOutlet UIButton *btnInvisibleTab5;
    IBOutlet UIButton *btnInvisibleTab6;

    IBOutlet UIButton *button0;
    IBOutlet UIButton *button1;
    IBOutlet UIButton *button2;
    IBOutlet UIButton *button3;
    IBOutlet UIButton *button4;
    IBOutlet UIButton *button5;
    IBOutlet UIButton *button6;
    IBOutlet UIButton *button7;
    IBOutlet UIButton *button8;
    IBOutlet UIButton *button9;
    
    IBOutlet UIButton *buttonClose;
    
    IBOutlet UIButton *buttonAbout;
    IBOutlet UIButton *buttonClear;
    IBOutlet UIButton *buttonSwap;
    IBOutlet UIButton *buttonPeriod;
    IBOutlet UIButton *buttonBackspace;
    
    IBOutlet UIButton *buttonTo;
    IBOutlet UIButton *buttonFrom;
    IBOutlet UIButton *buttonGroup;
    IBOutlet UIButton *buttonPrecision;
    
    IBOutlet UILabel *labelUpdate;
    
    IBOutlet UILabel *labelCurrency1;
    IBOutlet UILabel *labelCurrency2;
    
    IBOutlet UILabel *labelTab1Currency1;
    IBOutlet UILabel *labelTab1Currency2;

    IBOutlet UILabel *labelTab2Currency1;
    IBOutlet UILabel *labelTab2Currency2;
    
    IBOutlet UILabel *labelTab3Currency1;
    IBOutlet UILabel *labelTab3Currency2;
    
    IBOutlet UILabel *labelTab4Currency1;
    IBOutlet UILabel *labelTab4Currency2;
    
    IBOutlet UILabel *labelTab5Currency1;
    IBOutlet UILabel *labelTab5Currency2;
    
    IBOutlet UILabel *labelTab6Currency1;
    IBOutlet UILabel *labelTab6Currency2;
    

    IBOutlet UILabel *labelCurrencyDesc1;
    IBOutlet UILabel *labelCurrencyDesc2;
    
   IBOutlet UILabel *labelCurrencyCode1;
    IBOutlet UILabel *labelCurrencyCode2;
    
    IBOutlet UILabel *labelTab1CurrencyCode1;
    IBOutlet UILabel *labelTab1CurrencyCode2;
    
    IBOutlet UILabel *labelTab2CurrencyCode1;
    IBOutlet UILabel *labelTab2CurrencyCode2;
    
    IBOutlet UILabel *labelTab3CurrencyCode1;
    IBOutlet UILabel *labelTab3CurrencyCode2;
    
    IBOutlet UILabel *labelTab4CurrencyCode1;
    IBOutlet UILabel *labelTab4CurrencyCode2;
    
    IBOutlet UILabel *labelTab5CurrencyCode1;
    IBOutlet UILabel *labelTab5CurrencyCode2;
    
    IBOutlet UILabel *labelTab6CurrencyCode1;
    IBOutlet UILabel *labelTab6CurrencyCode2;
    

    IBOutlet UILabel *labelCurrencySymbol1;
    IBOutlet UILabel *labelCurrencySymbol2;
    
    IBOutlet UILabel *labelTab1Seperator;
    IBOutlet UILabel *labelTab2Seperator;
    IBOutlet UILabel *labelTab3Seperator;
    IBOutlet UILabel *labelTab4Seperator;
    IBOutlet UILabel *labelTab5Seperator;
    IBOutlet UILabel *labelTab6Seperator;

    
  //  IBOutlet UIImageView *imageTab1Flag1;
  //  IBOutlet UIImageView *imageTab1Flag2;

    // CURRENCY EXCHANGE //
    // CURRENCY EXCHANGE //
    IBOutlet UILabel *lblStatTextTab1;
    IBOutlet UILabel *lblStatTextTab2;
    IBOutlet UILabel *lblStatTextTab3;
    IBOutlet UILabel *lblStatTextTab4;
    IBOutlet UILabel *lblStatTextTab5;
    IBOutlet UILabel *lblStatTextTab6;

    // TWITTER //
    NSString *tweetnumString;
    
     IBOutlet    UIImageView *imgStatsIconTwitterTab1;
    IBOutlet    UIImageView *imgStatsIconTwitterTab2;
    IBOutlet    UIImageView *imgStatsIconTwitterTab3;
    IBOutlet    UIImageView *imgStatsIconTwitterTab4;
    IBOutlet    UIImageView *imgStatsIconTwitterTab5;
    IBOutlet    UIImageView *imgStatsIconTwitterTab6;
    
    IBOutlet    UIImageView *imgStatsTwitterTab1;
    IBOutlet    UIImageView *imgStatsTwitterTab2;
    IBOutlet    UIImageView *imgStatsTwitterTab3;
    IBOutlet    UIImageView *imgStatsTwitterTab4;
    IBOutlet    UIImageView *imgStatsTwitterTab5;
    IBOutlet    UIImageView *imgStatsTwitterTab6;
    
    IBOutlet    UIButton *btnStatsLeftTab1;
    IBOutlet    UIButton *btnStatsLeftTab2;
    IBOutlet    UIButton *btnStatsLeftTab3;
    IBOutlet    UIButton *btnStatsLeftTab4;
    IBOutlet    UIButton *btnStatsLeftTab5;
    IBOutlet    UIButton *btnStatsLeftTab6;
    
    IBOutlet    UIButton *btnStatsRightTab1;
    IBOutlet    UIButton *btnStatsRightTab2;
    IBOutlet    UIButton *btnStatsRightTab3;
    IBOutlet    UIButton *btnStatsRightTab4;
    IBOutlet    UIButton *btnStatsRightTab5;
    IBOutlet    UIButton *btnStatsRightTab6;
    
    IBOutlet    UIButton *btnStatsLeftAllTab1;
    IBOutlet    UIButton *btnStatsLeftAllTab2;
    IBOutlet    UIButton *btnStatsLeftAllTab3;
    IBOutlet    UIButton *btnStatsLeftAllTab4;
    IBOutlet    UIButton *btnStatsLeftAllTab5;
    IBOutlet    UIButton *btnStatsLeftAllTab6;
    
    IBOutlet    UIButton *btnStatsRightAllTab1;
    IBOutlet    UIButton *btnStatsRightAllTab2;
    IBOutlet    UIButton *btnStatsRightAllTab3;
    IBOutlet    UIButton *btnStatsRightAllTab4;
    IBOutlet    UIButton *btnStatsRightAllTab5;
    IBOutlet    UIButton *btnStatsRightAllTab6;
    
    IBOutlet   UILabel *lblStatsTweetNumTab1;
    IBOutlet   UILabel *lblStatsTweetNumTab2;
    IBOutlet   UILabel *lblStatsTweetNumTab3;
    IBOutlet   UILabel *lblStatsTweetNumTab4;
    IBOutlet   UILabel *lblStatsTweetNumTab5;
    IBOutlet   UILabel *lblStatsTweetNumTab6;
    
    IBOutlet    UIButton *btnLeftTab1;
    IBOutlet    UIButton *btnLeftTab2;
    IBOutlet    UIButton *btnLeftTab3;
    IBOutlet    UIButton *btnLeftTab4;
    IBOutlet    UIButton *btnLeftTab5;
    IBOutlet    UIButton *btnLeftTab6;
    
    IBOutlet    UIButton *btnRightTab1;
    IBOutlet    UIButton *btnRightTab2;
    IBOutlet    UIButton *btnRightTab3;
    IBOutlet    UIButton *btnRightTab4;
    IBOutlet    UIButton *btnRightTab5;
    IBOutlet    UIButton *btnRightTab6;
    
    IBOutlet    UIButton *btnLeftAllTab1;
    IBOutlet    UIButton *btnLeftAllTab2;
    IBOutlet    UIButton *btnLeftAllTab3;
    IBOutlet    UIButton *btnLeftAllTab4;
    IBOutlet    UIButton *btnLeftAllTab5;
    IBOutlet    UIButton *btnLeftAllTab6;
    
    IBOutlet    UIButton *btnRightAllTab1;
    IBOutlet    UIButton *btnRightAllTab2;
    IBOutlet    UIButton *btnRightAllTab3;
    IBOutlet    UIButton *btnRightAllTab4;
    IBOutlet    UIButton *btnRightAllTab5;
    IBOutlet    UIButton *btnRightAllTab6;
    
    
    
    IBOutlet    UILabel *lblTweetNumTab1;
    IBOutlet    UILabel *lblTweetNumTab2;
    IBOutlet    UILabel *lblTweetNumTab3;
    IBOutlet    UILabel *lblTweetNumTab4;
    IBOutlet    UILabel *lblTweetNumTab5;
    IBOutlet    UILabel *lblTweetNumTab6;
    
    IBOutlet    UILabel *lblStatsOfTab1;
    IBOutlet    UILabel *lblStatsOfTab2;
    IBOutlet    UILabel *lblStatsOfTab3;
    IBOutlet    UILabel *lblStatsOfTab4;
    IBOutlet    UILabel *lblStatsOfTab5;
    IBOutlet    UILabel *lblStatsOfTab6;
    
    IBOutlet   UILabel *lblOfTab1;
    IBOutlet    UILabel *lblOfTab2;
    IBOutlet    UILabel *lblOfTab3;
    IBOutlet    UILabel *lblOfTab4;
    IBOutlet    UILabel *lblOfTab5;
    IBOutlet    UILabel *lblOfTab6;
    
    IBOutlet   UILabel *lblStats20Tab1;
    IBOutlet   UILabel *lblStats20Tab2;
    IBOutlet    UILabel *lblStats20Tab3;
    IBOutlet   UILabel *lblStats20Tab4;
    IBOutlet   UILabel *lblStats20Tab5;
    IBOutlet   UILabel *lblStats20Tab6;
    
    IBOutlet   UILabel *lbl20Tab1;
    IBOutlet   UILabel *lbl20Tab2;
    IBOutlet   UILabel *lbl20Tab3;
    IBOutlet   UILabel *lbl20Tab4;
    IBOutlet   UILabel *lbl20Tab5;
    IBOutlet   UILabel *lbl20Tab6;
    
    IBOutlet UITextView *txtFieldStatsTweetsTab1;
    IBOutlet   UITextView *txtFieldStatsTweetsTab2;
    IBOutlet    UITextView *txtFieldStatsTweetsTab3;
    IBOutlet    UITextView *txtFieldStatsTweetsTab4;
    IBOutlet    UITextView *txtFieldStatsTweetsTab5;
    IBOutlet    UITextView *txtFieldStatsTweetsTab6;
    
    IBOutlet   UITextView *txtFieldTweetsTab1;
    IBOutlet    UITextView *txtFieldTweetsTab2;
    IBOutlet    UITextView *txtFieldTweetsTab3;
    IBOutlet    UITextView *txtFieldTweetsTab4;
    IBOutlet    UITextView *txtFieldTweetsTab5;
    IBOutlet    UITextView *txtFieldTweetsTab6;
    
    // TWITTER //
    IBOutlet UIView *settingsView;
    IBOutlet UIView *viewCurrencyExchange;

    IBOutlet UIView *viewCurrencyExchange1;

    // TAB 1 //
    NSString *strTab1Selection;
    NSString *strTab2Selection;
    NSString *strTab3Selection;
    NSString *strTab4Selection;
    NSString *strTab5Selection;
    NSString *strTab6Selection;

    IBOutlet UIButton *btnGoWebsiteTab1;
    IBOutlet UIButton *btnGoWebsiteTab2;
    IBOutlet UIButton *btnGoWebsiteTab3;
    IBOutlet UIButton *btnGoWebsiteTab4;
    IBOutlet UIButton *btnGoWebsiteTab5;
    IBOutlet UIButton *btnGoWebsiteTab6;
    
    // TAB 1 //
    
    IBOutlet UILabel *temperature;
    IBOutlet UILabel *temperatureH;
    IBOutlet UILabel *temperatureL;
    IBOutlet UILabel *timeLable;
    IBOutlet UILabel *amorpm;
    IBOutlet UILabel *date;
    IBOutlet UILabel *lblCity;
    IBOutlet UILabel *lblClimate;
    IBOutlet UILabel *lblUpdated;
    
    IBOutlet UILabel *lblStatsTab1Text1;
    IBOutlet UILabel *lblStatsTab1Text2;
    IBOutlet UILabel *lblStatsTab1Text3;
    IBOutlet UILabel *lblStatsTab1Text4;
    IBOutlet UILabel *lblStatsTab1Text5;
    
    
    IBOutlet UILabel *lblStatsTab2Text1;
    IBOutlet UILabel *lblStatsTab2Text2;
    IBOutlet UILabel *lblStatsTab2Text3;
    IBOutlet UILabel *lblStatsTab2Text4;
    IBOutlet UILabel *lblStatsTab2Text5;
    
    IBOutlet UILabel *lblStatsTab3Text1;
    IBOutlet UILabel *lblStatsTab3Text2;
    IBOutlet UILabel *lblStatsTab3Text3;
    IBOutlet UILabel *lblStatsTab3Text4;
    IBOutlet UILabel *lblStatsTab3Text5;
    
    IBOutlet UILabel *lblStatsTab4Text1;
    IBOutlet UILabel *lblStatsTab4Text2;
    IBOutlet UILabel *lblStatsTab4Text3;
    IBOutlet UILabel *lblStatsTab4Text4;
    IBOutlet UILabel *lblStatsTab4Text5;
    
    IBOutlet UILabel *lblStatsTab5Text1;
    IBOutlet UILabel *lblStatsTab5Text2;
    IBOutlet UILabel *lblStatsTab5Text3;
    IBOutlet UILabel *lblStatsTab5Text4;
    IBOutlet UILabel *lblStatsTab5Text5;
    
    IBOutlet UILabel *lblStatsTab6Text1;
    IBOutlet UILabel *lblStatsTab6Text2;
    IBOutlet UILabel *lblStatsTab6Text3;
    IBOutlet UILabel *lblStatsTab6Text4;
    IBOutlet UILabel *lblStatsTab6Text5;
    
    IBOutlet UILabel *lblStatsTab1NumText1;
    IBOutlet UILabel *lblStatsTab1NumText2;
    IBOutlet UILabel *lblStatsTab1NumText3;
    IBOutlet UILabel *lblStatsTab1NumText4;
    IBOutlet UILabel *lblStatsTab1NumText5;
    
    IBOutlet UILabel *lblStatsTab2NumText1;
    IBOutlet UILabel *lblStatsTab2NumText2;
    IBOutlet UILabel *lblStatsTab2NumText3;
    IBOutlet UILabel *lblStatsTab2NumText4;
    IBOutlet UILabel *lblStatsTab2NumText5;
    
    IBOutlet UILabel *lblStatsTab3NumText1;
    IBOutlet UILabel *lblStatsTab3NumText2;
    IBOutlet UILabel *lblStatsTab3NumText3;
    IBOutlet UILabel *lblStatsTab3NumText4;
    IBOutlet UILabel *lblStatsTab3NumText5;
    
    IBOutlet UILabel *lblStatsTab4NumText1;
    IBOutlet UILabel *lblStatsTab4NumText2;
    IBOutlet UILabel *lblStatsTab4NumText3;
    IBOutlet UILabel *lblStatsTab4NumText4;
    IBOutlet UILabel *lblStatsTab4NumText5;
    
    IBOutlet UILabel *lblStatsTab5NumText1;
    IBOutlet UILabel *lblStatsTab5NumText2;
    IBOutlet UILabel *lblStatsTab5NumText3;
    IBOutlet UILabel *lblStatsTab5NumText4;
    IBOutlet UILabel *lblStatsTab5NumText5;
    
    IBOutlet UILabel *lblStatsTab6NumText1;
    IBOutlet UILabel *lblStatsTab6NumText2;
    IBOutlet UILabel *lblStatsTab6NumText3;
    IBOutlet UILabel *lblStatsTab6NumText4;
    IBOutlet UILabel *lblStatsTab6NumText5;
    
    
    IBOutlet UILabel *lblTab1NumText1;
    IBOutlet UILabel *lblTab1NumText2;
    IBOutlet UILabel *lblTab1NumText3;
    
    IBOutlet UILabel *lblTab2NumText1;
    IBOutlet UILabel *lblTab2NumText2;
    IBOutlet UILabel *lblTab2NumText3;
    
    IBOutlet UILabel *lblTab3NumText1;
    IBOutlet UILabel *lblTab3NumText2;
    IBOutlet UILabel *lblTab3NumText3;
    
    IBOutlet UILabel *lblTab4NumText1;
    IBOutlet UILabel *lblTab4NumText2;
    IBOutlet UILabel *lblTab4NumText3;
    
    IBOutlet UILabel *lblTab5NumText1;
    IBOutlet UILabel *lblTab5NumText2;
    IBOutlet UILabel *lblTab5NumText3;
    
    IBOutlet UILabel *lblTab6NumText1;
    IBOutlet UILabel *lblTab6NumText2;
    IBOutlet UILabel *lblTab6NumText3;
    
    
    
    IBOutlet UILabel *lblTab1Text1;
    IBOutlet UILabel *lblTab1Text2;
    IBOutlet UILabel *lblTab1Text3;
    
    IBOutlet UILabel *lblTab2Text1;
    IBOutlet UILabel *lblTab2Text2;
    IBOutlet UILabel *lblTab2Text3;
    
    IBOutlet UILabel *lblTab3Text1;
    IBOutlet UILabel *lblTab3Text2;
    IBOutlet UILabel *lblTab3Text3;
    
    IBOutlet UILabel *lblTab4Text1;
    IBOutlet UILabel *lblTab4Text2;
    IBOutlet UILabel *lblTab4Text3;
    
    IBOutlet UILabel *lblTab5Text1;
    IBOutlet UILabel *lblTab5Text2;
    IBOutlet UILabel *lblTab5Text3;
    
    IBOutlet UILabel *lblTab6Text1;
    IBOutlet UILabel *lblTab6Text2;
    IBOutlet UILabel *lblTab6Text3;
    
    IBOutlet UITableView *tableView1;
 
    IBOutlet UITableView *tableViewEmail;
   /* IBOutlet UITableView *Tab2TableViewEmail;
    IBOutlet UITableView *Tab3TableViewEmail;
    IBOutlet UITableView *Tab4TableViewEmail;
    IBOutlet UITableView *Tab5TableViewEmail;
    IBOutlet UITableView *Tab6TableViewEmail;*/

    
    //IBOutlet UITableView *tableView2;
    //IBOutlet UITableView *tableView3;
    //IBOutlet UITableView *tableView4;
    //IBOutlet UITableView *tableView5;
    //IBOutlet UITableView *tableView6;
    
    IBOutlet UITableView *Tab1ViewtableView1;
    IBOutlet UITableView *Tab1ViewtableView2;
    IBOutlet UITableView *Tab1ViewtableView3;
    
    IBOutlet UITableView *Tab2ViewtableView1;
    IBOutlet UITableView *Tab2ViewtableView2;
    IBOutlet UITableView *Tab2ViewtableView3;
    
    IBOutlet UITableView *Tab3ViewtableView1;
    IBOutlet UITableView *Tab3ViewtableView2;
    IBOutlet UITableView *Tab3ViewtableView3;
    
    IBOutlet UITableView *Tab4ViewtableView1;
    IBOutlet UITableView *Tab4ViewtableView2;
    IBOutlet UITableView *Tab4ViewtableView3;
    
    IBOutlet UITableView *Tab5ViewtableView1;
    IBOutlet UITableView *Tab5ViewtableView2;
    IBOutlet UITableView *Tab5ViewtableView3;
    
    IBOutlet UITableView *Tab6ViewtableView1;
    IBOutlet UITableView *Tab6ViewtableView2;
    IBOutlet UITableView *Tab6ViewtableView3;
    
    IBOutlet UITableView *Tab1ViewtableView1Hotmail;
    IBOutlet UITableView *Tab1ViewtableView2Hotmail;
    IBOutlet UITableView *Tab1ViewtableView3Hotmail;
    
    IBOutlet UITableView *Tab2ViewtableView1Hotmail;
    IBOutlet UITableView *Tab2ViewtableView2Hotmail;
    IBOutlet UITableView *Tab2ViewtableView3Hotmail;
    
    IBOutlet UITableView *Tab3ViewtableView1Hotmail;
    IBOutlet UITableView *Tab3ViewtableView2Hotmail;
    IBOutlet UITableView *Tab3ViewtableView3Hotmail;
    
    IBOutlet UITableView *Tab4ViewtableView1Hotmail;
    IBOutlet UITableView *Tab4ViewtableView2Hotmail;
    IBOutlet UITableView *Tab4ViewtableView3Hotmail;
    
    IBOutlet UITableView *Tab5ViewtableView1Hotmail;
    IBOutlet UITableView *Tab5ViewtableView2Hotmail;
    IBOutlet UITableView *Tab5ViewtableView3Hotmail;
    
    IBOutlet UITableView *Tab6ViewtableView1Hotmail;
    IBOutlet UITableView *Tab6ViewtableView2Hotmail;
    IBOutlet UITableView *Tab6ViewtableView3Hotmail;

    IBOutlet UITableView *Tab1ViewtableView1Gmail;
    IBOutlet UITableView *Tab1ViewtableView2Gmail;
    IBOutlet UITableView *Tab1ViewtableView3Gmail;
    
    IBOutlet UITableView *Tab2ViewtableView1Gmail;
    IBOutlet UITableView *Tab2ViewtableView2Gmail;
    IBOutlet UITableView *Tab2ViewtableView3Gmail;
    
    IBOutlet UITableView *Tab3ViewtableView1Gmail;
    IBOutlet UITableView *Tab3ViewtableView2Gmail;
    IBOutlet UITableView *Tab3ViewtableView3Gmail;
    
    IBOutlet UITableView *Tab4ViewtableView1Gmail;
    IBOutlet UITableView *Tab4ViewtableView2Gmail;
    IBOutlet UITableView *Tab4ViewtableView3Gmail;
    
    IBOutlet UITableView *Tab5ViewtableView1Gmail;
    IBOutlet UITableView *Tab5ViewtableView2Gmail;
    IBOutlet UITableView *Tab5ViewtableView3Gmail;
    
    IBOutlet UITableView *Tab6ViewtableView1Gmail;
    IBOutlet UITableView *Tab6ViewtableView2Gmail;
    IBOutlet UITableView *Tab6ViewtableView3Gmail;

    IBOutlet UITableView *Tab1ViewtableView1AOL;
    IBOutlet UITableView *Tab1ViewtableView2AOL;
    IBOutlet UITableView *Tab1ViewtableView3AOL;
    
    IBOutlet UITableView *Tab2ViewtableView1AOL;
    IBOutlet UITableView *Tab2ViewtableView2AOL;
    IBOutlet UITableView *Tab2ViewtableView3AOL;
    
    IBOutlet UITableView *Tab3ViewtableView1AOL;
    IBOutlet UITableView *Tab3ViewtableView2AOL;
    IBOutlet UITableView *Tab3ViewtableView3AOL;
    
    IBOutlet UITableView *Tab4ViewtableView1AOL;
    IBOutlet UITableView *Tab4ViewtableView2AOL;
    IBOutlet UITableView *Tab4ViewtableView3AOL;
    
    IBOutlet UITableView *Tab5ViewtableView1AOL;
    IBOutlet UITableView *Tab5ViewtableView2AOL;
    IBOutlet UITableView *Tab5ViewtableView3AOL;
    
    IBOutlet UITableView *Tab6ViewtableView1AOL;
    IBOutlet UITableView *Tab6ViewtableView2AOL;
    IBOutlet UITableView *Tab6ViewtableView3AOL;

    
    
    IBOutlet UINavigationBar *navigationBarTab1;
    IBOutlet UINavigationBar *navigationBarStatTab1;
    IBOutlet UINavigationBar *navigationBarTab2;
    IBOutlet UINavigationBar *navigationBarStatTab2;
    IBOutlet UINavigationBar *navigationBarTab3;
    IBOutlet UINavigationBar *navigationBarStatTab3;
    IBOutlet UINavigationBar *navigationBarTab4;
    IBOutlet UINavigationBar *navigationBarStatTab4;
    IBOutlet UINavigationBar *navigationBarTab5;
    IBOutlet UINavigationBar *navigationBarStatTab5;
    IBOutlet UINavigationBar *navigationBarTab6;
    IBOutlet UINavigationBar *navigationBarStatTab6;
    
    IBOutlet UINavigationBar *navigationBarTab1TableViewFacebook;
    IBOutlet UINavigationBar *navigationBarTab2TableViewFacebook;
    IBOutlet UINavigationBar *navigationBarTab3TableViewFacebook;
    IBOutlet UINavigationBar *navigationBarTab4TableViewFacebook;
    IBOutlet UINavigationBar *navigationBarTab5TableViewFacebook;
    IBOutlet UINavigationBar *navigationBarTab6TableViewFacebook;
    
    IBOutlet UINavigationBar *navigationBarTab1TableViewHotmail;
    IBOutlet UINavigationBar *navigationBarTab2TableViewHotmail;
    IBOutlet UINavigationBar *navigationBarTab3TableViewHotmail;
    IBOutlet UINavigationBar *navigationBarTab4TableViewHotmail;
    IBOutlet UINavigationBar *navigationBarTab5TableViewHotmail;
    IBOutlet UINavigationBar *navigationBarTab6TableViewHotmail;

    UIWindow *window;
    IBOutlet UIButton *btnLocationOff;
    IBOutlet UIButton *btnInternetOff;
    //
    IBOutlet UIButton *btnDisplayThree;
    IBOutlet UIButton *btnDisplayTweets;
    //
    NSString *strSelectButtonsTab1;
    NSString *strSelectButtonsTab2;
    NSString *strSelectButtonsTab3;
    NSString *strSelectButtonsTab4;
    NSString *strSelectButtonsTab5;
    NSString *strSelectButtonsTab6;
    
    NSString *selectedRow1Tab1;
    NSString *selectedRow2Tab1;
    NSString *selectedRow3Tab1;
    
    NSString *selectedRow1HotmailTab1;
    NSString *selectedRow2HotmailTab1;
    NSString *selectedRow3HotmailTab1;

    NSString *selectedRow1GmailTab1;
    NSString *selectedRow2GmailTab1;
    NSString *selectedRow3GmailTab1;

    NSString *selectedRow1AOLTab1;
    NSString *selectedRow2AOLTab1;
    NSString *selectedRow3AOLTab1;
    
    NSString *selectedRow1Tab2;
    NSString *selectedRow2Tab2;
    NSString *selectedRow3Tab2;
    
    NSString *selectedRow1HotmailTab2;
    NSString *selectedRow2HotmailTab2;
    NSString *selectedRow3HotmailTab2;
    
    NSString *selectedRow1GmailTab2;
    NSString *selectedRow2GmailTab2;
    NSString *selectedRow3GmailTab2;
    
    NSString *selectedRow1AOLTab2;
    NSString *selectedRow2AOLTab2;
    NSString *selectedRow3AOLTab2;

    NSString *selectedRow1Tab3;
    NSString *selectedRow2Tab3;
    NSString *selectedRow3Tab3;
    
    NSString *selectedRow1HotmailTab3;
    NSString *selectedRow2HotmailTab3;
    NSString *selectedRow3HotmailTab3;
    
    NSString *selectedRow1GmailTab3;
    NSString *selectedRow2GmailTab3;
    NSString *selectedRow3GmailTab3;
    
    NSString *selectedRow1AOLTab3;
    NSString *selectedRow2AOLTab3;
    NSString *selectedRow3AOLTab3;

    NSString *selectedRow1Tab4;
    NSString *selectedRow2Tab4;
    NSString *selectedRow3Tab4;
    
    NSString *selectedRow1HotmailTab4;
    NSString *selectedRow2HotmailTab4;
    NSString *selectedRow3HotmailTab4;
    
    NSString *selectedRow1GmailTab4;
    NSString *selectedRow2GmailTab4;
    NSString *selectedRow3GmailTab4;
    
    NSString *selectedRow1AOLTab4;
    NSString *selectedRow2AOLTab4;
    NSString *selectedRow3AOLTab4;

    NSString *selectedRow1Tab5;
    NSString *selectedRow2Tab5;
    NSString *selectedRow3Tab5;
    
    NSString *selectedRow1HotmailTab5;
    NSString *selectedRow2HotmailTab5;
    NSString *selectedRow3HotmailTab5;
    
    NSString *selectedRow1GmailTab5;
    NSString *selectedRow2GmailTab5;
    NSString *selectedRow3GmailTab5;
    
    NSString *selectedRow1AOLTab5;
    NSString *selectedRow2AOLTab5;
    NSString *selectedRow3AOLTab5;

    NSString *selectedRow1Tab6;
    NSString *selectedRow2Tab6;
    NSString *selectedRow3Tab6;
    
    NSString *selectedRow1HotmailTab6;
    NSString *selectedRow2HotmailTab6;
    NSString *selectedRow3HotmailTab6;
    
    NSString *selectedRow1GmailTab6;
    NSString *selectedRow2GmailTab6;
    NSString *selectedRow3GmailTab6;
    
    NSString *selectedRow1AOLTab6;
    NSString *selectedRow2AOLTab6;
    NSString *selectedRow3AOLTab6;


    
    NSString *strTab1Button1;
    NSString *strTab1Button2;
    NSString *strTab1Button3;
    
    NSString *strTab1Button1Hotmail;
    NSString *strTab1Button2Hotmail;
    NSString *strTab1Button3Hotmail;

    NSString *strTab1Button1Gmail;
    NSString *strTab1Button2Gmail;
    NSString *strTab1Button3Gmail;

    NSString *strTab1Button1AOL;
    NSString *strTab1Button2AOL;
    NSString *strTab1Button3AOL;

    NSString *strTab2Button1;
    NSString *strTab2Button2;
    NSString *strTab2Button3;
    
    NSString *strTab2Button1Hotmail;
    NSString *strTab2Button2Hotmail;
    NSString *strTab2Button3Hotmail;
    
    NSString *strTab2Button1Gmail;
    NSString *strTab2Button2Gmail;
    NSString *strTab2Button3Gmail;
    
    NSString *strTab2Button1AOL;
    NSString *strTab2Button2AOL;
    NSString *strTab2Button3AOL;

    
    NSString *strTab3Button1;
    NSString *strTab3Button2;
    NSString *strTab3Button3;
    
    NSString *strTab3Button1Hotmail;
    NSString *strTab3Button2Hotmail;
    NSString *strTab3Button3Hotmail;
    
    NSString *strTab3Button1Gmail;
    NSString *strTab3Button2Gmail;
    NSString *strTab3Button3Gmail;
    
    NSString *strTab3Button1AOL;
    NSString *strTab3Button2AOL;
    NSString *strTab3Button3AOL;

    NSString *strTab4Button1;
    NSString *strTab4Button2;
    NSString *strTab4Button3;
    
    NSString *strTab4Button1Hotmail;
    NSString *strTab4Button2Hotmail;
    NSString *strTab4Button3Hotmail;
    
    NSString *strTab4Button1Gmail;
    NSString *strTab4Button2Gmail;
    NSString *strTab4Button3Gmail;
    
    NSString *strTab4Button1AOL;
    NSString *strTab4Button2AOL;
    NSString *strTab4Button3AOL;

    NSString *strTab5Button1;
    NSString *strTab5Button2;
    NSString *strTab5Button3;
    
    NSString *strTab5Button1Hotmail;
    NSString *strTab5Button2Hotmail;
    NSString *strTab5Button3Hotmail;
    
    NSString *strTab5Button1Gmail;
    NSString *strTab5Button2Gmail;
    NSString *strTab5Button3Gmail;
    
    NSString *strTab5Button1AOL;
    NSString *strTab5Button2AOL;
    NSString *strTab5Button3AOL;



    NSString *strTab6Button1;
    NSString *strTab6Button2;
    NSString *strTab6Button3;
    
    NSString *strTab6Button1Hotmail;
    NSString *strTab6Button2Hotmail;
    NSString *strTab6Button3Hotmail;
    
    NSString *strTab6Button1Gmail;
    NSString *strTab6Button2Gmail;
    NSString *strTab6Button3Gmail;
    
    NSString *strTab6Button1AOL;
    NSString *strTab6Button2AOL;
    NSString *strTab6Button3AOL;

    NSString *stringLogInFacebookTab1;
    NSString *stringLogInTwitterTab1;
    NSString *stringLogInHotmailTab1;
    
    NSString *stringLogInFacebookTab2;
    NSString *stringLogInTwitterTab2;
    NSString *stringLogInHotmailTab2;
    
    NSString *stringLogInFacebookTab3;
    NSString *stringLogInTwitterTab3;
    NSString *stringLogInHotmailTab3;
    
    NSString *stringLogInFacebookTab4;
    NSString *stringLogInTwitterTab4;
    NSString *stringLogInHotmailTab4;
    
    NSString *stringLogInFacebookTab5;
    NSString *stringLogInTwitterTab5;
    NSString *stringLogInHotmailTab5;
    
    NSString *stringLogInFacebookTab6;
    NSString *stringLogInTwitterTab6;
    NSString *stringLogInHotmailTab6;
    
    NSString *strTab1Label1;
    NSString *strTab1Label2;
    NSString *strTab1Label3;
    
    NSString *strTab2Label1;
    NSString *strTab2Label2;
    NSString *strTab2Label3;
    
    NSString *strTab3Label1;
    NSString *strTab3Label2;
    NSString *strTab3Label3;
    
    NSString *strTab4Label1;
    NSString *strTab4Label2;
    NSString *strTab4Label3;
    
    NSString *strTab5Label1;
    NSString *strTab5Label2;
    NSString *strTab5Label3;
        
    NSString *strTab6Label1;
    NSString *strTab6Label2;
    NSString *strTab6Label3;

    NSString *strTab1Label1Hotmail;
    NSString *strTab1Label2Hotmail;
    NSString *strTab1Label3Hotmail;
    
    NSString *strTab2Label1Hotmail;
    NSString *strTab2Label2Hotmail;
    NSString *strTab2Label3Hotmail;
    
    NSString *strTab3Label1Hotmail;
    NSString *strTab3Label2Hotmail;
    NSString *strTab3Label3Hotmail;
    
    NSString *strTab4Label1Hotmail;
    NSString *strTab4Label2Hotmail;
    NSString *strTab4Label3Hotmail;
    
    NSString *strTab5Label1Hotmail;
    NSString *strTab5Label2Hotmail;
    NSString *strTab5Label3Hotmail;
    
    NSString *strTab6Label1Hotmail;
    NSString *strTab6Label2Hotmail;
    NSString *strTab6Label3Hotmail;
    
    NSString *strTab1Label1Gmail;
    NSString *strTab1Label2Gmail;
    NSString *strTab1Label3Gmail;
    
    NSString *strTab2Label1Gmail;
    NSString *strTab2Label2Gmail;
    NSString *strTab2Label3Gmail;
    
    NSString *strTab3Label1Gmail;
    NSString *strTab3Label2Gmail;
    NSString *strTab3Label3Gmail;
    
    NSString *strTab4Label1Gmail;
    NSString *strTab4Label2Gmail;
    NSString *strTab4Label3Gmail;
    
    NSString *strTab5Label1Gmail;
    NSString *strTab5Label2Gmail;
    NSString *strTab5Label3Gmail;
    
    NSString *strTab6Label1Gmail;
    NSString *strTab6Label2Gmail;
    NSString *strTab6Label3Gmail;
    
    NSString *strTab1Label1AOL;
    NSString *strTab1Label2AOL;
    NSString *strTab1Label3AOL;
    
    NSString *strTab2Label1AOL;
    NSString *strTab2Label2AOL;
    NSString *strTab2Label3AOL;
    
    NSString *strTab3Label1AOL;
    NSString *strTab3Label2AOL;
    NSString *strTab3Label3AOL;
    
    NSString *strTab4Label1AOL;
    NSString *strTab4Label2AOL;
    NSString *strTab4Label3AOL;
    
    NSString *strTab5Label1AOL;
    NSString *strTab5Label2AOL;
    NSString *strTab5Label3AOL;
    
    NSString *strTab6Label1AOL;
    NSString *strTab6Label2AOL;
    NSString *strTab6Label3AOL;

    
    IBOutlet UIButton *btnTab1Button1;
    IBOutlet UIButton *btnTab1Button2;
    IBOutlet UIButton *btnTab1Button3;
    
    IBOutlet UIButton *btnTab2Button1;
    IBOutlet UIButton *btnTab2Button2;
    IBOutlet UIButton *btnTab2Button3;
    
    IBOutlet UIButton *btnTab3Button1;
    IBOutlet UIButton *btnTab3Button2;
    IBOutlet UIButton *btnTab3Button3;
    
    IBOutlet UIButton *btnTab4Button1;
    IBOutlet UIButton *btnTab4Button2;
    IBOutlet UIButton *btnTab4Button3;
    
    IBOutlet UIButton *btnTab5Button1;
    IBOutlet UIButton *btnTab5Button2;
    IBOutlet UIButton *btnTab5Button3;
    
    IBOutlet UIButton *btnTab6Button1;
    IBOutlet UIButton *btnTab6Button2;
    IBOutlet UIButton *btnTab6Button3;
    
    
    NSMutableArray *Array;
    NSMutableArray *Array1;
    NSMutableArray *Array2;
    NSMutableArray *Array3;
    NSMutableArray *Array4;
    NSMutableArray *Array5;
    NSMutableArray *Array6;

    IBOutlet UILabel *currentTempLabel, *highTempLabel, *lowTempLabel, *conditionsLabel, *cityLabel;
    IBOutlet UIImageView *conditionsImageView;
    UIImage *conditionsImage;
    
    MainViewController * viewController;
    CLLocation *lastKnownLocation;
    
    IBOutlet UIWebView *facebookTab1;
    IBOutlet UIWebView *twitterTab1;
    IBOutlet UIWebView *eMailTab1;
    IBOutlet UIWebView *eMailMainViewTab1;
    IBOutlet UIWebView *eMailFoldersTab1;
    IBOutlet UIWebView *eventsWebViewTab1;
    IBOutlet UIWebView *twitterAccountWebViewTab1;
    
    IBOutlet UITextView *twitterAccountsTextTab1;
    IBOutlet UITextView *eventsTextTab1;
    IBOutlet UITextView *twitterTextTab1;
    IBOutlet UITextView *emailTextTab1;
    IBOutlet UITextView *emailMainTextTab1;
    IBOutlet UITextView *emailFoldersTextTab1;

    IBOutlet UIWebView *facebookTab2;
    IBOutlet UIWebView *twitterTab2;
    IBOutlet UIWebView *eMailTab2;
    IBOutlet UIWebView *eMailMainViewTab2;
    IBOutlet UIWebView *eMailFoldersTab2;
    IBOutlet UIWebView *eventsWebViewTab2;
    IBOutlet UIWebView *twitterAccountWebViewTab2;
    
    IBOutlet UITextView *twitterAccountsTextTab2;
    IBOutlet UITextView *eventsTextTab2;
    IBOutlet UITextView *twitterTextTab2;
    IBOutlet UITextView *emailTextTab2;
    IBOutlet UITextView *emailMainTextTab2;
    IBOutlet UITextView *emailFoldersTextTab2;

    IBOutlet UIWebView *facebookTab3;
    IBOutlet UIWebView *twitterTab3;
    IBOutlet UIWebView *eMailTab3;
    IBOutlet UIWebView *eMailMainViewTab3;
    IBOutlet UIWebView *eMailFoldersTab3;
    IBOutlet UIWebView *eventsWebViewTab3;
    IBOutlet UIWebView *twitterAccountWebViewTab3;
    
    IBOutlet UITextView *twitterAccountsTextTab3;
    IBOutlet UITextView *eventsTextTab3;
    IBOutlet UITextView *twitterTextTab3;
    IBOutlet UITextView *emailTextTab3;
    IBOutlet UITextView *emailMainTextTab3;
    IBOutlet UITextView *emailFoldersTextTab3;

    IBOutlet UIWebView *facebookTab4;
    IBOutlet UIWebView *twitterTab4;
    IBOutlet UIWebView *eMailTab4;
    IBOutlet UIWebView *eMailMainViewTab4;
    IBOutlet UIWebView *eMailFoldersTab4;
    IBOutlet UIWebView *eventsWebViewTab4;
    IBOutlet UIWebView *twitterAccountWebViewTab4;
    
    IBOutlet UITextView *twitterAccountsTextTab4;
    IBOutlet UITextView *eventsTextTab4;
    IBOutlet UITextView *twitterTextTab4;
    IBOutlet UITextView *emailTextTab4;
    IBOutlet UITextView *emailMainTextTab4;
    IBOutlet UITextView *emailFoldersTextTab4;

    IBOutlet UIWebView *facebookTab6;
    IBOutlet UIWebView *twitterTab6;
    IBOutlet UIWebView *eMailTab6;
    IBOutlet UIWebView *eMailMainViewTab6;
    IBOutlet UIWebView *eMailFoldersTab6;
    IBOutlet UIWebView *eventsWebViewTab6;
    IBOutlet UIWebView *twitterAccountWebViewTab6;
    
    IBOutlet UITextView *twitterAccountsTextTab6;
    IBOutlet UITextView *eventsTextTab6;
    IBOutlet UITextView *twitterTextTab6;
    IBOutlet UITextView *emailTextTab6;
    IBOutlet UITextView *emailMainTextTab6;
    IBOutlet UITextView *emailFoldersTextTab6;

    IBOutlet UIWebView *facebookTab5;
    IBOutlet UIWebView *twitterTab5;
    IBOutlet UIWebView *eMailTab5;
    IBOutlet UIWebView *eMailMainViewTab5;
    IBOutlet UIWebView *eMailFoldersTab5;
    IBOutlet UIWebView *eventsWebViewTab5;
    IBOutlet UIWebView *twitterAccountWebViewTab5;
    
    IBOutlet UITextView *twitterAccountsTextTab5;
    IBOutlet UITextView *eventsTextTab5;
    IBOutlet UITextView *twitterTextTab5;
    IBOutlet UITextView *emailTextTab5;
    IBOutlet UITextView *emailMainTextTab5;
    IBOutlet UITextView *emailFoldersTextTab5;

    IBOutlet UIWebView *weatherView;
    IBOutlet UIWebView *weatherHLView;
      IBOutlet UIWebView *stocks;
  
    
    IBOutlet UITextView *textTab1;
    IBOutlet UITextView *textTab2;
    IBOutlet UITextView *textTab3;
    IBOutlet UITextView *textTab4;
    IBOutlet UITextView *textTab5;
    IBOutlet UITextView *textTab6;

      
 
    
    IBOutlet UITextView *textFieldTab1;
    IBOutlet UITextView *textFieldTab2;
    IBOutlet UITextView *textFieldTab3;
    IBOutlet UITextView *textFieldTab4;
    IBOutlet UITextView *textFieldTab5;
    IBOutlet UITextView *textFieldTab6;
    
    IBOutlet UILabel *lblLoggedOutTab1;
    IBOutlet UILabel *lblLoggedOutTab2;
    IBOutlet UILabel *lblLoggedOutTab3;
    IBOutlet UILabel *lblLoggedOutTab4;
    IBOutlet UILabel *lblLoggedOutTab5;
    IBOutlet UILabel *lblLoggedOutTab6;
    //
    IBOutlet UIButton *btnDisplayTextsTab1;
    IBOutlet UIButton *btnDisplayTextsTab2;
    IBOutlet UIButton *btnDisplayTextsTab3;
    IBOutlet UIButton *btnDisplayTextsTab4;
    IBOutlet UIButton *btnDisplayTextsTab5;
    IBOutlet UIButton *btnDisplayTextsTab6;
    
    IBOutlet UIButton *btnDisplayTweetsTab1;
    IBOutlet UIButton *btnDisplayTweetsTab2;
    IBOutlet UIButton *btnDisplayTweetsTab3;
    IBOutlet UIButton *btnDisplayTweetsTab4;
    IBOutlet UIButton *btnDisplayTweetsTab5;
    IBOutlet UIButton *btnDisplayTweetsTab6;
    
    IBOutlet UIButton *btnHelpTab1;
    IBOutlet UIButton *btnHelpTab2;
    IBOutlet UIButton *btnHelpTab3;
    IBOutlet UIButton *btnHelpTab4;
    IBOutlet UIButton *btnHelpTab5;
    IBOutlet UIButton *btnHelpTab6;
    
    //
    IBOutlet UIButton *btnLogBackInTab1;
    IBOutlet UIButton *btnLogBackInTab2;
    IBOutlet UIButton *btnLogBackInTab3;
    IBOutlet UIButton *btnLogBackInTab4;
    IBOutlet UIButton *btnLogBackInTab5;
    IBOutlet UIButton *btnLogBackInTab6;
    
    IBOutlet UIButton *btnReuseTab1;
    IBOutlet UIButton *btnReuseTab2;
    IBOutlet UIButton *btnReuseTab3;
    IBOutlet UIButton *btnReuseTab4;
    IBOutlet UIButton *btnReuseTab5;
    IBOutlet UIButton *btnReuseTab6;
    
    IBOutlet UIButton *btnClearTab1;
    IBOutlet UIButton *btnClearTab2;
    IBOutlet UIButton *btnClearTab3;
    IBOutlet UIButton *btnClearTab4;
    IBOutlet UIButton *btnClearTab5;
    IBOutlet UIButton *btnClearTab6;
    
    
    IBOutlet UIView *viewTab1Login;
    IBOutlet UIView *viewTab2Login;
    IBOutlet UIView *viewTab3Login;
    IBOutlet UIView *viewTab4Login;
    IBOutlet UIView *viewTab5Login;
    IBOutlet UIView *viewTab6Login;
    
    IBOutlet UIView *mainView;
    IBOutlet UIView *webViewViewTab1;
    IBOutlet UIView *webViewViewTab2;
    IBOutlet UIView *webViewViewTab3;
    IBOutlet UIView *webViewViewTab4;
    IBOutlet UIView *webViewViewTab5;
    IBOutlet UIView *webViewViewTab6;

    IBOutlet UIView *tableViewView;
    IBOutlet UIView *ViewTab1;
    IBOutlet UIView *ViewTab2;
    IBOutlet UIView *ViewTab3;
    IBOutlet UIView *ViewTab4;
    IBOutlet UIView *ViewTab5;
    IBOutlet UIView *ViewTab6;
    
    IBOutlet UIView *Tab1TableViewFacebook;
    IBOutlet UIView *Tab1TableViewHotmail;
    IBOutlet UIView *Tab2TableViewFacebook;
    IBOutlet UIView *Tab2TableViewHotmail;
    IBOutlet UIView *Tab3TableViewFacebook;
    IBOutlet UIView *Tab3TableViewHotmail;
    IBOutlet UIView *Tab4TableViewFacebook;
    IBOutlet UIView *Tab4TableViewHotmail;
    IBOutlet UIView *Tab5TableViewFacebook;
    IBOutlet UIView *Tab5TableViewHotmail;
    IBOutlet UIView *Tab6TableViewFacebook;
    IBOutlet UIView *Tab6TableViewHotmail;

 //   IBOutlet UIView *Tab1TableViewEmail;

    IBOutlet UIView *viewButton1Tab1;
    IBOutlet UIView *viewButton2Tab1;
    IBOutlet UIView *viewButton3Tab1;
    
    IBOutlet UIView *viewButton1Tab2;
    IBOutlet UIView *viewButton2Tab2;
    IBOutlet UIView *viewButton3Tab2;
    
    IBOutlet UIView *viewButton1Tab3;
    IBOutlet UIView *viewButton2Tab3;
    IBOutlet UIView *viewButton3Tab3;
    
    IBOutlet UIView *viewButton1Tab4;
    IBOutlet UIView *viewButton2Tab4;
    IBOutlet UIView *viewButton3Tab4;
    
    IBOutlet UIView *viewButton1Tab5;
    IBOutlet UIView *viewButton2Tab5;
    IBOutlet UIView *viewButton3Tab5;
    
    IBOutlet UIView *viewButton1Tab6;
    IBOutlet UIView *viewButton2Tab6;
    IBOutlet UIView *viewButton3Tab6;
    
    IBOutlet UIImageView *weatherImage;
    
    IBOutlet UIImageView *iconTab1;
    IBOutlet UIImageView *iconTab2;
    IBOutlet UIImageView *iconTab3;
    IBOutlet UIImageView *iconTab4;
    IBOutlet UIImageView *iconTab5;
    IBOutlet UIImageView *iconTab6;
    
    IBOutlet UITextView *weatherTextView;
    IBOutlet UITextView *testTextView;
    NSString *string1;
    NSString *string2;
    NSString *string3;
    NSString *string4;
    NSString *string5;
    NSString *string6;
    NSString *string7;
    NSString *string8;
    NSString *string9;
    NSString *string10;
    NSString *string11;
    
    NSString *stringFacebook;
    NSString *stringHotmail;

    NSString *stringTab1Facebook;
    NSString *stringTab2Facebook;
    NSString *stringTab3Facebook;
    NSString *stringTab4Facebook;
    NSString *stringTab5Facebook;
    NSString *stringTab6Facebook;

    NSString *stringTab1Twitter;
    NSString *stringTab2Twitter;
    NSString *stringTab3Twitter;
    NSString *stringTab4Twitter;
    NSString *stringTab5Twitter;
    NSString *stringTab6Twitter;

    NSString *stringTab1THotmail;
    NSString *stringTab2THotmail;
    NSString *stringTab3THotmail;
    NSString *stringTab4THotmail;
    NSString *stringTab5THotmail;
    NSString *stringTab6THotmail;

    NSString *strTwitterUser;
    NSString *strHotmail;
    
    NSString *strCurrencyPanel;

    NSString *stringTab1;
    NSString *stringTab2;
    NSString *stringTab3;
    NSString *stringTab4;
    NSString *stringTab5;
    NSString *stringTab6;
    
    NSString *stringMainTab1;
    NSString *stringMainTab2;
    NSString *stringMainTab3;
    NSString *stringMainTab4;
    NSString *stringMainTab5;
    NSString *stringMainTab6;

    NSString *stringTab1Display;
    NSString *stringTab2Display;
    NSString *stringTab3Display;
    NSString *stringTab4Display;
    NSString *stringTab5Display;
    NSString *stringTab6Display;
    
    IBOutlet UILabel *lblZip;
    
    FlipsideViewController *objClassA;
    // IBOutlet UITextField *zip;
    
    
    
    NSDate *currentTime;
    NSDateComponents * dateComponents;
    
    NSCalendar *calendar;
    NSCalendarUnit unitFlags;
    
    NSTimer *updateTimer;
    
    NSString *seconds;
    int minute,hour, second, day, month;
}

@property (strong, nonatomic) NSMutableArray *content;

//@property (nonatomic, retain)  UIView *bannerView_;

@property (nonatomic, retain)  UIView *viewCurrencyExchange1;

@property (retain, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator1;
@property (retain, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator2;
@property (retain, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator3;
@property (retain, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator4;
@property (retain, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator5;
@property (nonatomic, retain)  UIButton *btnInvisibleTab1;
@property (nonatomic, retain)  UIButton *btnInvisibleTab2;
@property (nonatomic, retain)  UIButton *btnInvisibleTab3;
@property (nonatomic, retain)  UIButton *btnInvisibleTab4;
@property (nonatomic, retain)  UIButton *btnInvisibleTab5;
@property (nonatomic, retain)  UIButton *btnInvisibleTab6;

@property (nonatomic, retain)  UILabel *lblStatsTab1Text1;
@property (nonatomic, retain)  UILabel *lblStatsTab1Text2;
@property (nonatomic, retain)  UILabel *lblStatsTab1Text3;
@property (nonatomic, retain)  UILabel *lblStatsTab1Text4;
@property (nonatomic, retain)  UILabel *lblStatsTab1Text5;

@property (nonatomic, retain)  UILabel *lblStatsTab2Text1;
@property (nonatomic, retain)  UILabel *lblStatsTab2Text2;
@property (nonatomic, retain)  UILabel *lblStatsTab2Text3;
@property (nonatomic, retain)  UILabel *lblStatsTab2Text4;
@property (nonatomic, retain)  UILabel *lblStatsTab2Text5;

@property (nonatomic, retain)  UILabel *lblStatsTab3Text1;
@property (nonatomic, retain)  UILabel *lblStatsTab3Text2;
@property (nonatomic, retain)  UILabel *lblStatsTab3Text3;
@property (nonatomic, retain)  UILabel *lblStatsTab3Text4;
@property (nonatomic, retain)  UILabel *lblStatsTab3Text5;

@property (nonatomic, retain)  UILabel *lblStatsTab4Text1;
@property (nonatomic, retain)  UILabel *lblStatsTab4Text2;
@property (nonatomic, retain)  UILabel *lblStatsTab4Text3;
@property (nonatomic, retain)  UILabel *lblStatsTab4Text4;
@property (nonatomic, retain)  UILabel *lblStatsTab4Text5;

@property (nonatomic, retain)  UILabel *lblStatsTab5Text1;
@property (nonatomic, retain)  UILabel *lblStatsTab5Text2;
@property (nonatomic, retain)  UILabel *lblStatsTab5Text3;
@property (nonatomic, retain)  UILabel *lblStatsTab5Text4;
@property (nonatomic, retain)  UILabel *lblStatsTab5Text5;

@property (nonatomic, retain)  UILabel *lblStatsTab6Text1;
@property (nonatomic, retain)  UILabel *lblStatsTab6Text2;
@property (nonatomic, retain)  UILabel *lblStatsTab6Text3;
@property (nonatomic, retain)  UILabel *lblStatsTab6Text4;
@property (nonatomic, retain)  UILabel *lblStatsTab6Text5;

@property (nonatomic, retain)  UILabel *lblStatsTab1NumText1;
@property (nonatomic, retain)  UILabel *lblStatsTab1NumText2;
@property (nonatomic, retain)  UILabel *lblStatsTab1NumText3;
@property (nonatomic, retain)  UILabel *lblStatsTab1NumText4;
@property (nonatomic, retain)  UILabel *lblStatsTab1NumText5;

@property (nonatomic, retain)  UILabel *lblStatsTab2NumText1;
@property (nonatomic, retain)  UILabel *lblStatsTab2NumText2;
@property (nonatomic, retain)  UILabel *lblStatsTab2NumText3;
@property (nonatomic, retain)  UILabel *lblStatsTab2NumText4;
@property (nonatomic, retain)  UILabel *lblStatsTab2NumText5;

@property (nonatomic, retain)  UILabel *lblStatsTab3NumText1;
@property (nonatomic, retain)  UILabel *lblStatsTab3NumText2;
@property (nonatomic, retain)  UILabel *lblStatsTab3NumText3;
@property (nonatomic, retain)  UILabel *lblStatsTab3NumText4;
@property (nonatomic, retain)  UILabel *lblStatsTab3NumText5;

@property (nonatomic, retain)  UILabel *lblStatsTab4NumText1;
@property (nonatomic, retain)  UILabel *lblStatsTab4NumText2;
@property (nonatomic, retain)  UILabel *lblStatsTab4NumText3;
@property (nonatomic, retain)  UILabel *lblStatsTab4NumText4;
@property (nonatomic, retain)  UILabel *lblStatsTab4NumText5;

@property (nonatomic, retain)  UILabel *lblStatsTab5NumText1;
@property (nonatomic, retain)  UILabel *lblStatsTab5NumText2;
@property (nonatomic, retain)  UILabel *lblStatsTab5NumText3;
@property (nonatomic, retain)  UILabel *lblStatsTab5NumText4;
@property (nonatomic, retain)  UILabel *lblStatsTab5NumText5;

@property (nonatomic, retain)  UILabel *lblStatsTab6NumText1;
@property (nonatomic, retain)  UILabel *lblStatsTab6NumText2;
@property (nonatomic, retain)  UILabel *lblStatsTab6NumText3;
@property (nonatomic, retain)  UILabel *lblStatsTab6NumText4;
@property (nonatomic, retain)  UILabel *lblStatsTab6NumText5;


@property (nonatomic, retain)  UILabel *lblTab1NumText1;
@property (nonatomic, retain)  UILabel *lblTab1NumText2;
@property (nonatomic, retain)  UILabel *lblTab1NumText3;

@property (nonatomic, retain)  UILabel *lblTab2NumText1;
@property (nonatomic, retain)  UILabel *lblTab2NumText2;
@property (nonatomic, retain)  UILabel *lblTab2NumText3;

@property (nonatomic, retain)  UILabel *lblTab3NumText1;
@property (nonatomic, retain)  UILabel *lblTab3NumText2;
@property (nonatomic, retain)  UILabel *lblTab3NumText3;

@property (nonatomic, retain)  UILabel *lblTab4NumText1;
@property (nonatomic, retain)  UILabel *lblTab4NumText2;
@property (nonatomic, retain)  UILabel *lblTab4NumText3;

@property (nonatomic, retain)  UILabel *lblTab5NumText1;
@property (nonatomic, retain)  UILabel *lblTab5NumText2;
@property (nonatomic, retain)  UILabel *lblTab5NumText3;

@property (nonatomic, retain)  UILabel *lblTab6NumText1;
@property (nonatomic, retain)  UILabel *lblTab6NumText2;
@property (nonatomic, retain)  UILabel *lblTab6NumText3;



@property (nonatomic, retain)  UILabel *lblTab1Text1;
@property (nonatomic, retain)  UILabel *lblTab1Text2;
@property (nonatomic, retain)  UILabel *lblTab1Text3;

@property (nonatomic, retain)  UILabel *lblTab2Text1;
@property (nonatomic, retain)  UILabel *lblTab2Text2;
@property (nonatomic, retain)  UILabel *lblTab2Text3;

@property (nonatomic, retain)  UILabel *lblTab3Text1;
@property (nonatomic, retain)  UILabel *lblTab3Text2;
@property (nonatomic, retain)  UILabel *lblTab3Text3;

@property (nonatomic, retain)  UILabel *lblTab4Text1;
@property (nonatomic, retain)  UILabel *lblTab4Text2;
@property (nonatomic, retain)  UILabel *lblTab4Text3;

@property (nonatomic, retain)  UILabel *lblTab5Text1;
@property (nonatomic, retain)  UILabel *lblTab5Text2;
@property (nonatomic, retain)  UILabel *lblTab5Text3;

@property (nonatomic, retain)  UILabel *lblTab6Text1;
@property (nonatomic, retain)  UILabel *lblTab6Text2;
@property (nonatomic, retain)  UILabel *lblTab6Text3;

@property (nonatomic, retain)  UITableView *tableView1;
@property (nonatomic, retain)  UITableView *tableViewEmail;
/*@property (nonatomic, retain)  UITableView *Tab2TableViewEmail;
@property (nonatomic, retain)  UITableView *Tab3TableViewEmail;
@property (nonatomic, retain)  UITableView *Tab4TableViewEmail;
@property (nonatomic, retain)  UITableView *Tab5TableViewEmail;
@property (nonatomic, retain)  UITableView *Tab6TableViewEmail;*/


//IBOutlet UITableView *tableView2;
//IBOutlet UITableView *tableView3;
//IBOutlet UITableView *tableView4;
//IBOutlet UITableView *tableView5;
//IBOutlet UITableView *tableView6;


@property (nonatomic, retain)  UITableView *Tab1ViewtableView1;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView2;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView3;

@property (nonatomic, retain)  UITableView *Tab2ViewtableView1;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView2;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView3;

@property (nonatomic, retain)  UITableView *Tab3ViewtableView1;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView2;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView3;

@property (nonatomic, retain)  UITableView *Tab4ViewtableView1;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView2;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView3;

@property (nonatomic, retain)  UITableView *Tab5ViewtableView1;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView2;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView3;

@property (nonatomic, retain)  UITableView *Tab6ViewtableView1;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView2;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView3;

@property (nonatomic, retain)  UITableView *Tab1ViewtableView1AOL;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView2AOL;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView3AOL;

@property (nonatomic, retain)  UITableView *Tab2ViewtableView1AOL;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView2AOL;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView3AOL;

@property (nonatomic, retain)  UITableView *Tab3ViewtableView1AOL;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView2AOL;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView3AOL;

@property (nonatomic, retain)  UITableView *Tab4ViewtableView1AOL;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView2AOL;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView3AOL;

@property (nonatomic, retain)  UITableView *Tab5ViewtableView1AOL;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView2AOL;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView3AOL;

@property (nonatomic, retain)  UITableView *Tab6ViewtableView1AOL;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView2AOL;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView3AOL;

@property (nonatomic, retain)  UITableView *Tab1ViewtableView1Hotmail;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView2Hotmail;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView3Hotmail;

@property (nonatomic, retain)  UITableView *Tab2ViewtableView1Hotmail;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView2Hotmail;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView3Hotmail;

@property (nonatomic, retain)  UITableView *Tab3ViewtableView1Hotmail;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView2Hotmail;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView3Hotmail;

@property (nonatomic, retain)  UITableView *Tab4ViewtableView1Hotmail;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView2Hotmail;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView3Hotmail;

@property (nonatomic, retain)  UITableView *Tab5ViewtableView1Hotmail;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView2Hotmail;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView3Hotmail;

@property (nonatomic, retain)  UITableView *Tab6ViewtableView1Hotmail;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView2Hotmail;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView3Hotmail;

@property (nonatomic, retain)  UITableView *Tab1ViewtableView1Gmail;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView2Gmail;
@property (nonatomic, retain)  UITableView *Tab1ViewtableView3Gmail;

@property (nonatomic, retain)  UITableView *Tab2ViewtableView1Gmail;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView2Gmail;
@property (nonatomic, retain)  UITableView *Tab2ViewtableView3Gmail;

@property (nonatomic, retain)  UITableView *Tab3ViewtableView1Gmail;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView2Gmail;
@property (nonatomic, retain)  UITableView *Tab3ViewtableView3Gmail;

@property (nonatomic, retain)  UITableView *Tab4ViewtableView1Gmail;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView2Gmail;
@property (nonatomic, retain)  UITableView *Tab4ViewtableView3Gmail;

@property (nonatomic, retain)  UITableView *Tab5ViewtableView1Gmail;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView2Gmail;
@property (nonatomic, retain)  UITableView *Tab5ViewtableView3Gmail;

@property (nonatomic, retain)  UITableView *Tab6ViewtableView1Gmail;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView2Gmail;
@property (nonatomic, retain)  UITableView *Tab6ViewtableView3Gmail;


@property (nonatomic, retain)  UINavigationBar *navigationBarTab1;
@property (nonatomic, retain)  UINavigationBar *navigationBarStatTab1;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab2;
@property (nonatomic, retain)  UINavigationBar *navigationBarStatTab2;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab3;
@property (nonatomic, retain)  UINavigationBar *navigationBarStatTab3;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab4;
@property (nonatomic, retain)  UINavigationBar *navigationBarStatTab4;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab5;
@property (nonatomic, retain)  UINavigationBar *navigationBarStatTab5;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab6;
@property (nonatomic, retain)  UINavigationBar *navigationBarStatTab6;

@property (nonatomic, retain)  UINavigationBar *navigationBarTab1TableViewFacebook;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab2TableViewFacebook;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab3TableViewFacebook;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab4TableViewFacebook;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab5TableViewFacebook;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab6TableViewFacebook;

@property (nonatomic, retain)  UINavigationBar *navigationBarTab1TableViewHotmail;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab2TableViewHotmail;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab3TableViewHotmail;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab4TableViewHotmail;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab5TableViewHotmail;
@property (nonatomic, retain)  UINavigationBar *navigationBarTab6TableViewHotmail;

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain)  UIButton *btnLocationOff;
@property (nonatomic, retain)  UIButton *btnInternetOff;

@property (nonatomic, retain) NSString *selectedRow1Tab1;
@property (nonatomic, retain) NSString *selectedRow2Tab1;
@property (nonatomic, retain) NSString *selectedRow3Tab1;

@property (nonatomic, retain) NSString *selectedRow1HotmailTab1;
@property (nonatomic, retain) NSString *selectedRow2HotmailTab1;
@property (nonatomic, retain) NSString *selectedRow3HotmailTab1;

@property (nonatomic, retain) NSString *selectedRow1GmailTab1;
@property (nonatomic, retain) NSString *selectedRow2GmailTab1;
@property (nonatomic, retain) NSString *selectedRow3GmailTab1;

@property (nonatomic, retain) NSString *selectedRow1AOLTab1;
@property (nonatomic, retain) NSString *selectedRow2AOLTab1;
@property (nonatomic, retain) NSString *selectedRow3AOLTab1;

@property (nonatomic, retain) NSString *selectedRow1Tab2;
@property (nonatomic, retain) NSString *selectedRow2Tab2;
@property (nonatomic, retain) NSString *selectedRow3Tab2;

@property (nonatomic, retain) NSString *selectedRow1HotmailTab2;
@property (nonatomic, retain) NSString *selectedRow2HotmailTab2;
@property (nonatomic, retain) NSString *selectedRow3HotmailTab2;

@property (nonatomic, retain) NSString *selectedRow1GmailTab2;
@property (nonatomic, retain) NSString *selectedRow2GmailTab2;
@property (nonatomic, retain) NSString *selectedRow3GmailTab2;

@property (nonatomic, retain) NSString *selectedRow1AOLTab2;
@property (nonatomic, retain) NSString *selectedRow2AOLTab2;
@property (nonatomic, retain) NSString *selectedRow3AOLTab2;

@property (nonatomic, retain) NSString *selectedRow1Tab3;
@property (nonatomic, retain) NSString *selectedRow2Tab3;
@property (nonatomic, retain) NSString *selectedRow3Tab3;

@property (nonatomic, retain) NSString *selectedRow1HotmailTab3;
@property (nonatomic, retain) NSString *selectedRow2HotmailTab3;
@property (nonatomic, retain) NSString *selectedRow3HotmailTab3;

@property (nonatomic, retain) NSString *selectedRow1GmailTab3;
@property (nonatomic, retain) NSString *selectedRow2GmailTab3;
@property (nonatomic, retain) NSString *selectedRow3GmailTab3;

@property (nonatomic, retain) NSString *selectedRow1AOLTab3;
@property (nonatomic, retain) NSString *selectedRow2AOLTab3;
@property (nonatomic, retain) NSString *selectedRow3AOLTab3;

@property (nonatomic, retain) NSString *selectedRow1Tab4;
@property (nonatomic, retain) NSString *selectedRow2Tab4;
@property (nonatomic, retain) NSString *selectedRow3Tab4;

@property (nonatomic, retain) NSString *selectedRow1HotmailTab4;
@property (nonatomic, retain) NSString *selectedRow2HotmailTab4;
@property (nonatomic, retain) NSString *selectedRow3HotmailTab4;

@property (nonatomic, retain) NSString *selectedRow1GmailTab4;
@property (nonatomic, retain) NSString *selectedRow2GmailTab4;
@property (nonatomic, retain) NSString *selectedRow3GmailTab4;

@property (nonatomic, retain) NSString *selectedRow1AOLTab4;
@property (nonatomic, retain) NSString *selectedRow2AOLTab4;
@property (nonatomic, retain) NSString *selectedRow3AOLTab4;

@property (nonatomic, retain) NSString *selectedRow1Tab5;
@property (nonatomic, retain) NSString *selectedRow2Tab5;
@property (nonatomic, retain) NSString *selectedRow3Tab5;

@property (nonatomic, retain) NSString *selectedRow1HotmailTab5;
@property (nonatomic, retain) NSString *selectedRow2HotmailTab5;
@property (nonatomic, retain) NSString *selectedRow3HotmailTab5;

@property (nonatomic, retain) NSString *selectedRow1GmailTab5;
@property (nonatomic, retain) NSString *selectedRow2GmailTab5;
@property (nonatomic, retain) NSString *selectedRow3GmailTab5;

@property (nonatomic, retain) NSString *selectedRow1AOLTab5;
@property (nonatomic, retain) NSString *selectedRow2AOLTab5;
@property (nonatomic, retain) NSString *selectedRow3AOLTab5;

@property (nonatomic, retain) NSString *selectedRow1Tab6;
@property (nonatomic, retain) NSString *selectedRow2Tab6;
@property (nonatomic, retain) NSString *selectedRow3Tab6;

@property (nonatomic, retain) NSString *selectedRow1HotmailTab6;
@property (nonatomic, retain) NSString *selectedRow2HotmailTab6;
@property (nonatomic, retain) NSString *selectedRow3HotmailTab6;

@property (nonatomic, retain) NSString *selectedRow1GmailTab6;
@property (nonatomic, retain) NSString *selectedRow2GmailTab6;
@property (nonatomic, retain) NSString *selectedRow3GmailTab6;

@property (nonatomic, retain) NSString *selectedRow1AOLTab6;
@property (nonatomic, retain) NSString *selectedRow2AOLTab6;
@property (nonatomic, retain) NSString *selectedRow3AOLTab6;

@property (nonatomic, retain) NSString *strTab1Button1;
@property (nonatomic, retain) NSString *strTab1Button2;
@property (nonatomic, retain) NSString *strTab1Button3;

@property (nonatomic, retain) NSString *strTab2Button1;
@property (nonatomic, retain) NSString *strTab2Button2;
@property (nonatomic, retain) NSString *strTab2Button3;

@property (nonatomic, retain) NSString *strTab3Button1;
@property (nonatomic, retain) NSString *strTab3Button2;
@property (nonatomic, retain) NSString *strTab3Button3;

@property (nonatomic, retain) NSString *strTab4Button1;
@property (nonatomic, retain) NSString *strTab4Button2;
@property (nonatomic, retain) NSString *strTab4Button3;

@property (nonatomic, retain) NSString *strTab5Button1;
@property (nonatomic, retain) NSString *strTab5Button2;
@property (nonatomic, retain) NSString *strTab5Button3;

@property (nonatomic, retain) NSString *strTab6Button1;
@property (nonatomic, retain) NSString *strTab6Button2;
@property (nonatomic, retain) NSString *strTab6Button3;


@property (nonatomic, retain) NSString *stringLogInFacebookTab1;
@property (nonatomic, retain) NSString *stringLogInTwitterTab1;
@property (nonatomic, retain) NSString *stringLogInHotmailTab1;

@property (nonatomic, retain) NSString *stringLogInFacebookTab2;
@property (nonatomic, retain) NSString *stringLogInTwitterTab2;
@property (nonatomic, retain) NSString *stringLogInHotmailTab2;

@property (nonatomic, retain) NSString *stringLogInFacebookTab3;
@property (nonatomic, retain) NSString *stringLogInTwitterTab3;
@property (nonatomic, retain) NSString *stringLogInHotmailTab3;

@property (nonatomic, retain) NSString *stringLogInFacebookTab4;
@property (nonatomic, retain) NSString *stringLogInTwitterTab4;
@property (nonatomic, retain) NSString *stringLogInHotmailTab4;

@property (nonatomic, retain) NSString *stringLogInFacebookTab5;
@property (nonatomic, retain) NSString *stringLogInTwitterTab5;
@property (nonatomic, retain) NSString *stringLogInHotmailTab5;

@property (nonatomic, retain) NSString *stringLogInFacebookTab6;
@property (nonatomic, retain) NSString *stringLogInTwitterTab6;
@property (nonatomic, retain) NSString *stringLogInHotmailTab6;

@property (nonatomic, retain)  UIButton *btnTab1Button1;
@property (nonatomic, retain)  UIButton *btnTab1Button2;
@property (nonatomic, retain)  UIButton *btnTab1Button3;

@property (nonatomic, retain)  UIButton *btnTab2Button1;
@property (nonatomic, retain)  UIButton *btnTab2Button2;
@property (nonatomic, retain)  UIButton *btnTab2Button3;

@property (nonatomic, retain)  UIButton *btnTab3Button1;
@property (nonatomic, retain)  UIButton *btnTab3Button2;
@property (nonatomic, retain)  UIButton *btnTab3Button3;

@property (nonatomic, retain)  UIButton *btnTab4Button1;
@property (nonatomic, retain)  UIButton *btnTab4Button2;
@property (nonatomic, retain)  UIButton *btnTab4Button3;

@property (nonatomic, retain)  UIButton *btnTab5Button1;
@property (nonatomic, retain)  UIButton *btnTab5Button2;
@property (nonatomic, retain)  UIButton *btnTab5Button3;

@property (nonatomic, retain)  UIButton *btnTab6Button1;
@property (nonatomic, retain)  UIButton *btnTab6Button2;
@property (nonatomic, retain)  UIButton *btnTab6Button3;


@property (nonatomic, retain) NSMutableArray *Array;
@property (nonatomic, retain) NSMutableArray *Array1;
@property (nonatomic, retain) NSMutableArray *Array2;
@property (nonatomic, retain) NSMutableArray *Array3;
@property (nonatomic, retain) NSMutableArray *Array4;
@property (nonatomic, retain) NSMutableArray *Array5;
@property (nonatomic, retain) NSMutableArray *Array6;

@property (nonatomic, retain)  UILabel *currentTempLabel, *highTempLabel, *lowTempLabel, *conditionsLabel, *cityLabel;
@property (nonatomic, retain)  UIImageView *conditionsImageView;
@property (nonatomic, retain) UIImage *conditionsImage;

@property (nonatomic, retain) CLLocation *lastKnownLocation;

@property (nonatomic, retain)  UIWebView *weatherView;
@property (nonatomic, retain)  UIWebView *weatherHLView;

@property (nonatomic, retain)  UITextView *textTab1;
@property (nonatomic, retain)  UITextView *textTab2;
@property (nonatomic, retain)  UITextView *textTab3;
@property (nonatomic, retain)  UITextView *textTab4;
@property (nonatomic, retain)  UITextView *textTab5;
@property (nonatomic, retain)  UITextView *textTab6;



@property (nonatomic, retain)  UIWebView *facebookTab1;
@property (nonatomic, retain)  UIWebView *twitterTab1;
@property (nonatomic, retain)  UIWebView *eMailTab1;
@property (nonatomic, retain)  UIWebView *eMailMainViewTab1;
@property (nonatomic, retain)  UIWebView *eMailFoldersTab1;
@property (nonatomic, retain)  UIWebView *eventsWebViewTab1;
@property (nonatomic, retain)  UIWebView *twitterAccountWebViewTab1;

@property (nonatomic, retain)  UITextView *twitterAccountsTextTab1;
@property (nonatomic, retain)  UITextView *eventsTextTab1;
@property (nonatomic, retain)  UITextView *twitterTextTab1;
@property (nonatomic, retain)  UITextView *emailMainTextTab1;
@property (nonatomic, retain)  UITextView *emailTextTab1;
@property (nonatomic, retain)  UITextView *emailFoldersTextTab1;

@property (nonatomic, retain)  UIWebView *facebookTab2;
@property (nonatomic, retain)  UIWebView *twitterTab2;
@property (nonatomic, retain)  UIWebView *eMailTab2;
@property (nonatomic, retain)  UIWebView *eMailMainViewTab2;
@property (nonatomic, retain)  UIWebView *eMailFoldersTab2;
@property (nonatomic, retain)  UIWebView *eventsWebViewTab2;
@property (nonatomic, retain)  UIWebView *twitterAccountWebViewTab2;

@property (nonatomic, retain)  UITextView *twitterAccountsTextTab2;
@property (nonatomic, retain)  UITextView *eventsTextTab2;
@property (nonatomic, retain)  UITextView *twitterTextTab2;
@property (nonatomic, retain)  UITextView *emailMainTextTab2;
@property (nonatomic, retain)  UITextView *emailTextTab2;
@property (nonatomic, retain)  UITextView *emailFoldersTextTab2;

@property (nonatomic, retain)  UIWebView *facebookTab3;
@property (nonatomic, retain)  UIWebView *twitterTab3;
@property (nonatomic, retain)  UIWebView *eMailTab3;
@property (nonatomic, retain)  UIWebView *eMailMainViewTab3;
@property (nonatomic, retain)  UIWebView *eMailFoldersTab3;
@property (nonatomic, retain)  UIWebView *eventsWebViewTab3;
@property (nonatomic, retain)  UIWebView *twitterAccountWebViewTab3;

@property (nonatomic, retain)  UITextView *twitterAccountsTextTab3;
@property (nonatomic, retain)  UITextView *eventsTextTab3;
@property (nonatomic, retain)  UITextView *twitterTextTab3;
@property (nonatomic, retain)  UITextView *emailMainTextTab3;
@property (nonatomic, retain)  UITextView *emailTextTab3;
@property (nonatomic, retain)  UITextView *emailFoldersTextTab3;

@property (nonatomic, retain)  UIWebView *facebookTab4;
@property (nonatomic, retain)  UIWebView *twitterTab4;
@property (nonatomic, retain)  UIWebView *eMailTab4;
@property (nonatomic, retain)  UIWebView *eMailMainViewTab4;
@property (nonatomic, retain)  UIWebView *eMailFoldersTab4;
@property (nonatomic, retain)  UIWebView *eventsWebViewTab4;
@property (nonatomic, retain)  UIWebView *twitterAccountWebViewTab4;

@property (nonatomic, retain)  UITextView *twitterAccountsTextTab4;
@property (nonatomic, retain)  UITextView *eventsTextTab4;
@property (nonatomic, retain)  UITextView *twitterTextTab4;
@property (nonatomic, retain)  UITextView *emailMainTextTab4;
@property (nonatomic, retain)  UITextView *emailTextTab4;
@property (nonatomic, retain)  UITextView *emailFoldersTextTab4;

@property (nonatomic, retain)  UIWebView *facebookTab5;
@property (nonatomic, retain)  UIWebView *twitterTab5;
@property (nonatomic, retain)  UIWebView *eMailTab5;
@property (nonatomic, retain)  UIWebView *eMailMainViewTab5;
@property (nonatomic, retain)  UIWebView *eMailFoldersTab5;
@property (nonatomic, retain)  UIWebView *eventsWebViewTab5;
@property (nonatomic, retain)  UIWebView *twitterAccountWebViewTab5;

@property (nonatomic, retain)  UITextView *twitterAccountsTextTab5;
@property (nonatomic, retain)  UITextView *eventsTextTab5;
@property (nonatomic, retain)  UITextView *twitterTextTab5;
@property (nonatomic, retain)  UITextView *emailMainTextTab5;
@property (nonatomic, retain)  UITextView *emailTextTab5;
@property (nonatomic, retain)  UITextView *emailFoldersTextTab5;

@property (nonatomic, retain)  UIWebView *facebookTab6;
@property (nonatomic, retain)  UIWebView *twitterTab6;
@property (nonatomic, retain)  UIWebView *eMailTab6;
@property (nonatomic, retain)  UIWebView *eMailMainViewTab6;
@property (nonatomic, retain)  UIWebView *eMailFoldersTab6;
@property (nonatomic, retain)  UIWebView *eventsWebViewTab6;
@property (nonatomic, retain)  UIWebView *twitterAccountWebViewTab6;

@property (nonatomic, retain)  UITextView *twitterAccountsTextTab6;
@property (nonatomic, retain)  UITextView *eventsTextTab6;
@property (nonatomic, retain)  UITextView *twitterTextTab6;
@property (nonatomic, retain)  UITextView *emailMainTextTab6;
@property (nonatomic, retain)  UITextView *emailTextTab6;
@property (nonatomic, retain)  UITextView *emailFoldersTextTab6;


@property (nonatomic, retain)  UITextView *textFieldTab1;
@property (nonatomic, retain)  UITextView *textFieldTab2;
@property (nonatomic, retain)  UITextView *textFieldTab3;
@property (nonatomic, retain)  UITextView *textFieldTab4;
@property (nonatomic, retain)  UITextView *textFieldTab5;
@property (nonatomic, retain)  UITextView *textFieldTab6;

@property (nonatomic, retain)  UILabel *lblLoggedOutTab1;
@property (nonatomic, retain)  UILabel *lblLoggedOutTab2;
@property (nonatomic, retain)  UILabel *lblLoggedOutTab3;
@property (nonatomic, retain)  UILabel *lblLoggedOutTab4;
@property (nonatomic, retain)  UILabel *lblLoggedOutTab5;
@property (nonatomic, retain)  UILabel *lblLoggedOutTab6;

@property (nonatomic, retain)  UIButton *btnLogBackInTab1;
@property (nonatomic, retain)  UIButton *btnLogBackInTab2;
@property (nonatomic, retain)  UIButton *btnLogBackInTab3;
@property (nonatomic, retain)  UIButton *btnLogBackInTab4;
@property (nonatomic, retain)  UIButton *btnLogBackInTab5;
@property (nonatomic, retain)  UIButton *btnLogBackInTab6;

@property (nonatomic, retain)  UIButton *btnReuseTab1;
@property (nonatomic, retain)  UIButton *btnReuseTab2;
@property (nonatomic, retain)  UIButton *btnReuseTab3;
@property (nonatomic, retain)  UIButton *btnReuseTab4;
@property (nonatomic, retain)  UIButton *btnReuseTab5;
@property (nonatomic, retain)  UIButton *btnReuseTab6;

@property (nonatomic, retain)  UIButton *btnClearTab1;
@property (nonatomic, retain)  UIButton *btnClearTab2;
@property (nonatomic, retain)  UIButton *btnClearTab3;
@property (nonatomic, retain)  UIButton *btnClearTab4;
@property (nonatomic, retain)  UIButton *btnClearTab5;
@property (nonatomic, retain)  UIButton *btnClearTab6;


@property (nonatomic, retain)  UIView *viewTab1Login;
@property (nonatomic, retain)  UIView *viewTab2Login;
@property (nonatomic, retain)  UIView *viewTab3Login;
@property (nonatomic, retain)  UIView *viewTab4Login;
@property (nonatomic, retain)  UIView *viewTab5Login;
@property (nonatomic, retain)  UIView *viewTab6Login;

@property (nonatomic, retain)  UIView *mainView;
@property (nonatomic, retain)  UIView *webViewViewTab1;
@property (nonatomic, retain)  UIView *webViewViewTab2;
@property (nonatomic, retain)  UIView *webViewViewTab3;
@property (nonatomic, retain)  UIView *webViewViewTab4;
@property (nonatomic, retain)  UIView *webViewViewTab5;
@property (nonatomic, retain)  UIView *webViewViewTab6;

@property (nonatomic, retain)  UIView *tableViewView;
@property (nonatomic, retain)  UIView *viewTab1;
@property (nonatomic, retain)  UIView *viewTab2;
@property (nonatomic, retain)  UIView *viewTab3;
@property (nonatomic, retain)  UIView *viewTab4;
@property (nonatomic, retain)  UIView *viewTab5;
@property (nonatomic, retain)  UIView *viewTab6;

@property (nonatomic, retain)  UIView *Tab1TableViewFacebook;
@property (nonatomic, retain)  UIView *Tab1TableViewHotmail;
@property (nonatomic, retain)  UIView *Tab2TableViewFacebook;
@property (nonatomic, retain)  UIView *Tab2TableViewHotmail;
@property (nonatomic, retain)  UIView *Tab3TableViewFacebook;
@property (nonatomic, retain)  UIView *Tab3TableViewHotmail;
@property (nonatomic, retain)  UIView *Tab4TableViewFacebook;
@property (nonatomic, retain)  UIView *Tab4TableViewHotmail;
@property (nonatomic, retain)  UIView *Tab5TableViewFacebook;
@property (nonatomic, retain)  UIView *Tab5TableViewHotmail;
@property (nonatomic, retain)  UIView *Tab6TableViewFacebook;
@property (nonatomic, retain)  UIView *Tab6TableViewHotmail;

@property (nonatomic, retain)  UIView *viewButton1Tab1;
@property (nonatomic, retain)  UIView *viewButton2Tab1;
@property (nonatomic, retain)  UIView *viewButton3Tab1;

@property (nonatomic, retain)  UIView *viewButton1Tab2;
@property (nonatomic, retain)  UIView *viewButton2Tab2;
@property (nonatomic, retain)  UIView *viewButton3Tab2;

@property (nonatomic, retain)  UIView *viewButton1Tab3;
@property (nonatomic, retain)  UIView *viewButton2Tab3;
@property (nonatomic, retain)  UIView *viewButton3Tab3;

@property (nonatomic, retain)  UIView *viewButton1Tab4;
@property (nonatomic, retain)  UIView *viewButton2Tab4;
@property (nonatomic, retain)  UIView *viewButton3Tab4;

@property (nonatomic, retain)  UIView *viewButton1Tab5;
@property (nonatomic, retain)  UIView *viewButton2Tab5;
@property (nonatomic, retain)  UIView *viewButton3Tab5;

@property (nonatomic, retain)  UIView *viewButton1Tab6;
@property (nonatomic, retain)  UIView *viewButton2Tab6;
@property (nonatomic, retain)  UIView *viewButton3Tab6;

@property (nonatomic, retain)  UIImageView *weatherImage;

@property (nonatomic, retain)  UIImageView *iconTab1;
@property (nonatomic, retain)  UIImageView *iconTab2;
@property (nonatomic, retain)  UIImageView *iconTab3;
@property (nonatomic, retain)  UIImageView *iconTab4;
@property (nonatomic, retain)  UIImageView *iconTab5;
@property (nonatomic, retain) UIImageView *iconTab6;

@property (nonatomic, retain) UITextView *weatherTextView;
@property (nonatomic, retain) UITextView *testTextView;
@property (nonatomic, retain) NSString *string1;
@property (nonatomic, retain) NSString *string2;
@property (nonatomic, retain) NSString *string3;
@property (nonatomic, retain) NSString *string4;
@property (nonatomic, retain) NSString *string5;
@property (nonatomic, retain) NSString *string6;
@property (nonatomic, retain) NSString *string7;
@property (nonatomic, retain) NSString *string8;
@property (nonatomic, retain) NSString *string9;
@property (nonatomic, retain) NSString *string10;

@property (nonatomic, retain) NSString *stringTab1Facebook;
@property (nonatomic, retain) NSString *stringTab2Facebook;
@property (nonatomic, retain) NSString *stringTab3Facebook;
@property (nonatomic, retain) NSString *stringTab4Facebook;
@property (nonatomic, retain) NSString *stringTab5Facebook;
@property (nonatomic, retain) NSString *stringTab6Facebook;

@property (nonatomic, retain) NSString *stringTab1Twitter;
@property (nonatomic, retain) NSString *stringTab2Twitter;
@property (nonatomic, retain) NSString *stringTab3Twitter;
@property (nonatomic, retain) NSString *stringTab4Twitter;
@property (nonatomic, retain) NSString *stringTab5Twitter;
@property (nonatomic, retain) NSString *stringTab6Twitter;

@property (nonatomic, retain) NSString *stringTab1Hotmail;
@property (nonatomic, retain) NSString *stringTab2Hotmail;
@property (nonatomic, retain) NSString *stringTab3Hotmail;
@property (nonatomic, retain) NSString *stringTab4Hotmail;
@property (nonatomic, retain) NSString *stringTab5Hotmail;
@property (nonatomic, retain) NSString *stringTab6Hotmail;

@property (nonatomic, retain) NSString *strTwitterUser;

@property (nonatomic, retain) NSString *stringTab1;
@property (nonatomic, retain) NSString *stringTab2;
@property (nonatomic, retain) NSString *stringTab3;
@property (nonatomic, retain) NSString *stringTab4;
@property (nonatomic, retain) NSString *stringTab5;
@property (nonatomic, retain) NSString *stringTab6;

@property (nonatomic, retain) NSString *stringMainTab1;
@property (nonatomic, retain) NSString *stringMainTab2;
@property (nonatomic, retain) NSString *stringMainTab3;
@property (nonatomic, retain) NSString *stringMainTab4;
@property (nonatomic, retain) NSString *stringMainTab5;
@property (nonatomic, retain) NSString *stringMainTab6;


@property (nonatomic, retain) NSString *stringTab1Display;
@property (nonatomic, retain) NSString *stringTab2Display;
@property (nonatomic, retain) NSString *stringTab3Display;
@property (nonatomic, retain) NSString *stringTab4Display;
@property (nonatomic, retain) NSString *stringTab5Display;
@property (nonatomic, retain) NSString *stringTab6Display;

@property (nonatomic, retain) UILabel *lblZip;

@property (nonatomic, retain) IBOutlet MainViewController *viewController;
@property (nonatomic, retain) UIButton *btnInternetnOff;

@property (nonatomic, retain) UILabel *temperature;
@property (nonatomic, retain) UILabel *temperatureH;
@property (nonatomic, retain) UILabel *temperatureL;
@property (nonatomic, retain) UILabel *lblCity;
@property (nonatomic, retain) UILabel *lblClimate;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) UILabel *lblUpdated;


@property (nonatomic, retain) UIImageView *customImage;

@property (nonatomic, retain) IBOutlet UITableView *tweetsTableView;




//- (void)showWeatherFor:(NSString *)query;
//- (void)updateUI:(ICB_WeatherConditions *)weather;


//@property (nonatomic, assign) UITextField *zip;
//- (Widgets_iphone *)initWithQuery:(NSString *)query;
- (IBAction)showInfo:(id)sender;
- (IBAction)btnLocationOff:(id)sender;
- (IBAction)btnInternetOff:(id)sender;
- (IBAction)btnRefresh:(id)sender;
- (IBAction)invisibleButton1:(id)sender;
- (IBAction)invisibleButton2:(id)sender;
- (IBAction)invisibleButton3:(id)sender;
- (IBAction)invisibleButton4:(id)sender;
- (IBAction)invisibleButton5:(id)sender;
- (IBAction)invisibleButton6:(id)sender;
- (IBAction)done:(id)sender;
- (IBAction)doneStat:(id)sender;
- (IBAction)goWebsite1:(id)sender;
- (IBAction)goWebsite2:(id)sender;
- (IBAction)goWebsite3:(id)sender;
- (IBAction)goWebsite4:(id)sender;
- (IBAction)goWebsite5:(id)sender;
- (IBAction)goWebsite6:(id)sender;

- (IBAction)logBackIn:(id)sender;
- (IBAction)reuseTab:(id)sender;
- (IBAction)clearTab:(id)sender;

- (IBAction)DisplayTexts1:(id)sender;
- (IBAction)DisplayRecentTweets1:(id)sender;
- (IBAction)DisplayTexts2:(id)sender;
- (IBAction)DisplayRecentTweets2:(id)sender;
- (IBAction)DisplayTexts3:(id)sender;
- (IBAction)DisplayRecentTweets3:(id)sender;
- (IBAction)DisplayTexts4:(id)sender;
- (IBAction)DisplayRecentTweets4:(id)sender;
- (IBAction)DisplayTexts5:(id)sender;
- (IBAction)DisplayRecentTweets5:(id)sender;
- (IBAction)DisplayTexts6:(id)sender;
- (IBAction)DisplayRecentTweets6:(id)sender;


- (IBAction)back:(id)sender;
- (IBAction)backSettings:(id)sender;

- (IBAction)settingsTab:(id)sender;

- (IBAction)Tab1Button1:(id)sender;
- (IBAction)Tab1Button2:(id)sender;
- (IBAction)Tab1Button3:(id)sender;
- (IBAction)Tab2Button1:(id)sender;
- (IBAction)Tab2Button2:(id)sender;
- (IBAction)Tab2Button3:(id)sender;
- (IBAction)Tab3Button1:(id)sender;
- (IBAction)Tab3Button2:(id)sender;
- (IBAction)Tab3Button3:(id)sender;
- (IBAction)Tab4Button1:(id)sender;
- (IBAction)Tab4Button2:(id)sender;
- (IBAction)Tab4Button3:(id)sender;
- (IBAction)Tab5Button1:(id)sender;
- (IBAction)Tab5Button2:(id)sender;
- (IBAction)Tab5Button3:(id)sender;
- (IBAction)Tab6Button1:(id)sender;
- (IBAction)Tab6Button2:(id)sender;
- (IBAction)Tab6Button3:(id)sender;

- (IBAction)left1:(id)sender;
- (IBAction)right1:(id)sender;
- (IBAction)leftAll1:(id)sender;
- (IBAction)rightAll1:(id)sender;

- (IBAction)left2:(id)sender;
- (IBAction)right2:(id)sender;
- (IBAction)leftAll2:(id)sender;
- (IBAction)rightAll2:(id)sender;

- (IBAction)left3:(id)sender;
- (IBAction)right3:(id)sender;
- (IBAction)leftAll3:(id)sender;
- (IBAction)rightAll3:(id)sender;

- (IBAction)left4:(id)sender;
- (IBAction)right4:(id)sender;
- (IBAction)leftAll4:(id)sender;
- (IBAction)rightAll4:(id)sender;

- (IBAction)left5:(id)sender;
- (IBAction)right5:(id)sender;
- (IBAction)leftAll5:(id)sender;
- (IBAction)rightAll5:(id)sender;

- (IBAction)left6:(id)sender;
- (IBAction)right6:(id)sender;
- (IBAction)leftAll6:(id)sender;
- (IBAction)rightAll6:(id)sender;

- (IBAction)tabHelp:(id)sender;
- (IBAction)backtabHelp:(id)sender;

- (IBAction)buttonDigitPressed:(UIButton *)button;
- (IBAction)buttonCommandPressed:(UIButton *)button;

- (IBAction)updateCurrencyExchange:(id)sender;

@end


