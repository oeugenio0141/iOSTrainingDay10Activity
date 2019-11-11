//
//  RestaurantModel.m
//  aboutAPI
//
//  Created by OPSolutions on 11/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import "RestaurantModel.h"

@implementation RestaurantModel

- (id) restaurantId:(NSString *)restaurantId {
    if (self) {
        self.restaurantId = restaurantId;
    }
    return self;
}

+ (instancetype)restaurantId:(NSString *)restaurantId{
    RestaurantModel *restaurant = [[RestaurantModel alloc] restaurantId:restaurantId];
    return restaurant;
}


@end
