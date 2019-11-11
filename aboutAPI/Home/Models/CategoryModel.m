//
//  CategoryModel.m
//  aboutAPI
//
//  Created by OPSolutions on 08/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import "CategoryModel.h"

@implementation CategoryModel

- (id) categoryId:(int)categoryId name:(NSString *)name {
    
    if (self) {
        self.categoryId = categoryId;
        self.categoryName = name;
    }
    
    return self;
    
}


+ (instancetype)categoryId:(int)categoryId name:(NSString *)name{
   
    CategoryModel *category = [[CategoryModel alloc] categoryId:categoryId name:name];
    
    return category;
}

@end
