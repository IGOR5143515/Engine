#include "Inventory.h"
#include<algorithm>

void Inventory::addItem() {
	Items* i = new Items("resorses/beer.png", "Beer");
	arrInv.push_back(i);
	
}

void Inventory::position() {
	int step=0;
	for (size_t i = 0; i < arrInv.size(); i++)
	{
		//(*arrInv[i]).sprite.setPosition(0,0 + (step+100));
	}

}

void Inventory::dellItem() {

	std::string nameToRemove = "Beer";
	arrInv.erase(std::remove_if(arrInv.begin(), arrInv.end(),
		[&nameToRemove](Sprite* sprite) {
			return sprite->iden == nameToRemove;
		}),
		arrInv.end());

}