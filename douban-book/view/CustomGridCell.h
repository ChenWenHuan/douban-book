//
//  CustomGridCell.h
//  douban-book
//
//  Created by xeodou on 12-12-27.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomGridCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView* grid_first_image;
@property (weak, nonatomic) IBOutlet UIImageView* grid_second_image;
@property (weak, nonatomic) IBOutlet UIImageView* grid_third_image;
@end
