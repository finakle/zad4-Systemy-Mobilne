//
//  AppDelegate.h
//  zad4.Putko
//
//  Created by student on 23/11/2021.
//  Copyright © 2021 pb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

