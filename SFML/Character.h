#pragma once
#include"Hero.h"
#include"Dialogs.h"
#include"Quests.h"
class Character
{
private:
	Dialogs dialog;
	Hero name;
	Quests quests;
public:
	Character(std::string link, sf::Vector2f);
	sf::Sprite GetHero() { return name.getSprite(); }
	void pos(sf::Vector2f vec);
	
};

