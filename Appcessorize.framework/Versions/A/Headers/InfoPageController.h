//
//  InfoPageController.h
//  Appcessorize
//
//  Created by Shimaa Essam on 12/24/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomPageControl.h"

@protocol InfoPageControllerDelegate;

@interface InfoPageController : CustomPageControl

@property (nonatomic, strong) id<InfoPageControllerDelegate> delegate;

@end

@protocol InfoPageControllerDelegate <NSObject>

@required
- (void) infoPageCloseButtonClicked;

@end
