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
    bool touch = false;
public:
    friend class Scenes;
    friend class Engine;
    friend class Anim;
    friend class Inventory;
    friend class Persons;
    friend class Character;
    void setDistance(int n);
    Hero(string,sf::Vector2f);
    Hero();
    sf::Sprite getsprite() { return getSprite(); }
    void setPos(sf::Vector2f);
    
};

