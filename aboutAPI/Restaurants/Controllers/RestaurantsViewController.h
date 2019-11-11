//
//  RestaurantsViewController.h
//  aboutAPI
//
//  Created by OPSolutions on 11/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "../Views/RestaurantsView.h"
#import "../Models/RestaurantModel.h"
#import "../Views/Cells/RestaurantCollectionViewCell.h"
#import <AFNetworking/AFNetworking.h>
#import "../../RestaurantDetails/Controllers/RestaurantDetailsViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface RestaurantsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (strong, nonatomic) RestaurantsView *restaurantsView;
@property (strong, readwrite) NSMutableArray *restaurants;
@property (strong, nonatomic) NSString *categoryId;
@property (strong, nonatomic) RestaurantModel *restaurant;


@end

NS_ASSUME_NONNULL_END
