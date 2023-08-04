#include "spriteManager.h"

spriteManager::spriteManager
(string link,
	string nametxt1,
	string nametxt2):pos(nametxt1, nametxt2) {

	texture.loadFromFile(link);
	sprite.setTexture(texture);
}

sf::Sprite& spriteManager::getSprite() { return sprite; }

void spriteManager::WritePosSprite() {
	pos.write(sprite);
}


void spriteManager::readPosSprite() {

	pos.read(sprite);
}
