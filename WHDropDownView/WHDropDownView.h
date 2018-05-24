//
//  WHDropDownView.h
//  Example
//
//  Created by whbalzac on 3/14/17.
//  Copyright © 2017 whbalzac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WHDropDownView : UIView

+ (WHDropDownView *)sharedInstance;

- (void)showDropDownViewOn:(UIView *)bottomView;

- (void)boomup;

@end
