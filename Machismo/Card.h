//
//  Card.h
//  Machismo
//
//  Created by baichenggang on 16/3/11.
//  Copyright © 2016年 Sugar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject
@property (strong,nonatomic) NSString *contents;

@property (nonatomic,getter=isChosen) BOOL chosen;
@property (nonatomic,getter=isMatched)BOOL matched;

- (int)match:(NSArray *)otherCards;
@end
