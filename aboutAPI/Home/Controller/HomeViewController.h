//
//  HomeViewController.h
//  aboutAPI
//
//  Created by OPSolutions on 08/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "../Views/HomeView.h"
#import <AFNetworking/AFNetworking.h>
#import "../Models/CategoryModel.h"
#import "../Views/Cells/CategoryTableViewCell.h"
#import "../../Restaurants/Models/RestaurantModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HomeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>


@property (strong, nonatomic) HomeView * homeView;
@property (strong,readwrite) NSMutableArray *categories;
@property (strong, nonatomic) NSString *categoryId;


- (void)getCategories;

@end

NS_ASSUME_NONNULL_END
