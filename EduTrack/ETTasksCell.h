//
//  ETTasksCell.h
//  EduTrack
//
//  Created by Trever on 10/8/13.
//  Copyright (c) 2013 Trever. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ETTasksCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *tasksTitle;
@property (strong, nonatomic) IBOutlet UILabel *date;
@property (strong, nonatomic) IBOutlet UIImageView *reminderImage;
@property (strong, nonatomic) IBOutlet UIView *categoryColor;

@end
