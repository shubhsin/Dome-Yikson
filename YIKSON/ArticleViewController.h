//
//  ArticleViewController.h
//  YIKSON
//
//  Created by Shubham Sorte on 11/02/16.
//  Copyright © 2016 Shubham Sorte. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ArticleViewController : UIViewController

@property (weak, nonatomic) IBOutlet UICollectionView *myCollectionView;
- (IBAction)yourButtonTouch:(UIButton *)sender;
@end
