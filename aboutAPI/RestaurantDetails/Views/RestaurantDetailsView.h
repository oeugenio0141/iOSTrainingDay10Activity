//
//  RestaurantDetailsView.h
//  aboutAPI
//
//  Created by OPSolutions on 11/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RestaurantDetailsView : UIView
@property (weak, nonatomic) IBOutlet UIImageView *restaurantDetailsImageView;
@property (weak, nonatomic) IBOutlet UILabel *restaurantDetailsNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *restaurantDetailsRatingLabel;
@property (weak, nonatomic) IBOutlet UILabel *restaurantDetailsCuisineLabel;
@property (weak, nonatomic) IBOutlet UILabel *restaurantDetailsAddressLabel;
@property (weak, nonatomic) IBOutlet UILabel *restsurantDetailsTimingLabel;
@property (weak, nonatomic) IBOutlet UILabel *restaurantDetailsAverageCostLabel;

@end

NS_ASSUME_NONNULL_END
