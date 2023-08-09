#pragma once
#include"Sprite.h"



class Engine
{
private:
	std::vector<Sprite*>arr;
	bool isMove = false;
public:
	Engine(){}

	void addSprite(string, string, string);

	void start(sf::RenderWindow&);

	void drawArray(sf::RenderWindow&);

	void input(sf::Event event, sf::RenderWindow& w);

	void draw(sf::RenderWindow&);

};

