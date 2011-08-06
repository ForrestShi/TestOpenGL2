//
//  TestOpenGL2AppDelegate.h
//  TestOpenGL2
//
//  Created by forrest on 11-8-7.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestOpenGL2ViewController;

@interface TestOpenGL2AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestOpenGL2ViewController *viewController;

@end
