//
//  Deck.h
//  Machismo
//
//  Created by baichenggang on 16/3/12.
//  Copyright © 2016年 Sugar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
-(void)addCard:(Card *)card;

-(Card *)drawRandomCard;
@end
