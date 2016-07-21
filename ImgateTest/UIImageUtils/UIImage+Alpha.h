//  UIImage+Alpha.h
//  UIImageUtils
//
//  Created by sa vincent on 7/21/16.
//  Copyright © 2016 smart. All rights reserved.
//

#import <UIKit/UIKit.h>

// Helper methods for adding an alpha layer to an image
@interface UIImage (Alpha)
- (BOOL)hasAlpha;
- (UIImage *)imageWithAlpha;
- (UIImage *)transparentBorderImage:(NSUInteger)borderSize;
- (CGImageRef)newBorderMask:(NSUInteger)borderSize size:(CGSize)size;
@end
