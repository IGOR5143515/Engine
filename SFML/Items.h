#pragma once
#include "Sprite.h"
class Items :
    public Sprite
{
public:

    Items(string,string);
    friend class Inventory;
    void setPos(int,int);
    Items() {}

};

