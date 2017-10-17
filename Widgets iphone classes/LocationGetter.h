//
//  LocationGetter.h
//  Widgets iphone
//
//  Created by Admin on 7/21/12.
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@protocol LocationGetterDelegate <NSObject>
@required
- (void) newPhysicalLocation:(CLLocation *)location;
@end

@interface LocationGetter : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *locationManager;
    id delegate;
}

- (void)startUpdates;

@property (nonatomic, retain) CLLocationManager *locationManager;
@property(nonatomic , retain) id delegate;
@end
