#pragma once
#include"Sprite.h"

class Scenes
{
private:
	sf::RectangleShape trigger1;
	sf::RectangleShape trigger2;

	Sprite background;
	
public:
	Scenes();
	Scenes(string, sf::Vector2f, sf::Vector2f);

	Scenes(string);
	sf::Sprite getSpriteBack() { return background.getSprite(); }

	void setBackground(Sprite &);

};

