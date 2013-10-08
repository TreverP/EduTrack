//
//  ETAppDelegate.m
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import "ETAppDelegate.h"
#import "ETTasksViewController.h"
#import "Tasks.h"


@implementation ETAppDelegate

@synthesize managedObjectContext = _managedObjectContext;
@synthesize managedObjectModel = _managedObjectModel;
@synthesize persistentStoreCorrdinator = _persistentStoreCorrdinator;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
//    // Insert dummy test data.
//    NSManagedObjectContext *context = [self managedObjectContext];
//    Tasks *task = [NSEntityDescription insertNewObjectForEntityForName:@"Tasks" inManagedObjectContext:context];
//    task.name = @"Math - Finish Math Homework 3.0";
//    task.dueDate = [[NSDate date] dateByAddingTimeInterval:180];
//    
//    NSError *error = nil;
//    if (![context save:&error]) {
//        NSLog(@"Failure during save: %@", [error localizedDescription]);
//    }
//    
//    // fetches and displays in console
//    NSFetchRequest *fetchRequest = [[NSFetchRequest alloc] init];
//    NSEntityDescription *entity = [NSEntityDescription entityForName:@"Tasks" inManagedObjectContext:context];
//    [fetchRequest setEntity:entity];
//    NSArray *fetchObjects = [context executeFetchRequest:fetchRequest error:&error];
//    
//    for (Tasks *task in fetchObjects) {
//        NSLog(@"Name: %@", task.name);
//        NSLog(@"Due Date: %@", task.dueDate);
//    }
    
    
    UITabBarController *tabBarController = (UITabBarController *)self.window.rootViewController;
    UINavigationController *navigationController = [[tabBarController viewControllers] objectAtIndex:0];
    ETTasksViewController *controller = [[navigationController viewControllers] objectAtIndex:0];
    controller.managedObjectContext = self.managedObjectContext;
    return YES;
}

#pragma mark - Core Data stack

/**
 Returns the managed object context for the application.
 If the context doesn't already exist, it is created and bound to the persistent store coordinator for the application.
 */

- (NSManagedObjectContext *)managedObjectContext {
    
    if (_managedObjectContext != nil) {
        return _managedObjectContext;
    }
    
    NSPersistentStoreCoordinator *coordinator = [self persistentStoreCoordinator];
    if (coordinator != nil) {
        _managedObjectContext = [[NSManagedObjectContext alloc] init];
        [_managedObjectContext setPersistentStoreCoordinator:coordinator];
    }
    
    return _managedObjectContext;
}

/**
 Returns the managed object model for the application.
 If the model doesn't already exist, it is created from the application's model.
 */
- (NSManagedObjectModel *)managedObjectModel
{
    if (_managedObjectModel != nil)
    {
        return _managedObjectModel;
    }
    _managedObjectModel = [NSManagedObjectModel mergedModelFromBundles:nil];
    
    return _managedObjectModel;
}

/**
 Returns the persistent store coordinator for the application.
 If the coordinator doesn't already exist, it is created and the application's store added to it.
 */
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator
{
    
    if (_persistentStoreCorrdinator != nil)
    {
        return _persistentStoreCorrdinator;
    }
    
    NSURL *storeURL = [[self applicationDocumentsDirectory] URLByAppendingPathComponent:@"EduTrack.sqlite"];
    
    NSError *error = nil;
    _persistentStoreCorrdinator = [[NSPersistentStoreCoordinator alloc] initWithManagedObjectModel:[self managedObjectModel]];
    if (![_persistentStoreCorrdinator addPersistentStoreWithType:NSSQLiteStoreType configuration:nil URL:storeURL options:nil error:&error])
    {
        NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
        abort();
    }
    
    return _persistentStoreCorrdinator;
}


- (void)saveContext {
    
    NSError *error = nil;
    NSManagedObjectContext *objectContext = self.managedObjectContext;
    if (objectContext != nil) {
        if ([objectContext hasChanges] && ![objectContext save:&error]) {
            // add error handling here
            NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
            exit(-1);
        }
    }
}

- (NSURL *)applicationDocumentsDirectory {
    
    NSLog(@"%@",[[[NSFileManager defaultManager] URLsForDirectory:NSDocumentationDirectory inDomains:NSUserDomainMask] lastObject] );
    return [[[NSFileManager defaultManager] URLsForDirectory:NSDocumentationDirectory inDomains:NSUserDomainMask] lastObject];
}

@end
