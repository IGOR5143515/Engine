#include "Items.h"


Items::Items(string link,string identify){
    texture.loadFromFile(link);
    sprite.setTexture(texture);
    iden = identify;

}

void Items::setPos(int a,int b) {
    sprite.setPosition(a, b);
}

