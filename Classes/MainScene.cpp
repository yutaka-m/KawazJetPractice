//
//  MainScene.cpp
//  KawazJetPractice
//
//  Created by yutaka.matsuzawa on 2016/03/05.
//
//

#include "MainScene.hpp"

USING_NS_CC;

const Vec2 GRAVITY_ACCELERATION = Vec2(0, -3);

Scene* MainScene::createScene()
{
    auto scene = Scene::createWithPhysics();
    auto world = scene->getPhysicsWorld();
    world->setGravity(GRAVITY_ACCELERATION);
#if COCOS2D_DEBUG > 0
    world->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);
#endif
    world->setSpeed(6.0);
    auto layer = MainScene::create();
    scene->addChild(layer);
    return scene;
}

bool MainScene::init()
{
    if (!Layer::init()) {
        return false;
    }
    
    //object
    auto winSize = Director::getInstance()->getWinSize();
    auto sprite = Sprite::create("coin.png");
    auto physicsBody = PhysicsBody::createBox(sprite->getContentSize());
    sprite->setPhysicsBody(physicsBody);
    sprite->setPosition(Vec2(winSize.width /2.0 , winSize.height));
    this->addChild(sprite);
    
    
    this->scheduleUpdate();
    return true;
}

MainScene::MainScene()
{
    
}

MainScene::~MainScene()
{
    
}

void MainScene::update(float dt)
{
    
}