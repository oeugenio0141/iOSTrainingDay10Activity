//
//  HomeViewController.m
//  aboutAPI
//
//  Created by OPSolutions on 08/11/2019.
//  Copyright © 2019 OPSolutions. All rights reserved.
//

#import "HomeViewController.h"
#import "../../Restaurants/Controllers/RestaurantsViewController.h"
#import "../../Restaurants/Views/Cells/RestaurantCollectionViewCell.h"
#import "../Views/Cells/CategoryTableViewCell.h"

@interface HomeViewController ()

@end

@implementation HomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.homeView = (HomeView *)[[[NSBundle mainBundle] loadNibNamed:@"HomeView" owner:self options:nil] objectAtIndex:0];
    self.homeView.frame = self.view.frame;
    
    [self.view addSubview:self.homeView];
    
    self.homeView.homeViewTableView.delegate = self;
    self.homeView.homeViewTableView.dataSource = self;
    [self.homeView.homeViewTableView registerNib:[UINib nibWithNibName:[CategoryTableViewCell cellName] bundle:nil] forCellReuseIdentifier:[CategoryTableViewCell reuseIdentifier]];
    
    self.navigationItem.title = @"Categories";
    
    [self getCategories];
    
  
    [self.homeView.homeActivityIndicator startAnimating];
    
    

    //CategoryModel *category = [[CategoryModel alloc] categoryId:1 name:@"Jeyo"];
    CategoryModel *category = [CategoryModel categoryId:1 name:@"Jeyo"];
    
    NSLog(@"%@", category.categoryName);
    
    
}

- (void)getCategories{
    
    NSString *apiKey = @"51fa471ee484c1fd8ae2d564828f278d";
    NSString *cagtegoriesUrl = @"https://developers.zomato.com/api/v2.1/categories";
    
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    manager.responseSerializer = [AFJSONResponseSerializer serializer];
    manager.requestSerializer = [AFJSONRequestSerializer serializer];
    [manager.requestSerializer setValue:apiKey forHTTPHeaderField:@"user-key"];
    [manager GET:cagtegoriesUrl parameters:nil progress:nil success:^(NSURLSessionDataTask * task, id responseObject) {
        
        NSDictionary *responseDict = responseObject;
        NSArray *responseArray = responseDict[@"categories"];
        self.categories = [[NSMutableArray alloc]init];
        for (id item in responseArray) {

            NSDictionary *responseCategory = item[@"categories"];
            CategoryModel *category = [CategoryModel categoryId:[responseCategory[@"id"] intValue] name:responseCategory[@"name"]];
            [self.categories addObject:category];
            
            
        }
        
        dispatch_async(dispatch_get_main_queue(), ^{
            [self.homeView.homeViewTableView reloadData];
            [self.homeView.homeActivityIndicator stopAnimating];
            
        });
    
    } failure:^(NSURLSessionDataTask * operation, NSError * error) {
        NSLog(@"Error: %@", error);
    }];
    
    
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    
    return [self.categories count];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    CategoryTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:[CategoryTableViewCell reuseIdentifier]];
    CategoryModel *category = self.categories[indexPath.row];
    cell.categoryTableViewCellLabel.text = category.categoryName;
    return cell;

}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    CategoryModel *category = self.categories[indexPath.row];
    _categoryId = [NSString stringWithFormat:@"%i", category.categoryId];
    [self performSegueWithIdentifier:@"restaurantsSegue" sender:nil];
    [self.homeView.homeViewTableView deselectRowAtIndexPath:indexPath animated:true];
}


- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([segue.identifier isEqualToString:@"restaurantsSegue"]) {
        RestaurantsViewController *restaurantsVc = [segue destinationViewController];
        restaurantsVc.categoryId = self.categoryId;
    }
}
@end
