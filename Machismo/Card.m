//
//  Card.m
//  Machismo
//
//  Created by baichenggang on 16/3/11.
//  Copyright © 2016年 Sugar. All rights reserved.
//

#import "Card.h"
@interface Card()

@end

@implementation Card


- (int)match:(NSArray *)otherCards
{
    int score =0;
    for (Card *card in otherCards ) {
        if ([card.contents isEqualToString:self.contents]) {
            score =1;
        }
    }
    return score;
}
@end
