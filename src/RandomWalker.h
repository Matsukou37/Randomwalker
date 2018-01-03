#pragma once
#include "ofMain.h"

class RandomWalker {
    
public:
    
    RandomWalker(); // constructor
 
    void draw();
    
    ofVec2f position;
    float left, right, top, bottom;
    
};
