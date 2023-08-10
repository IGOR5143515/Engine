#pragma once
#include"Sprite.h"
#include"Hero.h"
#include"Scenes.h"


class Engine
{
private:
	
	Sprite backgound;
	Hero hero;
	std::vector<Sprite*>arr{&hero};
	Scenes sc;
	
public:
	Engine();

	void addSprite(string, string, string);

	void start(sf::RenderWindow&);

	void drawArray(sf::RenderWindow&);

	void input(sf::Event event, sf::RenderWindow& w);

	void draw(sf::RenderWindow&);

};

