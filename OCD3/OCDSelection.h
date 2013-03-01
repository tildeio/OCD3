//
//  OCDSelection.h
//  OCDView
//
//  Created by Patrick Gibson on 2/15/13.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@class OCDSelection;
@class OCDView;
@class OCDNode;

typedef void (^OCDSelectionBlock)(OCDNode *node);
typedef NSValue * (^OCDSelectionValueBlock)(id data, NSUInteger index);
typedef NSValue * (^OCDSelectionAnimationBlock)(CABasicAnimation *animation);

@interface OCDNodeData : NSObject
+ (id)data;
@end

@interface OCDSelection : NSObject

@property (nonatomic, readonly) NSString *identifier;

- (OCDSelection *)setData:(NSArray *)dataArray;
- (OCDSelection *)setEnter:(OCDSelectionBlock)enterBlock;
- (OCDSelection *)setExit:(OCDSelectionBlock)exitBlock;
- (OCDSelection *)setValue:(id)value forAttributePath:(NSString *)path;

@end
