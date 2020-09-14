//
//  BXMediaCenterManager.h
//  BXMediaCenterSDK
//
//  Created by likun on 2020/9/14.
//  Copyright © 2020 LIKUN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BXMediaCenterModel.h"
typedef void(^openPolicyBlock)(BXMediaCenterModel *model);
typedef void(^errorBlock)(NSError *error);
@interface BXMediaCenterManager : NSObject
/// 获取跳转类型
/// @param appkey appkey
/// @param placeId placeId
/// @param userId userId
/// @param policyBlock 策略回调
+ (void)openPageWithAppKey:(NSString *)appkey
                   placeId:(NSString *)placeId
                    userId:(NSString *)userId
               policyBlock:(openPolicyBlock)policyBlock
                errorBlock:(errorBlock)errorBlock;

@end


