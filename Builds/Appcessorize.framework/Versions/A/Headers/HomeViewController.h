//
//  AppcessorizeViewController.h
//  Appcessorize
//
//  Created by Yasser Mabrouk on 11/3/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SelectImagesViewController.h"
#import "TemplateViewController.h"
#import "TemplateManipulationViewController.h"
#import "AppcessorizeTabBarController.h"
#import "Constant.h"
#import "Utility.h"
#import "DeviceSelectionViewController.h"


@interface HomeViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImage;
@property (strong, nonatomic) IBOutlet UIImageView *cameraImageView;

- (IBAction)makeYourCaseButtonClicked:(id)sender;

@end
