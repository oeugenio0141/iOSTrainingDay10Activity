//
//  HomeView.h
//  aboutAPI
//
//  Created by OPSolutions on 08/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Cells/CategoryTableViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface HomeView : UIView
@property (weak, nonatomic) IBOutlet UITableView *homeViewTableView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *homeActivityIndicator;



@end

NS_ASSUME_NONNULL_END
