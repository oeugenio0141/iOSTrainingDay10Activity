//
//  RestaurantDetailsViewController.h
//  aboutAPI
//
//  Created by OPSolutions on 11/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "../../Restaurants/Models/RestaurantModel.h"
#import "../Views/RestaurantDetailsView.h"

NS_ASSUME_NONNULL_BEGIN

@interface RestaurantDetailsViewController : UIViewController


@property (strong, nonatomic) RestaurantDetailsView *restaurantsDetailsView;
@property (strong, readwrite) RestaurantModel *restaurant;


@end

NS_ASSUME_NONNULL_END
