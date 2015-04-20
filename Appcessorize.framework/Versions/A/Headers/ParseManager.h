//
//  ParseManager.h
//  Appcessorize
//
//  Created by Shimaa Essam on 12/18/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "UserData.h"

@interface ParseManager : NSObject

- (void) saveUserDataThenSendBackgroundMail:(UserData*) userData  andImage:(UIImage*) image;
- (void) sendBackgroundEmailWith:(UserData *) userDate andImageURL:(NSString *) imageURL;

@end
