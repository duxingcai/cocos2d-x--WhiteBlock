//
//  EndLine.h
//  WhiteBlock
//
//  Created by 杜杜兴 on 15/7/27.
//
//

#ifndef __WhiteBlockPublish__EndLine__
#define __WhiteBlockPublish__EndLine__

#include <iostream>
#include "Block.h"
#include "HelloWorldScene.h"

class HelloWorld;

class EndLine:public Block {
    
private:
    Size visibleSize;
    HelloWorld *context;
    
public:
    static EndLine* createWithContext(HelloWorld *context);
    bool initWithContext(HelloWorld *context);
};

#endif /* defined(__WhiteBlockPublish__EndLine__) */
