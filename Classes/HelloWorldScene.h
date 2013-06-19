#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

class HelloWorld : public cocos2d::CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

	void loadTowerPositions1();
	void loadTowerPositions2();
	void loadTowerPositions3();
	void loadTowerPositions4();
	void loadTowerPositions5();
	void loadTowerPositions6();
	void loadTowerPositions7();
	void loadTowerPositions8();
	void loadTowerPositions9();
	void loadTowerPositions10();
	void loadTowerPositions11();
	void loadTowerPositions12();
    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static cocos2d::CCScene* scene();
    cocos2d::CCArray *towerBases;
	
    // a selector callback
    void menuCloseCallback(CCObject* pSender);

    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif  // __HELLOWORLD_SCENE_H__