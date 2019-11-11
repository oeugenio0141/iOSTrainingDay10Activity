//
//  CategoryTableViewCell.h
//  aboutAPI
//
//  Created by OPSolutions on 08/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CategoryTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *categoryTableViewCellLabel;
@property (weak, nonatomic) IBOutlet UIView *categoryTableViewCell;

+ (NSString*)reuseIdentifier;
+ (NSString*)cellName;



@end

NS_ASSUME_NONNULL_END
