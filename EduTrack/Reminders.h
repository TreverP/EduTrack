//
//  Reminders.h
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Tasks;

@interface Reminders : NSManagedObject

@property (nonatomic, retain) NSDate * createdOn;
@property (nonatomic, retain) NSDate * lastEditOn;
@property (nonatomic, retain) NSDate * reminderDate;
@property (nonatomic, retain) NSSet *tasks;
@end

@interface Reminders (CoreDataGeneratedAccessors)

- (void)addTasksObject:(Tasks *)value;
- (void)removeTasksObject:(Tasks *)value;
- (void)addTasks:(NSSet *)values;
- (void)removeTasks:(NSSet *)values;

@end
