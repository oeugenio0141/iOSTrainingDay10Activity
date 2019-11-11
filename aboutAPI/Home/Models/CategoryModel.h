//
//  CategoryModel.h
//  aboutAPI
//
//  Created by OPSolutions on 08/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CategoryModel : NSObject

@property (assign)int categoryId;
@property (strong, nonatomic)NSString *categoryName;


- (id) categoryId:(int)categoryId name:(NSString *)name;
+ (instancetype)categoryId:(int)categoryId name:(NSString *)name;


@end

NS_ASSUME_NONNULL_END
