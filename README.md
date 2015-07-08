# KVOBlock
add block to kvo, remove observer auto.
添加block到kvo，无需移除observer
Example:
[label observeKeyPath:@"font" withBlock:^(__weak id self, id old, id newVal) {
        //do some code
    }];
