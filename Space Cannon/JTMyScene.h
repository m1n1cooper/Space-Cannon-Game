//
//  JTMyScene.h
//  Space Cannon
//

//  Copyright (c) 2014 James Topham. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface JTMyScene : SKScene <SKPhysicsContactDelegate>

@property (nonatomic) int ammo;
@property (nonatomic) int score;

@end
