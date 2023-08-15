#include "Scenes.h"
#include<iostream>
Scenes::Scenes(string link, sf::Vector2f tr1, sf::Vector2f tr2):background(link) {

	trigger1.setPosition(tr1);
	trigger2.setPosition(tr2);

	trigger1.setSize(sf::Vector2f(100,1000));
	trigger2.setSize(sf::Vector2f(100, 1000));

	trigger1.setFillColor(sf::Color::Transparent);
	
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
	
	if (hero.intersects(ob1)&&h.isStandOnTrigget1==true) {
		
		
		
		if (selSc == ONE) {
			std::cout << "Yes" << std::endl;
			s.background.setSprite("resorses/back1.jpg");
			h.sprite.setPosition(1000, 500);
			p = false;
			selSc = TWO;
			h.isStandOnTrigget1 = false;
			
		}
	
	


	}
	
	if (hero.intersects(ob1) && h.isStandOnTrigget1 == true) {

		
		
		if (selSc == TWO) {
			std::cout << "NO" << std::endl;
			s.background.setSprite("resorses/back2.jpg");
			h.sprite.setPosition(1000, 500);
			
			
			p = false;
			selSc = THEE;
			h.isStandOnTrigget1 = false;
		}



	}

	if (hero.intersects(ob1) && h.isStandOnTrigget1 == true) {



		if (selSc == THEE) {
			std::cout << "NO" << std::endl;
			s.background.setSprite("resorses/back3.jpg");
	
			p = false;
			
			h.isStandOnTrigget1 = false;
		}



	}
	
	if (hero.intersects(ob2) && h.isStandOnTrigget2 == true) {



		if (selSc == THEE) {
			std::cout << "Yes1" << std::endl;
			s.background.setSprite("resorses/back3.jpg");
			h.sprite.setPosition(0,500);
			p = false;
			selSc = TWO;
			h.isStandOnTrigget1 = false;

		}




	}

	if (hero.intersects(ob2) && h.isStandOnTrigget2 == true) {



		if (selSc == TWO) {
			std::cout << "Yes2" << std::endl;
			s.background.setSprite("resorses/back2.jpg");
			h.sprite.setPosition(0, 500);
			p = false;
			selSc = ONE;
			h.isStandOnTrigget1 = false;

		}




	}



}


