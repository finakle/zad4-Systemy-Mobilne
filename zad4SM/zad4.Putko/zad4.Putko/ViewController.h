//
//  ViewController.h
//  zad4.Putko
//
//  Created by student on 23/11/2021.
//  Copyright © 2021 pb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property(weak, nonatomic) IBOutlet UILabel *gestureLabel;



-(IBAction)tapGesture: (UITapGestureRecognizer *) sender;
-(IBAction)pinchGesture: (UIPinchGestureRecognizer *) sender;
-(IBAction)swipeGesture: (UISwipeGestureRecognizer *) sender;
-(IBAction)longPressGesture: (UILongPressGestureRecognizer *) sender;
@end

