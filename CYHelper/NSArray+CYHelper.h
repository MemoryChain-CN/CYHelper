//
// Created by lancy on 26/11/12.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@interface NSArray (CYHelper)

- (NSArray *)subarrayFromIndex:(NSUInteger)index;
- (NSArray *)subarrayToIndex:(NSUInteger)index;

- (NSArray *)map:(id (^)(id value))handlerBlock;
- (NSArray *)filter:(BOOL (^)(id value))handlerBlock;
- (NSArray *)reject:(BOOL (^)(id value))handlerBlock;
- (NSArray *)flattenArray;

@end