//
//  BookCommentDetailViewController.h
//  douban-book
//
//  Created by xeodou on 13-2-6.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#import "CustomViewController.h"

@interface BookCommentDetailViewController : CustomViewController<UIWebViewDelegate>

@property (nonatomic, strong)NSString *reviewId;
@property (weak, nonatomic) IBOutlet UIWebView *mWebView;

@end
