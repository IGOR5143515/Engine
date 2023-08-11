#include "Scenes.h"
#include<iostream>
Scenes::Scenes(string link, sf::Vector2f tr1, sf::Vector2f tr2):background(link) {

	trigger1.setPosition(tr1);
	trigger2.setPosition(tr2);

	trigger1.setSize(sf::Vector2f(200,200));
	trigger2.setSize(sf::Vector2f(200, 200));

	triggetCollision1 = trigger1.getGlobalBounds();
	triggetCollision2 = trigger2.getGlobalBounds();
}

void Scenes::setBackground(Sprite &s) {
	s.sprite = background.sprite;
}

Scenes::Scenes(string s):background(s) {
}


Scenes::Scenes() {}

void Scenes::ifCollision(Hero h) {

	if (h.collisionHero.intersects(triggetCollision1)) {
		std::cout<<"qwe";
	}

}