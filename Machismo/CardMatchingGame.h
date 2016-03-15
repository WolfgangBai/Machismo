//
//  CardMatchingGame.h
//  Machismo
//
//  Created by baichenggang on 16/3/13.
//  Copyright © 2016年 Sugar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"
@interface CardMatchingGame : NSObject
-(instancetype)initWithCardCount:(NSUInteger)count
                       usingDeck:(Deck *)deck;
- (void)chooseCardAtIndex:(NSUInteger)index;
-(Card*)cardAtIndex:(NSUInteger)index;

@property (nonatomic,readonly) NSInteger score;

@end
