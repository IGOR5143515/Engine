#pragma once
#include<vector>
#include"Sprite.h"
#include"Items.h"
class Inventory

{
private:

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

	void moveSprite(sf::Event &e, sf::RenderWindow& w, sf::Vector2f pos);

	


};

