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
    
public:
    friend class Engine;
    sf::FloatRect collisionHero;
    Hero(string,int,int);
    Hero();
};

