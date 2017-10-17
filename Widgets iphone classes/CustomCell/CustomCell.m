/*
 
 ************************************************************
 *  CustomCell.m                                            *
 *  SDKRegistry                                             *
 *                                                          *
 *  Created by M. Rushizha on 06/05/2012.                   *
 *  Copyright (c) 2012 Learner's SDK. All rights reserved.  *
 *                                                          *
 ************************************************************
 
 PERMISSION NOTICE:  
 ------------------
 
 Permission is given to use this source code file without charge in any
 project, commercial or otherwise, entirely at your risk, with the condition
 that any redistribution (in part or whole) of source code must retain
 this copyright and permission notice. Attribution in compiled projects is
 appreciated but not required.
 
 If you find this source code useful, please consider donating to my PayPal
 account so that I can keep on providing you and the others learners with
 more code snippets. Any amount is appreciated:
 
 https://paypal.com/mrushizha
 
*/

#import "CustomCell.h"

@interface CustomCell ()

@end

@implementation CustomCell

@synthesize desc;

@synthesize flag;
@synthesize marker;
@synthesize background;

- (id)initWithFrame:(CGRect)frame reuseIdentifier:(NSString *)reuseIdentifier {
    if (self = [super initWithFrame:frame reuseIdentifier:reuseIdentifier]) {
        // Initialization code
    }
    
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}

- (void)dealloc 
{
    [flag release]; self.flag = nil;
    [desc release]; self.desc = nil;
    [marker release]; self.marker = nil;
    [background release]; self.background = nil;
    
    [super dealloc];
}

@end
