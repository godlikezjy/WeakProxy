//
//  YBMWeakProxy.h
//  YaoBangMang
//
//  Created by 张佳彧 on 2020/3/16.
//  Copyright © 2019 XiaoYaoYao.Ltd. All rights reserved.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YBMWeakProxy : NSProxy

@property (nullable, nonatomic, weak, readonly) id target;

- (instancetype)initWithTarget:(id)target;

+ (instancetype)proxyWithTarget:(id)target;

@end

NS_ASSUME_NONNULL_END
