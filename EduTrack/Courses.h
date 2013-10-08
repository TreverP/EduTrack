//
//  Courses.h
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Class_Days, Grading_Structures, Professors, Tasks;

@interface Courses : NSManagedObject

@property (nonatomic, retain) NSString * abbr;
@property (nonatomic, retain) NSDate * createdOn;
@property (nonatomic, retain) NSDate * endTime;
@property (nonatomic, retain) NSDate * lastEditOn;
@property (nonatomic, retain) NSString * location;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * startTime;
@property (nonatomic, retain) NSSet *classDays;
@property (nonatomic, retain) NSSet *gradingStructures;
@property (nonatomic, retain) Professors *professor;
@property (nonatomic, retain) NSSet *tasks;
@end

@interface Courses (CoreDataGeneratedAccessors)

- (void)addClassDaysObject:(Class_Days *)value;
- (void)removeClassDaysObject:(Class_Days *)value;
- (void)addClassDays:(NSSet *)values;
- (void)removeClassDays:(NSSet *)values;

- (void)addGradingStructuresObject:(Grading_Structures *)value;
- (void)removeGradingStructuresObject:(Grading_Structures *)value;
- (void)addGradingStructures:(NSSet *)values;
- (void)removeGradingStructures:(NSSet *)values;

- (void)addTasksObject:(Tasks *)value;
- (void)removeTasksObject:(Tasks *)value;
- (void)addTasks:(NSSet *)values;
- (void)removeTasks:(NSSet *)values;

@end
