//
//  Grading_Structures.h
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Courses;

@interface Grading_Structures : NSManagedObject

@property (nonatomic, retain) NSString * letterGrade;
@property (nonatomic, retain) NSNumber * percentageFrom;
@property (nonatomic, retain) NSNumber * percentageTo;
@property (nonatomic, retain) Courses *course;

@end
