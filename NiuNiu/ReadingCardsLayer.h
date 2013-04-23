//
//  ReadingCardsLayer.h
//  NiuNiu
//  读牌层
//  Created by childhood on 13-4-22.
//
//

#import "cocos2d.h"


#define FIRST_CARD_BELOW_POS CGPointMake(111, 35)
#define FIRST_CARD_UP_POS    CGPointMake(50, 400)
#define CARDS_SPACING 50


typedef enum
{
    kState_TheFifthCard,//翻第五张牌阶段
    kState_CalCard//计算牌阶段
}ReadingCardsState;

@class UserCard;
@interface ReadingCardsLayer : CCLayerColor<CCTargetedTouchDelegate>
{
    CGSize size;
    NSArray *_cardsDataArray;
    NSMutableArray *_userCardsArray;
    int _state;
    UserCard *_fifthCard;
    
    CCSprite *_resultNiu;
    CCMenuItemImage *_confirmMenuItem;
    CCMenu *_confirmMenu;
}


+ (id)layerWithCardsArray:(NSArray *)cardsArray;
@end