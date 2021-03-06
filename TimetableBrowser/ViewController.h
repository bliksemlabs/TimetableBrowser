//
//  ViewController.h
//  TimetableBrowser
//
//  Created by Berend Schotanus on 21-12-14.
//  Copyright (c) 2014 First Flamingo Enterprise B.V. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class OVDataController, MareyView;

@interface ViewController : NSViewController

@property (nonatomic, readonly) OVDataController *dataController;
@property (strong) IBOutlet NSArrayController *patternArrayController;
@property (weak) IBOutlet MareyView *mareyView;

@end

