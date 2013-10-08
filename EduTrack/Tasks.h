//
//  Tasks.h
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Categories, Courses, Notes, Reminders;

@interface Tasks : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * earnedPoints;
@property (nonatomic, retain) NSNumber * totalPoints;
@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) Reminders *reminder;
@property (nonatomic, retain) Notes *note;
@property (nonatomic, retain) Categories *category;
@property (nonatomic, retain) Courses *course;

@end
