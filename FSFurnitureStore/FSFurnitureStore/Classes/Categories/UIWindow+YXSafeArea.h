//
//  UIWindow+JXSafeArea.h
//  JXCategoryView
//
//  Created by jiaxin on 2018/9/29.
//  Copyright © 2018 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (YXSafeArea)

- (UIEdgeInsets)yx_layoutInsets;

- (CGFloat)yx_navigationHeight;

- (CGFloat)yx_tabbarHeight;

@end

NS_ASSUME_NONNULL_END
