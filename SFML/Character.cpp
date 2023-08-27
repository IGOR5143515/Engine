#include "Character.h"

Character::Character(std::string link, sf::Vector2f vec):
	name(link,vec) {}
void Character::pos(sf::Vector2f vec) {

	name.getsprite().setPosition(vec.x,vec.y);

}