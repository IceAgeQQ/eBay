//
//  AppDelegate.h
//  eBay
//
//  Created by Chao Xu on 14-5-12.
//  Copyright (c) 2014年 Chao Xu. All rights reserved.
//tianming

#import <UIKit/UIKit.h>
#import <ProximityKit/ProximityKit.h>
#import <CoreLocation/CoreLocation.h>
@interface AppDelegate : UIResponder <UIApplicationDelegate,PKManagerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) PKManager *proximityKitManager;

@end
