//
//  BXMediaCenterModel.h
//  BXMediaCenterSDK
//
//  Created by likun on 2020/9/14.
//  Copyright © 2020 LIKUN. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BXMediaCenterModel : NSObject

/// appkey
@property (nonatomic,strong) NSString *appKey;
/// 资源位id
@property (nonatomic,assign) NSInteger placeId;
/// 对接服务类型 1小说服务 2活动服务
@property (nonatomic,assign) NSInteger accessService;
@end

