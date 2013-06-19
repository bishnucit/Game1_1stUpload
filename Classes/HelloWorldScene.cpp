#include "HelloWorldScene.h"
#include <algorithm>
using namespace cocos2d;

CCScene* HelloWorld::scene()
{
    CCScene * scene = NULL;
    do 
    {
        // 'scene' is an autorelease object
        scene = CCScene::create();
        CC_BREAK_IF(! scene);

        // 'layer' is an autorelease object
        HelloWorld *layer = HelloWorld::create();
        CC_BREAK_IF(! layer);

        // add layer as a child to scene
        scene->addChild(layer);
    } while (0);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    bool bRet = false;
    do 
    {
        //////////////////////////////////////////////////////////////////////////
        // super init first
        //////////////////////////////////////////////////////////////////////////

        CC_BREAK_IF(! CCLayer::init());

        //////////////////////////////////////////////////////////////////////////
        // add your codes below...
        //////////////////////////////////////////////////////////////////////////

        // 1. Add a menu item with "X" image, which is clicked to quit the program.

        // Create a "close" menu item with close icon, it's an auto release object.
        CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
            "CloseNormal.png",
            "CloseSelected.png",
            this,
            menu_selector(HelloWorld::menuCloseCallback));
        CC_BREAK_IF(! pCloseItem);

        // Place the menu item bottom-right conner.
        pCloseItem->setPosition(ccp(CCDirector::sharedDirector()->getWinSize().width - 20, 20));

        // Create a menu with the "close" menu item, it's an auto release object.
        CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
        pMenu->setPosition(CCPointZero);
        CC_BREAK_IF(! pMenu);

        // Add the menu to HelloWorld layer as a child layer.
        this->addChild(pMenu, 1);

        // 2. Add a label shows "Hello World".

        // Create a label and initialize with string "Hello World".
        CCLabelTTF* pLabel = CCLabelTTF::create("Hello World", "Arial", 24);
        CC_BREAK_IF(! pLabel);

        // Get window size and place the label upper. 
        CCSize size = CCDirector::sharedDirector()->getWinSize();
        pLabel->setPosition(ccp(size.width / 2,size.height/2));

    
        CCSprite* pSprite = CCSprite::create("bg.png");
        CC_BREAK_IF(! pSprite);

        // Place the sprite on the center of the screen
        pSprite->setPosition(ccp(size.width/2, size.height/2));

        // Add the sprite to HelloWorld layer as a child layer.
        this->addChild(pSprite, 0);
		this->loadTowerPositions1();
		this->loadTowerPositions2();
		this->loadTowerPositions3();
		this->loadTowerPositions4();
		this->loadTowerPositions5();
		this->loadTowerPositions6();
		this->loadTowerPositions7();
		this->loadTowerPositions8();
		this->loadTowerPositions9();
		this->loadTowerPositions10();
		this->loadTowerPositions11();
		this->loadTowerPositions12();
        bRet = true;
    } while (0);

    return bRet;
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    // "close" menu item clicked
    CCDirector::sharedDirector()->end();
}

void HelloWorld::loadTowerPositions1()
{
   CCSprite* pSprite1 = CCSprite::create("open_spot.png");
this->addChild(pSprite1);
pSprite1->setPosition(ccp(80,266));

}

void HelloWorld::loadTowerPositions2()
{
   CCSprite* pSprite2 = CCSprite::create("open_spot.png");
this->addChild(pSprite2);
pSprite2->setPosition(ccp(170,266));

}
void HelloWorld::loadTowerPositions3()
{
   CCSprite* pSprite3 = CCSprite::create("open_spot.png");
this->addChild(pSprite3);
pSprite3->setPosition(ccp(260,266));

}
void HelloWorld::loadTowerPositions4()
{
   CCSprite* pSprite4 = CCSprite::create("open_spot.png");
this->addChild(pSprite4);
pSprite4->setPosition(ccp(350,266));

}
void HelloWorld::loadTowerPositions5()
{
   CCSprite* pSprite5 = CCSprite::create("open_spot.png");
this->addChild(pSprite5);
pSprite5->setPosition(ccp(125,174));

}
void HelloWorld::loadTowerPositions6()
{
   CCSprite* pSprite6 = CCSprite::create("open_spot.png");
this->addChild(pSprite6);
pSprite6->setPosition(ccp(215,174));

}
void HelloWorld::loadTowerPositions7()
{
   CCSprite* pSprite7 = CCSprite::create("open_spot.png");
this->addChild(pSprite7);
pSprite7->setPosition(ccp(305,174));

}
void HelloWorld::loadTowerPositions8()
{
   CCSprite* pSprite8 = CCSprite::create("open_spot.png");
this->addChild(pSprite8);
pSprite8->setPosition(ccp(395,174));

}
void HelloWorld::loadTowerPositions9()
{
   CCSprite* pSprite9 = CCSprite::create("open_spot.png");
this->addChild(pSprite9);
pSprite9->setPosition(ccp(80,80));

}
void HelloWorld::loadTowerPositions10()
{
   CCSprite* pSprite10 = CCSprite::create("open_spot.png");
this->addChild(pSprite10);
pSprite10->setPosition(ccp(170,80));

}

void HelloWorld::loadTowerPositions11()
{
   CCSprite* pSprite11 = CCSprite::create("open_spot.png");
this->addChild(pSprite11);
pSprite11->setPosition(ccp(260,80));

}

void HelloWorld::loadTowerPositions12()
{
   CCSprite* pSprite12 = CCSprite::create("open_spot.png");
this->addChild(pSprite12);
pSprite12->setPosition(ccp(350,80));

}