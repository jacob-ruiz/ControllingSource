//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Jacob Ruiz on 12/15/13.
//  Copyright (c) 2013 Symphny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
