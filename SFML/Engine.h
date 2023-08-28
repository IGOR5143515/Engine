#pragma once
#include"Sprite.h"
#include"Hero.h"
#include"Scenes.h"
#include"Inventory.h"
#include"Dialogs.h"
#include"Persons.h"
class Engine
{
private:
	Inventory inv;

	Hero hero;

	std::vector<Sprite*>arr{&hero};

	Scenes baseScene;

	Dialogs dialog;

	Persons characters;
	
public:
	Engine();
	friend class Scenes;
	void addSprite(string, string, string);

	void start(sf::RenderWindow&);

	void drawArray(sf::RenderWindow&);

	void input(sf::Event event, sf::RenderWindow& w);

	void draw(sf::RenderWindow&);

};

