#include "Hero.h"

Hero::Hero() {
    texture.loadFromFile("resorses/img2.png.png");
    sprite.setTexture(texture);
    sprite.scale(0.25, 0.25);
    sprite.setOrigin(500,500);
    sprite.setPosition(0, 200);
    collisionHero=sprite.getGlobalBounds();
}

Hero::Hero(std::string link,int x,int y) {
    texture.loadFromFile(link);
    sprite.setTexture(texture);
    sprite.setPosition(x, y);
    sprite.setOrigin(500, 500);
    collisionHero = sprite.getGlobalBounds();
}