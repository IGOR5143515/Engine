#pragma once
#include"Hero.h"
#include"Dialogs.h"
#include"Quests.h"
class Character
{
private:
	
	Hero name;
	Quests quests;

public:

	Character(std::string link, sf::Vector2f);
	sf::Sprite GetHero() { return name.sprite; }
	Character(std::string);
	void position(sf::Vector2f);
	
};

