//
//  NotifeeDelegate.h
//  NotifeeCore
//
//  Copyright © 2020 Invertase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NotifeeCore/NotifeeCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface NotifeeCoreDelegateHolder : NSObject

@property(nonatomic, weak) id <NotifeeCoreDelegate> delegate;

+ (instancetype)instance;

- (void)didReceiveNotifeeCoreEvent:(NSDictionary *)event;

@end

NS_ASSUME_NONNULL_END
