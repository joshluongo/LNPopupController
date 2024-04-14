//
//  _LNPopupBarShadowedImageView.h
//  LNPopupController
//
//  Created by Leo Natan on 15/10/2023.
//  Copyright © 2023 Leo Natan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface _LNPopupBarShadowedImageView : UIImageView

@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, copy) NSShadow* shadow;

@end

NS_ASSUME_NONNULL_END
