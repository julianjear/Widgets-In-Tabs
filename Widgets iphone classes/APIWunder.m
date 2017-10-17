//
//  APIWunder.m
//  Widgets iphone
//
//  Created by JUULLLIIIIAAAAANNNNNN on 9/2/12.
//
//
#import <Foundation/Foundation.h>
#import "APIWunder.h"
#import "ICB_WeatherConditions.h"
#import "AppDelegate.h"

@implementation APIWunder
@synthesize tweets = _tweets;


NSMutableString	*currentNodeContent;
NSXMLParser		*parser;
//Tweet			*currentTweet;
bool            isStatus;

-(id) loadXMLByURL:(NSString *)urlString
{
	_tweets			= [[NSMutableArray alloc] init];
	NSURL *url		= [NSURL URLWithString:urlString];
	NSData	*data   = [[NSData alloc] initWithContentsOfURL:url];
	parser			= [[NSXMLParser alloc] initWithData:data];
	parser.delegate = self;
	[parser parse];
	return self;
    
}

- (void) parser:(NSXMLParser *)parser foundCharacters:(NSString *)string
{
	currentNodeContent = (NSMutableString *) [string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

/*- (void) parser:(NSXMLParser *)parser didStartElement:(NSString *)elementname namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict
{
	if ([elementname isEqualToString:@"current_observation"])
	{
		currentTweet = [Tweet alloc];
        isStatus = YES;
	}
	if ([elementname isEqualToString:@"ob_url"])
	{
        isStatus = NO;
	}
}*/

- (void) parser:(NSXMLParser *)parser didEndElement:(NSString *)elementname namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName
{
    AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
        if ([elementname isEqualToString:@"temp_f"])
        {
            mainDelegate.weatherVal = currentNodeContent;
                      NSLog(@"%@", mainDelegate.weatherVal);
            
        }
        if ([elementname isEqualToString:@"city"])
        {
            mainDelegate.city = currentNodeContent;
            NSLog(@"%@", mainDelegate.city);

        }
    
	if ([elementname isEqualToString:@"weather"])
	{
        mainDelegate.condition = currentNodeContent;
        NSLog(@"%@", mainDelegate.condition);

	}
}


@end
