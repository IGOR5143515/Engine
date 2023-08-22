#pragma once
#include<vector>
#include"Sprite.h"
#include"Items.h"
#include"Hero.h"
class Inventory

{
private:
	Sprite* copy{};
	int step = 100;
	std::string name;
	bool isMove = false;
	std::vector<Sprite*>arrInv{};
public:
	void position();
	void addItem(std::string, string);
	friend class Engine;
	Inventory() {}
	void dellItem();

	void moveSprite(Hero &h,sf::RenderWindow& w, sf::Vector2f pos,sf::Event);

	


};

