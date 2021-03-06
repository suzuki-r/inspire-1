//
//  SimpleArticleListTableViewController.h
//  inspire
//
//  Created by Yuji on 2015/09/17.
//
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
@class ArticleList;
@interface SpecificArticleListTableViewController : UITableViewController<NSFetchedResultsControllerDelegate>
@property (nonatomic,strong) void (^actionBlock)(ArticleList*al);
@property (nonatomic,strong) NSString*entityName;
-(IBAction)addNew:(id)sender;
@end
