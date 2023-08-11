#pragma once
#include"Sprite.h"
#include"Hero.h"
class Scenes
{
private:
	sf::RectangleShape trigger1;
	sf::RectangleShape trigger2;

	sf::FloatRect triggetCollision1;
	sf::FloatRect triggetCollision2;

	Sprite background;
	
public:
	friend class Engine;
	Scenes();
	Scenes(string, sf::Vector2f, sf::Vector2f);

	Scenes(string);
	sf::Sprite getSpriteBack() { return background.getSprite(); }

	void setBackground(Sprite &);

	void ifCollision(Hero);
};

