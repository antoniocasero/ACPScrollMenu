# ACPScrollMenu

This control was designed for a fast implementation of scrollable menu. You just need to add this component directly to the storyboard or your xib file and implement the delegate methods.

Fully customizable, item, colors, padding, backgrounds, animations&behaviour!

![](sc2.png)

## Instalation

### From [CocoaPods][1]

	pod `ACPScrollMenu`

### From source

* Clone the repository

[*$ git clone git@github.com:antoniocasero/ACPScrollMenu.git*]()

* Or just drag this component to your project and import `ACPScrollMenu` to your viewcontroller.

## Implementing

Set your view as `ACPScrollMenu` class

![](img.png)

Set your items, and call this method

```
- (void)setUpACPScrollMenu:(NSArray *)menuItems;
```

Fill the delegate method:

```
-(void)scrollMenu:(ACPItem *)menu didSelectIndex:(NSInteger)selectedIndex;
```

## Compatibility

- Supports ARC. 
- Compatible with iOS5+.


## License

`ACPScrollMenu` is available under the MIT license. See the LICENSE file for more info.



[1]:	http://www.cocoapods.org

