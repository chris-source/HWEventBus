//
//  HWEventBusManager.h
//  HWEventBus
//
//  Created by 郑振兴 on 16/5/31.
//  Copyright © 2016年 北京海尔广科数字技术有限公司－郑振兴. All rights reserved.
//

#import "HWEvent.h"
#import "HWPublisherProtocol.h"
#import "HWSubscriberProtocol.h"
#import <Foundation/Foundation.h>
@interface HWEventBusManager : NSObject
+ (instancetype)manager;
- (void)addSubscriber:(id<HWSubscriberProtocol>)subscriber eventName:(NSString *)eventName;
- (void)addSubscriber:(id<HWSubscriberProtocol>)subscriber eventNames:(NSArray <NSString*> *)eventNames;
- (void)removeSubscriber:(id<HWSubscriberProtocol>)subscriber eventName:(NSString *)eventName;
- (void)publishEvent:(NSString *)eventName eventData:(id)eventData byPublisher:(id<HWPublisherProtocol>)publisher life:(NSInteger)life;
- (void)checkEvent:(NSString *)eventName forSubscriber:(id<HWAsyncSubscriberProtocol>)subscriber;
- (void)checkEvent_AND:(NSArray<NSString *>*)eventNames forSubscriber:(id<HWAsyncSubscriberProtocol>)subscriber;
- (void)checkEvent_OR:(NSArray<NSString *>*)eventNames forSubscriber:(id<HWAsyncSubscriberProtocol>)subscriber;
- (void)clean;
@end
