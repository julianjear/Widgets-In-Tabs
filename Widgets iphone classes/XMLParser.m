//
//  XMLParser.m
//  Widgets iphone
//
//  Created by JUULLLIIIIAAAAANNNNNN on 12/2/12.
//
//

#import <Foundation/Foundation.h>
#import "XMLParser.h"

@implementation XMLParser
@synthesize tweets = _tweets;


NSMutableString	*currentNodeContent;
NSXMLParser		*parser;
Tweet			*currentTweet;
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
  //  int i;
  //\  i++;
    
    AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    //  NSLog(@"gloval 9 %@", mainDelegate.global1);
    NSString *newString1 = [stringTest3 stringByAppendingFormat:@"%i", [stringTest4 intValue] + 1];
    stringTest4 = newString1;
    if (mainDelegate.global1 ==NULL) {
        //NSLog(@"gloval 9 %@", mainDelegate.global1);
        [self performSelectorInBackground:@selector(tester) withObject:nil];
    }
    
}
- (void) tester {
    AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    //   NSLog(@"gloval 11234 %@", mainDelegate.global1);
    mainDelegate.stringParser1 = @"0";
    mainDelegate.stringParser2 = @"0";
    mainDelegate.stringParser3 = @"0";
    mainDelegate.stringParser4 = @"0";
    mainDelegate.stringParser5 = @"0";
    mainDelegate.stringParser6 = @"0";
    mainDelegate.stringParser7 = @"0";
    mainDelegate.stringParser8 = @"0";
    mainDelegate.stringParser9 = @"0";
    mainDelegate.stringParser10 = @"0";
    mainDelegate.stringParser11 = @"0";
    mainDelegate.stringParser12 = @"0";
    mainDelegate.stringParser13 = @"0";
    mainDelegate.stringParser14 = @"0";
    mainDelegate.stringParser15 = @"0";
    mainDelegate.stringParser16 = @"0";
    mainDelegate.stringParser17 = @"0";
    mainDelegate.stringParser18 = @"0";
    mainDelegate.stringParser19 = @"0";
    mainDelegate.stringParser20 = @"0";
    mainDelegate.stringTest1 = @"";
    mainDelegate.stringTest2 = @"0";
    integer1 = 0;

}
- (void) parser:(NSXMLParser *)parser didStartElement:(NSString *)elementname namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict
{
 //   [NSTimer scheduledTimerWithTimeInterval:3.0 target:self selector:@selector(repeat) userInfo:nil repeats:YES];

    
	if ([elementname isEqualToString:@"status"])
	{
		currentTweet = [Tweet alloc];
        isStatus = YES;
	}
	if ([elementname isEqualToString:@"user"])
	{
        isStatus = NO;
	}
}
//-(void) repeat {
//    NSString *elementname;
//    NSString *namespaceURI;
//    NSString *qName;

//    [self parser:(NSXMLParser *)parser didEndElement:(NSString *)elementname namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName];
//}
- (void) parser:(NSXMLParser *)parser didEndElement:(NSString *)elementname namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName
{
    AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    mainDelegate.global1 =@"0";
    //   NSLog(@"gloval 2 %@", mainDelegate.global1);
    //      NSLog(@"hertoa %@", stringParser1);
    
    // stringParser1 = @"0";
  //  elementname = @"text";
    
    if (isStatus)
    {
        if ([elementname isEqualToString:@"created_at"])
        {
            currentTweet.dateCreated = currentNodeContent;
        }
        if ([elementname isEqualToString:@"text"])
        {
            AppDelegate *mainDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];

            currentTweet.content = currentNodeContent;
            //         NSLog(@"hertoaz1 %@", stringParser1);
            // NSString *newString1 = integer1;
        //    integer1++;
             NSString *newString = [NSString stringWithFormat:@"%d",  integer1 +1 ];
            integer1 = [newString intValue];
            NSLog(@"interger %d", integer1);

           // NSString *newString = [mainDelegate.stringTest1 stringByAppendingFormat:@"%i", [mainDelegate.stringTest2 intValue] + 1];
            stringTest2 = newString;
             NSLog(@"new string %@", newString);
            
            if (integer1 == 4) {
                NSLog(@"string 1 %@", currentTweet.content);
                mainDelegate.stringParser1 = currentTweet.content;
            }
            if (integer1 == 8) {
                NSLog(@"string 2 %@", currentTweet.content);
                mainDelegate.stringParser2 = currentTweet.content;
            }
            if (integer1 == 12) {
                NSLog(@"string 3 %@", currentTweet.content);
                mainDelegate.stringParser3 = currentTweet.content;
            }
            if (integer1 == 16) {
                NSLog(@"string 4 %@", currentTweet.content);
                mainDelegate.stringParser4 = currentTweet.content;
            }
            if (integer1 == 20) {
                NSLog(@"string 5 %@", currentTweet.content);
                mainDelegate.stringParser5 = currentTweet.content;
            }
            if (integer1 == 24) {
                NSLog(@"string 6 %@", currentTweet.content);
                mainDelegate.stringParser6 = currentTweet.content;
            }
            if (integer1 == 28) {
                NSLog(@"string 7 %@", currentTweet.content);
                mainDelegate.stringParser7 = currentTweet.content;
            }
            if (integer1 == 32) {
                NSLog(@"string 8 %@", currentTweet.content);
                mainDelegate.stringParser8 = currentTweet.content;
            }
            if (integer1 == 36) {
                NSLog(@"string 9 %@", currentTweet.content);
                mainDelegate.stringParser9 = currentTweet.content;
            }
            if (integer1 == 40) {
                NSLog(@"string 10 %@", currentTweet.content);
                mainDelegate.stringParser10 = currentTweet.content;
            }
            if (integer1 == 44) {
                NSLog(@"string 11 %@", currentTweet.content);
                mainDelegate.stringParser11 = currentTweet.content;
            }
            if (integer1 == 48) {
                NSLog(@"string 12 %@", currentTweet.content);
                mainDelegate.stringParser12 = currentTweet.content;
            }
            if (integer1 == 52) {
                NSLog(@"string 13 %@", currentTweet.content);
                mainDelegate.stringParser13 = currentTweet.content;
            }
            if (integer1 == 56) {
                NSLog(@"string 14 %@", currentTweet.content);
                mainDelegate.stringParser14 = currentTweet.content;
            }
            if (integer1 == 60) {
                NSLog(@"string 15 %@", currentTweet.content);
                mainDelegate.stringParser15 = currentTweet.content;
            }
            if (integer1 == 64) {
                NSLog(@"string 16 %@", currentTweet.content);
                mainDelegate.stringParser16 = currentTweet.content;
            }
            if (integer1 == 68) {
                NSLog(@"string 17 %@", currentTweet.content);
                mainDelegate.stringParser17 = currentTweet.content;
            }
            if (integer1 == 72) {
                NSLog(@"string 18 %@", currentTweet.content);
                mainDelegate.stringParser18 = currentTweet.content;
            }
            if (integer1 == 76) {
                NSLog(@"string 19 %@", currentTweet.content);
                mainDelegate.stringParser19 = currentTweet.content;
            }
            if (integer1 == 80) {
                NSLog(@"string 20 %@", currentTweet.content);
                mainDelegate.stringParser20 = currentTweet.content;
            }

        }
    }
	if ([elementname isEqualToString:@"status"])
	{
		[self.tweets addObject:currentTweet];
		currentTweet = nil;
		currentNodeContent = nil;
	}
}

@end
