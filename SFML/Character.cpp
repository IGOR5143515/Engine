#include "Character.h"

Character::Character(std::string link, sf::Vector2f vec):
	name(link,vec) {}

void Character::position(sf::Vector2f vec) {

	name.sprite.setPosition(vec.x, vec.y);

}

Character::Character(std::string str) {

	sf::Texture texture;
	texture.loadFromFile(str);
	name.sprite.setTexture(texture);

}