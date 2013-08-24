//
//  ViewController.m
//  ACPScrollMenu
//
//  Created by Antonio Casero Palmero on 8/4/13.
//  Copyright (c) 2013 ACP. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
	[super viewDidLoad];
    
	[self setUpACPScroll];
    
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
	// Dispose of any resources that can be recreated.
}

- (void)setUpACPScroll {
	NSMutableArray *array = [[NSMutableArray alloc] init];
	for (int i = 1; i < 5; i++) {
		NSString *imgName = [NSString stringWithFormat:@"%d.png", i];
		NSString *imgSelectedName = [NSString stringWithFormat:@"%ds.png", i];
        
		//Set the items
		ACPItem *item = [[ACPItem alloc] initACPItem:[UIImage imageNamed:@"bg.png"] iconImage:[UIImage imageNamed:imgName] andLabel:@"Test"];
        
		//Set highlighted behaviour
		[item setHighlightedBackground:nil iconHighlighted:[UIImage imageNamed:imgSelectedName] textColorHighlighted:[UIColor redColor]];
        
		[array addObject:item];
	}
    
	[_ACPScrollMenu setUpACPScrollMenu:array];
    
	//We choose an animation when the user touch the item (you can create your own animation)
	[_ACPScrollMenu setAnimationType:ACPZoomOut];
    
	_ACPScrollMenu.delegate = self;
}

- (void)scrollMenu:(ACPItem *)menu didSelectIndex:(NSInteger)selectedIndex {
	NSLog(@"Item %d", selectedIndex);
    //DO somenthing here
}

@end
