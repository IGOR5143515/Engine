#pragma once
#include "Sprite.h"

class Hero :
    public Sprite
{
private:
    bool isMove=false;
    int tempX=0;
    int tempY=0;
    int distance{};
    bool isStandOnTrigget1=false;
    bool isStandOnTrigget2=false;
    
public:
    friend class Scenes;
    friend class Engine;
    friend class Anim;
    void setDistance(int n);
    Hero(string,int,int);
    Hero();
    
};

