//
//  ACPScrollContainer.h
//  ACPScrollMenu
//
//  Created by Antonio Casero Palmero on 8/4/13.
//  Copyright (c) 2013 ACP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ACPItem.h"

@class ACPScrollMenu;

@protocol ACPScrollDelegate <NSObject>

/**
 	Delegate method, executed when the user press any item
    Optional because you can use blocks instead.
 
    @see initACPItem:iconImage:label:andAction
 
 	@param	menu	ACPScrollMenu component
 	@param	selectedIndex	index of the item selected by the user
*/

@optional

- (void)scrollMenu:(ACPScrollMenu *)menu didSelectIndex:(NSInteger)selectedIndex;

@end

@interface ACPScrollMenu : UIView <ACPItemDelegate, UIScrollViewDelegate>

//Type of animations
typedef enum {
	ACPFadeZoomIn,
	ACPFadeZoomOut,
	ACPShake,
	ACPClassicAnimation,
	ACPZoomOut
} ACPAnimation;


@property (nonatomic, weak) id <ACPScrollDelegate> delegate;

@property (nonatomic, strong) NSArray *menuArray;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, assign) ACPAnimation animationType;

/**
 	Set up the menu programatically, if you are using storyboard, you dont need to use it.
 
 	@param	frame	frame of the container
 	@param	bgColor	background color of the container
 	@param	menuItems	Array with the ACPItems
 
 	@return	The container with the items in order
*/
- (id)initACPScrollMenuWithFrame:(CGRect)frame withBackgroundColor:(UIColor *)bgColor menuItems:(NSArray *)menuItems;


/**
 	The same as the method before, but we should have defined the component in the storyboard or xib file.
 
 	@param	frame	frame of the container
 	@param	bgColor	background color of the container
 	@param	menuItems	Array with the ACPItems
 
 	@return	The container with the items in order
*/
- (void)setUpACPScrollMenu:(NSArray *)menuItems;

/**
 	If you want an item selected by default
 
 	@param	itemNumber	This number represent the item in itemsArray
*/
- (void)setThisItemHighlighted:(NSInteger)itemNumber;

/**
 	Change the background color of this view.
 
 	@param	color	your favorite color.
*/
- (void)setACPBackgroundColor:(UIColor *)color;

@end
