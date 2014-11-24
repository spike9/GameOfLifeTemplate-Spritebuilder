//
//  Creature.h
//  GameOfLife
//
//  Created by Daniel Wyss on 24/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current stage of creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeigbors;


-(id)initCreature;


@end
