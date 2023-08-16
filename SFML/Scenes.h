#pragma once
#include"Sprite.h"
#include"Hero.h"
#include"Anim.h"


enum selectScenes {
	ONE,
	TWO,
	THREE,
	FOR,
	FIVE,

};
class Scenes
{

private:
	sf::RectangleShape trigger1;
	sf::RectangleShape trigger2;
	selectScenes selSc=ONE;
	Anim a;
	bool p=true;
	Sprite background;
	
public:
	
	friend class Engine;
	Scenes();
	Scenes(string, sf::Vector2f, sf::Vector2f);

	Scenes(string);
	sf::Sprite getSpriteBack() { return background.getSprite(); }

	void setBackground(Sprite &);

	void ifcoll(Hero&,Scenes &);

	
};

