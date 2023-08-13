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

void Scenes::ifcoll(Hero& h, Scenes& s) {
	sf::FloatRect hero = h.getSprite().getGlobalBounds();
	sf::FloatRect ob1 = trigger1.getGlobalBounds();
	sf::FloatRect ob2 = trigger2.getGlobalBounds();
	
	if (hero.intersects(ob1)) {

		
		if (selSc == ONE) {
			std::cout << "Yes" << std::endl;
			s.background.setSprite("resorses/back2.jpg");
			h.sprite.setPosition(1000, 500);
			p = false;
			selSc = TWO;
			
			
		}
	
	


	}
	
	if (hero.intersects(ob1)) {


		
		if (selSc == TWO) {
			std::cout << "NO" << std::endl;
			s.background.setSprite("resorses/back2.jpg");
			h.sprite.setPosition(1000, 500);
			
			
			p = false;
			selSc = ONE;
		}



	}
	


}


