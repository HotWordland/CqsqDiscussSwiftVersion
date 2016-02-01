//
//  LoginModel.h
//  CqsqDiscussSwiftVersion
//
//  Created by 情热大陆 on 16/1/28.
//  Copyright © 2016年 情热大陆-巫龙. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface Login_version_Model : JSONModel
@property (strong, nonatomic) NSString *url;
@property (strong, nonatomic) NSString *text;
@property (strong, nonatomic) NSString *ver;

@end


@interface Login_update_Model : JSONModel
@property (strong, nonatomic) NSString *file;
@property (strong, nonatomic) NSString *text;
@property (strong, nonatomic) NSString *version;

@end


@interface LoginModel : JSONModel
@property (assign, nonatomic) int islogin;
@property (assign, nonatomic) int status;
@property (strong, nonatomic) Login_version_Model *version;
@property (strong, nonatomic) Login_update_Model *update;

@end
