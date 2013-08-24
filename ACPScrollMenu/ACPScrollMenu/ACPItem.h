//
//  ACPItem.h
//  ACPScrollMenu
//
//  Created by Antonio Casero Palmero on 8/4/13.
//  Copyright (c) 2013 ACP. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ACPItem;

@protocol ACPItemDelegate <NSObject>

- (void)itemTouchesBegan:(ACPItem *)item;
- (void)itemTouchesEnd:(ACPItem *)item;

@end

@interface ACPItem : UIView

typedef enum {
	ACPImageItem,
	ACPLabelItem,
	ACPImageAndLabeItem
} ACPItemType;

@property (nonatomic, weak) id <ACPItemDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIImageView *iconImage;
@property (weak, nonatomic) IBOutlet UILabel *labelItem;
@property (weak, nonatomic) IBOutlet UIImageView *bgImage;

@property (assign, nonatomic) BOOL highlighted;


/*
 	Initialization of the item inside of the scrollview
 
 	@param	backgroundImage	The background image
 	@param	iconImage	Icon of the item. Could be nil if you dont want an icon
 	@param	labelItem	Text of the item. Could be nil if you only want the icon
 
 	@return	Item
 */
- (id)initACPItem:(UIImage *)backgroundImage iconImage:(UIImage *)iconImage andLabel:(NSString *)labelItem;

/*
  Implement this method if you want a custom highlighted state for you item
 */

- (void)setHighlightedBackground:(UIImage *)backgroundImageHightlighted iconHighlighted:(UIImage *)iconImageHighlighted textColorHighlighted:(UIColor *)texColorHighlighted;

@end
