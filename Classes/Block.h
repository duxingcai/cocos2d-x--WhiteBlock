//
//  Block.h
//  WhiteBlock
//
//  Created by 杜杜兴 on 15/7/27.
//
//

#ifndef __WhiteBlock__Block__
#define __WhiteBlock__Block__

#include "iostream"

#include <cocos2d.h>

USING_NS_CC;

class Block:public Sprite {
    
private:
    static Vector<Block*> * blocks;
    int lineIndex;
    
public:
    
    static Vector<Block*> * getBlocks();
    static void removeAllBlocks();
    
    static Block* createWithArgs(Color3B color,Size size,std::string label,float fontSize,Color4B textColor);
    
    virtual bool initWithArgs(Color3B color,Size size,std::string label,float fontSize,Color4B textColor);
    
    void removeBlock();
    
    int getLineIndex();
    void setLineIndex(int lineIndex);
    
    void moveDown();
};


#endif /* defined(__WhiteBlock__Block__) */
