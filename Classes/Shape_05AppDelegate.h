//
//  Shape_05AppDelegate.h
//  Shape_05
//
//  Created by test on 9/4/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Shape_05ViewController;

@interface Shape_05AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Shape_05ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Shape_05ViewController *viewController;

@end

