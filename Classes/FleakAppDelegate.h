//
//  FleakAppDelegate.h
//  Fleak
//
//  Created by Jason Dela Cruz on 7/26/11.
//  Copyright Beat Sheep 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface FleakAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
