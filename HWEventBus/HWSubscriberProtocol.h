//
//  HWSubscriberProtocol.h
//  HWEventBus
//
//  Created by 郑振兴 on 16/5/31.
//  Copyright © 2016年 北京海尔广科数字技术有限公司－郑振兴. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWEvent.h"
@protocol HWSubscriberProtocol <NSObject>
- (void)eventOccurred: (NSString *)eventName event:(HWEvent *)event;
@end
@protocol HWSyncSubscriberProtocol <HWSubscriberProtocol>

@end
@protocol HWAsyncSubscriberProtocol <HWSubscriberProtocol>
- (void)eventsOccurred: (NSArray <NSString *>*)eventNames event:(NSArray <HWEvent *>*)events;
@end
