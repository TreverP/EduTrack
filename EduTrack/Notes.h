//
//  Notes.h
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Tasks;

@interface Notes : NSManagedObject

@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) NSDate * createdOn;
@property (nonatomic, retain) NSDate * lastEditOn;
@property (nonatomic, retain) NSSet *tasks;
@end

@interface Notes (CoreDataGeneratedAccessors)

- (void)addTasksObject:(Tasks *)value;
- (void)removeTasksObject:(Tasks *)value;
- (void)addTasks:(NSSet *)values;
- (void)removeTasks:(NSSet *)values;

@end
