#include "Scenes.h"
#include<iostream>
Scenes::Scenes(string link, sf::Vector2f tr1, sf::Vector2f tr2):background(link) {

	trigger1.setPosition(tr1);
	trigger2.setPosition(tr2);

	trigger1.setSize(sf::Vector2f(10,10));
	trigger2.setSize(sf::Vector2f(10, 10));


	
}

void Scenes::setBackground(Sprite &s) {
	s.sprite = background.sprite;
}

Scenes::Scenes(string s):background(s) {
}


Scenes::Scenes() {}

void Scenes::ifcoll(Hero &h,Scenes &s) {
	sf::FloatRect hero = h.getSprite().getGlobalBounds();
	sf::FloatRect ob1 = trigger1.getGlobalBounds();
	sf::FloatRect ob2 = trigger2.getGlobalBounds();

	if (hero.intersects(ob1)) {
		if (s.selSc == ONE) {
			std::cout << "W";
			s.background.setSprite("resorses/back2.jpg");
			h.sprite.setPosition(500, 500);
			h.setDistance(0);
			
			s.selSc = TWO;
			
		}
		else if (s.selSc == TWO) {
			s.background.setSprite("resorses/back1.jpg");
			
			s.selSc = ONE;
		}

	}
}

