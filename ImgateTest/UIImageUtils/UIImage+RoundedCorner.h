//  UIImage+RoundedCorner.h
//  UIImageUtils
//
//  Created by sa vincent on 7/21/16.
//  Copyright © 2016 smart. All rights reserved.
//
#import <UIKit/UIKit.h>

// Extends the UIImage class to support making rounded corners
@interface UIImage (RoundedCorner)
- (UIImage *)roundedCornerImage:(NSInteger)cornerSize borderSize:(NSInteger)borderSize;
- (void)addRoundedRectToPath:(CGRect)rect context:(CGContextRef)context ovalWidth:(CGFloat)ovalWidth ovalHeight:(CGFloat)ovalHeight;
@end
