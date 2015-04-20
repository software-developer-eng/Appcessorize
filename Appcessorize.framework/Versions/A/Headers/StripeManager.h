//
//  StripeManager.m
//
//  Created by YASSER MABROUK.
//  Copyright (c) 2015 YASSER MABROUK. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol StripeManagerDelegate;

@interface StripeManager : NSObject

@property (nonatomic, strong) id<StripeManagerDelegate> delegate;
- (void) checkout:(NSString *)cardNumber withExpireMonth:(NSInteger )exMonth andExpireYear:(NSInteger)expYear  andWithCVC:(NSString *)cvc andName:(NSString *)name;

@end

@protocol StripeManagerDelegate <NSObject>

@required
- (void) paymentSucceed:(NSString *)transactionId;
- (void) paymentRequestFailWithError:(NSString *)message;

@end