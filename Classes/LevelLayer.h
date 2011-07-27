//
//  LevelLayer.h
//  Fleak
//
//  Created by Jason Dela Cruz on 7/26/11.
//  Copyright Beat Sheep 2011. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"

#import "LevelHelperLoader.h"
// HelloWorldLayer
@interface LevelLayer : CCLayer
{
	b2World* world;
	b2Body* groundBody;
	GLESDebugDraw *m_debugDraw;
	
	CCSprite* backgroundImage;
	
	LevelHelperLoader* lh;
	
	b2Body* m_fleakBody;
	CCSprite* m_fleakSprite;
	
	b2MouseJoint *_mouseJoint;

}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
// adds a new sprite at a given coordinate
//-(void) addNewSpriteWithCoords:(CGPoint)p;

@end
