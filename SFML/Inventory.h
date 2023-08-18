#pragma once
#include<vector>
#include"Sprite.h"
#include"Items.h"
class Inventory

{
private:
	std::string name;
	Items axx;
	Items ayy;
	Items azz;
	std::vector<Sprite*>arrInv{&ayy};
public:
	void position();
	void addItem();
	friend class Engine;
	Inventory():axx("resorses/shield.png","Shield"),
		ayy("resorses/beer.png", "Beer"),
		azz("resorses/cross.png", "Cross") {

		ayy.setPos(100, 500);
		azz.setPos(100, 200);

	}
	void dellItem();
	

};

