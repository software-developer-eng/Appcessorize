//
//  CustomInfoPage.h
//  test
//
//  Created by Shimaa Essam on 12/23/14.
//  Copyright (c) 2014 Shimaa Essam. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CustomInfoPageDelegate;

@interface CustomInfoPage : UIView

@property (nonatomic, strong) id<CustomInfoPageDelegate> delegate;

@property (weak, nonatomic) IBOutlet UIView *mainInfoView;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImage;
@property (weak, nonatomic) IBOutlet UILabel *infoViewTitle;
@property (weak, nonatomic) IBOutlet UIImageView *infoViewImage;
@property (weak, nonatomic) IBOutlet UITextView *infoViewDescription;
@property (weak, nonatomic) IBOutlet UIButton *closeButton;
- (IBAction)closeButttonClicked:(id)sender;

@end

@protocol CustomInfoPageDelegate <NSObject>

@required
- (void) infoPageCloseButtonClicked;
@end
