//
//  Utility.h
//  AppcessorizeDemo
//
//  Created by Shimaa Essam on 11/4/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import <Foundation/Foundation.h>
#import "CustomInfoPage.h"
#import "CustomPageControl.h"

@interface Utility : NSObject

+ (Utility*)sharedInstance;

- (UIButton*)createButtonWithImageName:(NSString*)imageName;
- (NSString*)appendBundleNameToString:(NSString*)resourceName;
- (void)backButtonClicked:(UINavigationController*)navigationController;

- (CustomPageControl *) addCustomPageControlView:(UIViewController *) viewController;
- (void) fadeViewIn:(UIView *) pageControlView overLayView:(UIView *) overlay;
- (void) fadeViewOut:(UIView *) pageControlView overLayView:(UIView *) overlay;
- (UIView *) addOverlayView:(UIViewController *) viewController;

@end
