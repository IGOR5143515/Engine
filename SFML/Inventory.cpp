#include "Inventory.h"
#include<algorithm>
#include<iostream>

void Inventory::addItem(std::string s,std::string type) {
	
		Items* i = new Items(s, type);
		i->sprite.setPosition(step, 500);
	
	arrInv.push_back(i);
	step += 400;
}

void Inventory::position() {
	int step = 0;
	for (size_t i = 0; i < arrInv.size(); i++)
	{
		
		arrInv[i]->sprite.setPosition(100+step, 500);
		step += 400;
	}
}

void Inventory::dellItem() {

	std::string nameToRemove = "Beer";
	arrInv.erase(std::remove_if(arrInv.begin(), arrInv.end(),
		[&nameToRemove](Sprite* sprite) {
			return sprite->iden == nameToRemove;
		}),
		arrInv.end());
	
	position();

	std::cout << arrInv.size();
	

}