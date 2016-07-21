//
//  ViewController.m
//  ImgateTest
//
//  Created by sa vincent on 7/21/16.
//  Copyright © 2016 smart. All rights reserved.
//

#import "ViewController.h"
#import <UIImageUtils/UIImageUtils.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
    
    
}

- (void)viewWillAppear:(BOOL)animated {
    NSURL *url = [NSURL URLWithString:@"http://www.conceptcarz.com/images/Jaguar/Jaguar-F-Pace-First-Edition-2015-Image-03.jpg"];
    NSData *data = [NSData dataWithContentsOfURL:url];
    UIImage *img = [[UIImage alloc] initWithData:data];
    [imv setImage:img];
//    [imv setImage:[img resizedImage:imv.bounds.size interpolationQuality:kCGInterpolationHigh]];
}

@end
