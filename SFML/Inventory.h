#pragma once
#include<vector>
#include"Sprite.h"
#include"Items.h"
class Inventory

{
private:
	Items axx;
	Items ayy;
	Items azz;
	std::vector<Sprite*>arrInv{&axx,&ayy,&azz};
public:
	void position();
	void addItem(Sprite);
	friend class Engine;
	Inventory():axx("resorses/shield.png","Shield"),
		ayy("resorses/beer.png", "Beer"),
		azz("resorses/cross.png", "Cross") {

		ayy.setPos(100, 100);
		azz.setPos(100, 200);

	}
	void dellItem();


};

