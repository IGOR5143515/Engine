#include "Inventory.h"
#include<algorithm>

void Inventory::addItem(std::string s,std::string type) {
	
		Items* i = new Items(s, type);
		i->sprite.setPosition(step, 500);
	
	arrInv.push_back(i);
	step += 400;
}

void Inventory::position() {
	

}

void Inventory::dellItem() {

	std::string nameToRemove = "Beer";
	arrInv.erase(std::remove_if(arrInv.begin(), arrInv.end(),
		[&nameToRemove](Sprite* sprite) {
			return sprite->iden == nameToRemove&&"Shield";
		}),
		arrInv.end());



}