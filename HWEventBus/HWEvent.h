//
//  HWEvent.h
//  HWEventBus
//
//  Created by 郑振兴 on 16/5/31.
//  Copyright © 2016年 北京海尔广科数字技术有限公司－郑振兴. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWPublisherProtocol.h"

@interface HWEvent : NSObject
@property (strong, nonatomic)NSString * eventName;
@property (nonatomic) NSInteger life;
@property (strong, nonatomic)id eventData;
@property (weak, nonatomic)id<HWPublisherProtocol>publisher;
@end

@interface HWSyncEvent : HWEvent

@end

@interface HWAsyncEvent : HWEvent

@end