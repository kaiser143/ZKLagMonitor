//
//  ZKLagMonitor.h
//  Pods
//
//  Created by zhangkai on 2020/8/26.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *	@brief	卡顿监听
 */
@interface ZKLagMonitor : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (id)copy NS_UNAVAILABLE;
- (id)mutableCopy NS_UNAVAILABLE;

+ (instancetype)manager;

- (void)startMonitoring;
- (void)stopMonitoring;

@end

NS_ASSUME_NONNULL_END
