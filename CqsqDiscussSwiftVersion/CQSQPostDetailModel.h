//
//  CQSQPostDetailModel.h
//  CQSQMock
//
//  Created by 情热大陆 on 15/10/13.
//  Copyright © 2015年 情热大陆. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import <UIKit/UIKit.h>
#import "CQSQHomePostModel.h"
@protocol CQSQPostDetailContentModel
@end
@interface CQSQPostDetailContentModel : JSONModel
@property(nonatomic,copy) NSString *mode;
@property(nonatomic,copy) NSString *content;


/*** 如果是图片 ***/
@property (nonatomic,strong) NSNumber<Optional> *image_width;
@property (nonatomic,strong) NSNumber<Optional> *image_height;
/*** 如果是图片 ***/

/*** 单独构造回复帖子模型 ***/
//如果这里有值 那么就是回复模型 里面放置的音频文件路径
@property (nonatomic,copy) NSData<Optional> *insertvoiceData;
//如果这里有值 那么就是回复模型 里面放置的回复图片
@property(nonatomic,strong) UIImage<Optional> *insertImage;

@end

@protocol CQSQPostDetailUserModel
@end

@interface CQSQPostDetailUserModel : JSONModel
@property (nonatomic,copy) NSString *uid;
@property (nonatomic,copy) NSString *avatar;
@property (nonatomic,copy) NSString *username;
@property (nonatomic,copy) NSString *gender;
@property (nonatomic,copy) NSString *groupid;
@property (nonatomic,copy) NSString *memberid;
@property (nonatomic,copy) NSString<Optional> *profile;
@property (nonatomic,copy) NSString *lat;
@property (nonatomic,copy) NSString *lng;
@property (nonatomic,copy) NSString *gid;

@end

@protocol CQSQPostDetailReplysModel
@end
@interface CQSQPostDetailReplysModel : JSONModel
@property(nonatomic,copy) NSString *pid;
@property(nonatomic,copy) NSString *fid;
@property(nonatomic,copy) NSString *replies;
@property(nonatomic,copy) NSString *rpid;
@property(nonatomic,copy) NSString *created_time;
@property(nonatomic,copy) NSString *ipfrom;
@property(nonatomic,copy) NSString *subject;
@property(nonatomic,strong) NSMutableArray<CQSQPostDetailContentModel> *content;
@property(nonatomic,strong) CQSQPostDetailUserModel *user;


@end

@protocol CQSQPostDetail_like_Model
@end

@interface CQSQPostDetail_like_Model : JSONModel
@property(nonatomic,copy) NSString *uid;
@property(nonatomic,copy) NSString *avatar;
@end

@protocol CQSQPostDetail_mark_Model
@end

@interface CQSQPostDetail_mark_Model : JSONModel
@property(nonatomic,copy) NSString *uid;
@property(nonatomic,copy) NSString *avatar;
@property(nonatomic,copy) NSString *mark;
@end


@interface CQSQPostDetailModel : JSONModel
@property(nonatomic,copy) NSString *tid;
@property(nonatomic,copy) NSString *fid;
@property(nonatomic,copy) NSString *replies;
@property(nonatomic,copy) NSString *hits;
@property(nonatomic,copy) NSString *mark;
@property(nonatomic,copy) NSString *like;
@property(nonatomic,copy) NSString *created_time;
@property(nonatomic,copy) NSString *ipfrom;
@property(nonatomic,copy) NSString *subject;
@property(nonatomic,copy) NSString *summary;
@property(nonatomic,copy) NSString<Optional> *dist;
@property(nonatomic,strong) NSMutableArray<CQSQPostDetailContentModel> *content;
@property(nonatomic,strong) NSMutableArray<CQSQPostDetail_like_Model,Optional> *like_list;
@property(nonatomic,strong) NSMutableArray<CQSQPostDetail_mark_Model,Optional> *mark_list;

@property(nonatomic,strong) CQSQHomePostUserModel *user;
@property(nonatomic,strong)  NSMutableArray<CQSQPostDetailReplysModel
> *replys;

@end
