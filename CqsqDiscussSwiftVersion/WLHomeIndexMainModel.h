//
//  WLHomeIndexMainModel.h
//  CQSQ
//
//  Created by 情热大陆 on 15/11/3.
//  Copyright © 2015年 PayEgis Inc. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "CQSQHomePostModel.h"
//轮播图下来的 金币兑换...
@protocol WLHomeIndexMain_BodyItemModel
@end
@interface WLHomeIndexMain_BodyItemModel : JSONModel
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *img;
@property (nonatomic,strong) NSString *mode;
@property (nonatomic,strong) NSString *text;
@end

@protocol WLHomeIndexMain_follows_forums_ItemModel
@end
//forums
@interface WLHomeIndexMain_follows_forums_ItemModel : JSONModel
@property (nonatomic,strong) NSString *fid;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *summary;
@property (nonatomic,strong) NSString *follow;
@property (nonatomic,strong) NSString *icon;

@end

@protocol WLHomeIndexMain_followsItemModel
@end
//follows
@interface WLHomeIndexMain_followsItemModel : JSONModel
@property (nonatomic,strong) NSArray<WLHomeIndexMain_follows_forums_ItemModel> *forums;
@property (nonatomic,strong) NSArray<CQSQHomePostModel> *topics;

@end


@interface WLHomeIndexMainModel : JSONModel
@property (nonatomic,strong) NSMutableArray *focus;
@property (nonatomic,strong) NSArray<WLHomeIndexMain_BodyItemModel> *models;
@property (nonatomic,strong) WLHomeIndexMain_followsItemModel *follows;
@property (nonatomic,strong) NSMutableArray<CQSQHomePostModel> *topics;
@property (assign, nonatomic) BOOL islogin;

@end
