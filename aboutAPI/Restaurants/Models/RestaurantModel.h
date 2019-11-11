//
//  RestaurantModel.h
//  aboutAPI
//
//  Created by OPSolutions on 11/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RestaurantModel : NSObject

@property (strong, nonatomic) NSString *restaurantId;
@property (strong, nonatomic) NSString *restaurantName;
@property (strong, nonatomic) NSString *restaurantLocation;
@property (strong, nonatomic) NSString *restaurantThumb;
@property (assign) float restaurantUserRating;
@property (strong, nonatomic) NSString *restaurantCuisines;
@property (strong, nonatomic) NSString *restaurantTiming;
@property (assign) float restaurantAverageCostForTwo;

- (id) restaurantId:(NSString *)restaurantId;
+ (instancetype) restaurantId:(NSString *)restaurantId;



@end

NS_ASSUME_NONNULL_END
