//
//  ViewController.h
//  ACPScrollMenu
//
//  Created by Antonio Casero Palmero on 8/4/13.
//  Copyright (c) 2013 ACP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ACPScrollMenu.h"

@interface ViewController : UIViewController <ACPScrollDelegate>

@property (weak, nonatomic) IBOutlet ACPScrollMenu *ACPScrollMenu;

@end
