//
//  EndLine.cpp
//  WhiteBlock
//
//  Created by 杜杜兴 on 15/7/27.
//
//

#include "EndLine.h"

EndLine* EndLine::createWithContext(HelloWorld *context){
    auto el = new EndLine();
    el->initWithContext(context);
    el->autorelease();
    
    Block::getBlocks()->pushBack(el);
    return el;
}


bool EndLine::initWithContext(HelloWorld *context){
    this->context = context;
    visibleSize = Director::getInstance()->getVisibleSize();
    Block::initWithArgs(Color3B::GREEN, visibleSize, "游戏结束", 50, Color4B::BLACK);
    
    auto label = Label::create();
    label->setString("再玩一次");
    label->setSystemFontSize(50);
    label->setPosition(visibleSize.width/2, label->getContentSize().height/2+50);
    label->setTextColor(Color4B::RED);
    addChild(label);
    
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [this](Touch* t,Event * e){
        
        if (e->getCurrentTarget()->getBoundingBox().containsPoint(t->getLocation()-e->getCurrentTarget()->getParent()->getPosition())) {
            
            this->context->startGame();
        }
        return false;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, label);
    
    return true;
}