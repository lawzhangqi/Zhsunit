//
//  NoticeViewController.h
//  ZhsunIt
//通知模块
//  Created by 琦 章 on 12-3-19.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TKAlertCenter.h"
#import "MBProgressHUD.h"

@interface NoticeViewController : UIViewController<MBProgressHUDDelegate>{
    MBProgressHUD *HUD;
}
@property (retain, nonatomic) IBOutlet UIButton *NoticeBt;
- (IBAction)NoticeBt:(id)sender;

@end
