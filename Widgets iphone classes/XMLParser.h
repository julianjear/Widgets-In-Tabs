//
//  XMLParser.h
//  Widgets iphone
//
//  Created by JUULLLIIIIAAAAANNNNNN on 12/2/12.
//
//

#import <Foundation/Foundation.h>
#import "Tweet.h"
#import "AppDelegate.h"
#import "MainViewController.h"
@interface XMLParser : NSObject <NSXMLParserDelegate> {
     int *integer1;
    NSString *stringTest1;
    NSString *stringTest2;
    NSString *stringTest3;
    NSString *stringTest4;

}


@property (strong, readonly) NSMutableArray *tweets;

-(id) loadXMLByURL:(NSString *)urlString;


@end
