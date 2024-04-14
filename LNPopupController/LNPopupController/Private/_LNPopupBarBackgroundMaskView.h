//
//  _LNPopupBarBackgroundMaskView.h
//  LNPopupController
//
//  Created by Leo Natan on 27/09/2023.
//  Copyright © 2023 Leo Natan. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface _LNPopupBarBackgroundMaskView: UIView

@property (nonatomic, readonly) BOOL wantsCutout;
- (void)setWantsCutout:(BOOL)wantsCutout animated:(BOOL)animated;

@property (nonatomic) CGRect floatingFrame;
@property (nonatomic) CGFloat floatingCornerRadius;

@end


NS_ASSUME_NONNULL_END
