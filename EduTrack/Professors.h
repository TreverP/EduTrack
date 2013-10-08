//
//  Professors.h
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Courses;

@interface Professors : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * phone1;
@property (nonatomic, retain) NSString * phone2;
@property (nonatomic, retain) NSString * email1;
@property (nonatomic, retain) NSString * email2;
@property (nonatomic, retain) NSString * website;
@property (nonatomic, retain) NSDate * createdOn;
@property (nonatomic, retain) NSDate * lastEditOn;
@property (nonatomic, retain) Courses *course;

@end
