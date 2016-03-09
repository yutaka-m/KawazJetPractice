//
//  MainScene.hpp
//  KawazJetPractice
//
//  Created by yutaka.matsuzawa on 2016/03/05.
//
//

#ifndef MainScene_hpp
#define MainScene_hpp

#include "cocos2d.h"

#include <stdio.h>


class MainScene :public cocos2d::Layer
{
protected:
    MainScene();
    virtual ~MainScene();
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    void update(float dt) override;
    CREATE_FUNC(MainScene);
};

#endif /* MainScene_hpp */
