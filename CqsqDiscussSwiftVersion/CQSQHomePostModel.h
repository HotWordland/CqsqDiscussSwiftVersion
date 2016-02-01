//
//  CQSQHomePostModel.h
//  CQSQMock
//
//  Created by 情热大陆 on 15/10/13.
//  Copyright © 2015年 情热大陆. All rights reserved.
//

#import <JSONModel/JSONModel.h>
@protocol CQSQHomePostUserModel
@end

@interface CQSQHomePostUserModel : JSONModel
@property (nonatomic,copy) NSString *uid;
@property (nonatomic,copy) NSString *regdate;
@property (nonatomic,copy) NSString *avatar;
@property (nonatomic,copy) NSString *username;
@property (nonatomic,copy) NSString *gender;
@property (nonatomic,copy) NSString *groupid;
@property (nonatomic,copy) NSString *memberid;
@property (nonatomic,copy) NSString *profile;
@property (nonatomic,copy) NSString *lat;
@property (nonatomic,copy) NSString *lng;
@property (nonatomic,copy) NSString *timestamp;
@property (nonatomic,copy) NSString<Optional> *lastactivetime;
@property (nonatomic,copy) NSString<Optional> *lastvisit;
@property (nonatomic,copy) NSString<Optional> *lastpost;
@property (nonatomic,copy) NSString *gid;
@property (nonatomic,copy) NSString *regage;
@property (nonatomic,copy) NSString *lastactive;
@end

@protocol  CQSQHomePostModel
@end
@interface CQSQHomePostModel : JSONModel
@property (nonatomic,copy) NSString *tid;
@property (nonatomic,copy) NSString *fid;
@property (nonatomic,copy) NSString *subject;
@property (nonatomic,copy) NSString *replies;
@property (nonatomic,copy) NSString *hits;
@property (nonatomic,copy) NSString *like;
@property (nonatomic,copy) NSString *mark;
@property (nonatomic,copy) NSString *marks;
@property (nonatomic,copy) NSString<Optional> *dist;
@property (nonatomic,copy) NSString *created_time;
@property (nonatomic,copy) NSString *summary;
@property (nonatomic,copy) NSString<Optional> *timestamp;
@property (nonatomic,copy) NSString *atts_count;
@property (nonatomic,copy) NSString<Optional> *lat;
@property (nonatomic,strong) CQSQHomePostUserModel *user;
@property (nonatomic,copy) NSArray<Optional> *atts;
@property (nonatomic,strong) NSValue<Optional> *oneImage_size;
@property (nonatomic,strong) NSValue<Optional> *dtTextSize;



@end
