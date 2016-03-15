//
//  PlayingCard.h
//  Machismo
//
//  Created by baichenggang on 16/3/12.
//  Copyright © 2016年 Sugar. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card
@property (strong,nonatomic)NSString *suit;
@property (nonatomic) NSUInteger rank;
+ (NSArray *) validSuits;
+(NSUInteger)maxRank;
@end
