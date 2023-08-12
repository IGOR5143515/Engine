#pragma once
#include"Sprite.h"
#include"Hero.h"
#include"Scenes.h"


class Engine
{
private:
	
	Hero hero;
	std::vector<Sprite*>arr{&hero};
	Scenes baseScene;
	
	
public:
	Engine();

	void addSprite(string, string, string);

	void start(sf::RenderWindow&);

	void drawArray(sf::RenderWindow&);

	void input(sf::Event event, sf::RenderWindow& w);

	void draw(sf::RenderWindow&);

};

