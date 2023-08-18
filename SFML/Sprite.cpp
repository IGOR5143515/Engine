#include "Sprite.h"
#include<iostream>
#include<string>

sf::Sprite Sprite::getSprite() { return sprite; }

Sprite::Sprite(string link ) {
	
	texture.loadFromFile(link);
	sprite.setTexture(texture);

}
void Sprite::setSprite(string link) {

	texture.loadFromFile(link);
	sprite.setTexture(texture);
}

