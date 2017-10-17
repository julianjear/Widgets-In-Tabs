//
//  APIWunder.h
//  Widgets iphone
//
//  Created by JUULLLIIIIAAAAANNNNNN on 9/2/12.
//
//

#import <Foundation/Foundation.h>
#import "ICB_WeatherConditions.h"
#import "AppDelegate.h"

@interface APIWunder : NSObject <NSXMLParserDelegate>

@property (strong, readonly) NSMutableArray *tweets;

-(id) loadXMLByURL:(NSString *)urlString;

@end
