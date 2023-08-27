#include "Hero.h"
#include<iostream>
Hero::Hero() {
    texture.loadFromFile("resorses/img2.png.png");
    sprite.setTexture(texture);
    sprite.scale(0.25, 0.25);
    sprite.setOrigin(500,500);
    sprite.setPosition(0, 0);
    
}

Hero::Hero(std::string link,sf::Vector2f vec) {
    texture.loadFromFile(link);
    sprite.setTexture(texture);
    sprite.setPosition(vec.x, vec.y);
    sprite.setOrigin(500, 500);
   
}
void Hero::setDistance(int n) { 
    distance = n;
}



