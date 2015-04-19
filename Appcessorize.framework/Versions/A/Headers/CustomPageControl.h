//
//  CustomPageControl.h
//  test
//
//  Created by Shimaa Essam on 12/22/14.
//  Copyright (c) 2014 Shimaa Essam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomInfoPage.h"

@protocol InfoPageDelegate;

@interface CustomPageControl : UIView <UIScrollViewDelegate>
@property NSInteger totalNumberOfPages;
@property (nonatomic, strong) id<InfoPageDelegate> delegate;

@property (weak, nonatomic) IBOutlet UIPageControl *pageControl;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIButton *closeButton;

- (IBAction)closeButtonClicked:(id)sender;

- (void) configurePageControl;
- (void) setControllerPages:(NSArray *) pages withCloseButton:(BOOL) hasCloseButton;

@end


@protocol InfoPageDelegate <NSObject>
@required
- (void) infoPageCloseButtonClicked;

@end