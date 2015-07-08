//
//  NSObject+KVOBlock.h
//  Toast
//
//  Created by 朱李宏 on 15/6/23.
//
//

#import <Foundation/Foundation.h>

typedef void(^KVOBlockChange) (__weak id self, id old, id newVal);

@interface NSObject (KVOBlock)

- (void)observeKeyPath:(NSString *)keyPath withBlock:(KVOBlockChange)observationBlock;

@end
